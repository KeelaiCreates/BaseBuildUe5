// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mfgj2022Nature : ModuleRules
{
	public mfgj2022Nature(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
