#pragma once


#include "CoreMinimal.h"
#include "**ObjectList**.generated.h"

UENUM(BlueprintType)
enum class EVictory : uint8 {
	VE_Dance       UMETA(DisplayName = "Dance"),
	VE_Rain        UMETA(DisplayName = "Rain"),
	VE_Song        UMETA(DisplayName = "Song"),
};