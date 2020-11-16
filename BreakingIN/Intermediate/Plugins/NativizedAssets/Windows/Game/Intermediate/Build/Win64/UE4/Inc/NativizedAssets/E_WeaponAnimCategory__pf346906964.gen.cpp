// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_WeaponAnimCategory__pf346906964.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_WeaponAnimCategory__pf346906964() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_WeaponAnimCategory__pf();
// End Cross Module References
	static UEnum* E__E_WeaponAnimCategory__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_WeaponAnimCategory")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_WeaponAnimCategory__pf, EnumPackage, TEXT("E_WeaponAnimCategory"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_WeaponAnimCategory__pf>()
	{
		return E__E_WeaponAnimCategory__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_WeaponAnimCategory__pf(E__E_WeaponAnimCategory__pf_StaticEnum, TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory"), TEXT("E_WeaponAnimCategory"), true, TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory"), TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory.E_WeaponAnimCategory"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_WeaponAnimCategory__pf_Hash() { return 4100510751U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_WeaponAnimCategory__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_WeaponAnimCategory"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_WeaponAnimCategory__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_WeaponAnimCategory::NewEnumerator0", (int64)E__E_WeaponAnimCategory__pf::NewEnumerator0 },
				{ "E_WeaponAnimCategory::NewEnumerator1", (int64)E__E_WeaponAnimCategory__pf::NewEnumerator1 },
				{ "E_WeaponAnimCategory::NewEnumerator2", (int64)E__E_WeaponAnimCategory__pf::NewEnumerator2 },
				{ "E_WeaponAnimCategory::E_MAX", (int64)E__E_WeaponAnimCategory__pf::E__E_WeaponAnimCategory__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_WeaponAnimCategory__pf_MAX.Name", "E__E_WeaponAnimCategory__pf::E__E_WeaponAnimCategory__pf_MAX" },
				{ "E__E_WeaponAnimCategory__pf_MAX.OverrideName", "E_WeaponAnimCategory::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_WeaponAnimCategory__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_WeaponAnimCategory__pf346906964.h" },
				{ "NewEnumerator0.Name", "E__E_WeaponAnimCategory__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_WeaponAnimCategory::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__E_WeaponAnimCategory__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "E_WeaponAnimCategory::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__E_WeaponAnimCategory__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "E_WeaponAnimCategory::NewEnumerator2" },
				{ "OverrideNativeName", "E_WeaponAnimCategory" },
				{ "ReplaceConverted", "/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory.E_WeaponAnimCategory" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Weapons/Base/E_WeaponAnimCategory")); },
				E__E_WeaponAnimCategory__pf__GetUserFriendlyName,
				"E_WeaponAnimCategory",
				"E__E_WeaponAnimCategory__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
