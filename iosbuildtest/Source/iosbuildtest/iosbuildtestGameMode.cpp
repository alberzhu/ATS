// Copyright Epic Games, Inc. All Rights Reserved.

#include "iosbuildtestGameMode.h"
#include "iosbuildtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AiosbuildtestGameMode::AiosbuildtestGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}
