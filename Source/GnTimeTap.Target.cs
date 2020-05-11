// Copyright ufna. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GnTimeTapTarget : TargetRules
{
	public GnTimeTapTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "GnTimeTap" } );
	}
}
