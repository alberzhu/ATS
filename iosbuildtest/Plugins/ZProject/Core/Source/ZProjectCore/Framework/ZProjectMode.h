﻿// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ZProjectMode.generated.h"

// 服务器ModeType
UENUM(BlueprintType)
enum class EModeType : uint8
{
	None,

	Local,

	BattleRoyale, 
	
	Max,
};

/**
 * 
 */
UCLASS()
class ZPROJECTCORE_API AZProjectMode : public AGameModeBase
{
	GENERATED_BODY()
public:
        
	AZProjectMode();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameMode)
	EModeType ModeType = EModeType::None;
};
