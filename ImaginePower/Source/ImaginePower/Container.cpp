// Fill out your copyright notice in the Description page of Project Settings.


#include "Container.h"

// Sets default values
AContainer::AContainer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Dodaje tag aby Container był domyśnie gotów
	this->Tags.Add(FName("Pickupable"));
}

// Called when the game starts or when spawned
void AContainer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AContainer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Zniszcz aktora po interakcji
void AContainer::PickUp_Implementation()
{
	this->Destroy();
}

//Ustaw stan kontenera podczas gdy jest używany przez miniona
void AContainer::SetAsBusy(bool bShouldBeBusy)
{
	bIsBusy = bShouldBeBusy;
}

