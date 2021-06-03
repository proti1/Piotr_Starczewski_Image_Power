// Copyright Epic Games, Inc. All Rights Reserved.

#include "ImaginePowerGameMode.h"
#include "ImaginePowerHUD.h"
#include "ImaginePowerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AImaginePowerGameMode::AImaginePowerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AImaginePowerHUD::StaticClass();
}
