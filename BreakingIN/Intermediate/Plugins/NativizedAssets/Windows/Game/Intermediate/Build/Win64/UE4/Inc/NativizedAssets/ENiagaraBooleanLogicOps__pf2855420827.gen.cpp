// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraBooleanLogicOps__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraBooleanLogicOps__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraBooleanLogicOps__pf();
// End Cross Module References
	static UEnum* E__ENiagaraBooleanLogicOps__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraBooleanLogicOps")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraBooleanLogicOps__pf, EnumPackage, TEXT("ENiagaraBooleanLogicOps"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraBooleanLogicOps__pf>()
	{
		return E__ENiagaraBooleanLogicOps__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraBooleanLogicOps__pf(E__ENiagaraBooleanLogicOps__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps"), TEXT("ENiagaraBooleanLogicOps"), true, TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps"), TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps.ENiagaraBooleanLogicOps"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraBooleanLogicOps__pf_Hash() { return 4135543614U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraBooleanLogicOps__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraBooleanLogicOps"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraBooleanLogicOps__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraBooleanLogicOps::NewEnumerator0", (int64)E__ENiagaraBooleanLogicOps__pf::NewEnumerator0 },
				{ "ENiagaraBooleanLogicOps::NewEnumerator2", (int64)E__ENiagaraBooleanLogicOps__pf::NewEnumerator2 },
				{ "ENiagaraBooleanLogicOps::NewEnumerator4", (int64)E__ENiagaraBooleanLogicOps__pf::NewEnumerator4 },
				{ "ENiagaraBooleanLogicOps::NewEnumerator5", (int64)E__ENiagaraBooleanLogicOps__pf::NewEnumerator5 },
				{ "ENiagaraBooleanLogicOps::ENiagaraBooleanLogicOps_MAX", (int64)E__ENiagaraBooleanLogicOps__pf::E__ENiagaraBooleanLogicOps__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraBooleanLogicOps__pf_MAX.Name", "E__ENiagaraBooleanLogicOps__pf::E__ENiagaraBooleanLogicOps__pf_MAX" },
				{ "E__ENiagaraBooleanLogicOps__pf_MAX.OverrideName", "ENiagaraBooleanLogicOps::ENiagaraBooleanLogicOps_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraBooleanLogicOps__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraBooleanLogicOps__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraBooleanLogicOps__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraBooleanLogicOps::NewEnumerator0" },
				{ "NewEnumerator2.Name", "E__ENiagaraBooleanLogicOps__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraBooleanLogicOps::NewEnumerator2" },
				{ "NewEnumerator4.Name", "E__ENiagaraBooleanLogicOps__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "ENiagaraBooleanLogicOps::NewEnumerator4" },
				{ "NewEnumerator5.Name", "E__ENiagaraBooleanLogicOps__pf::NewEnumerator5" },
				{ "NewEnumerator5.OverrideName", "ENiagaraBooleanLogicOps::NewEnumerator5" },
				{ "OverrideNativeName", "ENiagaraBooleanLogicOps" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraBooleanLogicOps.ENiagaraBooleanLogicOps" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraBooleanLogicOps")); },
				E__ENiagaraBooleanLogicOps__pf__GetUserFriendlyName,
				"ENiagaraBooleanLogicOps",
				"E__ENiagaraBooleanLogicOps__pf",
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
