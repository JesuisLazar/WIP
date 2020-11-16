#pragma once
#include "E_Controls__pf2806154781.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/TSS_Game/Blueprints/System/E_Controls.E_Controls", OverrideNativeName="E_Controls", EnumDisplayNameFn="E__E_Controls__pf__GetUserFriendlyName") )
enum class E__E_Controls__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Controls::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Controls::NewEnumerator1"),
	NewEnumerator3 = 2 UMETA(OverrideName = "E_Controls::NewEnumerator3"),
	E__E_Controls__pf_MAX = 3 UMETA(OverrideName = "E_Controls::E_MAX"),
};
FText E__E_Controls__pf__GetUserFriendlyName(int32 InValue);
