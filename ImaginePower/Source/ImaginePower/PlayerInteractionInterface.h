// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerInteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlayerInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IMAGINEPOWER_API IPlayerInteractionInterface
{
	GENERATED_BODY()

public:
	//Ffunkcja do interakcji
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Player Interaction")
	void OnInteract();
};
