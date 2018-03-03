// Copyright 2018 Joni Toiviainen All Rights Reserved.

using UnrealBuildTool;

public class Pong : ModuleRules
{
	public Pong(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
