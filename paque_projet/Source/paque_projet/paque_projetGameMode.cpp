// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "paque_projetGameMode.h"
#include "paque_projetCharacter.h"
#include "UObject/ConstructorHelpers.h"

Apaque_projetGameMode::Apaque_projetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
