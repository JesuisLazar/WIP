// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraOrientationAxis__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraOrientationAxis__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraOrientationAxis__pf();
// End Cross Module References
	static UEnum* E__ENiagaraOrientationAxis__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraOrientationAxis"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraOrientationAxis")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraOrientationAxis__pf, EnumPackage, TEXT("ENiagaraOrientationAxis"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraOrientationAxis__pf>()
	{
		return E__ENiagaraOrientationAxis__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraOrientationAxis__pf(E__ENiagaraOrientationAxis__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraOrientationAxis"), TEXT("ENiagaraOrientationAxis"), true, TEXT("/Niagara/Enums/ENiagaraOrientationAxis"), TEXT("/Niagara/Enums/ENiagaraOrientationAxis.ENiagaraOrientationAxis"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraOrientationAxis__pf_Hash() { return 645874206U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraOrientationAxis__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraOrientationAxis"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraOrientationAxis"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraOrientationAxis__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraOrientationAxis::NewEnumerator0", (int64)E__ENiagaraOrientationAxis__pf::NewEnumerator0 },
				{ "ENiagaraOrientationAxis::NewEnumerator1", (int64)E__ENiagaraOrientationAxis__pf::NewEnumerator1 },
				{ "ENiagaraOrientationAxis::NewEnumerator2", (int64)E__ENiagaraOrientationAxis__pf::NewEnumerator2 },
				{ "ENiagaraOrientationAxis::ENiagaraOrientationAxis_MAX", (int64)E__ENiagaraOrientationAxis__pf::E__ENiagaraOrientationAxis__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraOrientationAxis__pf_MAX.Name", "E__ENiagaraOrientationAxis__pf::E__ENiagaraOrientationAxis__pf_MAX" },
				{ "E__ENiagaraOrientationAxis__pf_MAX.OverrideName", "ENiagaraOrientationAxis::ENiagaraOrientationAxis_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraOrientationAxis__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraOrientationAxis__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraOrientationAxis__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraOrientationAxis::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraOrientationAxis__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraOrientationAxis::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraOrientationAxis__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraOrientationAxis::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraOrientationAxis" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraOrientationAxis.ENiagaraOrientationAxis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraOrientationAxis")); },
				E__ENiagaraOrientationAxis__pf__GetUserFriendlyName,
				"ENiagaraOrientationAxis",
				"E__ENiagaraOrientationAxis__pf",
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
