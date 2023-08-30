// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubSystem.h"
#include "ZProjectInstance.generated.h"

class UZProjectEvent
{
};

/**
 * 
 */
UCLASS()
class ZPROJECTCORE_API UZProjectInstance : public UEngineSubsystem
{
	GENERATED_BODY()

public:  
	//TMap<int32, UZProjectEvent*> DelegateObjets;
	//调试用DS协议同步数组（由于需要多个模块穿透，所以放在全局）
	//////////////////////////////////////////////////////////////////////////
};
