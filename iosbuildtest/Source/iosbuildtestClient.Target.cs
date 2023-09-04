// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class iosbuildtestClientTarget : TargetRules
{
	public iosbuildtestClientTarget(TargetInfo Target) : base(Target)
	{
        IOSPlatform.bStripSymbols = true;
		Type = TargetType.Client;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("iosbuildtest");
	}
}
