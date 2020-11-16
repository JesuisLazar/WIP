#include "NativizedAssets.h"
#include "S_ObjectiveData__pf272261436.h"
FS_ObjectiveData__pf272261436::FS_ObjectiveData__pf272261436()
{
	bpv__IsCompleted_10_1BD63083469C2FDD0D9FDD9F131852AD__pf = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_ObjectiveData__pf272261436::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_ObjectiveData__pf272261436
{
	FRegisterHelper__FS_ObjectiveData__pf272261436()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/TSS_Game/Blueprints/Objective_System/System/S_ObjectiveData"), &FS_ObjectiveData__pf272261436::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_ObjectiveData__pf272261436 Instance;
};
FRegisterHelper__FS_ObjectiveData__pf272261436 FRegisterHelper__FS_ObjectiveData__pf272261436::Instance;
