// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MinionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMinionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IMAGINEPOWER_API IMinionInterface
{
	GENERATED_BODY()
		
public:
		//Zablokuj objekt przed interakcją podczas korzystania
		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = " Interaction")
		void LockState();

		//Podnieś objekt
		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = " Interaction")
		void PickUp();
};
