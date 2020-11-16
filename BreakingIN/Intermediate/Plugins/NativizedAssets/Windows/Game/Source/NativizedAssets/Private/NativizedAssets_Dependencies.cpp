#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef()
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 0));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
