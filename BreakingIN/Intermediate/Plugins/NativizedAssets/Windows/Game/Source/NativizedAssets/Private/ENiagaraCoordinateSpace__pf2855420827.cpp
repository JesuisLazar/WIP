#include "NativizedAssets.h"
#include "ENiagaraCoordinateSpace__pf2855420827.h"
FText E__ENiagaraCoordinateSpace__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraCoordinateSpace__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraCoordinateSpace__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8BD30D674AED1659A7C504B8ACFC4C71]\", \"601B0A97438A91B964A423853B8CE9A7\", \"Simulation\")"), Text); break;
		case E__ENiagaraCoordinateSpace__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8BD30D674AED1659A7C504B8ACFC4C71]\", \"FEEFBEC14CA39A90066F98A3ABF03B93\", \"World\")"), Text); break;
		case E__ENiagaraCoordinateSpace__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8BD30D674AED1659A7C504B8ACFC4C71]\", \"F3F32B404A80A3153EDD83B6AA545CD9\", \"Local\")"), Text); break;
		case E__ENiagaraCoordinateSpace__pf::E__ENiagaraCoordinateSpace__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Coordinate Space MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
