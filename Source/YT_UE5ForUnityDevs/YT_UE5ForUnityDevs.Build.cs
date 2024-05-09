// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YT_UE5ForUnityDevs : ModuleRules
{
	public YT_UE5ForUnityDevs(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
