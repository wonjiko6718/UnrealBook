// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BookPracticeGameMode.h"
#include "BookPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABookPracticeGameMode::ABookPracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
