// Copyright Epic Games, Inc. All Rights Reserved.


#include "ZProjectMode.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

AZProjectMode::AZProjectMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C'"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}
