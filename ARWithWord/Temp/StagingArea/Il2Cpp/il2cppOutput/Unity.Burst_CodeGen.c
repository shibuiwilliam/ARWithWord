#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Burst.BurstCompileAttribute::.ctor()
extern void BurstCompileAttribute__ctor_m75F0EF699FB9E5AD644F26B04ACE674ED2C81628 (void);
// 0x00000002 System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void BurstRuntime_Log_mA326750916D8B27060FFE335CFE3BB74F12E8632 (void);
// 0x00000003 System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor()
extern void PreserveAttribute__ctor_m03ACCEB4A3006FFF47CF22847FDC44963A6775DE (void);
// 0x00000004 System.Void Unity.Burst.NoAliasAttribute::.ctor()
extern void NoAliasAttribute__ctor_m65CF044E3C3FA402BC99AB689CC86F4A566E2D4A (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	BurstCompileAttribute__ctor_m75F0EF699FB9E5AD644F26B04ACE674ED2C81628,
	BurstRuntime_Log_mA326750916D8B27060FFE335CFE3BB74F12E8632,
	PreserveAttribute__ctor_m03ACCEB4A3006FFF47CF22847FDC44963A6775DE,
	NoAliasAttribute__ctor_m65CF044E3C3FA402BC99AB689CC86F4A566E2D4A,
};
static const int32_t s_InvokerIndices[4] = 
{
	2260,
	2840,
	2260,
	2260,
};
extern const CustomAttributesCacheGenerator g_Unity_Burst_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Burst_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Burst_CodeGenModule = 
{
	"Unity.Burst.dll",
	4,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Burst_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
