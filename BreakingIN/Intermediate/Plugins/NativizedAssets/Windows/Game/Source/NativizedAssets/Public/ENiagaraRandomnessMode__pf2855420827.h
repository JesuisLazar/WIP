#pragma once
#include "ENiagaraRandomnessMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraRandomnessMode.ENiagaraRandomnessMode", OverrideNativeName="ENiagaraRandomnessMode", EnumDisplayNameFn="E__ENiagaraRandomnessMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraRandomnessMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraRandomnessMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraRandomnessMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagaraRandomnessMode::NewEnumerator2"),
	E__ENiagaraRandomnessMode__pf_MAX = 3 UMETA(OverrideName = "ENiagaraRandomnessMode::ENiagaraRandomnessMode_MAX"),
};
FText E__ENiagaraRandomnessMode__pf__GetUserFriendlyName(int32 InValue);
