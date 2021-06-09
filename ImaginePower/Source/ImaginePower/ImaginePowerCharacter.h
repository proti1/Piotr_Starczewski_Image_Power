// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerInteractionInterface.h" //Dołącz interfejs do interakcji
#include "ImaginePowerCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AImaginePowerCharacter : public ACharacter, public IPlayerInteractionInterface
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	AImaginePowerCharacter();

	//Funkcja do kalkulowania promienia
	UFUNCTION(BlueprintCallable)
	void SpawnMinion();

protected:
	virtual void BeginPlay();

	//Ewent tick, odgrywany w każdej klatce gry
	virtual void Tick(float DeltaTime) override;

	//Funkcja do kalkulowania promienia
	bool CalculateInteractRay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AImaginePowerProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1;

protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();


	//Przycisk służący do interackji z otoczeniem
	void InteractButton();

	//Przycisk specjalny, służy do spawnowania minionów
	void SpecialButton();


	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);




	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }



	//Maksymalna długość interakcji w Unreal Units
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float MaxInteractLength;

	//Z tej klasy będą spawnowane miniony
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float MinionSpawnDistance;

	//Z tej klasy będą spawnowane miniony
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	int MaxNumberOfMinions;

	//Obecny aktor w interakcji z graczem
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References")
	AActor* InteractingActor;
	
	//Z tej klasy będą spawnowane miniony
	UPROPERTY(EditDefaultsOnly, Category = "References")
	TSubclassOf<AActor> MinionClass;


private:
	//Z tej klasy będą spawnowane miniony
	//TSubclassOf<class AMinion> MinionClass;

	//Przetrzymóje zespawnowane miniony
	TArray<AActor*> SpawnedMinions;

	//Tworzenie wektora dystansu kamery
	FVector CameraLocation;

	//Punkt na który skierowana jest kamera z uwzględnieniem maksymalnej odległości
	FVector InteractionRayEnd;

	//Wynik raycastu interakcji
	FHitResult OutHit;

	//Właściwości raycastu
	FCollisionQueryParams CollisionParams;

	//Referencja do ostatniego zespawnowanego miniona
	AActor* LastSpawnedActor;

	//Czy jest obiekt do interakcji w zasięgu
	bool bInteractActorInRange;

	//Blokada możliwości interakcji
	bool bCanInteract;


};

