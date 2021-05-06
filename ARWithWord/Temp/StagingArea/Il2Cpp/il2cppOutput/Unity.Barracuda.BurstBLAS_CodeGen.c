#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean Unity.Barracuda.BurstBLAS::IsNative()
extern void BurstBLAS_IsNative_m77585B97BB890CB54DB68EB2F18F06F777546B1B (void);
// 0x00000002 System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported()
extern void BurstBLAS_IsCurrentPlatformSupported_m3ED8F95B69E7C69EB66807DA08612A0F51463682 (void);
// 0x00000003 System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_SGEMM_mA5159A52C4AA70D7D9CACDBCC940318C04031745 (void);
// 0x00000004 Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_ScheduleSGEMM_m9B77247DAACA6D740DBAAE4C856C054CEEA4EC20 (void);
// 0x00000005 System.Void Unity.Barracuda.BurstBLAS::.ctor()
extern void BurstBLAS__ctor_m4C793DE6A3B23E1EBF7FF90D2D4F9E576946C3D5 (void);
// 0x00000006 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::Execute(System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m756AA12242AFBC35BA54277172DFC5D3B4CDC27F (void);
// 0x00000007 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverColB(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_m4DF89FDC30D530D561933C66707246F490506372 (void);
// 0x00000008 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverRowA(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_mA8AB95D6192218ECA0AF0646D115FC61F6BD3CEF (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	BurstBLAS_IsNative_m77585B97BB890CB54DB68EB2F18F06F777546B1B,
	BurstBLAS_IsCurrentPlatformSupported_m3ED8F95B69E7C69EB66807DA08612A0F51463682,
	BurstBLAS_SGEMM_mA5159A52C4AA70D7D9CACDBCC940318C04031745,
	BurstBLAS_ScheduleSGEMM_m9B77247DAACA6D740DBAAE4C856C054CEEA4EC20,
	BurstBLAS__ctor_m4C793DE6A3B23E1EBF7FF90D2D4F9E576946C3D5,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m756AA12242AFBC35BA54277172DFC5D3B4CDC27F,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_m4DF89FDC30D530D561933C66707246F490506372,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_mA8AB95D6192218ECA0AF0646D115FC61F6BD3CEF,
};
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m756AA12242AFBC35BA54277172DFC5D3B4CDC27F_AdjustorThunk (void);
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_m4DF89FDC30D530D561933C66707246F490506372_AdjustorThunk (void);
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_mA8AB95D6192218ECA0AF0646D115FC61F6BD3CEF_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x06000006, UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m756AA12242AFBC35BA54277172DFC5D3B4CDC27F_AdjustorThunk },
	{ 0x06000007, UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_m4DF89FDC30D530D561933C66707246F490506372_AdjustorThunk },
	{ 0x06000008, UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_mA8AB95D6192218ECA0AF0646D115FC61F6BD3CEF_AdjustorThunk },
};
static const int32_t s_InvokerIndices[8] = 
{
	2247,
	2247,
	2,
	0,
	2260,
	1833,
	345,
	345,
};
extern const CustomAttributesCacheGenerator g_Unity_Barracuda_BurstBLAS_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLAS_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLAS_CodeGenModule = 
{
	"Unity.Barracuda.BurstBLAS.dll",
	8,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Barracuda_BurstBLAS_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
