// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectList.h" //Dodaj plik z Enumem EObjectList
#include "MinionInterface.h" //Interfejs do komunikacji z minionem
#include "Container.generated.h"

UCLASS()
class IMAGINEPOWER_API AContainer : public AActor, public IMinionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AContainer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Nie można interaktować z obiektieem kiedy jest "zaklepany" przez innego aktora
	bool bIsBusy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Zdefiniuj funkcję interfejsu IPlayerInteractionInterface
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
	void PickUp();
	virtual void PickUp_Implementation() override;

	//Funkcja do zablokowania 
	UFUNCTION(BlueprintCallable, Category = "Logic")
	void SetAsBusy(bool bShouldBeBusy);

	//Zadeklarowany Enum z ObjectList.h
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EObjectList NeededObject;
};
