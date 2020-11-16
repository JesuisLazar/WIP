#pragma once
#include "ENiagaraOrientationAxis__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraOrientationAxis.ENiagaraOrientationAxis", OverrideNativeName="ENiagaraOrientationAxis", EnumDisplayNameFn="E__ENiagaraOrientationAxis__pf__GetUserFriendlyName") )
enum class E__ENiagaraOrientationAxis__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraOrientationAxis::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraOrientationAxis::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagaraOrientationAxis::NewEnumerator2"),
	E__ENiagaraOrientationAxis__pf_MAX = 3 UMETA(OverrideName = "ENiagaraOrientationAxis::ENiagaraOrientationAxis_MAX"),
};
FText E__ENiagaraOrientationAxis__pf__GetUserFriendlyName(int32 InValue);
