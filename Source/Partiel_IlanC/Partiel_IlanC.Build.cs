// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Partiel_IlanC : ModuleRules
{
	public Partiel_IlanC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
