// Copyright Epic Games, Inc. All Rights Reserved.

#include "mfgj2022NatureGameMode.h"
#include "mfgj2022NatureCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amfgj2022NatureGameMode::Amfgj2022NatureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
