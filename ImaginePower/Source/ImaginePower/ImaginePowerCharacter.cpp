// Copyright Epic Games, Inc. All Rights Reserved.

#include "ImaginePowerCharacter.h"
#include "ImaginePowerProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "DrawDebugHelpers.h" //Do wyświetlania informacji debugowych w edytorze

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AImaginePowerCharacter

AImaginePowerCharacter::AImaginePowerCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
		
	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

	//Domyślna maksymalna odległość interakcji
	MaxInteractLength = 300.0f;

	//Domyślnie zezwala na interakcję
	bCanInteract = true;

	//Domyślna maksymalna ilość minionów do zespawnowania
	MaxNumberOfMinions = 5;
}

void AImaginePowerCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}

	//Zinicjuj referencje do kontrolera gracza
	MyController = GWorld->GetFirstPlayerController();
}

void AImaginePowerCharacter::Tick(float DeltaTime)
{
	//Sprawdź co znajduje się przed graczem i sprawdź czy można wykonać interakcję
	if (CalculateInteractRay())
	{
		//Ustawia aktora do interakcji (także użyte w WB_Interaction Menu do referencji)
		InteractingActor = OutHit.GetActor();

		bInteractActorInRange = true;

		//Jeśli widget jest ustawiony, wywołaj go
		if (StatusInteractionWidget != nullptr)
		{
			if (StatusInteractionWidgetRef == nullptr)
			{
				StatusInteractionWidgetRef = CreateWidget<UUserWidget>(MyController, StatusInteractionWidget);
				if (StatusInteractionWidgetRef != nullptr)
				{
					//Dodaj do viewportu widget o możliwości interakcji
					StatusInteractionWidgetRef->AddToViewport();
				}
			}
		}

		//if (GEngine)
		// 	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Blue, FString::Printf(TEXT("Moze Interaktować: %s"), InteractingActor->GetName()));
	}
	else
	{
		bInteractActorInRange = false;

		//Zresetuj pointer po skończonej interakcji
		InteractingActor = nullptr;

		if(StatusInteractionWidgetRef)
		{
			//Dodaj do viewportu widget o możliwości interakcji
			StatusInteractionWidgetRef->RemoveFromParent();
			StatusInteractionWidgetRef->RemoveFromViewport();
			StatusInteractionWidgetRef = nullptr;
		}
	}

	//Do debugowania. Wyświetla informację czy przed graczem znajduje się aktor zdolny do interakcji
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Blue, FString::Printf(TEXT("Moze Interaktować: %d"), bInteractActorInRange ? 1 : 0));
}


//////////////////////////////////////////////////////////////////////////
// Input

void AImaginePowerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AImaginePowerCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AImaginePowerCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AImaginePowerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AImaginePowerCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AImaginePowerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AImaginePowerCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("InteractButton", IE_Pressed, this, &AImaginePowerCharacter::InteractButton);
	PlayerInputComponent->BindAction("SpecialButton", IE_Pressed, this, &AImaginePowerCharacter::SpecialButton);
}

void AImaginePowerCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AImaginePowerProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AImaginePowerProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AImaginePowerCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AImaginePowerCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AImaginePowerCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AImaginePowerCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AImaginePowerCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AImaginePowerCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AImaginePowerCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AImaginePowerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AImaginePowerCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AImaginePowerCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AImaginePowerCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AImaginePowerCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

//Podczas interakcji użyj interfejsu UPlayerInteractionInterface do wykonywania czynności
void AImaginePowerCharacter::InteractButton()
{
	if (bInteractActorInRange && InteractingActor != nullptr)
	{
		//Jeśli interfejs istnieje, zatrzymaj gracza i zacznij interakcję
		if (UKismetSystemLibrary::DoesImplementInterface(InteractingActor, UPlayerInteractionInterface::StaticClass()))
		{
			IPlayerInteractionInterface::Execute_OnInteract(InteractingActor);
		}


		//Linia do debugowania
		//DrawDebugLine(GetWorld(), CameraLocation, InteractionRayEnd, FColor::Green, false, 2.0f, -1, 5.0f);

		//Do debugowania, wypisz nazwę interaktowanego aktora
		//if (bInteractActorInRange && GEngine)
		//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Aktor: %s"), *OutHit.GetActor()->GetName()));
	}
}

//Po wciśnięciu przycisku zespawnuj kolejnego miniona
void AImaginePowerCharacter::SpecialButton()
{
	//Zespawnuj miniona
	SpawnMinion();

	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, TEXT("SpecialButton"));
}

//Sprawdź czy gracz może interaktować a następnie czy znajduje się przed nim aktor z odpowiednim tagiem		
bool AImaginePowerCharacter::CalculateInteractRay()
{
	if (bCanInteract)
	{
		//Ustawianie wektora lokacji kamery
		CameraLocation = FirstPersonCameraComponent->GetComponentLocation();

		//Punkt na który skierowana jest kamera z uwzględnieniem maksymalnej odległości
		InteractionRayEnd = FirstPersonCameraComponent->GetForwardVector() * MaxInteractLength + CameraLocation;

		//Wylicz promień, jeśli niczego nie dotknie wyjdź z funkcji
		if (GetWorld()->LineTraceSingleByChannel(OutHit, CameraLocation, InteractionRayEnd, ECC_Visibility, CollisionParams))
		{
			//Sprawdź czy promień dotyka aktora który może interaktować 
			if (OutHit.bBlockingHit && OutHit.Actor->ActorHasTag(FName("Interactible")))
			{
				return (true);
			}
		}
	}

	//Przy braku nien spełnienia któregoś z warunków zakończ funkcje fałszem
	return (false);
}

//Wylicz i zespawnuj miniona obok gracza
void AImaginePowerCharacter::SpawnMinion()
{
	//Sprawdź ilość zespawnowanych minionów
	if (SpawnedMinions.Num() < MaxNumberOfMinions)
	{
		FActorSpawnParameters SpawnParams;
		FRotator SpawnRotation = GetActorRotation();

		//Spróbuj spawn, jeśli zawiedzie zmień lokację spawnu i spróbuj ponownie
		for (int i = 0; i < 8; i++)
		{
			//Zainicjalizuj wektor do spawnu
			FVector SpawnLocation = GetCapsuleComponent()->GetForwardVector() * MinionSpawnDistance;

			//Kąt zwiększający się z każdą pętlą o 45 stopni
			FRotator RotationAngle = FRotator(0.0f, i * 45.0f - 90.0f, 0.0f);

			//Obróć wektor o kąt i zmien go z lokalnego na absolutny
			SpawnLocation = RotationAngle.RotateVector(SpawnLocation);
			SpawnLocation += GetActorLocation();

			//Spawn miniona
			LastSpawnedActor = (GetWorld()->SpawnActor<AActor>(MinionClass, SpawnLocation, SpawnRotation, SpawnParams));

			//Jeśli zespawnował miniona wypisz
			if (LastSpawnedActor != nullptr)
			{
				SpawnedMinions.Add(LastSpawnedActor);
				break;
			}
		}
	}
	else
	{
		//Przy za dużej liczbie minioinów, wypisz obecną liczbę jako błąd
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Number of minions is already: %d"), SpawnedMinions.Num()));
	}

}
