// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/S_ObjectiveData__pf272261436.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_ObjectiveData__pf272261436() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436();
// End Cross Module References
class UScriptStruct* FS_ObjectiveData__pf272261436::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("S_ObjectiveData")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436, StructPackage, TEXT("S_ObjectiveData"), sizeof(FS_ObjectiveData__pf272261436), Get_Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FS_ObjectiveData__pf272261436>()
{
	return FS_ObjectiveData__pf272261436::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ObjectiveData__pf272261436(FS_ObjectiveData__pf272261436::StaticStruct, TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"), TEXT("S_ObjectiveData"), true, TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"), TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData.S_ObjectiveData"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFS_ObjectiveData__pf272261436
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFS_ObjectiveData__pf272261436()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ObjectiveData")),new UScriptStruct::TCppStructOps<FS_ObjectiveData__pf272261436>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFS_ObjectiveData__pf272261436;
	struct Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_MetaData[];
#endif
		static void NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/S_ObjectiveData__pf272261436.h" },
		{ "OverrideNativeName", "S_ObjectiveData" },
		{ "ReplaceConverted", "/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData.S_ObjectiveData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ObjectiveData__pf272261436>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_MetaData[] = {
		{ "Category", "S_ObjectiveData__pf272261436" },
		{ "DisplayName", "IsCompleted" },
		{ "ModuleRelativePath", "Public/S_ObjectiveData__pf272261436.h" },
		{ "OverrideNativeName", "IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_SetBit(void* Obj)
	{
		((FS_ObjectiveData__pf272261436*)Obj)->bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf = { "IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ObjectiveData__pf272261436), &Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf_MetaData[] = {
		{ "Category", "S_ObjectiveData__pf272261436" },
		{ "DisplayName", "Objective_Text_On_HUD" },
		{ "ModuleRelativePath", "Public/S_ObjectiveData__pf272261436.h" },
		{ "OverrideNativeName", "Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf = { "Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ObjectiveData__pf272261436, bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::NewProp_bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"S_ObjectiveData",
		sizeof(FS_ObjectiveData__pf272261436),
		alignof(FS_ObjectiveData__pf272261436),
		Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ObjectiveData"), sizeof(FS_ObjectiveData__pf272261436), Get_Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ObjectiveData__pf272261436_Hash() { return 1707884279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
