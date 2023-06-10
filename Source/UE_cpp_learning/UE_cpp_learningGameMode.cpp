// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_cpp_learningGameMode.h"
#include "UE_cpp_learningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_cpp_learningGameMode::AUE_cpp_learningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
