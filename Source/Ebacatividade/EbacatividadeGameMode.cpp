// Copyright Epic Games, Inc. All Rights Reserved.

#include "EbacatividadeGameMode.h"
#include "EbacatividadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEbacatividadeGameMode::AEbacatividadeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
