// Copyright Epic Games, Inc. All Rights Reserved.

#include "sumple2GameMode.h"
#include "sumple2Character.h"
#include "UObject/ConstructorHelpers.h"

Asumple2GameMode::Asumple2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
