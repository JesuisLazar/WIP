// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_Controls__pf2806154781.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_Controls__pf2806154781() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Controls__pf();
// End Cross Module References
	static UEnum* E__E_Controls__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/System/E_Controls"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_Controls")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_Controls__pf, EnumPackage, TEXT("E_Controls"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_Controls__pf>()
	{
		return E__E_Controls__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_Controls__pf(E__E_Controls__pf_StaticEnum, TEXT("/Game/TSS_Game/Blueprints/System/E_Controls"), TEXT("E_Controls"), true, TEXT("/Game/TSS_Game/Blueprints/System/E_Controls"), TEXT("/Game/TSS_Game/Blueprints/System/E_Controls.E_Controls"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_Controls__pf_Hash() { return 1764352286U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Controls__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/System/E_Controls"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_Controls"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_Controls__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_Controls::NewEnumerator0", (int64)E__E_Controls__pf::NewEnumerator0 },
				{ "E_Controls::NewEnumerator1", (int64)E__E_Controls__pf::NewEnumerator1 },
				{ "E_Controls::NewEnumerator3", (int64)E__E_Controls__pf::NewEnumerator3 },
				{ "E_Controls::E_MAX", (int64)E__E_Controls__pf::E__E_Controls__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_Controls__pf_MAX.Name", "E__E_Controls__pf::E__E_Controls__pf_MAX" },
				{ "E__E_Controls__pf_MAX.OverrideName", "E_Controls::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_Controls__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_Controls__pf2806154781.h" },
				{ "NewEnumerator0.Name", "E__E_Controls__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_Controls::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__E_Controls__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "E_Controls::NewEnumerator1" },
				{ "NewEnumerator3.Name", "E__E_Controls__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "E_Controls::NewEnumerator3" },
				{ "OverrideNativeName", "E_Controls" },
				{ "ReplaceConverted", "/Game/TSS_Game/Blueprints/System/E_Controls.E_Controls" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/System/E_Controls")); },
				E__E_Controls__pf__GetUserFriendlyName,
				"E_Controls",
				"E__E_Controls__pf",
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
