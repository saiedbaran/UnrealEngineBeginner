// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEngineBeginnerGameMode.h"
#include "UnrealEngineBeginnerHUD.h"
#include "UnrealEngineBeginnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealEngineBeginnerGameMode::AUnrealEngineBeginnerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealEngineBeginnerHUD::StaticClass();
}
