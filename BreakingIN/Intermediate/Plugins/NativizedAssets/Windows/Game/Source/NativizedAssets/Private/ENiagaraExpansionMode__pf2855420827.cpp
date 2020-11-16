#include "NativizedAssets.h"
#include "ENiagaraExpansionMode__pf2855420827.h"
FText E__ENiagaraExpansionMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraExpansionMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraExpansionMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CBE0D64C4ACAEADFE802659D71700ADB]\", \"34C8419847B6164A1E03409B62A85F03\", \"Inside\")"), Text); break;
		case E__ENiagaraExpansionMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CBE0D64C4ACAEADFE802659D71700ADB]\", \"3E242586476203BC7942C4A43FAE7705\", \"Centered\")"), Text); break;
		case E__ENiagaraExpansionMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CBE0D64C4ACAEADFE802659D71700ADB]\", \"CC1FEDB1432CF9407B04A4AF0D6ED1A0\", \"Outside\")"), Text); break;
		case E__ENiagaraExpansionMode__pf::E__ENiagaraExpansionMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Expansion Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
