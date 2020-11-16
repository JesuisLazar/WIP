#include "NativizedAssets.h"
#include "ENiagaraRandomnessMode__pf2855420827.h"
FText E__ENiagaraRandomnessMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraRandomnessMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraRandomnessMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E109C5A419CD71B796CE28009E138A1]\", \"D47EB1AC4E18283F01F95193A316F096\", \"Simulation Defaults\")"), Text); break;
		case E__ENiagaraRandomnessMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E109C5A419CD71B796CE28009E138A1]\", \"355B90D54A8ACC8E298536855EA30D01\", \"Determinisitic\")"), Text); break;
		case E__ENiagaraRandomnessMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E109C5A419CD71B796CE28009E138A1]\", \"FA31CB9A417E2921B67B6193734DCF56\", \"Non-Deterministic\")"), Text); break;
		case E__ENiagaraRandomnessMode__pf::E__ENiagaraRandomnessMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Randomness Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
