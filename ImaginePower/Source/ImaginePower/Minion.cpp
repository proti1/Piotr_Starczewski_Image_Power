// Fill out your copyright notice in the Description page of Project Settings.


#include "Minion.h"

// Sets default values
AMinion::AMinion()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Tags.Add(FName("Interactible"));

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

	//Do debugowania. Wyświetla informację czy przed graczem znajduje się aktor zdolny do interakcji
	
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Interakcja %s"), *this->GetName()));

	DisplayMenuToPlayer();
}

//Stwórz menu wyboru przedmiotu z blueprint
void AMinion::DisplayMenuToPlayer()
{
	//Zinicjuj referencje do pawna gracza
	PlayerRef = GWorld->GetFirstPlayerController()->GetPawn();

	//Zinicjuj referencje do kontrolera gracza
	Controller = GWorld->GetFirstPlayerController();

	//Sprawdź referencje
	if (WidgetToDisplay != nullptr && Controller != nullptr)
	{
		//Stwórz widget i dodaj go do viewportu
		WidgetRef = CreateWidget<UUserWidget>(Controller, WidgetToDisplay);

		WidgetRef->AddToViewport();

		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("widget")));
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("NO WORK")));
	}

}