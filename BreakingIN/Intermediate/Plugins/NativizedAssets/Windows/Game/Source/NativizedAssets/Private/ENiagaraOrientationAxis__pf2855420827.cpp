#include "NativizedAssets.h"
#include "ENiagaraOrientationAxis__pf2855420827.h"
FText E__ENiagaraOrientationAxis__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraOrientationAxis__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraOrientationAxis__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9C9868C74FCF3E7AFDEB778F8C9EA988]\", \"1CE439C14E8741B2E94E4896C5BB29BB\", \"X Axis\")"), Text); break;
		case E__ENiagaraOrientationAxis__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9C9868C74FCF3E7AFDEB778F8C9EA988]\", \"4807FD384418AD133AF56D9DD063A9D8\", \"Y Axis\")"), Text); break;
		case E__ENiagaraOrientationAxis__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9C9868C74FCF3E7AFDEB778F8C9EA988]\", \"0D8EE448409B4A8CD1F47FAB0AC122CF\", \"Z Axis\")"), Text); break;
		case E__ENiagaraOrientationAxis__pf::E__ENiagaraOrientationAxis__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Orientation Axis MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
