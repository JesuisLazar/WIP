#include "NativizedAssets.h"
#include "ENiagaraBooleanLogicOps__pf2855420827.h"
FText E__ENiagaraBooleanLogicOps__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraBooleanLogicOps__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraBooleanLogicOps__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF873C32471AE6FB242C07A5F34E4503]\", \"B00AB29F47D43C9E87835C92EB4DD8E6\", \"Greater Than\")"), Text); break;
		case E__ENiagaraBooleanLogicOps__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF873C32471AE6FB242C07A5F34E4503]\", \"B5CF11774BBF18B61DFD2C90E87B3C1D\", \"Greater Than Or Equal To\")"), Text); break;
		case E__ENiagaraBooleanLogicOps__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF873C32471AE6FB242C07A5F34E4503]\", \"9A383D3C4DB7119F5DBA34B8110180C0\", \"Equal To\")"), Text); break;
		case E__ENiagaraBooleanLogicOps__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[DF873C32471AE6FB242C07A5F34E4503]\", \"D0CEAE9E4F4945E8878054A5A34D590E\", \"Not Equal To\")"), Text); break;
		case E__ENiagaraBooleanLogicOps__pf::E__ENiagaraBooleanLogicOps__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Boolean Logic Ops MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
