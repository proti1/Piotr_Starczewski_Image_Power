// Fill out your copyright notice in the Description page of Project Settings.


#include "Minion.h"
#include "Kismet/GameplayStatics.h" //Użyte aby zbobyć aktorów ze świata

// Sets default values
AMinion::AMinion()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Dodaj tag informujący że można interaktować z minionem
	this->Tags.Add(FName("Interactible"));

	bIsBusy = false;
}

// Called when the game starts or when spawned
void AMinion::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMinion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMinion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Przy wywołaniu interfejsu wypisz na ekranie listę opcji
void AMinion::OnInteract_Implementation()
{
	if (!bIsBusy)
	{
		DisplayMenuToPlayer();

		//Do debugowania. Wyświetla informację czy przed graczem znajduje się aktor zdolny do interakcji
		//if (GEngine)
		//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Interakcja %s"), *this->GetName()));
	}
}

//Stwórz menu wyboru przedmiotu z blueprintu
void AMinion::DisplayMenuToPlayer()
{
	//Zinicjuj referencje do pawna gracza
	PlayerRef = GWorld->GetFirstPlayerController()->GetPawn();

	//Zinicjuj referencje do kontrolera gracza
	Controller = GWorld->GetFirstPlayerController();

	//Sprawdź referencje
	if (WidgetToDisplay != nullptr && Controller != nullptr)
	{
		//Stwórz widget
		WidgetRef = CreateWidget<UUserWidget>(Controller, WidgetToDisplay);

		//Jeśli widget istnieje, dodag do viewportu i ustaw mysz do interakcji z interfejsem
		if (WidgetRef)
		{

			//Ustaw dane dla kontrolera - blokada kontroli z grą poza interfejcem
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

			//Ustaw sterowanie na tylko interfejs
			Controller->SetInputMode(InputModeData);

			//Pokaż kursor
			Controller->bShowMouseCursor = true;
			
			//Wyłącz przyciski odpowiedzialne za ruch
			PlayerRef->GetController()->SetIgnoreMoveInput(true);

			//Wyzeruj ruch gracza
			PlayerRef->GetVelocity() = FVector(0.f);

			//Dodaj do viewportu listę wyboru
			WidgetRef->AddToViewport();

			//Debug, sprawdź czy widget istnieje
			//if (GEngine)
			//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("openning widget")));
		}

		//Przy braku widgetu
		else if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("WIDGET ERROR")));
		}
	}
	//Przy braku widgetu
	else if (GEngine)
	{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("WIDGET ERROR")));
	}
}

//Funkcja przejęta w blueprint
void AMinion::StartSearchingItems_Implementation(EObjectList ObjectsToSearch)
{

}