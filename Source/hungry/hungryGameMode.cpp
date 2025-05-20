// Copyright Epic Games, Inc. All Rights Reserved.

#include "hungryGameMode.h"
#include "hungryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AhungryGameMode::AhungryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
