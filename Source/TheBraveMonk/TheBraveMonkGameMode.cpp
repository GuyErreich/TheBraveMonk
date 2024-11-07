// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheBraveMonkGameMode.h"
#include "TheBraveMonkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheBraveMonkGameMode::ATheBraveMonkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
