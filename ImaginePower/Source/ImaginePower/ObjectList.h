// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectList.generated.h"

//Zadeklaruj klasę enum EObjectList i wypełnij ją elementami
UENUM(BlueprintType)
enum class EObjectList : uint8 {
	OL_Nothing		UMETA(DisplayName = "Nothing"),

    OL_Wood			UMETA(DisplayName="Wood"),
	OL_Stone		UMETA(DisplayName="Stone"),
	OL_Gold			UMETA(DisplayName="Gold"),

	OL_Max			UMETA(Hidden)	
};
