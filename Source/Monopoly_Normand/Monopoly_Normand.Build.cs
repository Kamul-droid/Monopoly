// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Monopoly_Normand : ModuleRules
{
	public Monopoly_Normand(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
