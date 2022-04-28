// Copyright Epic Games, Inc. All Rights Reserved.

#include "Parcial1GameMode.h"
#include "Parcial1HUD.h"
#include "Parcial1Character.h"
#include "UObject/ConstructorHelpers.h"

AParcial1GameMode::AParcial1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParcial1HUD::StaticClass();
}
