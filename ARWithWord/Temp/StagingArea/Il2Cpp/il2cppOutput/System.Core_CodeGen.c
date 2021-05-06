#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x0000000A System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000B System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000010 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000001B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x00000020 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Double System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Double>)
extern void Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F (void);
// 0x00000028 System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (void);
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000032 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000033 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000034 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000050 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000051 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000054 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x00000055 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x00000056 System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x00000058 TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000059 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x0000005A System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x0000005B System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005C System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005D System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000005E System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000005F System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000060 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<SkipIterator>d__31`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000087 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000088 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x00000089 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000008A TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000008B System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000008C System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000008D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000008E System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x00000090 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x00000091 System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x00000092 System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x00000093 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x00000094 System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x00000095 System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x00000096 System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x00000097 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000098 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000099 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x0000009A TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000009B TKey System.Linq.IGrouping`2::get_Key()
// 0x0000009C System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000009D System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000009E System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000009F System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A0 System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x000000A1 System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x000000A2 System.Void System.Linq.Lookup`2::Resize()
// 0x000000A3 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x000000A4 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x000000A5 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A6 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x000000A7 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x000000A8 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x000000A9 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x000000AA System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x000000AB System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x000000AC System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x000000AD System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x000000AE System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x000000AF System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x000000B0 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x000000B1 TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x000000B2 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x000000B3 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x000000B4 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x000000B5 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x000000B6 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x000000B7 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000B8 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x000000B9 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x000000BA System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x000000BB System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x000000BC System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x000000BD System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x000000BE System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x000000BF System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x000000C0 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x000000C1 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000C2 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x000000C3 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000C4 System.Void System.Linq.Set`1::Resize()
// 0x000000C5 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000C6 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000C7 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000C8 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C9 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000CA System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000CB System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000CC System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000CD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000CE System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000CF System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000D0 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000D1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000D2 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000D3 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000D4 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000D5 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000D6 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000D7 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000D8 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000D9 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000DA System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000DB System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000DC System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000DD System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000DE TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000DF System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000E0 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000E1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000E3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000E4 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000E5 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000E6 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000E7 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000E8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000E9 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000EA System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000EB System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000EC System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000ED System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000EE System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000EF System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000F0 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000F1 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000F2 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000F3 System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000F4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000F5 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000F6 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000F7 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000F8 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000F9 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000FA System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000FB System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000FC System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000FD System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000FE System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000FF System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000100 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000101 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000102 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000103 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000104 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[260] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F,
	Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[260] = 
{
	3740,
	3740,
	3845,
	3845,
	3845,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3299,
	3299,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3659,
	3781,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1833,
	2260,
	2247,
	2214,
	2260,
	2227,
	2227,
	2227,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 94, 4 } },
	{ 0x02000005, { 98, 9 } },
	{ 0x02000006, { 109, 7 } },
	{ 0x02000007, { 118, 10 } },
	{ 0x02000008, { 130, 11 } },
	{ 0x02000009, { 144, 9 } },
	{ 0x0200000A, { 156, 12 } },
	{ 0x0200000B, { 171, 9 } },
	{ 0x0200000C, { 180, 1 } },
	{ 0x0200000D, { 181, 2 } },
	{ 0x0200000E, { 183, 8 } },
	{ 0x0200000F, { 191, 8 } },
	{ 0x02000010, { 199, 9 } },
	{ 0x02000011, { 208, 12 } },
	{ 0x02000012, { 220, 11 } },
	{ 0x02000014, { 231, 4 } },
	{ 0x02000015, { 235, 3 } },
	{ 0x02000018, { 238, 17 } },
	{ 0x02000019, { 259, 5 } },
	{ 0x0200001A, { 264, 1 } },
	{ 0x0200001C, { 265, 8 } },
	{ 0x0200001E, { 273, 4 } },
	{ 0x0200001F, { 277, 3 } },
	{ 0x02000020, { 280, 5 } },
	{ 0x02000021, { 285, 7 } },
	{ 0x02000022, { 292, 3 } },
	{ 0x02000023, { 295, 7 } },
	{ 0x02000024, { 302, 4 } },
	{ 0x02000025, { 306, 36 } },
	{ 0x02000027, { 342, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 1 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 5 } },
	{ 0x0600000B, { 28, 5 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 2 } },
	{ 0x06000011, { 41, 4 } },
	{ 0x06000012, { 45, 1 } },
	{ 0x06000013, { 46, 2 } },
	{ 0x06000014, { 48, 1 } },
	{ 0x06000015, { 49, 2 } },
	{ 0x06000016, { 51, 1 } },
	{ 0x06000017, { 52, 2 } },
	{ 0x06000018, { 54, 3 } },
	{ 0x06000019, { 57, 2 } },
	{ 0x0600001A, { 59, 1 } },
	{ 0x0600001B, { 60, 7 } },
	{ 0x0600001C, { 67, 4 } },
	{ 0x0600001D, { 71, 4 } },
	{ 0x0600001E, { 75, 3 } },
	{ 0x06000021, { 78, 1 } },
	{ 0x06000022, { 79, 3 } },
	{ 0x06000023, { 82, 2 } },
	{ 0x06000024, { 84, 2 } },
	{ 0x06000025, { 86, 5 } },
	{ 0x06000026, { 91, 3 } },
	{ 0x06000038, { 107, 2 } },
	{ 0x0600003D, { 116, 2 } },
	{ 0x06000042, { 128, 2 } },
	{ 0x06000048, { 141, 3 } },
	{ 0x0600004D, { 153, 3 } },
	{ 0x06000052, { 168, 3 } },
	{ 0x0600009C, { 255, 4 } },
};
extern const uint32_t g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B;
extern const uint32_t g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0;
extern const uint32_t g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848;
extern const uint32_t g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490;
extern const uint32_t g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58;
extern const uint32_t g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1;
extern const uint32_t g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB;
extern const uint32_t g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA;
extern const uint32_t g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808;
extern const uint32_t g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B;
extern const uint32_t g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6;
extern const uint32_t g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF;
extern const uint32_t g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3;
extern const uint32_t g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179;
extern const uint32_t g_rgctx_Enumerable_TakeIterator_TisTSource_tF3366CFD4DCD52902E2CE09433D6FD7735E2D98E_m295BA530E891866CE107E18EDFCE5C61D68BD697;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_t4C8C0490AF33B4114CC11E8F75A4C1C49A86AA20;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_m0B3BE357A393886A01224F0B9AD836C26C630F52;
extern const uint32_t g_rgctx_Enumerable_SkipIterator_TisTSource_tE09DF6BF09FD67E41182B2382ADD2B50F9E3B03D_m743B13F6FBBDC737FC12A875115CBA1C17058FF2;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1_t5B0C61B18A6114A4A055F88065B039186EFEBC48;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1__ctor_mEA2F08CEDEC73FD80CC1F3F9B7843E1267CE0ED4;
extern const uint32_t g_rgctx_OrderedEnumerable_2_t31485349BBB6CA67C193DB2624D732B5853B8407;
extern const uint32_t g_rgctx_OrderedEnumerable_2__ctor_m57D4BF536D0DEC8A197A0D64409B421680B81355;
extern const uint32_t g_rgctx_IdentityFunction_1_get_Instance_m1A77E9818F635D55140642F02849D2AA85B8F778;
extern const uint32_t g_rgctx_IdentityFunction_1_tD013A3A14D3E15B5C2833B1A48952EA4B5DC24CB;
extern const uint32_t g_rgctx_GroupedEnumerable_3_tF761B2627937F0E9C3BD596171DE0A56F2B2964F;
extern const uint32_t g_rgctx_GroupedEnumerable_3__ctor_m70CF123FD7771AA23B4141CFACD84ABCB43B493A;
extern const uint32_t g_rgctx_Enumerable_ConcatIterator_TisTSource_t297F77390F553F1684D830856740144CFED83750_mD559ECA09522E58682C12789F938B33483D0E806;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_tFF0B4ABF7559F46F5A75AE75DC630A9D53AE4FFA;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1__ctor_m3994144574961AEB580CDC7661FAAD493ED61BDE;
extern const uint32_t g_rgctx_Enumerable_IntersectIterator_TisTSource_tAEE16E3C4AA581A1C3F0AAD5915E83179596A1E6_m82E7C15C67F8C57318276CD00859F14194D05A7F;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1_t4EA5FAD9A89EB7F6F1799B1BB15666648F13EADF;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1__ctor_m1534F9B9629A96AF35CEED5BF09A07CE39B22868;
extern const uint32_t g_rgctx_Enumerable_ExceptIterator_TisTSource_tC26C808AF785D907C89C395B10598E48281E5EE9_m17533549BF64609028972EBB1C241FA258FD521E;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1_tE421CACD8B2C41696C4A0509A42C04727CC0D8BE;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1__ctor_mE282871FD7761FFCAD875DB274E6B4233E728618;
extern const uint32_t g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329;
extern const uint32_t g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17;
extern const uint32_t g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D;
extern const uint32_t g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC;
extern const uint32_t g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_t19423240346ACEC4AF55B24140BB2C7ADF5A6D39_TisTKey_t532447C86922973EBD470371CD124C7DBF65E388_TisTElement_t4199B14C218D0409971FAD2B8AC3E503C3623C6B_m0F42B4EF33BF02398FD2CCA453C8BEE8E89C1EAB;
extern const uint32_t g_rgctx_Dictionary_2_t4493E1FD07BF64FFF852549818E1A30F659F9A65;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mD41414684F251E23FD44D934A1945B01AD6AD9A2;
extern const uint32_t g_rgctx_IEnumerable_1_tCA075AB376DFE408D8AC0126F02F6DC6572D8BAF;
extern const uint32_t g_rgctx_IEnumerator_1_t9881C285459458035F332F77470133CE23395912;
extern const uint32_t g_rgctx_Func_2_Invoke_mDE2993D7792ED60CE6B2615F06D9A309722B6036;
extern const uint32_t g_rgctx_Func_2_Invoke_m0C49A8E0C74B4F1C9482029D070F346D4B3D41F3;
extern const uint32_t g_rgctx_Dictionary_2_Add_mCA6DDF4DD83D83BA22FD47B269C8571F5DEC1AA0;
extern const uint32_t g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0;
extern const uint32_t g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944;
extern const uint32_t g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371;
extern const uint32_t g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A;
extern const uint32_t g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74;
extern const uint32_t g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB;
extern const uint32_t g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB;
extern const uint32_t g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F;
extern const uint32_t g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE;
extern const uint32_t g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074;
extern const uint32_t g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736;
extern const uint32_t g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859;
extern const uint32_t g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F;
extern const uint32_t g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D;
extern const uint32_t g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF;
extern const uint32_t g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D;
extern const uint32_t g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353;
extern const uint32_t g_rgctx_ICollection_1_t12A52A64081A5954F5F3EA1E13DAF2587E8C57DE;
extern const uint32_t g_rgctx_Enumerable_Contains_TisTSource_t941CC4C3B89ECA76D1FAFE3BC385974F6C8372B2_m7B5F33A4BBBBE98861FC9B38AEE5090109400C8C;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0DD948D8CCA4C1DA30E417512F50E4F463CFEBC2;
extern const uint32_t g_rgctx_EqualityComparer_1_tC54E5776F429F385C6E93384568ABC1174A92F62;
extern const uint32_t g_rgctx_IEnumerable_1_t1C203359ED16BCC43AC4805C465D8D500686ADA8;
extern const uint32_t g_rgctx_IEnumerator_1_t102BE58A70A4033CB1BCB8B4D26DFB372CE314D2;
extern const uint32_t g_rgctx_IEqualityComparer_1_t0F97F8650BAFC726D27A22B8B8478C2C7DC2B103;
extern const uint32_t g_rgctx_IEnumerable_1_tB1A48896AE4AD2DC0A724EF2C9F79315E731FFD7;
extern const uint32_t g_rgctx_IEnumerator_1_t0662DFF50E1A31918E63C21AFCBFA758FDC7B5A6;
extern const uint32_t g_rgctx_Func_3_Invoke_m405C500E018D0A969F646C66431A6CAC1EB9B74A;
extern const uint32_t g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88;
extern const uint32_t g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E;
extern const uint32_t g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66;
extern const uint32_t g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A;
extern const uint32_t g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6;
extern const uint32_t g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36;
extern const uint32_t g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A;
extern const uint32_t g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917;
extern const uint32_t g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40;
extern const uint32_t g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F;
extern const uint32_t g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85;
extern const uint32_t g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557;
extern const uint32_t g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E;
extern const uint32_t g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065;
extern const uint32_t g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB;
extern const uint32_t g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916;
extern const uint32_t g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1;
extern const uint32_t g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E;
extern const uint32_t g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555;
extern const uint32_t g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8;
extern const uint32_t g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032;
extern const uint32_t g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8;
extern const uint32_t g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2;
extern const uint32_t g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC;
extern const uint32_t g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556;
extern const uint32_t g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C;
extern const uint32_t g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0;
extern const uint32_t g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23;
extern const uint32_t g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78;
extern const uint32_t g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C;
extern const uint32_t g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300;
extern const uint32_t g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD;
extern const uint32_t g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45;
extern const uint32_t g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884;
extern const uint32_t g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C;
extern const uint32_t g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_U3CU3Em__Finally1_m176ABA9BF1EA498EA2F2F01E0743A5538DDCFD13;
extern const uint32_t g_rgctx_IEnumerable_1_tFDB4CD57E31B1A3A65CDEBC3787B908266388742;
extern const uint32_t g_rgctx_IEnumerator_1_t4E545E145CBECE5B499444F9E732D80FC5911E4E;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_System_IDisposable_Dispose_m81DE20DFA4A3A4BBE4D0FF97F703B95CE41E5D94;
extern const uint32_t g_rgctx_TSource_t768AD0D4D2D29E0079C31B83410396711C26DC64;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_tD155B0BA81CE6333AB2D82709BA9143DC355FC6A;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_mCC56FA4F2D409DCF46F2CE4512581053196E0A7B;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m6496161F40BE26EE1B6D17A6C4C1EA33E12D0C48;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1_U3CU3Em__Finally1_mFF40AA73C441500B889D07CE2ED41A03328A9442;
extern const uint32_t g_rgctx_IEnumerable_1_t682C547790456550FC58CEEE61C7F154BF14D087;
extern const uint32_t g_rgctx_IEnumerator_1_t35B6D33C33D7B8862FCEAA36EA0028D293067499;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1_System_IDisposable_Dispose_mC0EF06616EAE9AA72D98994650E131BA4751AC6B;
extern const uint32_t g_rgctx_TSource_t6BA6A3F223D28F04AD97EF1B02FE96F3C9F690DE;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1_t60357AA7463E953763FE105A95C12ED0BDCC455B;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1__ctor_mDAB5202A80B7A9456C9C97D03C53BA753C19AF33;
extern const uint32_t g_rgctx_U3CSkipIteratorU3Ed__31_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7A1276E9C953800F0D508CA8B394B3ECC7A206EA;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally1_mFBA25A865CC96B0C1663DD9C53D65438297FD6E6;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally2_mE335481FB2F508C6E3C00CE0FDB35CF9DE69FC96;
extern const uint32_t g_rgctx_IEnumerable_1_t766E549AC1BC19292A2BAC8724A95AE270FE8320;
extern const uint32_t g_rgctx_IEnumerator_1_tA418E67FA858A9C1451D7ED10F3257720DDA03CE;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_System_IDisposable_Dispose_m4F13EDAF3DB4F80F6A52130673D396709E30A7BD;
extern const uint32_t g_rgctx_TSource_t7A58FCA1A797E781B5C65F00401812BDF4B8CBB5;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_tA87EAAF72DB90087249A510F9E26A8403AEC8464;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1__ctor_m33E4865420F91E26F36841C5070791EB4BD76576;
extern const uint32_t g_rgctx_U3CConcatIteratorU3Ed__59_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m20BCF500657BD79741BC32AFC2A9D0FB5F84EF59;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1_U3CU3Em__Finally1_mFEB03623D06B6BE2A014E9BF21DD4B60BD5642F6;
extern const uint32_t g_rgctx_Set_1_tA80C0BE68BC40FE585464454D74F59550CB7CB34;
extern const uint32_t g_rgctx_Set_1__ctor_mF05BE0E80601EFE4AA58D8F91C7311CB6DF362EE;
extern const uint32_t g_rgctx_IEnumerable_1_t953C510F86463E6FDC6BCDE5FCF9AA529D5355AE;
extern const uint32_t g_rgctx_IEnumerator_1_tF915F179CB843B56D0349A03D6F9A6CE29082BD4;
extern const uint32_t g_rgctx_Set_1_Add_m147AABA0DBE85900C1E4C8CF85EAABFB8E2F0B90;
extern const uint32_t g_rgctx_Set_1_Remove_mA25133C8C74FFCC9AADE5DFC4FBF1E9067B593F7;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1_System_IDisposable_Dispose_m780E5A0C32F1717E3C18A61C8E0ED36F57AEA10D;
extern const uint32_t g_rgctx_TSource_tF9AFDA31641C29DF00B32A2E6D0335981E535B6F;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1_t015A9F147C4D32C97DE2BE1E5134C2AD5B728CDE;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1__ctor_m0F1E0630225CDAFA79115D824B1A28FF8C4E34CA;
extern const uint32_t g_rgctx_U3CIntersectIteratorU3Ed__74_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mDFCC6C9FC2924541D2A2F8CADA2BB420ADA9DAB3;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1_U3CU3Em__Finally1_m89992816763E2C893B48CF1AAE9156AE4C51763C;
extern const uint32_t g_rgctx_Set_1_t49018D78DF9F83AE3F4E2EE4DEDD411A739AA951;
extern const uint32_t g_rgctx_Set_1__ctor_m45D721648015AB1443636C59E1751220E0CC5202;
extern const uint32_t g_rgctx_IEnumerable_1_t6585EC67F6204C8ABD863CA6E0FEC96BB0CCF779;
extern const uint32_t g_rgctx_IEnumerator_1_tC677243A336969CE5B7744F980C619EE4793CE6C;
extern const uint32_t g_rgctx_Set_1_Add_m1BDA72D1A99B28E89DFAE187935035DB6D0B0E05;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1_System_IDisposable_Dispose_m0FEDF00EE261B56064CEF01307FBBE40C4E6042D;
extern const uint32_t g_rgctx_TSource_t06F14B9447CB1DF1BE7ADC29C89A9FF93ED5B59F;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1_t2B6FA99E0EBF05E58224CD86B0C00A8DDD6E539B;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1__ctor_m1B005AC9D2F3D6202EAB7B545A6DA17677F16343;
extern const uint32_t g_rgctx_U3CExceptIteratorU3Ed__77_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m93F2D542577194D1A1FA8B8D01F6FCA7187DBA7C;
extern const uint32_t g_rgctx_U3CU3Ec_t7E02E403CA9127A9E60A070AC6D66CC5D5919ADF;
extern const uint32_t g_rgctx_U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mA24100AAA0DA5F4EA14A51A50CDEE9290F87359D;
extern const uint32_t g_rgctx_Func_2_tD96FE9EE31E42E3126747DE11110BC8F62D6D2F4;
extern const uint32_t g_rgctx_Func_2__ctor_m68577F978A4FEF7E046AB64788F58B063ABDEB11;
extern const uint32_t g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_m9F59EC7929C1D1080EFF3EEF94384EF4AA298512;
extern const uint32_t g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1;
extern const uint32_t g_rgctx_Lookup_2_t31F78E93BFB846CA2D3944E40B03A4E3DDE6A614;
extern const uint32_t g_rgctx_Lookup_2__ctor_m920FA1A67420F30E9A99A73F74935FE16CCB7DCA;
extern const uint32_t g_rgctx_Lookup_2_GetGrouping_mF28388BA6DC02F7A11003230B0771761E177B3CC;
extern const uint32_t g_rgctx_Grouping_Add_mD047324E5C6CE07A23F1DA7706A5FA0C0C85C35E;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mE0AFD303A3D49228C108C783196526C2C2838738;
extern const uint32_t g_rgctx_EqualityComparer_1_t39547BB62FDF2E0458C9D1F98B99BB7805A21514;
extern const uint32_t g_rgctx_GroupingU5BU5D_t15D97B6173684F736466731E6C0E0971702DA4FE;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__12_t537CE71AF0C2B3F5D94C27A91CB4DD4EA9861355;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__12__ctor_m122E85D9A70BD3EACB7CA4BA53B6213686F869A6;
extern const uint32_t g_rgctx_Lookup_2_GetEnumerator_m5AA3B1BE4D03D1D36A98D1AFBD4607C3EBB244D9;
extern const uint32_t g_rgctx_TKey_t7518B94CFEBCBDFD89737409C77350621A54669D;
extern const uint32_t g_rgctx_IEqualityComparer_1_tCF9369A523FE68BDDE93FD47541225C476900953;
extern const uint32_t g_rgctx_Lookup_2_InternalGetHashCode_m8BA5731C950E4C5F090FFB985B505389AE540D49;
extern const uint32_t g_rgctx_Lookup_2_Resize_mC4A2772C5D27527B873AF6670CB5A6F2B4E057BE;
extern const uint32_t g_rgctx_Grouping_tE74A3126B3267FC0587D6D5E2EF780D29E9DC649;
extern const uint32_t g_rgctx_Grouping__ctor_mA40B18DDB0B49A2ED79B524B505E9DB8998BF3FA;
extern const uint32_t g_rgctx_TElementU5BU5D_t93028857AD2A56FDA6CD6DC458BFC620AAD8391E;
extern const uint32_t g_rgctx_IEnumerable_1_t2C868C873DF7EA4359385DAF53CA7ACB96CB956D;
extern const uint32_t g_rgctx_IEnumerator_1_tBF322ED7F64E0A111FA43366F150AAFE05A86157;
extern const uint32_t g_rgctx_Func_2_Invoke_m36C8A424F3E14B2A8980522FE7F7172B5C6C728B;
extern const uint32_t g_rgctx_Func_2_Invoke_m82A6879D5450E7E851761E8D1FD962AEA657B40D;
extern const uint32_t g_rgctx_Array_Resize_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_mF5EC1E0159713C021C2EEC50106327242688BCAC;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__7_t6A6AE7D01D29BDC1764289562767205A6F06561E;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__7__ctor_mB54EDFF4FE9E97CBFC8C5B16C41EF764B290593B;
extern const uint32_t g_rgctx_Grouping_GetEnumerator_m13259DF1A2CA7716091F4A36EF9DCA6F6C8BF003;
extern const uint32_t g_rgctx_Array_IndexOf_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_m0E27A4B8C4E4C0E5CEF80A9BD51D0DC319649D6A;
extern const uint32_t g_rgctx_TElement_tDE19722F134B9431747709B2914E337ADEB691C1;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0ACEA98E0F309527422B734EC2D6F838F42E855A;
extern const uint32_t g_rgctx_EqualityComparer_1_tE98C8758DC67BAC10BC58A6EAF2BC7702037261D;
extern const uint32_t g_rgctx_SlotU5BU5D_t59C5931DEEAB28C10C90F90194F7BA255205FF0C;
extern const uint32_t g_rgctx_Set_1_Find_m960A4C3A4D4AA1B1E999EF848750BBE1A7D926F7;
extern const uint32_t g_rgctx_Set_1_InternalGetHashCode_m9B51B4A88084A8FDB38514325ECF1F61E2D272DA;
extern const uint32_t g_rgctx_IEqualityComparer_1_t3CB967F967F4706563FB9E277A60032CD22D6832;
extern const uint32_t g_rgctx_Set_1_Resize_m93FE9D1D00D5F0FC34818A15B4F62F95E55F075A;
extern const uint32_t g_rgctx_TElement_t675859134FC8712282763A8D72CA128B8B43DD5D;
extern const uint32_t g_rgctx_Lookup_2_Create_TisTSource_t95933129C248BBBE3B532BA8CFB5350A22311796_m141D6282A56A115DE5D096179676481A9802E0E2;
extern const uint32_t g_rgctx_Lookup_2_t18A588C0C5E56D50B17CDE7ED4798AECE00E5A2E;
extern const uint32_t g_rgctx_Lookup_2_GetEnumerator_mA3662CF25C60F4598B6A586071A5A2B11A39BB64;
extern const uint32_t g_rgctx_GroupedEnumerable_3_GetEnumerator_m7308C41BCA816D940D195E8651272EC1C27A4CEF;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1_t5D0486AEAB09755AF78B220EFA015EA86540C4B3;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD7AD8598EA220AE5C3472A7151BCEB208DA7F24F;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerator_m6DF22CD2A54FD98EE9BC3A07367C286B21F9547B;
extern const uint32_t g_rgctx_Buffer_1_t7BF1A786B9BDA7D98997098F206D9FBEB8E805CE;
extern const uint32_t g_rgctx_Buffer_1__ctor_m63F874F7E854E3962714E8472CB132C035CC416B;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m66C26D4385449EA5B7AC0AAAE558E827A547B8CF;
extern const uint32_t g_rgctx_EnumerableSorter_1_Sort_m02DC1D19B109171CC6F0A97CA1A3A494A2F08F31;
extern const uint32_t g_rgctx_TElement_t333B92C559EDB1DAA4DB3278851F903367748A99;
extern const uint32_t g_rgctx_OrderedEnumerable_1__ctor_mE30DC877F0F5D6F8AC240D104550276A35B6852C;
extern const uint32_t g_rgctx_OrderedEnumerable_1_t50B50FFBA4235D6A79D0BD205B625DE23059AB4A;
extern const uint32_t g_rgctx_Comparer_1_get_Default_m9E7E2CD7BBA500D9A9731C5906809FCBA65E1E30;
extern const uint32_t g_rgctx_Comparer_1_tD0DB8DA2AE74C852F854EA8D9376FBD40626907C;
extern const uint32_t g_rgctx_EnumerableSorter_2_t2CEA9D5447B2F9F77A2272EFB103B886DA6A1420;
extern const uint32_t g_rgctx_EnumerableSorter_2__ctor_m100971C016BC2A43E309CE5E2D698B9D1588B033;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_mA88206BAC41B269377165C986FA5703FE0D98BF1;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_m83D519A95C8BF3E64F4C001F694C1BA6B5AAA627;
extern const uint32_t g_rgctx_EnumerableSorter_1_QuickSort_m1624C8412F34C475233B33FFFB9B72B17B8AB15F;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_m97F1B0F4295DCEC1F4D25AA1460D635ABDB083D7;
extern const uint32_t g_rgctx_EnumerableSorter_1__ctor_mCF1F7D79B54CC4982ACC920B5FC4820B6761D497;
extern const uint32_t g_rgctx_EnumerableSorter_1_tD898552BB1412C8F871ECEF9E1E52EB11D1D9433;
extern const uint32_t g_rgctx_TKeyU5BU5D_t6537368C948F1BE34C63755A2D32DD5D17382867;
extern const uint32_t g_rgctx_Func_2_Invoke_m5B02612CC97C4353D26D2A468F97D6FF5F3BFFA8;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_m0E1B75812073569AF348E2322C90C5326D95A0BC;
extern const uint32_t g_rgctx_IComparer_1_t885D3AAA10BAAD12BD427225987B0FD222695EBA;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_m4A804932C38687AA4E0B8569DB03D36A04BBEE46;
extern const uint32_t g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B;
extern const uint32_t g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60;
extern const uint32_t g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28;
extern const uint32_t g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E;
extern const uint32_t g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF;
extern const uint32_t g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB;
extern const uint32_t g_rgctx_HashSet_1__ctor_m9B732C5C36D11AAEFABF7CEC13EDFF253C50A64D;
extern const uint32_t g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328;
extern const uint32_t g_rgctx_HashSet_1_AreEqualityComparersEqual_m58983B4575A37B747D2D07FDCBB7C63D16D601BC;
extern const uint32_t g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328;
extern const uint32_t g_rgctx_HashSet_1_CopyFrom_m96F2513C029CF917546FD4A8EDFF667539B528BD;
extern const uint32_t g_rgctx_ICollection_1_tB68883F0155714DC8456B3030A8B6D79432B214F;
extern const uint32_t g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820;
extern const uint32_t g_rgctx_HashSet_1_UnionWith_mF3EE8BDDCB380567655AE83AA914CEBA69B92308;
extern const uint32_t g_rgctx_HashSet_1_TrimExcess_mEFE2B4AAE58BB50B40FAC84540B4EF632713E197;
extern const uint32_t g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C;
extern const uint32_t g_rgctx_HashSet_1_AddValue_m601C62BF19E00BFC28BF9E7EF8DEF0FDF5B69C23;
extern const uint32_t g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A;
extern const uint32_t g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B;
extern const uint32_t g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794;
extern const uint32_t g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31;
extern const uint32_t g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_IEnumerable_1_t8524277609871504BAA6201A8229336029777E46;
extern const uint32_t g_rgctx_IEnumerator_1_t9A7C0233E00E7973685F97271E6352DFDE72107B;
extern const uint32_t g_rgctx_HashSet_1_Clear_mE07A83BF7C976375EE57F61CCB2E078693465384;
extern const uint32_t g_rgctx_HashSet_1_Remove_m9E6FD58401890326632CE70F7AB9FBE73951897F;
extern const uint32_t g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810;
extern const uint32_t g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB;
extern const uint32_t g_rgctx_HashSet_1_get_Comparer_mD071150836E79AA358BC57DA040ED915A7051CCF;
extern const uint32_t g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA;
extern const uint32_t g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8;
extern const uint32_t g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A;
static const Il2CppRGCTXDefinition s_rgctxValues[344] = 
{
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_TakeIterator_TisTSource_tF3366CFD4DCD52902E2CE09433D6FD7735E2D98E_m295BA530E891866CE107E18EDFCE5C61D68BD697 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_t4C8C0490AF33B4114CC11E8F75A4C1C49A86AA20 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_m0B3BE357A393886A01224F0B9AD836C26C630F52 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_SkipIterator_TisTSource_tE09DF6BF09FD67E41182B2382ADD2B50F9E3B03D_m743B13F6FBBDC737FC12A875115CBA1C17058FF2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1_t5B0C61B18A6114A4A055F88065B039186EFEBC48 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1__ctor_mEA2F08CEDEC73FD80CC1F3F9B7843E1267CE0ED4 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2_t31485349BBB6CA67C193DB2624D732B5853B8407 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2__ctor_m57D4BF536D0DEC8A197A0D64409B421680B81355 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IdentityFunction_1_get_Instance_m1A77E9818F635D55140642F02849D2AA85B8F778 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IdentityFunction_1_tD013A3A14D3E15B5C2833B1A48952EA4B5DC24CB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3_tF761B2627937F0E9C3BD596171DE0A56F2B2964F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3__ctor_m70CF123FD7771AA23B4141CFACD84ABCB43B493A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_ConcatIterator_TisTSource_t297F77390F553F1684D830856740144CFED83750_mD559ECA09522E58682C12789F938B33483D0E806 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_tFF0B4ABF7559F46F5A75AE75DC630A9D53AE4FFA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1__ctor_m3994144574961AEB580CDC7661FAAD493ED61BDE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_IntersectIterator_TisTSource_tAEE16E3C4AA581A1C3F0AAD5915E83179596A1E6_m82E7C15C67F8C57318276CD00859F14194D05A7F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1_t4EA5FAD9A89EB7F6F1799B1BB15666648F13EADF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1__ctor_m1534F9B9629A96AF35CEED5BF09A07CE39B22868 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_ExceptIterator_TisTSource_tC26C808AF785D907C89C395B10598E48281E5EE9_m17533549BF64609028972EBB1C241FA258FD521E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1_tE421CACD8B2C41696C4A0509A42C04727CC0D8BE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1__ctor_mE282871FD7761FFCAD875DB274E6B4233E728618 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_ToDictionary_TisTSource_t19423240346ACEC4AF55B24140BB2C7ADF5A6D39_TisTKey_t532447C86922973EBD470371CD124C7DBF65E388_TisTElement_t4199B14C218D0409971FAD2B8AC3E503C3623C6B_m0F42B4EF33BF02398FD2CCA453C8BEE8E89C1EAB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2_t4493E1FD07BF64FFF852549818E1A30F659F9A65 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2__ctor_mD41414684F251E23FD44D934A1945B01AD6AD9A2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tCA075AB376DFE408D8AC0126F02F6DC6572D8BAF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t9881C285459458035F332F77470133CE23395912 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mDE2993D7792ED60CE6B2615F06D9A309722B6036 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m0C49A8E0C74B4F1C9482029D070F346D4B3D41F3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2_Add_mCA6DDF4DD83D83BA22FD47B269C8571F5DEC1AA0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t12A52A64081A5954F5F3EA1E13DAF2587E8C57DE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_Contains_TisTSource_t941CC4C3B89ECA76D1FAFE3BC385974F6C8372B2_m7B5F33A4BBBBE98861FC9B38AEE5090109400C8C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0DD948D8CCA4C1DA30E417512F50E4F463CFEBC2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_tC54E5776F429F385C6E93384568ABC1174A92F62 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t1C203359ED16BCC43AC4805C465D8D500686ADA8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t102BE58A70A4033CB1BCB8B4D26DFB372CE314D2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t0F97F8650BAFC726D27A22B8B8478C2C7DC2B103 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tB1A48896AE4AD2DC0A724EF2C9F79315E731FFD7 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t0662DFF50E1A31918E63C21AFCBFA758FDC7B5A6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_3_Invoke_m405C500E018D0A969F646C66431A6CAC1EB9B74A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_U3CU3Em__Finally1_m176ABA9BF1EA498EA2F2F01E0743A5538DDCFD13 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tFDB4CD57E31B1A3A65CDEBC3787B908266388742 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t4E545E145CBECE5B499444F9E732D80FC5911E4E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_System_IDisposable_Dispose_m81DE20DFA4A3A4BBE4D0FF97F703B95CE41E5D94 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t768AD0D4D2D29E0079C31B83410396711C26DC64 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_tD155B0BA81CE6333AB2D82709BA9143DC355FC6A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_mCC56FA4F2D409DCF46F2CE4512581053196E0A7B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m6496161F40BE26EE1B6D17A6C4C1EA33E12D0C48 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1_U3CU3Em__Finally1_mFF40AA73C441500B889D07CE2ED41A03328A9442 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t682C547790456550FC58CEEE61C7F154BF14D087 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t35B6D33C33D7B8862FCEAA36EA0028D293067499 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1_System_IDisposable_Dispose_mC0EF06616EAE9AA72D98994650E131BA4751AC6B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t6BA6A3F223D28F04AD97EF1B02FE96F3C9F690DE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1_t60357AA7463E953763FE105A95C12ED0BDCC455B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1__ctor_mDAB5202A80B7A9456C9C97D03C53BA753C19AF33 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSkipIteratorU3Ed__31_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7A1276E9C953800F0D508CA8B394B3ECC7A206EA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally1_mFBA25A865CC96B0C1663DD9C53D65438297FD6E6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_U3CU3Em__Finally2_mE335481FB2F508C6E3C00CE0FDB35CF9DE69FC96 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t766E549AC1BC19292A2BAC8724A95AE270FE8320 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tA418E67FA858A9C1451D7ED10F3257720DDA03CE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_System_IDisposable_Dispose_m4F13EDAF3DB4F80F6A52130673D396709E30A7BD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t7A58FCA1A797E781B5C65F00401812BDF4B8CBB5 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_tA87EAAF72DB90087249A510F9E26A8403AEC8464 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1__ctor_m33E4865420F91E26F36841C5070791EB4BD76576 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CConcatIteratorU3Ed__59_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m20BCF500657BD79741BC32AFC2A9D0FB5F84EF59 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1_U3CU3Em__Finally1_mFEB03623D06B6BE2A014E9BF21DD4B60BD5642F6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_tA80C0BE68BC40FE585464454D74F59550CB7CB34 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1__ctor_mF05BE0E80601EFE4AA58D8F91C7311CB6DF362EE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t953C510F86463E6FDC6BCDE5FCF9AA529D5355AE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tF915F179CB843B56D0349A03D6F9A6CE29082BD4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Add_m147AABA0DBE85900C1E4C8CF85EAABFB8E2F0B90 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Remove_mA25133C8C74FFCC9AADE5DFC4FBF1E9067B593F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1_System_IDisposable_Dispose_m780E5A0C32F1717E3C18A61C8E0ED36F57AEA10D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_tF9AFDA31641C29DF00B32A2E6D0335981E535B6F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1_t015A9F147C4D32C97DE2BE1E5134C2AD5B728CDE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1__ctor_m0F1E0630225CDAFA79115D824B1A28FF8C4E34CA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CIntersectIteratorU3Ed__74_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mDFCC6C9FC2924541D2A2F8CADA2BB420ADA9DAB3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1_U3CU3Em__Finally1_m89992816763E2C893B48CF1AAE9156AE4C51763C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_t49018D78DF9F83AE3F4E2EE4DEDD411A739AA951 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1__ctor_m45D721648015AB1443636C59E1751220E0CC5202 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6585EC67F6204C8ABD863CA6E0FEC96BB0CCF779 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tC677243A336969CE5B7744F980C619EE4793CE6C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Add_m1BDA72D1A99B28E89DFAE187935035DB6D0B0E05 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1_System_IDisposable_Dispose_m0FEDF00EE261B56064CEF01307FBBE40C4E6042D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t06F14B9447CB1DF1BE7ADC29C89A9FF93ED5B59F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1_t2B6FA99E0EBF05E58224CD86B0C00A8DDD6E539B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1__ctor_m1B005AC9D2F3D6202EAB7B545A6DA17677F16343 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CExceptIteratorU3Ed__77_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m93F2D542577194D1A1FA8B8D01F6FCA7187DBA7C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_t7E02E403CA9127A9E60A070AC6D66CC5D5919ADF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mA24100AAA0DA5F4EA14A51A50CDEE9290F87359D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tD96FE9EE31E42E3126747DE11110BC8F62D6D2F4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m68577F978A4FEF7E046AB64788F58B063ABDEB11 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__ctor_m9F59EC7929C1D1080EFF3EEF94384EF4AA298512 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_t31F78E93BFB846CA2D3944E40B03A4E3DDE6A614 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2__ctor_m920FA1A67420F30E9A99A73F74935FE16CCB7DCA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetGrouping_mF28388BA6DC02F7A11003230B0771761E177B3CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_Add_mD047324E5C6CE07A23F1DA7706A5FA0C0C85C35E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_mE0AFD303A3D49228C108C783196526C2C2838738 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_t39547BB62FDF2E0458C9D1F98B99BB7805A21514 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupingU5BU5D_t15D97B6173684F736466731E6C0E0971702DA4FE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__12_t537CE71AF0C2B3F5D94C27A91CB4DD4EA9861355 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__12__ctor_m122E85D9A70BD3EACB7CA4BA53B6213686F869A6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetEnumerator_m5AA3B1BE4D03D1D36A98D1AFBD4607C3EBB244D9 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TKey_t7518B94CFEBCBDFD89737409C77350621A54669D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_tCF9369A523FE68BDDE93FD47541225C476900953 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_InternalGetHashCode_m8BA5731C950E4C5F090FFB985B505389AE540D49 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_Resize_mC4A2772C5D27527B873AF6670CB5A6F2B4E057BE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_tE74A3126B3267FC0587D6D5E2EF780D29E9DC649 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping__ctor_mA40B18DDB0B49A2ED79B524B505E9DB8998BF3FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t93028857AD2A56FDA6CD6DC458BFC620AAD8391E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t2C868C873DF7EA4359385DAF53CA7ACB96CB956D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tBF322ED7F64E0A111FA43366F150AAFE05A86157 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m36C8A424F3E14B2A8980522FE7F7172B5C6C728B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m82A6879D5450E7E851761E8D1FD962AEA657B40D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Array_Resize_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_mF5EC1E0159713C021C2EEC50106327242688BCAC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__7_t6A6AE7D01D29BDC1764289562767205A6F06561E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__7__ctor_mB54EDFF4FE9E97CBFC8C5B16C41EF764B290593B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_GetEnumerator_m13259DF1A2CA7716091F4A36EF9DCA6F6C8BF003 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Array_IndexOf_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_m0E27A4B8C4E4C0E5CEF80A9BD51D0DC319649D6A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_tDE19722F134B9431747709B2914E337ADEB691C1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0ACEA98E0F309527422B734EC2D6F838F42E855A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_tE98C8758DC67BAC10BC58A6EAF2BC7702037261D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t59C5931DEEAB28C10C90F90194F7BA255205FF0C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Find_m960A4C3A4D4AA1B1E999EF848750BBE1A7D926F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_InternalGetHashCode_m9B51B4A88084A8FDB38514325ECF1F61E2D272DA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t3CB967F967F4706563FB9E277A60032CD22D6832 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Resize_m93FE9D1D00D5F0FC34818A15B4F62F95E55F075A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_t675859134FC8712282763A8D72CA128B8B43DD5D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_Create_TisTSource_t95933129C248BBBE3B532BA8CFB5350A22311796_m141D6282A56A115DE5D096179676481A9802E0E2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_t18A588C0C5E56D50B17CDE7ED4798AECE00E5A2E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetEnumerator_mA3662CF25C60F4598B6A586071A5A2B11A39BB64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3_GetEnumerator_m7308C41BCA816D940D195E8651272EC1C27A4CEF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__1_t5D0486AEAB09755AF78B220EFA015EA86540C4B3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD7AD8598EA220AE5C3472A7151BCEB208DA7F24F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerator_m6DF22CD2A54FD98EE9BC3A07367C286B21F9547B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_t7BF1A786B9BDA7D98997098F206D9FBEB8E805CE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_m63F874F7E854E3962714E8472CB132C035CC416B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m66C26D4385449EA5B7AC0AAAE558E827A547B8CF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_Sort_m02DC1D19B109171CC6F0A97CA1A3A494A2F08F31 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_t333B92C559EDB1DAA4DB3278851F903367748A99 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1__ctor_mE30DC877F0F5D6F8AC240D104550276A35B6852C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_t50B50FFBA4235D6A79D0BD205B625DE23059AB4A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Comparer_1_get_Default_m9E7E2CD7BBA500D9A9731C5906809FCBA65E1E30 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Comparer_1_tD0DB8DA2AE74C852F854EA8D9376FBD40626907C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_2_t2CEA9D5447B2F9F77A2272EFB103B886DA6A1420 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_2__ctor_m100971C016BC2A43E309CE5E2D698B9D1588B033 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_mA88206BAC41B269377165C986FA5703FE0D98BF1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_ComputeKeys_m83D519A95C8BF3E64F4C001F694C1BA6B5AAA627 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_QuickSort_m1624C8412F34C475233B33FFFB9B72B17B8AB15F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_CompareKeys_m97F1B0F4295DCEC1F4D25AA1460D635ABDB083D7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1__ctor_mCF1F7D79B54CC4982ACC920B5FC4820B6761D497 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_tD898552BB1412C8F871ECEF9E1E52EB11D1D9433 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TKeyU5BU5D_t6537368C948F1BE34C63755A2D32DD5D17382867 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m5B02612CC97C4353D26D2A468F97D6FF5F3BFFA8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_ComputeKeys_m0E1B75812073569AF348E2322C90C5326D95A0BC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparer_1_t885D3AAA10BAAD12BD427225987B0FD222695EBA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_CompareKeys_m4A804932C38687AA4E0B8569DB03D36A04BBEE46 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1__ctor_m9B732C5C36D11AAEFABF7CEC13EDFF253C50A64D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AreEqualityComparersEqual_m58983B4575A37B747D2D07FDCBB7C63D16D601BC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyFrom_m96F2513C029CF917546FD4A8EDFF667539B528BD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_tB68883F0155714DC8456B3030A8B6D79432B214F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_UnionWith_mF3EE8BDDCB380567655AE83AA914CEBA69B92308 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_TrimExcess_mEFE2B4AAE58BB50B40FAC84540B4EF632713E197 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AddValue_m601C62BF19E00BFC28BF9E7EF8DEF0FDF5B69C23 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t8524277609871504BAA6201A8229336029777E46 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t9A7C0233E00E7973685F97271E6352DFDE72107B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_Clear_mE07A83BF7C976375EE57F61CCB2E078693465384 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_Remove_m9E6FD58401890326632CE70F7AB9FBE73951897F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_get_Comparer_mD071150836E79AA358BC57DA040ED915A7051CCF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	260,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	344,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
