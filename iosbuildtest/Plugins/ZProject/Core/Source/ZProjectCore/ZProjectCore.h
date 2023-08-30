// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Engine/EngineBaseTypes.h"

ZPROJECTCORE_API DECLARE_LOG_CATEGORY_EXTERN(ZPCore, Log, All);

ZPROJECTCORE_API FString BaseFileName(const FString& FullName);
ZPROJECTCORE_API FString BaseFunctionName(const FString& FullName);

#define  ZPCoreLogD(Format, ...)  UE_LOG(ZPCore, Log, TEXT("[(Frame:%d)%s:%d %s] " Format), GFrameCounter, *BaseFileName(__FILE__), __LINE__, *BaseFunctionName(ANSI_TO_TCHAR(__FUNCTION__)), ##__VA_ARGS__)
#define  ZPCoreLogI(Format, ...)  UE_LOG(ZPCore, Warning, TEXT("[(Frame:%d)%s:%d %s] " Format), GFrameCounter, *BaseFileName(__FILE__), __LINE__, *BaseFunctionName(ANSI_TO_TCHAR(__FUNCTION__)), ##__VA_ARGS__)
#define  ZPCoreLogW(Format, ...)  UE_LOG(ZPCore, Warning, TEXT("[(Frame:%d)%s:%d %s] " Format), GFrameCounter, *BaseFileName(__FILE__), __LINE__, *BaseFunctionName(ANSI_TO_TCHAR(__FUNCTION__)), ##__VA_ARGS__)
#define  ZPCoreLogE(Format, ...)  UE_LOG(ZPCore, Error, TEXT("[(Frame:%d)%s:%d %s] " Format), GFrameCounter, *BaseFileName(__FILE__), __LINE__, *BaseFunctionName(ANSI_TO_TCHAR(__FUNCTION__)), ##__VA_ARGS__)

ZPROJECTCORE_API FString NetModeToString(ENetMode NetMode);