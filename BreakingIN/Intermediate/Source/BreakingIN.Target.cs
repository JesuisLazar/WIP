using UnrealBuildTool;

public class BreakingINTarget : TargetRules
{
	public BreakingINTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("BreakingIN");
	}
}
