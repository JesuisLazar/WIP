#pragma once
#include "E_WeaponAnimCategory__pf346906964.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory.E_WeaponAnimCategory", OverrideNativeName="E_WeaponAnimCategory", EnumDisplayNameFn="E__E_WeaponAnimCategory__pf__GetUserFriendlyName") )
enum class E__E_WeaponAnimCategory__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_WeaponAnimCategory::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_WeaponAnimCategory::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_WeaponAnimCategory::NewEnumerator2"),
	E__E_WeaponAnimCategory__pf_MAX = 3 UMETA(OverrideName = "E_WeaponAnimCategory::E_MAX"),
};
FText E__E_WeaponAnimCategory__pf__GetUserFriendlyName(int32 InValue);
