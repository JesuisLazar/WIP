// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraExpansionMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraExpansionMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraExpansionMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraExpansionMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExpansionMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraExpansionMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraExpansionMode__pf, EnumPackage, TEXT("ENiagaraExpansionMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraExpansionMode__pf>()
	{
		return E__ENiagaraExpansionMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraExpansionMode__pf(E__ENiagaraExpansionMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraExpansionMode"), TEXT("ENiagaraExpansionMode"), true, TEXT("/Niagara/Enums/ENiagaraExpansionMode"), TEXT("/Niagara/Enums/ENiagaraExpansionMode.ENiagaraExpansionMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraExpansionMode__pf_Hash() { return 523202609U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraExpansionMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExpansionMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExpansionMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraExpansionMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExpansionMode::NewEnumerator0", (int64)E__ENiagaraExpansionMode__pf::NewEnumerator0 },
				{ "ENiagaraExpansionMode::NewEnumerator1", (int64)E__ENiagaraExpansionMode__pf::NewEnumerator1 },
				{ "ENiagaraExpansionMode::NewEnumerator2", (int64)E__ENiagaraExpansionMode__pf::NewEnumerator2 },
				{ "ENiagaraExpansionMode::ENiagaraExpansionMode_MAX", (int64)E__ENiagaraExpansionMode__pf::E__ENiagaraExpansionMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraExpansionMode__pf_MAX.Name", "E__ENiagaraExpansionMode__pf::E__ENiagaraExpansionMode__pf_MAX" },
				{ "E__ENiagaraExpansionMode__pf_MAX.OverrideName", "ENiagaraExpansionMode::ENiagaraExpansionMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraExpansionMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraExpansionMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraExpansionMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraExpansionMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraExpansionMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraExpansionMode::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraExpansionMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraExpansionMode::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraExpansionMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraExpansionMode.ENiagaraExpansionMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExpansionMode")); },
				E__ENiagaraExpansionMode__pf__GetUserFriendlyName,
				"ENiagaraExpansionMode",
				"E__ENiagaraExpansionMode__pf",
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
