// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_cpp_learning : ModuleRules
{
	public UE_cpp_learning(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
