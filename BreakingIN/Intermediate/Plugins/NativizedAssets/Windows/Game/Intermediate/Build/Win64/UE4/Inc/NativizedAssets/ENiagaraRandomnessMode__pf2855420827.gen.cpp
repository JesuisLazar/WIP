// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraRandomnessMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraRandomnessMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraRandomnessMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraRandomnessMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessMode__pf, EnumPackage, TEXT("ENiagaraRandomnessMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraRandomnessMode__pf>()
	{
		return E__ENiagaraRandomnessMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraRandomnessMode__pf(E__ENiagaraRandomnessMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraRandomnessMode"), TEXT("ENiagaraRandomnessMode"), true, TEXT("/Niagara/Enums/ENiagaraRandomnessMode"), TEXT("/Niagara/Enums/ENiagaraRandomnessMode.ENiagaraRandomnessMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessMode__pf_Hash() { return 2322702476U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRandomnessMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRandomnessMode::NewEnumerator0", (int64)E__ENiagaraRandomnessMode__pf::NewEnumerator0 },
				{ "ENiagaraRandomnessMode::NewEnumerator1", (int64)E__ENiagaraRandomnessMode__pf::NewEnumerator1 },
				{ "ENiagaraRandomnessMode::NewEnumerator2", (int64)E__ENiagaraRandomnessMode__pf::NewEnumerator2 },
				{ "ENiagaraRandomnessMode::ENiagaraRandomnessMode_MAX", (int64)E__ENiagaraRandomnessMode__pf::E__ENiagaraRandomnessMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraRandomnessMode__pf_MAX.Name", "E__ENiagaraRandomnessMode__pf::E__ENiagaraRandomnessMode__pf_MAX" },
				{ "E__ENiagaraRandomnessMode__pf_MAX.OverrideName", "ENiagaraRandomnessMode::ENiagaraRandomnessMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraRandomnessMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraRandomnessMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraRandomnessMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraRandomnessMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraRandomnessMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraRandomnessMode::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraRandomnessMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraRandomnessMode::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraRandomnessMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraRandomnessMode.ENiagaraRandomnessMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessMode")); },
				E__ENiagaraRandomnessMode__pf__GetUserFriendlyName,
				"ENiagaraRandomnessMode",
				"E__ENiagaraRandomnessMode__pf",
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
