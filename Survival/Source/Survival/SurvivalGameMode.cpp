// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Survival.h"
#include "SurvivalGameMode.h"
#include "SurvivalCharacter.h"

ASurvivalGameMode::ASurvivalGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/SThirdPersonChar"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
