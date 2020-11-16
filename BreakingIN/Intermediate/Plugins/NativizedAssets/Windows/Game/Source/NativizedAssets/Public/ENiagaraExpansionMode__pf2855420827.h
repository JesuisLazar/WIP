#pragma once
#include "ENiagaraExpansionMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraExpansionMode.ENiagaraExpansionMode", OverrideNativeName="ENiagaraExpansionMode", EnumDisplayNameFn="E__ENiagaraExpansionMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraExpansionMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraExpansionMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraExpansionMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagaraExpansionMode::NewEnumerator2"),
	E__ENiagaraExpansionMode__pf_MAX = 3 UMETA(OverrideName = "ENiagaraExpansionMode::ENiagaraExpansionMode_MAX"),
};
FText E__ENiagaraExpansionMode__pf__GetUserFriendlyName(int32 InValue);
