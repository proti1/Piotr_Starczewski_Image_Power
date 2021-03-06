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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Zdefiniuj funkcję interfejsu IMInionInterface
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interface")
	void PickUp();
	virtual void PickUp_Implementation() override;

	//Funkcja do zablokowania itemu
	UFUNCTION(BlueprintCallable, Category = "Logic")
	void SetAsBusy(bool bShouldBeBusy);

	//Zadeklarowany Enum z ObjectList.h
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EObjectList NeededObject;

	//Nie można interaktować z obiektiem kiedy jest "zaklepany" przez innego aktora
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Logic")
	bool bIsBusy;
};
