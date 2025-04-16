// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterGameGameMode.h"
#include "ShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterGameGameMode::AShooterGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
