// Copyright Epic Games, Inc. All Rights Reserved.

#include "Partiel_IlanCGameMode.h"
#include "Partiel_IlanCCharacter.h"
#include "UObject/ConstructorHelpers.h"

APartiel_IlanCGameMode::APartiel_IlanCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
