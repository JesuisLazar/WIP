// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraCoordinateSpace__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraCoordinateSpace__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraCoordinateSpace__pf();
// End Cross Module References
	static UEnum* E__ENiagaraCoordinateSpace__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraCoordinateSpace"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraCoordinateSpace")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraCoordinateSpace__pf, EnumPackage, TEXT("ENiagaraCoordinateSpace"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraCoordinateSpace__pf>()
	{
		return E__ENiagaraCoordinateSpace__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraCoordinateSpace__pf(E__ENiagaraCoordinateSpace__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraCoordinateSpace"), TEXT("ENiagaraCoordinateSpace"), true, TEXT("/Niagara/Enums/ENiagaraCoordinateSpace"), TEXT("/Niagara/Enums/ENiagaraCoordinateSpace.ENiagaraCoordinateSpace"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraCoordinateSpace__pf_Hash() { return 1403853297U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraCoordinateSpace__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraCoordinateSpace"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraCoordinateSpace"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraCoordinateSpace__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraCoordinateSpace::NewEnumerator0", (int64)E__ENiagaraCoordinateSpace__pf::NewEnumerator0 },
				{ "ENiagaraCoordinateSpace::NewEnumerator1", (int64)E__ENiagaraCoordinateSpace__pf::NewEnumerator1 },
				{ "ENiagaraCoordinateSpace::NewEnumerator2", (int64)E__ENiagaraCoordinateSpace__pf::NewEnumerator2 },
				{ "ENiagaraCoordinateSpace::ENiagaraCoordinateSpace_MAX", (int64)E__ENiagaraCoordinateSpace__pf::E__ENiagaraCoordinateSpace__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraCoordinateSpace__pf_MAX.Name", "E__ENiagaraCoordinateSpace__pf::E__ENiagaraCoordinateSpace__pf_MAX" },
				{ "E__ENiagaraCoordinateSpace__pf_MAX.OverrideName", "ENiagaraCoordinateSpace::ENiagaraCoordinateSpace_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraCoordinateSpace__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraCoordinateSpace__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraCoordinateSpace__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraCoordinateSpace::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraCoordinateSpace__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraCoordinateSpace::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraCoordinateSpace__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraCoordinateSpace::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraCoordinateSpace" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraCoordinateSpace.ENiagaraCoordinateSpace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraCoordinateSpace")); },
				E__ENiagaraCoordinateSpace__pf__GetUserFriendlyName,
				"ENiagaraCoordinateSpace",
				"E__ENiagaraCoordinateSpace__pf",
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
