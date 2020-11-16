#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_ObjectiveData__pf272261436.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData.S_ObjectiveData", OverrideNativeName="S_ObjectiveData"))
struct FS_ObjectiveData__pf272261436
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Objective_Text_On_HUD", Tooltip, OverrideNativeName="Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51"))
	FText bpv__Objective_Text_On_HUD_8_348F398B4EB5EC548FD378B2B2B19C51__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="IsCompleted", Tooltip, OverrideNativeName="IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD"))
	bool bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf;
	FS_ObjectiveData__pf272261436();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_ObjectiveData__pf272261436& __Other) const
	{
		return FS_ObjectiveData__pf272261436::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
