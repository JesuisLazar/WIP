#include "NativizedAssets.h"
#include "E_Controls__pf2806154781.h"
FText E__E_Controls__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Controls__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Controls__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2A7A8D754C8D52353A3BCEA64E0719E3]\", \"C18F2B12423B93F6485E84BD9466330E\", \"Keyboard and Mouse\")"), Text); break;
		case E__E_Controls__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2A7A8D754C8D52353A3BCEA64E0719E3]\", \"B482C8874033BF7466DB2F8A071B14DD\", \"Gamepad\")"), Text); break;
		case E__E_Controls__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2A7A8D754C8D52353A3BCEA64E0719E3]\", \"009F6F5544F34449588F6FBAB0354E3C\", \"Mouse Click\")"), Text); break;
		case E__E_Controls__pf::E__E_Controls__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
