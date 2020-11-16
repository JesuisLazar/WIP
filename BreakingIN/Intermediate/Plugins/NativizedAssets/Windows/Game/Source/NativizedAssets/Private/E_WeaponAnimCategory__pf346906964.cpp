#include "NativizedAssets.h"
#include "E_WeaponAnimCategory__pf346906964.h"
FText E__E_WeaponAnimCategory__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_WeaponAnimCategory__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_WeaponAnimCategory__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD11E2C1433E6E48701BD8B4A0863185]\", \"C6BFFF6A4D2E6A8AE60F6E88A10D3961\", \"Default_Locomotion\")"), Text); break;
		case E__E_WeaponAnimCategory__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD11E2C1433E6E48701BD8B4A0863185]\", \"EC34CD034DF30B3C98CB36ADF62AB979\", \"Pistol_Locomotion\")"), Text); break;
		case E__E_WeaponAnimCategory__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD11E2C1433E6E48701BD8B4A0863185]\", \"E65D65C14E01AEAB415C2CA6033FE531\", \"Melee_Locomotion\")"), Text); break;
		case E__E_WeaponAnimCategory__pf::E__E_WeaponAnimCategory__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
