// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IntFolGameMode.h"
#include "IntFolHUD.h"
#include "IntFolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntFolGameMode::AIntFolGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIntFolHUD::StaticClass();
}
