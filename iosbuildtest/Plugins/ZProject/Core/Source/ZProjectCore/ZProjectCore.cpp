// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZProjectCore.h"

IMPLEMENT_GAME_MODULE( FDefaultGameModuleImpl, ZProjectCore );

DEFINE_LOG_CATEGORY(ZPCore);

FString BaseFileName(const FString& FullName)
{
	FString FileName;
#if PLATFORM_LINUX
	FullName.Split(TEXT("/"), NULL, &FileName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
#elif PLATFORM_WINDOWS
	FullName.Split(TEXT("/"), NULL, &FileName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
#else
	FullName.Split(TEXT("\\"), NULL, &FileName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
#endif
	return FileName;
}

FString BaseFunctionName(const FString& FullName)
{
#if PLATFORM_LINUX
	return FullName;
#else
	FString FuncName;
	FullName.Split(TEXT("::"), NULL, &FuncName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	return FuncName;
#endif

}

FString NetModeToString(ENetMode NetMode)
{
	if (NetMode == NM_Standalone)
	{
		return FString(TEXT("NM_Standalone"));
	}
	else if (NetMode == NM_DedicatedServer)
	{
		return FString(TEXT("NM_DedicatedServer"));
	}
	else if (NetMode == NM_ListenServer)
	{
		return FString(TEXT("NM_ListenServer"));
	}
	else if (NetMode == NM_Client)
	{
		return FString(TEXT("NM_Client"));
	}
	else
	{
		return FString(TEXT("Invalid"));
	}
}
