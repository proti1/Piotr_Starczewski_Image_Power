// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectList.h" //Dodaj plik z Enumem	 EObjectList
#include "InteractionMenu.generated.h"

/**
 * 
 */
UCLASS()
class IMAGINEPOWER_API UInteractionMenu : public UUserWidget
{
	GENERATED_BODY()
	

public:
	//Zadeklarowany Enum z ObjectList.h
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EObjectList ObjectToPick;

};
