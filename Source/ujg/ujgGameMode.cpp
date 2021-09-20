// Copyright Epic Games, Inc. All Rights Reserved.

#include "ujgGameMode.h"
#include "ujgCharacter.h"
#include "UObject/ConstructorHelpers.h"

AujgGameMode::AujgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
