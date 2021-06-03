// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerInteractionInterface.h" //Dołącz interfejs do interakcji
#include "Blueprint/UserWidget.h"
#include "Minion.generated.h"

UCLASS()
class IMAGINEPOWER_API AMinion : public ACharacter, public IPlayerInteractionInterface
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

protected:
	//Referencja do pawna gracza
	APawn* PlayerRef;

	//Referencja do kontrolera gracza
	APlayerController* Controller;

public:
	//Widget do wyświetlenia po interakcji
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSubclassOf<class UUserWidget> WidgetToDisplay;

	//Referencja do widgeta
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Widget")
	UUserWidget* WidgetRef;

};