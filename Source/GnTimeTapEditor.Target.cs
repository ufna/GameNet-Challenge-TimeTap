// Copyright ufna. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GnTimeTapEditorTarget : TargetRules
{
	public GnTimeTapEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "GnTimeTap" } );
	}
}
