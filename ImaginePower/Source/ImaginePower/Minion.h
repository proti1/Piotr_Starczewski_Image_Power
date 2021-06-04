// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "ObjectList.h" //Dodaj plik z Enumem EObjectList
#include "PlayerInteractionInterface.h" //Dołącz interfejs do interakcji z graczem
#include "MinionInterface.h" //Interfejs do komunikacji z przedmiotami
#include "Minion.generated.h"

UCLASS()
class IMAGINEPOWER_API AMinion : public ACharacter, public IPlayerInteractionInterface, public IMinionInterface
{

GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AMinion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Zadeklaruj funkcję wyświetlania widgetu dla gracza
	void DisplayMenuToPlayer();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Zdefiniuj funkcję interfejsu IPlayerInteractionInterface
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Player Interaction")
	void OnInteract();
	virtual void OnInteract_Implementation() override;

	//Zadeklarowany Enum z ObjectList.h
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	EObjectList SearchedObject;

	//Funkcja do szukania, niezaimplementowana
	UFUNCTION(BlueprintCallable, Category = "AI")
	void StartSearchingItems_Implementation(EObjectList ObjectsToSearch);

	//Jeśli wykonuje czynność ustaw aktora jako zajęty
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	bool bIsBusy;

	//Zaczyna BT, wystarczy wywołać raz
	//void StartBehaviorTree();



protected:
	//Referencja do pawna gracza
	APawn* PlayerRef;

	//Referencja do kontrolera gracza
	APlayerController* Controller;

	//Informacje o systemie wprowadzania
	FInputModeUIOnly InputModeData;

public:
	//Widget do wyświetlenia po interakcji
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSubclassOf<class UUserWidget> WidgetToDisplay;

	//Referencja do widgeta
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Widget")
	UUserWidget* WidgetRef;

};
