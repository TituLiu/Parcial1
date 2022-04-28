// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Parcial1 : ModuleRules
{
	public Parcial1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
