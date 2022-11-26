﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,Defective.JSON.JSONObject>
struct Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject>
struct IEnumerable_1_t0F4AFF3A7F007CD158169E2C0B3E7321BE5ED487;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult>
struct IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult>
struct IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Defective.JSON.JSONObject>
struct KeyCollection_t7E5D39D22C0EF0A8CBA177CF71E46B1D94035B25;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<Defective.JSON.JSONObject>
struct List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Defective.JSON.JSONObject>
struct ValueCollection_t2C1C376243ABA7A00581A23F3492D7F3CAEAA9AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Defective.JSON.JSONObject>[]
struct EntryU5BU5D_t16FDB49C4064477C05593B3587BCDC6B2B6C2711;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Defective.JSON.JSONObject[]
struct JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Defective.JSON.JSONObject
struct JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC;
// Defective.JSON.JSONObjectEnumerator
struct JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5;
// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// NativeTextToSpeech.TextToSpeech
struct TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// Defective.JSON.JSONObject/<BakeAsync>d__144
struct U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD;
// Defective.JSON.JSONObject/<CreateAsync>d__68
struct U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0;
// Defective.JSON.JSONObject/<ParseAsync>d__73
struct U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548;
// Defective.JSON.JSONObject/<PrintAsync>d__149
struct U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19;
// Defective.JSON.JSONObject/<PrintAsync>d__150
struct U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81;
// Defective.JSON.JSONObject/<StringifyAsync>d__151
struct U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F;
// Defective.JSON.JSONObject/AddJSONContents
struct AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488;
// Defective.JSON.JSONObject/FieldNotFound
struct FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77;
// Defective.JSON.JSONObject/GetFieldResponse
struct GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647;
IL2CPP_EXTERN_C String_t* _stringLiteral0074C49CE7D7ED9232C28459AA9DB19B1D06C223;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral06B4A96E9E13BC375962BF44CF7B409D3020362D;
IL2CPP_EXTERN_C String_t* _stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral14F02525C904C10E94C588532D2247BC12B21A88;
IL2CPP_EXTERN_C String_t* _stringLiteral19967C1E48314D711A74F7072B6A080EC2E7DCF0;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9;
IL2CPP_EXTERN_C String_t* _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral29936FD27CFDE2F8CC838AA294B448BFE25527BC;
IL2CPP_EXTERN_C String_t* _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9;
IL2CPP_EXTERN_C String_t* _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2F0CAB6D4597C28EC0AEA58FD5120580F8F97E79;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47E76E65E4287B7975EF89598914E1BF30677BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189;
IL2CPP_EXTERN_C String_t* _stringLiteral4A85F7924EB5D4EE9D1DD6344A4679BFEB95F45C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B;
IL2CPP_EXTERN_C String_t* _stringLiteral54154E1F5FCB5154DF6748F2558087DBA8903D65;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral563AB0FDA70B7B892A6DC96F49EE2B6C2C5E6766;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral6BDD6023A35877E4881FA93114DF2689C56BC822;
IL2CPP_EXTERN_C String_t* _stringLiteral6D313CE18D08825679828AF999DAFCA083D77CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3A1F5DF7FF3BBCF1833443D18056CF06C14B78;
IL2CPP_EXTERN_C String_t* _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A52E47B1F94FFB41929E7E93154B6B04402E29;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralB18401C35133C78B1809EA9659B10913E2F430A7;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD78D112848D426A98044320516AE321116F74C50;
IL2CPP_EXTERN_C String_t* _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralF269C8AA670766E94BF5B0AB838989B114D6C9D8;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA9F4ADBA883DCCA70B2BFF2E103994E8AA5A599;
IL2CPP_EXTERN_C String_t* _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC;
IL2CPP_EXTERN_C String_t* _stringLiteralFF478D574926C772710066881CAD8FDBFDB6BCD9;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9AB7547595606304114C14F0450F15FD30F51468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB602A35E50D2614F8EB42D0EAB33B023FB737E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1499EAC836D33EE4BDFBC30928D75545E8F29523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONObjectEnumerator__ctor_m24FA52671B6CD2C9492B8273FD881FA9B0499383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC3B5DD5F352897C36234BDBD128F2B302DA45C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m781253FB0E80BB4B628AF4FE6C733B473CE80E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2EA9CF993A1757CD6FA450F8FB76CE5C4797CA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3ABD29A8F2D130881C8DB5CB162201B56A66189D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC8B3232BBFBFF3B47366516A8CD80C61DF2F1149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m14D37568F8283C45E21AA4A79F1AA25413ACD816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBakeAsyncU3Ed__144_System_Collections_IEnumerator_Reset_m3F22403FB8A802E882102602F3AB77C4D0D8E8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateAsyncU3Ed__68_System_Collections_IEnumerator_Reset_mF65475F22F9B98E12245A17B9A4BFEABEE7F062D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseAsyncU3Ed__73_System_Collections_IEnumerator_Reset_m25FF387607097D11C1BB35D6E03E6BC729482045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrintAsyncU3Ed__149_System_Collections_IEnumerator_Reset_m87639A20F250DD4F7B7CCC85EF2DD69F3F34177A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrintAsyncU3Ed__150_System_Collections_IEnumerator_Reset_mE4D085DF8B4212A0D33E59FD2D847DB44C06B96F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStringifyAsyncU3Ed__151_System_Collections_IEnumerator_Reset_mEB9387ED69228D7ED831E32806465936F4D15457_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Defective.JSON.JSONObject>
struct Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t16FDB49C4064477C05593B3587BCDC6B2B6C2711* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7E5D39D22C0EF0A8CBA177CF71E46B1D94035B25* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2C1C376243ABA7A00581A23F3492D7F3CAEAA9AA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Defective.JSON.JSONObject>
struct List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Defective.JSON.JSONObject
struct JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC  : public RuntimeObject
{
	// Defective.JSON.JSONObject/Type Defective.JSON.JSONObject::type
	int32_t ___type_11;
	// System.Collections.Generic.List`1<Defective.JSON.JSONObject> Defective.JSON.JSONObject::list
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* ___list_12;
	// System.Collections.Generic.List`1<System.String> Defective.JSON.JSONObject::keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___keys_13;
	// System.String Defective.JSON.JSONObject::stringValue
	String_t* ___stringValue_14;
	// System.Boolean Defective.JSON.JSONObject::isInteger
	bool ___isInteger_15;
	// System.Int64 Defective.JSON.JSONObject::longValue
	int64_t ___longValue_16;
	// System.Boolean Defective.JSON.JSONObject::boolValue
	bool ___boolValue_17;
	// System.Double Defective.JSON.JSONObject::doubleValue
	double ___doubleValue_18;
};

struct JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields
{
	// System.Diagnostics.Stopwatch Defective.JSON.JSONObject::PrintWatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___PrintWatch_9;
	// System.Char[] Defective.JSON.JSONObject::Whitespace
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Whitespace_10;
};

// Defective.JSON.JSONObjectEnumerator
struct JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5  : public RuntimeObject
{
	// Defective.JSON.JSONObject Defective.JSON.JSONObjectEnumerator::target
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___target_0;
	// System.Int32 Defective.JSON.JSONObjectEnumerator::position
	int32_t ___position_1;
};

// Defective.JSON.JSONTemplates
struct JSONTemplates_tB2F0C81672CE1E84189D978B7126A7A45731620A  : public RuntimeObject
{
};

// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// Defective.JSON.JSONObject/<BakeAsync>d__144
struct U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<BakeAsync>d__144::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Defective.JSON.JSONObject/<BakeAsync>d__144::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<BakeAsync>d__144::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<BakeAsync>d__144::<>4__this
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CU3E4__this_3;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<BakeAsync>d__144::<builder>5__2
	StringBuilder_t* ___U3CbuilderU3E5__2_4;
	// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<BakeAsync>d__144::<enumerator>5__3
	RuntimeObject* ___U3CenumeratorU3E5__3_5;
};

// Defective.JSON.JSONObject/<PrintAsync>d__149
struct U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<PrintAsync>d__149::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Defective.JSON.JSONObject/<PrintAsync>d__149::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<PrintAsync>d__149::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<PrintAsync>d__149::<>4__this
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CU3E4__this_3;
	// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__149::pretty
	bool ___pretty_4;
	// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__149::<>3__pretty
	bool ___U3CU3E3__pretty_5;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<PrintAsync>d__149::<builder>5__2
	StringBuilder_t* ___U3CbuilderU3E5__2_6;
	// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<PrintAsync>d__149::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;
};

// Defective.JSON.JSONObject/<PrintAsync>d__150
struct U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<PrintAsync>d__150::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__150::<>2__current
	bool ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<PrintAsync>d__150::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<PrintAsync>d__150::<>4__this
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CU3E4__this_3;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<PrintAsync>d__150::builder
	StringBuilder_t* ___builder_4;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<PrintAsync>d__150::<>3__builder
	StringBuilder_t* ___U3CU3E3__builder_5;
	// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__150::pretty
	bool ___pretty_6;
	// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__150::<>3__pretty
	bool ___U3CU3E3__pretty_7;
	// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<PrintAsync>d__150::<enumerator>5__2
	RuntimeObject* ___U3CenumeratorU3E5__2_8;
};

// Defective.JSON.JSONObject/<StringifyAsync>d__151
struct U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Boolean Defective.JSON.JSONObject/<StringifyAsync>d__151::<>2__current
	bool ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<StringifyAsync>d__151::<>4__this
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CU3E4__this_3;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<StringifyAsync>d__151::builder
	StringBuilder_t* ___builder_4;
	// System.Text.StringBuilder Defective.JSON.JSONObject/<StringifyAsync>d__151::<>3__builder
	StringBuilder_t* ___U3CU3E3__builder_5;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::depth
	int32_t ___depth_6;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<>3__depth
	int32_t ___U3CU3E3__depth_7;
	// System.Boolean Defective.JSON.JSONObject/<StringifyAsync>d__151::pretty
	bool ___pretty_8;
	// System.Boolean Defective.JSON.JSONObject/<StringifyAsync>d__151::<>3__pretty
	bool ___U3CU3E3__pretty_9;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<fieldCount>5__2
	int32_t ___U3CfieldCountU3E5__2_10;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<arraySize>5__3
	int32_t ___U3CarraySizeU3E5__3_11;
	// System.Int32 Defective.JSON.JSONObject/<StringifyAsync>d__151::<index>5__4
	int32_t ___U3CindexU3E5__4_12;
	// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<StringifyAsync>d__151::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_13;
};

// System.Collections.Generic.List`1/Enumerator<Defective.JSON.JSONObject>
struct Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Defective.JSON.JSONObject>
struct KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};
#pragma pack(pop, tp)

// Defective.JSON.JSONObject/ParseResult
struct ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 
{
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/ParseResult::result
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result_0;
	// System.Int32 Defective.JSON.JSONObject/ParseResult::offset
	int32_t ___offset_1;
	// System.Boolean Defective.JSON.JSONObject/ParseResult::pause
	bool ___pause_2;
};
// Native definition for P/Invoke marshalling of Defective.JSON.JSONObject/ParseResult
struct ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_pinvoke
{
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result_0;
	int32_t ___offset_1;
	int32_t ___pause_2;
};
// Native definition for COM marshalling of Defective.JSON.JSONObject/ParseResult
struct ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_com
{
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result_0;
	int32_t ___offset_1;
	int32_t ___pause_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Defective.JSON.JSONObject>
struct Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Defective.JSON.JSONObject/<CreateAsync>d__68
struct U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<CreateAsync>d__68::<>2__current
	ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String Defective.JSON.JSONObject/<CreateAsync>d__68::jsonString
	String_t* ___jsonString_3;
	// System.String Defective.JSON.JSONObject/<CreateAsync>d__68::<>3__jsonString
	String_t* ___U3CU3E3__jsonString_4;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::offset
	int32_t ___offset_5;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::<>3__offset
	int32_t ___U3CU3E3__offset_6;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::endOffset
	int32_t ___endOffset_7;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::<>3__endOffset
	int32_t ___U3CU3E3__endOffset_8;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::maxDepth
	int32_t ___maxDepth_9;
	// System.Int32 Defective.JSON.JSONObject/<CreateAsync>d__68::<>3__maxDepth
	int32_t ___U3CU3E3__maxDepth_10;
	// System.Boolean Defective.JSON.JSONObject/<CreateAsync>d__68::storeExcessLevels
	bool ___storeExcessLevels_11;
	// System.Boolean Defective.JSON.JSONObject/<CreateAsync>d__68::<>3__storeExcessLevels
	bool ___U3CU3E3__storeExcessLevels_12;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<CreateAsync>d__68::<jsonObject>5__2
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CjsonObjectU3E5__2_13;
	// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<CreateAsync>d__68::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_14;
	// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<CreateAsync>d__68::<e>5__4
	ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 ___U3CeU3E5__4_15;
};

// Defective.JSON.JSONObject/<ParseAsync>d__73
struct U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548  : public RuntimeObject
{
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<ParseAsync>d__73::<>2__current
	ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 ___U3CU3E2__current_1;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String Defective.JSON.JSONObject/<ParseAsync>d__73::inputString
	String_t* ___inputString_3;
	// System.String Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__inputString
	String_t* ___U3CU3E3__inputString_4;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::offset
	int32_t ___offset_5;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__offset
	int32_t ___U3CU3E3__offset_6;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::endOffset
	int32_t ___endOffset_7;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__endOffset
	int32_t ___U3CU3E3__endOffset_8;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<ParseAsync>d__73::container
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container_9;
	// Defective.JSON.JSONObject Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__container
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___U3CU3E3__container_10;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::maxDepth
	int32_t ___maxDepth_11;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__maxDepth
	int32_t ___U3CU3E3__maxDepth_12;
	// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::storeExcessLevels
	bool ___storeExcessLevels_13;
	// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__storeExcessLevels
	bool ___U3CU3E3__storeExcessLevels_14;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::depth
	int32_t ___depth_15;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__depth
	int32_t ___U3CU3E3__depth_16;
	// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::isRoot
	bool ___isRoot_17;
	// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::<>3__isRoot
	bool ___U3CU3E3__isRoot_18;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<startOffset>5__2
	int32_t ___U3CstartOffsetU3E5__2_19;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<quoteStart>5__3
	int32_t ___U3CquoteStartU3E5__3_20;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<quoteEnd>5__4
	int32_t ___U3CquoteEndU3E5__4_21;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<lastValidOffset>5__5
	int32_t ___U3ClastValidOffsetU3E5__5_22;
	// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::<openQuote>5__6
	bool ___U3CopenQuoteU3E5__6_23;
	// System.Int32 Defective.JSON.JSONObject/<ParseAsync>d__73::<bakeDepth>5__7
	int32_t ___U3CbakeDepthU3E5__7_24;
	// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<ParseAsync>d__73::<>7__wrap7
	RuntimeObject* ___U3CU3E7__wrap7_25;
	// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<ParseAsync>d__73::<e>5__9
	ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 ___U3CeU3E5__9_26;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// NativeTextToSpeech.TextToSpeech
struct TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action NativeTextToSpeech.TextToSpeech::_finish
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____finish_4;
	// System.Action`1<System.String> NativeTextToSpeech.TextToSpeech::_error
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ____error_5;
};

struct TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields
{
	// NativeTextToSpeech.TextToSpeech NativeTextToSpeech.TextToSpeech::_instance
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* ____instance_6;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Defective.JSON.JSONObject/AddJSONContents
struct AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488  : public MulticastDelegate_t
{
};

// Defective.JSON.JSONObject/FieldNotFound
struct FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77  : public MulticastDelegate_t
{
};

// Defective.JSON.JSONObject/GetFieldResponse
struct GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Defective.JSON.JSONObject[]
struct JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A  : public RuntimeArray
{
	ALIGN_FIELD (8) JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* m_Items[1];

	inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void NativeTextToSpeech.TextToSpeech::on_finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE (const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::on_error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::onFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onFinish_m23153CC2FDD11A6458CF4B17F8E34CF7C9A22E9D (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::onError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onError_m95CFE8C0DA50FCC7A411639A4AC1D965D81F654E (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, String_t* ___error0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NativeTextToSpeech.TextToSpeech::start_tts(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_start_tts_m45B2975CCB5F9454A32FA9707660C67B8DB284EC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onFinish0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onError1, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::stop_tts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_stop_tts_mB5B494A981BC471C94A107138039FAA3880A8408 (const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::speak_tts(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_speak_tts_m5B73897F3D3E9EDC063BAF9BEE5F5705C8734049 (String_t* ___text0, String_t* ___language1, float ___rate2, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Stop_m71739F99A78F9DF63C7D032C238A211F88D9627C (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::.ctor(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech__ctor_m5562602C68A0ED7D2968EBCEC24B81C219BBBBD6 (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___finish0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___error1, const RuntimeMethod* method) ;
// System.Void NativeTextToSpeech.TextToSpeech::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Start_m97850D4215CD5516376BB1C5672488FED6EA9275 (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Defective.JSON.JSONObject>::get_Count()
inline int32_t List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_inline (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(Defective.JSON.JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mA98A7D0FA92912A9AF75DE79D74B5CB043F5C2C7 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::.ctor()
inline void List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::Add(T)
inline void List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Defective.JSON.JSONObject>::GetEnumerator()
inline Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7 (Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E (*) (Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Defective.JSON.JSONObject>::Dispose()
inline void Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89 (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Defective.JSON.JSONObject>::get_Current()
inline KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_inline (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 (*) (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Defective.JSON.JSONObject>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_inline (KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Defective.JSON.JSONObject>::get_Value()
inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_inline (KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285* __this, const RuntimeMethod* method)
{
	return ((  JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* (*) (KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Defective.JSON.JSONObject>::MoveNext()
inline bool Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Defective.JSON.JSONObject/AddJSONContents::Invoke(Defective.JSON.JSONObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_inline (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614 (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mC3B5DD5F352897C36234BDBD128F2B302DA45C7C (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Defective.JSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mF2B460AF8159D2789DCD76E03D7A97F547CF81FF (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3 (const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::Parse(System.String,System.Int32&,System.Int32,Defective.JSON.JSONObject,System.Int32,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76 (String_t* ___inputString0, int32_t* ___offset1, int32_t ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, int32_t ___depth6, bool ___isRoot7, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68__ctor_m73342FE672B04F95C4ADBEEADA07765F7D3E777D (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::BeginParse(System.String,System.Int32,System.Int32&,Defective.JSON.JSONObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27 (String_t* ___inputString0, int32_t ___offset1, int32_t* ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
inline int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_gshared)(___array0, ___value1, method);
}
// System.Void Defective.JSON.JSONObject::SafeAddChild(Defective.JSON.JSONObject,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___child1, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::ParseObjectEnd(System.String,System.Int32,System.Boolean,Defective.JSON.JSONObject,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseObjectEnd_m409EF6F2E8E663FF9D81D154E14B7FB54114CB2D (String_t* ___inputString0, int32_t ___offset1, bool ___openQuote2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___startOffset4, int32_t ___lastValidOffset5, int32_t ___maxDepth6, bool ___storeExcessLevels7, int32_t ___depth8, int32_t* ___bakeDepth9, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::ParseArrayEnd(System.String,System.Int32,System.Boolean,Defective.JSON.JSONObject,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseArrayEnd_mCD9D6A7C7F47DAA478304ED96B06ED332521C54C (String_t* ___inputString0, int32_t ___offset1, bool ___openQuote2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___startOffset4, int32_t ___lastValidOffset5, int32_t ___maxDepth6, bool ___storeExcessLevels7, int32_t ___depth8, int32_t* ___bakeDepth9, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::ParseQuote(System.Boolean&,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseQuote_mFBA405A5993329CD10F3255B7EA5FA0B512D9B9D (bool* ___openQuote0, int32_t ___offset1, int32_t* ___quoteStart2, int32_t* ___quoteEnd3, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::ParseColon(System.String,System.Boolean,Defective.JSON.JSONObject,System.Int32&,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseColon_m917F7EC0729BB7E9A86C447034DA9C00310778E7 (String_t* ___inputString0, bool ___openQuote1, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container2, int32_t* ___startOffset3, int32_t ___offset4, int32_t ___quoteStart5, int32_t ___quoteEnd6, int32_t ___bakeDepth7, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::ParseComma(System.String,System.Boolean,Defective.JSON.JSONObject,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseComma_mE24033BD9D67738BC3DDC81E2F9B821C25E2E5E4 (String_t* ___inputString0, bool ___openQuote1, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container2, int32_t* ___startOffset3, int32_t ___offset4, int32_t ___lastValidOffset5, int32_t ___bakeDepth6, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73__ctor_m35663A7C21BE4D9FF319F64E93568B2796611B71 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Defective.JSON.JSONObject::UnEscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_UnEscapeString_m2CBA283857DD92DF360CCE6997374980C3EED39A (String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m849AF82E6C86C69E45DDDD095A39679D036239B7 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_nullObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_nullObject_m1F5C12DDD7E80EAE0F2DB6F9D0DC722F0BC76D51 (const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_CreateBakedObject_m2039F450D1C8D6B09DD2929411721737706B0730 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::ParseFinalObjectIfNeeded(System.String,Defective.JSON.JSONObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseFinalObjectIfNeeded_mC5BBD01E9B35A0B100D806B8A50C52F95FE6B636 (String_t* ___inputString0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container1, int32_t ___startOffset2, int32_t ___lastValidOffset3, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::IsClosingCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_IsClosingCharacter_m9E9726C119837264FB5CE6DAADA3ACD873C198C2 (Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::ParseValue(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseValue_mCCFFA4657D41ADB772EB6906B5AE76297AF0FEC3 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___inputString0, int32_t ___startOffset1, int32_t ___lastValidOffset2, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m1788D5E207F8DD08203F223F445269AFF49FBFBC (bool ___value0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::Add(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m10CC383E53FB604C8A7159363CDE97F042F3AEA5 (float ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mBEA3C860EF1AC144A435CB00EF4CC44E433DA90A (double ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m82B00AF99D5B4373BBFB1792A7F3558F46210D4F (int64_t ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mC0CB937160189E43A9CD2DB66D43C48AB840E604 (int32_t ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(Defective.JSON.JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m3F61423188DA6AEB0E49022B393E544AB7C50AB8 (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* ___content0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::AddField(System.String,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::SetField(System.String,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject1, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m8A0AE1720F921358B8C1BF09E8A1C0483B54CA5C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Defective.JSON.JSONObject>::Remove(T)
inline bool List_1_Remove_mC8B3232BBFBFF3B47366516A8CD80C61DF2F1149 (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3ABD29A8F2D130881C8DB5CB162201B56A66189D (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Boolean&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mA63B2E46817FA7F572E9E62DDF293ADFC08E6322 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Defective.JSON.JSONObject>::get_Item(System.Int32)
inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490 (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Defective.JSON.JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.Double&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m9281D2DE083628D2E018D471172CD4B9CF9C68AE (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, double* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.Single&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m00029EC6FB4910C23428056BFD0F154958FC06E5 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int32&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mD4980E520F0A19F8EFD55C5530DDD712A55A43C7 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int64&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m35567EB26CCB4B0439461CE0A93D8A8A4B8B5BB6 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.UInt32&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m03CFC3112236BAF1610B9A314D68608F6098609C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::GetField(System.String&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mEAC1E437846CBA82961D327579F7446760220E2E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/GetFieldResponse::Invoke(Defective.JSON.JSONObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_inline (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::Clear()
inline void List_1_Clear_m781253FB0E80BB4B628AF4FE6C733B473CE80E59_inline (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String Defective.JSON.JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___pretty0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m737F0E10CB3D7495B72387BFD86E20E12B20D40D (String_t* ___jsonString0, int32_t ___offset1, int32_t ___endOffset2, int32_t ___maxDepth3, bool ___storeExcessLevels4, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::MergeRecur(Defective.JSON.JSONObject,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_mEA5296EBD08453953D10B5007EE486E896318932 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___left0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___right1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::Absorb(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_m837B43D88B2836C574B78E5CAB712A1CF2605F82 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___other0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_m00F12A4F458FD3741B5B84FF00361E8B60E015CA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// System.Int32 Defective.JSON.JSONObject::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::set_Item(System.Int32,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m0169F3DEE234B878ACA9BA965508F8CC4227030E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___index0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___value1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144__ctor_mA94C1D2AF01D7E6206FD5F32E30AA5B0800FB117 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::Print(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Print_mE75F1673BBF3CFCFF9F934E87068BFCD143AD1E8 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m1B4AB8F7C1726AA4FA744CDA2C0261771D7737CE (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___depth0, StringBuilder_t* ___builder1, bool ___pretty2, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149__ctor_mD4F869D25C809BE3C9ABC357D69F98F47CC4761E (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150__ctor_m76AE442889877ABA71658717BEDAC09F13535C2F (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151__ctor_m431EC10F7D319E0D9066CB2CF5652777EEE06710 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyString_m6C60B157ADB60C0A400CE42AD83B78BF95531578 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyNumber(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyNumber_m59CDF5A6C31D5A0B994FB91C54C70A4B52CAC63E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyEmptyObject(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyEmptyObject_mF0208881D165951D3B98AC8D67B4E9CCF450C9D4 (StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::BeginStringifyObjectContainer(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyObjectContainer_m5DDF0C38F6519E8291886BA780B4116C70A33B4C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::BeginStringifyObjectField(System.Text.StringBuilder,System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyObjectField_m7FD31C38CCAB181AF2499C2971B6A0FEE8D0298B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, String_t* ___key3, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::EndStringifyObjectField(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyObjectField_mE69FE33F5E034275318A7C3D9AE2C5A802945090 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::EndStringifyObjectContainer(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyObjectContainer_mD874A086B26BFD0B1543B4747D14CF073639F05B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyEmptyArray(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyEmptyArray_mC78592CCEB915F47CCB8F3F3EF3F0CEECE0CD624 (StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::BeginStringifyArrayContainer(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyArrayContainer_m59F4D18EDB10B3243DD1AD8CF673F92EA912AE57 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Defective.JSON.JSONObject>::GetEnumerator()
inline Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1 List_1_GetEnumerator_m2EA9CF993A1757CD6FA450F8FB76CE5C4797CA95 (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1 (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Defective.JSON.JSONObject>::Dispose()
inline void Enumerator_Dispose_m9AB7547595606304114C14F0450F15FD30F51468 (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Defective.JSON.JSONObject>::get_Current()
inline JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* Enumerator_get_Current_m1499EAC836D33EE4BDFBC30928D75545E8F29523_inline (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1* __this, const RuntimeMethod* method)
{
	return ((  JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* (*) (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Defective.JSON.JSONObject::BeginStringifyArrayElement(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyArrayElement_m401B397C85AA21E3E8707178CD43782B533141B3 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::EndStringifyArrayElement(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyArrayElement_mD9266EAC7BC72C2ED1586C924DC8EA395E34E7F9 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Defective.JSON.JSONObject>::MoveNext()
inline bool Enumerator_MoveNext_mB602A35E50D2614F8EB42D0EAB33B023FB737E4B (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Defective.JSON.JSONObject::EndStringifyArrayContainer(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyArrayContainer_m4A176DF24C519585CF36618B389483DB439C88EB (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyBool(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyBool_m898A6B762DB8BFF8031306FCDE98DD54113853C4 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::StringifyNull(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyNull_m07BEE11BF14EE6CE788602C34450790A33411004 (StringBuilder_t* ___builder0, const RuntimeMethod* method) ;
// System.String Defective.JSON.JSONObject::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_EscapeString_m9D82BC2F43D518B2C71EF91E9EB70EBDA338357C (String_t* ___input0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNegativeInfinity_m13015C1072581C43BA6AAED02596E631C18942F6_inline (double ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Defective.JSON.JSONObject>::set_Item(System.Int32,T)
inline void List_1_set_Item_m14D37568F8283C45E21AA4A79F1AA25413ACD816 (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* __this, int32_t ___index0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*, int32_t, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_GetField_m2B0D3470E8784CF807ECAE34BBE45CB39EACCC53 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4 (bool* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObjectEnumerator Defective.JSON.JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* JSONObject_GetEnumerator_mB47C5B15F96CECE98FD0D8B8A64AB98CC78178BF (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObjectEnumerator::.ctor(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumerator__ctor_m24FA52671B6CD2C9492B8273FD881FA9B0499383 (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/ParseResult::.ctor(Defective.JSON.JSONObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC (ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result0, int32_t ___offset1, bool ___pause2, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68_U3CU3Em__Finally1_mB2D0F83679926380C8F79EC5E0ABAE8C375EDBCE (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68_System_IDisposable_Dispose_mA2379377CCDE0F24D624C6549C13E7ACC0E907EE (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject::ParseAsync(System.String,System.Int32,System.Int32,Defective.JSON.JSONObject,System.Int32,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_ParseAsync_mD9CF1A456EE9552A71DEA4B1A71F2EEBAD1B6033 (String_t* ___inputString0, int32_t ___offset1, int32_t ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, int32_t ___depth6, bool ___isRoot7, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.Generic.IEnumerable<Defective.JSON.JSONObject.ParseResult>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateAsyncU3Ed__68_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m32461717630B296EAA1792B7E489A40D05AB8E81 (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_U3CU3Em__Finally1_m482A862B7902AD7391AD1219D44134784397A73D (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_U3CU3Em__Finally2_m78CA52C647FB7924454346A0231A4F60034C79B4 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_System_IDisposable_Dispose_m13F01CD01D57E0294803AB399780E6AF1BB4A30E (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.Generic.IEnumerable<Defective.JSON.JSONObject.ParseResult>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseAsyncU3Ed__73_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m71C579CD32AF48A119F8FF42C018A5E6C2A7B0D1 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144_U3CU3Em__Finally1_m4F2BAC626B1180350DF43866B96C4945DCF5E3D9 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144_System_IDisposable_Dispose_m27C1E1BC536944AEE25FB38438DAEDD7F7C30BD1 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Boolean> Defective.JSON.JSONObject::PrintAsync(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m387EBF09BA88B98F25B260B5E7AE687B9B173375 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Object> Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__144_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mF079A5D40A11A5CEBB3BE437BEFBC602A9D061E6 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149_U3CU3Em__Finally1_m727B138D93BDD059674CB9E2941B1E8E58357078 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149_System_IDisposable_Dispose_m3D90AF8BE6471B6A8E2BF87E3A83BBFC3AF99847 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__149_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3536950E12E80DB4D36309DC2E42FB41CACA9F99 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150_U3CU3Em__Finally1_m10EEA6A1EB84CF55DF1C743A340AE69AE810F4B0 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150_System_IDisposable_Dispose_m548874C17D7796A551B77FB89B5E694BC40CF3A8 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Boolean> Defective.JSON.JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_mCAF9D38E572CA9C6F1875F99EAB5277BC2DBBAB0 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___depth0, StringBuilder_t* ___builder1, bool ___pretty2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__150_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m997250CFD5A6FA17271B571F3E1EC34793CDA7FC (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally1_mFB20068ACECE12AA238F2B15582D91F028AA5D9A (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally2_m5795F8F66E7F31EF7065C39EE2F3CE5CF13EE6BB (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_System_IDisposable_Dispose_m3DC6E25A6099F5A4A3CAA8DCD3DAF34BF992E8C9 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__151_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDEB59307F203A6EB9198E973CB1AA9D34C860177 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObjectEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObjectEnumerator_get_Current_m10B9A8901D2BB6CB9D84B23AEF44B25271762D8F (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, const RuntimeMethod* method) ;
// System.Boolean Defective.JSON.JSONObject::op_Implicit(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) ;
// System.Single Defective.JSON.JSONObject::get_floatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_emptyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC (const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector2_mA89194DA08FC7DC205E476F7E3E6EC839ED48A97 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector3_m49654ECF0EAA54908EC8E8B8369EEFAC64785EDD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector4_m039AF2BCB47A3B6DC6D7E9AA45ED957E39F76807 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromMatrix4x4_m2ABDFC006C1FD6882EFC599ACC6869CD532C478C (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromQuaternion_m7772B7596A359F0504635A1281ED4D48A74AFB88 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromColor_mC98BFA31A9ABAA2B2F9473071DFE2E6537E9AEC9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Defective.JSON.JSONObject::get_intValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_m3A5F4B8889D23C5AB9CC630FE260BF7ABD5890E8 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromLayerMask_mEA15F20E090D0B596A08E3C00222CFF7EEE3EFA0 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromRect_m689B0315243A82641210F853BB06A40FDEFF5D67 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m7DB8E8EDDB814824299F9EF661DAFA32854F0CC9 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_bottom_mB303CE31F9932C3BE8A3FD48E5049D624F395C83 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_left_mEE36418FAC0A5C5AA4A1C886C7CFF5D35AFAD2C0 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_right_m6D3608E0973F68CC0D0A6A9863D31D70972A9588 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_top_mEF389A8923A33EC2927AD13ADE00D960D4593207 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromRectOffset_m69440B729EBC1F1F7257C77EEB88591D4EA91D5E (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___rectOffset0, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL stop_tts();
IL2CPP_EXTERN_C void DEFAULT_CALL start_tts(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL speak_tts(char*, char*, float);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A(char* ___msg0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg0' to managed representation
	String_t* ____msg0_unmarshaled = NULL;
	____msg0_unmarshaled = il2cpp_codegen_marshal_string_result(___msg0);

	// Managed method invocation
	TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A(____msg0_unmarshaled, NULL);

}
// NativeTextToSpeech.TextToSpeech NativeTextToSpeech.TextToSpeech::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* TextToSpeech_get_Instance_mFC235F56EE7BD8A4B5A4268D7BD6BBBE0CEB7932 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TextToSpeech Instance => _instance;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_0 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		return L_0;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::stop_tts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_stop_tts_mB5B494A981BC471C94A107138039FAA3880A8408 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(stop_tts)();

}
// System.Void NativeTextToSpeech.TextToSpeech::start_tts(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_start_tts_m45B2975CCB5F9454A32FA9707660C67B8DB284EC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onFinish0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onError1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___onFinish0' to native representation
	Il2CppMethodPointer ____onFinish0_marshaled = NULL;
	____onFinish0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onFinish0));

	// Marshaling of parameter '___onError1' to native representation
	Il2CppMethodPointer ____onError1_marshaled = NULL;
	____onError1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onError1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(start_tts)(____onFinish0_marshaled, ____onError1_marshaled);

}
// System.Void NativeTextToSpeech.TextToSpeech::speak_tts(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_speak_tts_m5B73897F3D3E9EDC063BAF9BEE5F5705C8734049 (String_t* ___text0, String_t* ___language1, float ___rate2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, float);

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Marshaling of parameter '___language1' to native representation
	char* ____language1_marshaled = NULL;
	____language1_marshaled = il2cpp_codegen_marshal_string(___language1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(speak_tts)(____text0_marshaled, ____language1_marshaled, ___rate2);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

	// Marshaling cleanup of parameter '___language1' native representation
	il2cpp_codegen_marshal_free(____language1_marshaled);
	____language1_marshaled = NULL;

}
// System.Void NativeTextToSpeech.TextToSpeech::on_finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B2_0 = NULL;
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B1_0 = NULL;
	{
		// _instance?.onFinish();
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_0 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		TextToSpeech_onFinish_m23153CC2FDD11A6458CF4B17F8E34CF7C9A22E9D(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::on_error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B2_0 = NULL;
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B1_0 = NULL;
	{
		// _instance?.onError(msg);
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_0 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___msg0;
		NullCheck(G_B2_0);
		TextToSpeech_onError_m95CFE8C0DA50FCC7A411639A4AC1D965D81F654E(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Start_m97850D4215CD5516376BB1C5672488FED6EA9275 (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF478D574926C772710066881CAD8FDBFDB6BCD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Starting native tts");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFF478D574926C772710066881CAD8FDBFDB6BCD9, NULL);
		// start_tts(on_finish,on_error);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)TextToSpeech_on_finish_mC2FDC673CEB5E9A057D1E7606C4F8FDAE21E24EE_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, NULL, (intptr_t)((void*)TextToSpeech_on_error_m3BD238034CBDF7C3E92E3E056071AF93133E3E5A_RuntimeMethod_var), NULL);
		TextToSpeech_start_tts_m45B2975CCB5F9454A32FA9707660C67B8DB284EC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Stop_m71739F99A78F9DF63C7D032C238A211F88D9627C (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D313CE18D08825679828AF999DAFCA083D77CD1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping tts");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6D313CE18D08825679828AF999DAFCA083D77CD1, NULL);
		// stop_tts();
		TextToSpeech_stop_tts_mB5B494A981BC471C94A107138039FAA3880A8408(NULL);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::StopAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StopAndroid_m81F36DFF7AA04C178B4B78B1C231E8B3225AE836 (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::Speak(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Speak_m7C36D5AA37A08769C0289D3DA6AC0590B698F1CE (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, String_t* ___text0, String_t* ___language1, float ___rate2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3A1F5DF7FF3BBCF1833443D18056CF06C14B78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start speaking from Unity");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8A3A1F5DF7FF3BBCF1833443D18056CF06C14B78, NULL);
		// speak_tts(text, language, rate);
		String_t* L_0 = ___text0;
		String_t* L_1 = ___language1;
		float L_2 = ___rate2;
		TextToSpeech_speak_tts_m5B73897F3D3E9EDC063BAF9BEE5F5705C8734049(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// NativeTextToSpeech.TextToSpeech NativeTextToSpeech.TextToSpeech::Create(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* TextToSpeech_Create_m278A888CC43A88CFDC6991AAAD84ABE7D347A884 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___finish0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F02525C904C10E94C588532D2247BC12B21A88);
		s_Il2CppMethodInitialized = true;
	}
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B2_0 = NULL;
	TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* G_B1_0 = NULL;
	{
		// _instance?.Stop();
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_0 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		TextToSpeech_Stop_m71739F99A78F9DF63C7D032C238A211F88D9627C(G_B2_0, NULL);
	}

IL_0010:
	{
		// _instance = new TextToSpeech(finish, error);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___finish0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___error1;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_4 = (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35*)il2cpp_codegen_object_new(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TextToSpeech__ctor_m5562602C68A0ED7D2968EBCEC24B81C219BBBBD6(L_4, L_2, L_3, NULL);
		((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6), (void*)L_4);
		// _instance.Start();
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_5 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		NullCheck(L_5);
		TextToSpeech_Start_m97850D4215CD5516376BB1C5672488FED6EA9275(L_5, NULL);
		// Debug.Log("Created new TextToSpeech instance ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral14F02525C904C10E94C588532D2247BC12B21A88, NULL);
		// return _instance;
		TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* L_6 = ((TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35_il2cpp_TypeInfo_var))->____instance_6;
		return L_6;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::.ctor(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech__ctor_m5562602C68A0ED7D2968EBCEC24B81C219BBBBD6 (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___finish0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E76E65E4287B7975EF89598914E1BF30677BE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TextToSpeech(Action finish, Action<string> error)  : base("net.okhotnikov.tts.TTSCallbackReceiver")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral47E76E65E4287B7975EF89598914E1BF30677BE0, NULL);
		// _finish = finish;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___finish0;
		__this->____finish_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____finish_4), (void*)L_0);
		// _error = error;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___error1;
		__this->____error_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::onFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onFinish_m23153CC2FDD11A6458CF4B17F8E34CF7C9A22E9D (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F0CAB6D4597C28EC0AEA58FD5120580F8F97E79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("TTS finished ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2F0CAB6D4597C28EC0AEA58FD5120580F8F97E79, NULL);
		// _finish();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____finish_4;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeTextToSpeech.TextToSpeech::onError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onError_m95CFE8C0DA50FCC7A411639A4AC1D965D81F654E (TextToSpeech_t1A1D1622E9AB171FA0983A341077F85044FCBE35* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29936FD27CFDE2F8CC838AA294B448BFE25527BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("Error received: " + error);
		String_t* L_0 = ___error0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral29936FD27CFDE2F8CC838AA294B448BFE25527BC, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		// _error(error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = __this->____error_5;
		String_t* L_3 = ___error0;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DentedPixel.LeanDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDummy__ctor_mAD97A9FAAAF771BEC38CA22F2CBA2DBA31E609CC (LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Defective.JSON.JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_m00F12A4F458FD3741B5B84FF00361E8B60E015CA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Array || type == Type.Object; }
		int32_t L_0 = __this->___type_11;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___type_11;
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Int32 Defective.JSON.JSONObject::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return list == null ? 0 : list.Count;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_0 = __this->___list_12;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = __this->___list_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_inline(L_1, List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Single Defective.JSON.JSONObject::get_floatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// return (float) doubleValue;
		double L_0 = __this->___doubleValue_18;
		return ((float)L_0);
	}
}
// System.Void Defective.JSON.JSONObject::set_floatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_floatValue_m48A5348CB0A2E3E532536A3E5EFEA5A449C91B5E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// doubleValue = value;
		float L_0 = ___value0;
		__this->___doubleValue_18 = ((double)L_0);
		// }
		return;
	}
}
// System.Int32 Defective.JSON.JSONObject::get_intValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// return (int) longValue;
		int64_t L_0 = __this->___longValue_16;
		return ((int32_t)L_0);
	}
}
// System.Void Defective.JSON.JSONObject::set_intValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_intValue_m0EC8338903B3D798028AE171394B85871348630C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// longValue = value;
		int32_t L_0 = ___value0;
		__this->___longValue_16 = ((int64_t)L_0);
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_nullObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_nullObject_m1F5C12DDD7E80EAE0F2DB6F9D0DC722F0BC76D51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Create(Type.Null); }
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_mA98A7D0FA92912A9AF75DE79D74B5CB043F5C2C7(0, NULL);
		return L_0;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_emptyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Create(Type.Object); }
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_mA98A7D0FA92912A9AF75DE79D74B5CB043F5C2C7(3, NULL);
		return L_0;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_emptyArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_emptyArray_mE38ACEBA8AF391D1FD3550DC3AF8F898CAF1176E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Create(Type.Array); }
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_mA98A7D0FA92912A9AF75DE79D74B5CB043F5C2C7(4, NULL);
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(Defective.JSON.JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m1E06AF85B7CA12B69EE73458E24BBDD315BC14D2 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(Type type) { this.type = type; }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public JSONObject(Type type) { this.type = type; }
		int32_t L_0 = ___type0;
		__this->___type_11 = L_0;
		// public JSONObject(Type type) { this.type = type; }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mC13FB0B0668B95C463B19E3E30E44855D9D6B9E5 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(bool value) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Bool;
		__this->___type_11 = 5;
		// boolValue = value;
		bool L_0 = ___value0;
		__this->___boolValue_17 = L_0;
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m05638648CBFFA356BA23D7DD2246A0A577D03F70 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(float value) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Number;
		__this->___type_11 = 2;
		// doubleValue = value;
		float L_0 = ___value0;
		__this->___doubleValue_18 = ((double)L_0);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8AF365C70421AB0066B328C445D1A198156763CB (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(double value) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Number;
		__this->___type_11 = 2;
		// doubleValue = value;
		double L_0 = ___value0;
		__this->___doubleValue_18 = L_0;
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m3D81F8246A799DF8C3717AF6E5EA5670CAFA4051 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(int value) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Number;
		__this->___type_11 = 2;
		// longValue = value;
		int32_t L_0 = ___value0;
		__this->___longValue_16 = ((int64_t)L_0);
		// isInteger = true;
		__this->___isInteger_15 = (bool)1;
		// doubleValue = value;
		int32_t L_1 = ___value0;
		__this->___doubleValue_18 = ((double)L_1);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m63AD2F6A264951F3AA9E0B1DE112E0725D4E5E6B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(long value) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Number;
		__this->___type_11 = 2;
		// longValue = value;
		int64_t L_0 = ___value0;
		__this->___longValue_16 = L_0;
		// isInteger = true;
		__this->___isInteger_15 = (bool)1;
		// doubleValue = value;
		int64_t L_1 = ___value0;
		__this->___doubleValue_18 = ((double)L_1);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8E0B8317A269C3AEF30CC3A636BE7ECAB6C1FB7E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public JSONObject(Dictionary<string, string> dictionary) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Object;
		__this->___type_11 = 3;
		// keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___keys_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_13), (void*)L_0);
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_1, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		__this->___list_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_1);
		// foreach (KeyValuePair<string, string> kvp in dictionary) {
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___dictionary0;
		NullCheck(L_2);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_3;
		L_3 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_2, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_002c_1:
			{
				// foreach (KeyValuePair<string, string> kvp in dictionary) {
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_4;
				L_4 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_4;
				// keys.Add(kvp.Key);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___keys_13;
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_5);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// list.Add(CreateStringObject(kvp.Value));
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_7 = __this->___list_12;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9;
				L_9 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_8, NULL);
				NullCheck(L_7);
				List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_7, L_9, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
			}

IL_005d_1:
			{
				// foreach (KeyValuePair<string, string> kvp in dictionary) {
				bool L_10;
				L_10 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,Defective.JSON.JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m162E3808E6BA08BDEB8D971A1BE535E23139C9C2 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public JSONObject(Dictionary<string, JSONObject> dictionary) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Object;
		__this->___type_11 = 3;
		// keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___keys_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_13), (void*)L_0);
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_1, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		__this->___list_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_1);
		// foreach (KeyValuePair<string, JSONObject> kvp in dictionary) {
		Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* L_2 = ___dictionary0;
		NullCheck(L_2);
		Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E L_3;
		L_3 = Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7(L_2, Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89((&V_0), Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_002c_1:
			{
				// foreach (KeyValuePair<string, JSONObject> kvp in dictionary) {
				KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 L_4;
				L_4 = Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_inline((&V_0), Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_RuntimeMethod_var);
				V_1 = L_4;
				// keys.Add(kvp.Key);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___keys_13;
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_inline((&V_1), KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_RuntimeMethod_var);
				NullCheck(L_5);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// list.Add(kvp.Value);
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_7 = __this->___list_12;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8;
				L_8 = KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_inline((&V_1), KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_RuntimeMethod_var);
				NullCheck(L_7);
				List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_7, L_8, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
			}

IL_0058_1:
			{
				// foreach (KeyValuePair<string, JSONObject> kvp in dictionary) {
				bool L_9;
				L_9 = Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F((&V_0), Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(Defective.JSON.JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8E9C1D4CCC7D38171FD3B81FFF2A9BD86931CF2B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* ___content0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(AddJSONContents content) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// content.Invoke(this);
		AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* L_0 = ___content0;
		NullCheck(L_0);
		AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_inline(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(Defective.JSON.JSONObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m00749B0291308AB205499957E6F22582F71E4B48 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* ___objects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(JSONObject[] objects) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Array;
		__this->___type_11 = 4;
		// list = new List<JSONObject>(objects);
		JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* L_0 = ___objects0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614(L_1, (RuntimeObject*)L_0, List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614_RuntimeMethod_var);
		__this->___list_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.Collections.Generic.List`1<Defective.JSON.JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mC9083F65FBAFC538559E23A68A472D3124583E9F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* ___objects0, const RuntimeMethod* method) 
{
	{
		// public JSONObject(List<JSONObject> objects) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// type = Type.Array;
		__this->___type_11 = 4;
		// list = objects;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_0 = ___objects0;
		__this->___list_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_0);
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::StringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_StringObject_m8E4F2B63F4BDC99AA014AFE5EDFBC91CB16F23BB (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateStringObject(value);
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_0, NULL);
		return L_1;
	}
}
// System.Void Defective.JSON.JSONObject::Absorb(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_m837B43D88B2836C574B78E5CAB712A1CF2605F82 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC3B5DD5F352897C36234BDBD128F2B302DA45C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	{
		// var otherList = other.list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___other0;
		NullCheck(L_0);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = L_0->___list_12;
		V_0 = L_1;
		// if (otherList != null) {
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (list == null)
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_3 = __this->___list_12;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_4 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_4, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		__this->___list_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_4);
	}

IL_001d:
	{
		// list.AddRange(otherList);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_5 = __this->___list_12;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_6 = V_0;
		NullCheck(L_5);
		List_1_AddRange_mC3B5DD5F352897C36234BDBD128F2B302DA45C7C(L_5, L_6, List_1_AddRange_mC3B5DD5F352897C36234BDBD128F2B302DA45C7C_RuntimeMethod_var);
	}

IL_0029:
	{
		// var otherKeys = other.keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = ___other0;
		NullCheck(L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7->___keys_13;
		V_1 = L_8;
		// if (otherKeys != null) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// if (keys == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = __this->___keys_13;
		if (L_10)
		{
			goto IL_0046;
		}
	}
	{
		// keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_11, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___keys_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_13), (void*)L_11);
	}

IL_0046:
	{
		// keys.AddRange(otherKeys);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->___keys_13;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_1;
		NullCheck(L_12);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_12, L_13, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_0052:
	{
		// stringValue = other.stringValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_14 = ___other0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___stringValue_14;
		__this->___stringValue_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringValue_14), (void*)L_15);
		// doubleValue = other.doubleValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = ___other0;
		NullCheck(L_16);
		double L_17 = L_16->___doubleValue_18;
		__this->___doubleValue_18 = L_17;
		// isInteger = other.isInteger;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = ___other0;
		NullCheck(L_18);
		bool L_19 = L_18->___isInteger_15;
		__this->___isInteger_15 = L_19;
		// longValue = other.longValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_20 = ___other0;
		NullCheck(L_20);
		int64_t L_21 = L_20->___longValue_16;
		__this->___longValue_16 = L_21;
		// boolValue = other.boolValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22 = ___other0;
		NullCheck(L_22);
		bool L_23 = L_22->___boolValue_17;
		__this->___boolValue_17 = L_23;
		// type = other.type;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = ___other0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___type_11;
		__this->___type_11 = L_25;
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONObject();
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*)il2cpp_codegen_object_new(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_mF2B460AF8159D2789DCD76E03D7A97F547CF81FF(L_0, NULL);
		return L_0;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(Defective.JSON.JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mA98A7D0FA92912A9AF75DE79D74B5CB043F5C2C7 (int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = type;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		int32_t L_2 = ___type0;
		NullCheck(L_1);
		L_1->___type_11 = L_2;
		// return jsonObject;
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m1788D5E207F8DD08203F223F445269AFF49FBFBC (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Bool;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 5;
		// jsonObject.boolValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		bool L_3 = ___value0;
		NullCheck(L_2);
		L_2->___boolValue_17 = L_3;
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m10CC383E53FB604C8A7159363CDE97F042F3AEA5 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Number;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 2;
		// jsonObject.doubleValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->___doubleValue_18 = ((double)L_3);
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mBEA3C860EF1AC144A435CB00EF4CC44E433DA90A (double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Number;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 2;
		// jsonObject.doubleValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		double L_3 = ___value0;
		NullCheck(L_2);
		L_2->___doubleValue_18 = L_3;
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mC0CB937160189E43A9CD2DB66D43C48AB840E604 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Number;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 2;
		// jsonObject.isInteger = true;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		NullCheck(L_2);
		L_2->___isInteger_15 = (bool)1;
		// jsonObject.longValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = L_2;
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		L_3->___longValue_16 = ((int64_t)L_4);
		// jsonObject.doubleValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = L_3;
		int32_t L_6 = ___value0;
		NullCheck(L_5);
		L_5->___doubleValue_18 = ((double)L_6);
		// return jsonObject;
		return L_5;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m82B00AF99D5B4373BBFB1792A7F3558F46210D4F (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Number;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 2;
		// jsonObject.isInteger = true;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		NullCheck(L_2);
		L_2->___isInteger_15 = (bool)1;
		// jsonObject.longValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = L_2;
		int64_t L_4 = ___value0;
		NullCheck(L_3);
		L_3->___longValue_16 = L_4;
		// jsonObject.doubleValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = L_3;
		int64_t L_6 = ___value0;
		NullCheck(L_5);
		L_5->___doubleValue_18 = ((double)L_6);
		// return jsonObject;
		return L_5;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.String;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 1;
		// jsonObject.stringValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		L_2->___stringValue_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stringValue_14), (void*)L_3);
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_CreateBakedObject_m2039F450D1C8D6B09DD2929411721737706B0730 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var bakedObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// bakedObject.type = Type.Baked;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 6;
		// bakedObject.stringValue = value;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		L_2->___stringValue_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stringValue_14), (void*)L_3);
		// return bakedObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m737F0E10CB3D7495B72387BFD86E20E12B20D40D (String_t* ___jsonString0, int32_t ___offset1, int32_t ___endOffset2, int32_t ___maxDepth3, bool ___storeExcessLevels4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_0 = L_0;
		// Parse(jsonString, ref offset, endOffset, jsonObject, maxDepth, storeExcessLevels);
		String_t* L_1 = ___jsonString0;
		int32_t L_2 = ___endOffset2;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		int32_t L_4 = ___maxDepth3;
		bool L_5 = ___storeExcessLevels4;
		JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76(L_1, (&___offset1), L_2, L_3, L_4, L_5, 0, (bool)1, NULL);
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = V_0;
		return L_6;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(Defective.JSON.JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m3F61423188DA6AEB0E49022B393E544AB7C50AB8 (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_0 = L_0;
		// content.Invoke(jsonObject);
		AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* L_1 = ___content0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = V_0;
		NullCheck(L_1);
		AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_inline(L_1, L_2, NULL);
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		return L_3;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(Defective.JSON.JSONObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m5F5A4DCEA4E903BED1E4A4C1262206529EC9C05C (JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* ___objects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Array;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 4;
		// jsonObject.list = new List<JSONObject>(objects);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		JSONObjectU5BU5D_t95855C82EA715A0850032E38D20926E75F68ED0A* L_3 = ___objects0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_4 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614(L_4, (RuntimeObject*)L_3, List_1__ctor_mEAEAC7B657BD28EB0C53FD575F050ED32B0F0614_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___list_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___list_12), (void*)L_4);
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Collections.Generic.List`1<Defective.JSON.JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m21A570C26F8C99ED07176FE3C60941204D0E730B (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* ___objects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		// jsonObject.type = Type.Array;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___type_11 = 4;
		// jsonObject.list = objects;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = L_1;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_3 = ___objects0;
		NullCheck(L_2);
		L_2->___list_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___list_12), (void*)L_3);
		// return jsonObject;
		return L_2;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_m1B16DF88557BB7705180F3EA3E747CFE2E2CE283 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* V_2 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_0 = L_0;
		// jsonObject.type = Type.Object;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___type_11 = 3;
		// var keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_2;
		// jsonObject.keys = keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_1;
		NullCheck(L_3);
		L_3->___keys_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___keys_13), (void*)L_4);
		// var list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_5 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_5, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		V_2 = L_5;
		// jsonObject.list = list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = V_0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_7 = V_2;
		NullCheck(L_6);
		L_6->___list_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___list_12), (void*)L_7);
		// foreach (var kvp in dictionary) {
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___dictionary0;
		NullCheck(L_8);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_9;
		L_9 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_8, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_3), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_0030_1:
			{
				// foreach (var kvp in dictionary) {
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_10;
				L_10 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_3), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_4 = L_10;
				// keys.Add(kvp.Key);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_1;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_4), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_11);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// list.Add(CreateStringObject(kvp.Value));
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_13 = V_2;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_4), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15;
				L_15 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_14, NULL);
				NullCheck(L_13);
				List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_13, L_15, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
			}

IL_0058_1:
			{
				// foreach (var kvp in dictionary) {
				bool L_16;
				L_16 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_3), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_17 = V_0;
		return L_17;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,Defective.JSON.JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Create_mF85BCBE39A69EEA2B0FBFA987A19A36CF51F7E09 (Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* V_2 = NULL;
	Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var jsonObject = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_0 = L_0;
		// jsonObject.type = Type.Object;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___type_11 = 3;
		// var keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_2;
		// jsonObject.keys = keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_1;
		NullCheck(L_3);
		L_3->___keys_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___keys_13), (void*)L_4);
		// var list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_5 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_5, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		V_2 = L_5;
		// jsonObject.list = list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = V_0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_7 = V_2;
		NullCheck(L_6);
		L_6->___list_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___list_12), (void*)L_7);
		// foreach (var kvp in dictionary) {
		Dictionary_2_tAEE93EBD1B632EC3354BF9569A9FFA265E427300* L_8 = ___dictionary0;
		NullCheck(L_8);
		Enumerator_t560C2AC8EC83EAF918D811361C63047CEB8CF90E L_9;
		L_9 = Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7(L_8, Dictionary_2_GetEnumerator_m12C90FE4C42D7FAB6101841D3C0E78320B924AE7_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89((&V_3), Enumerator_Dispose_m68A0FF384C27BC5DB4F17853F3E3C05874C02C89_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0030_1:
			{
				// foreach (var kvp in dictionary) {
				KeyValuePair_2_t9A258258DAD2BB53866D605DF49D9F4EA39A5285 L_10;
				L_10 = Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_inline((&V_3), Enumerator_get_Current_m56228C91F712747F13BF9589DA300B7C4A593FAA_RuntimeMethod_var);
				V_4 = L_10;
				// keys.Add(kvp.Key);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_1;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_inline((&V_4), KeyValuePair_2_get_Key_m618395E14C4DB31BEC8A455EA60BC2BA3EB06B1F_RuntimeMethod_var);
				NullCheck(L_11);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// list.Add(kvp.Value);
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_13 = V_2;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_14;
				L_14 = KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_inline((&V_4), KeyValuePair_2_get_Value_m882FFD34E48422137AF5BBFD29AE91C02A72C409_RuntimeMethod_var);
				NullCheck(L_13);
				List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_13, L_14, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
			}

IL_0053_1:
			{
				// foreach (var kvp in dictionary) {
				bool L_15;
				L_15 = Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F((&V_3), Enumerator_MoveNext_mA1E4CA635FA7FDFB473D3E0A745133528E78810F_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject::CreateAsync(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_CreateAsync_m7EAAF14B073DBE3934674772D81D3B6B158730DF (String_t* ___jsonString0, int32_t ___offset1, int32_t ___endOffset2, int32_t ___maxDepth3, bool ___storeExcessLevels4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_0 = (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0*)il2cpp_codegen_object_new(U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreateAsyncU3Ed__68__ctor_m73342FE672B04F95C4ADBEEADA07765F7D3E777D(L_0, ((int32_t)-2), NULL);
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_1 = L_0;
		String_t* L_2 = ___jsonString0;
		NullCheck(L_1);
		L_1->___U3CU3E3__jsonString_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__jsonString_4), (void*)L_2);
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_3 = L_1;
		int32_t L_4 = ___offset1;
		NullCheck(L_3);
		L_3->___U3CU3E3__offset_6 = L_4;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_5 = L_3;
		int32_t L_6 = ___endOffset2;
		NullCheck(L_5);
		L_5->___U3CU3E3__endOffset_8 = L_6;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_7 = L_5;
		int32_t L_8 = ___maxDepth3;
		NullCheck(L_7);
		L_7->___U3CU3E3__maxDepth_10 = L_8;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_9 = L_7;
		bool L_10 = ___storeExcessLevels4;
		NullCheck(L_9);
		L_9->___U3CU3E3__storeExcessLevels_12 = L_10;
		return L_9;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mF2B460AF8159D2789DCD76E03D7A97F547CF81FF (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// public JSONObject() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public JSONObject() { }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mFE2486DED26CD17E22720E73F1E624E532EAFF8A (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___jsonString0, int32_t ___offset1, int32_t ___endOffset2, int32_t ___maxDepth3, bool ___storeExcessLevels4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(string jsonString, int offset = 0, int endOffset = -1, int maxDepth = -1, bool storeExcessLevels = false) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Parse(jsonString, ref offset, endOffset, this, maxDepth, storeExcessLevels);
		String_t* L_0 = ___jsonString0;
		int32_t L_1 = ___endOffset2;
		int32_t L_2 = ___maxDepth3;
		bool L_3 = ___storeExcessLevels4;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76(L_0, (&___offset1), L_1, __this, L_2, L_3, 0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject::BeginParse(System.String,System.Int32,System.Int32&,Defective.JSON.JSONObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27 (String_t* ___inputString0, int32_t ___offset1, int32_t* ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (container == null)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___container3;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("container");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0074C49CE7D7ED9232C28459AA9DB19B1D06C223)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (maxDepth == 0) {
		int32_t L_2 = ___maxDepth4;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if (storeExcessLevels) {
		bool L_3 = ___storeExcessLevels5;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// container.stringValue = inputString;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___container3;
		String_t* L_5 = ___inputString0;
		NullCheck(L_4);
		L_4->___stringValue_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___stringValue_14), (void*)L_5);
		// container.type = Type.Baked;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___container3;
		NullCheck(L_6);
		L_6->___type_11 = 6;
		goto IL_002d;
	}

IL_0026:
	{
		// container.type = Type.Null;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = ___container3;
		NullCheck(L_7);
		L_7->___type_11 = 0;
	}

IL_002d:
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// var stringLength = inputString.Length;
		String_t* L_8 = ___inputString0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_0 = L_9;
		// if (endOffset == -1)
		int32_t* L_10 = ___endOffset2;
		int32_t L_11 = *((int32_t*)L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0040;
		}
	}
	{
		// endOffset = stringLength - 1;
		int32_t* L_12 = ___endOffset2;
		int32_t L_13 = V_0;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0040:
	{
		// if (string.IsNullOrEmpty(inputString)) {
		String_t* L_14 = ___inputString0;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// if (endOffset >= stringLength)
		int32_t* L_16 = ___endOffset2;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_005f;
		}
	}
	{
		// throw new ArgumentException("Cannot parse if end offset is greater than or equal to string length", "endOffset");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF269C8AA670766E94BF5B0AB838989B114D6C9D8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB18401C35133C78B1809EA9659B10913E2F430A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27_RuntimeMethod_var)));
	}

IL_005f:
	{
		// if (offset >= endOffset)
		int32_t L_20 = ___offset1;
		int32_t* L_21 = ___endOffset2;
		int32_t L_22 = *((int32_t*)L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0074;
		}
	}
	{
		// throw new ArgumentException("Cannot parse if offset is greater than or equal to end offset", "offset");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5A52E47B1F94FFB41929E7E93154B6B04402E29)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27_RuntimeMethod_var)));
	}

IL_0074:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Defective.JSON.JSONObject::Parse(System.String,System.Int32&,System.Int32,Defective.JSON.JSONObject,System.Int32,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76 (String_t* ___inputString0, int32_t* ___offset1, int32_t ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, int32_t ___depth6, bool ___isRoot7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		// if (!BeginParse(inputString, offset, ref endOffset, container, maxDepth, storeExcessLevels))
		String_t* L_0 = ___inputString0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___container3;
		int32_t L_4 = ___maxDepth4;
		bool L_5 = ___storeExcessLevels5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27(L_0, L_2, (&___endOffset2), L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// var startOffset = offset;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		V_0 = L_8;
		// var quoteStart = 0;
		V_1 = 0;
		// var quoteEnd = 0;
		V_2 = 0;
		// var lastValidOffset = offset;
		int32_t* L_9 = ___offset1;
		int32_t L_10 = *((int32_t*)L_9);
		V_3 = L_10;
		// var openQuote = false;
		V_4 = (bool)0;
		// var bakeDepth = 0;
		V_5 = 0;
		goto IL_01b6;
	}

IL_0027:
	{
		// var currentCharacter = inputString[offset++];
		String_t* L_11 = ___inputString0;
		int32_t* L_12 = ___offset1;
		int32_t* L_13 = ___offset1;
		int32_t L_14 = *((int32_t*)L_13);
		V_8 = L_14;
		int32_t L_15 = V_8;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_8;
		NullCheck(L_11);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_16, NULL);
		V_6 = L_17;
		// if (Array.IndexOf(Whitespace, currentCharacter) > -1)
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___Whitespace_10;
		Il2CppChar L_19 = V_6;
		int32_t L_20;
		L_20 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9(L_18, L_19, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		if ((((int32_t)L_20) > ((int32_t)(-1))))
		{
			goto IL_01b6;
		}
	}
	{
		Il2CppChar L_21 = V_6;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar L_22 = V_6;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)34))))
		{
			goto IL_017b;
		}
	}
	{
		Il2CppChar L_23 = V_6;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)44))))
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar L_24 = V_6;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)58))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_01b1;
	}

IL_0073:
	{
		Il2CppChar L_25 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_00fb;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0163;
			}
		}
	}
	{
		Il2CppChar L_26 = V_6;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppChar L_27 = V_6;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)125))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_01b1;
	}

IL_009d:
	{
		// offset++;
		int32_t* L_28 = ___offset1;
		int32_t* L_29 = ___offset1;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		// break;
		goto IL_01b1;
	}

IL_00a8:
	{
		// if (openQuote)
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_01b1;
		}
	}
	{
		// if (maxDepth >= 0 && depth >= maxDepth) {
		int32_t L_32 = ___maxDepth4;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_33 = ___depth6;
		int32_t L_34 = ___maxDepth4;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00c5;
		}
	}
	{
		// bakeDepth++;
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		// break;
		goto IL_01b1;
	}

IL_00c5:
	{
		// newContainer = container;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_36 = ___container3;
		V_7 = L_36;
		// if (!isRoot) {
		bool L_37 = ___isRoot7;
		if (L_37)
		{
			goto IL_00db;
		}
	}
	{
		// newContainer = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_38;
		L_38 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_7 = L_38;
		// SafeAddChild(container, newContainer);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_39 = ___container3;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_40 = V_7;
		JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(L_39, L_40, NULL);
	}

IL_00db:
	{
		// newContainer.type = Type.Object;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_41 = V_7;
		NullCheck(L_41);
		L_41->___type_11 = 3;
		// Parse(inputString, ref offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false);
		String_t* L_42 = ___inputString0;
		int32_t* L_43 = ___offset1;
		int32_t L_44 = ___endOffset2;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_45 = V_7;
		int32_t L_46 = ___maxDepth4;
		bool L_47 = ___storeExcessLevels5;
		int32_t L_48 = ___depth6;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76(L_42, L_43, L_44, L_45, L_46, L_47, ((int32_t)il2cpp_codegen_add(L_48, 1)), (bool)0, NULL);
		// break;
		goto IL_01b1;
	}

IL_00fb:
	{
		// if (openQuote)
		bool L_49 = V_4;
		if (L_49)
		{
			goto IL_01b1;
		}
	}
	{
		// if (maxDepth >= 0 && depth >= maxDepth) {
		int32_t L_50 = ___maxDepth4;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_51 = ___depth6;
		int32_t L_52 = ___maxDepth4;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0118;
		}
	}
	{
		// bakeDepth++;
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// break;
		goto IL_01b1;
	}

IL_0118:
	{
		// newContainer = container;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_54 = ___container3;
		V_7 = L_54;
		// if (!isRoot) {
		bool L_55 = ___isRoot7;
		if (L_55)
		{
			goto IL_012e;
		}
	}
	{
		// newContainer = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_56;
		L_56 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_7 = L_56;
		// SafeAddChild(container, newContainer);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_57 = ___container3;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_58 = V_7;
		JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(L_57, L_58, NULL);
	}

IL_012e:
	{
		// newContainer.type = Type.Array;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_59 = V_7;
		NullCheck(L_59);
		L_59->___type_11 = 4;
		// Parse(inputString, ref offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false);
		String_t* L_60 = ___inputString0;
		int32_t* L_61 = ___offset1;
		int32_t L_62 = ___endOffset2;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_63 = V_7;
		int32_t L_64 = ___maxDepth4;
		bool L_65 = ___storeExcessLevels5;
		int32_t L_66 = ___depth6;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_Parse_m8CC10FCB272F6AC7AB77A56A8CC45CA6B6B3EE76(L_60, L_61, L_62, L_63, L_64, L_65, ((int32_t)il2cpp_codegen_add(L_66, 1)), (bool)0, NULL);
		// break;
		goto IL_01b1;
	}

IL_014b:
	{
		// if (!ParseObjectEnd(inputString, offset, openQuote, container, startOffset, lastValidOffset, maxDepth, storeExcessLevels, depth, ref bakeDepth))
		String_t* L_67 = ___inputString0;
		int32_t* L_68 = ___offset1;
		int32_t L_69 = *((int32_t*)L_68);
		bool L_70 = V_4;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_71 = ___container3;
		int32_t L_72 = V_0;
		int32_t L_73 = V_3;
		int32_t L_74 = ___maxDepth4;
		bool L_75 = ___storeExcessLevels5;
		int32_t L_76 = ___depth6;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = JSONObject_ParseObjectEnd_m409EF6F2E8E663FF9D81D154E14B7FB54114CB2D(L_67, L_69, L_70, L_71, L_72, L_73, L_74, L_75, L_76, (&V_5), NULL);
		if (L_77)
		{
			goto IL_01b1;
		}
	}
	{
		// return;
		return;
	}

IL_0163:
	{
		// if (!ParseArrayEnd(inputString, offset, openQuote, container, startOffset, lastValidOffset, maxDepth, storeExcessLevels, depth, ref bakeDepth))
		String_t* L_78 = ___inputString0;
		int32_t* L_79 = ___offset1;
		int32_t L_80 = *((int32_t*)L_79);
		bool L_81 = V_4;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_82 = ___container3;
		int32_t L_83 = V_0;
		int32_t L_84 = V_3;
		int32_t L_85 = ___maxDepth4;
		bool L_86 = ___storeExcessLevels5;
		int32_t L_87 = ___depth6;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = JSONObject_ParseArrayEnd_mCD9D6A7C7F47DAA478304ED96B06ED332521C54C(L_78, L_80, L_81, L_82, L_83, L_84, L_85, L_86, L_87, (&V_5), NULL);
		if (L_88)
		{
			goto IL_01b1;
		}
	}
	{
		// return;
		return;
	}

IL_017b:
	{
		// ParseQuote(ref openQuote, offset, ref quoteStart, ref quoteEnd);
		int32_t* L_89 = ___offset1;
		int32_t L_90 = *((int32_t*)L_89);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_ParseQuote_mFBA405A5993329CD10F3255B7EA5FA0B512D9B9D((&V_4), L_90, (&V_1), (&V_2), NULL);
		// break;
		goto IL_01b1;
	}

IL_018a:
	{
		// if (!ParseColon(inputString, openQuote, container, ref startOffset, offset, quoteStart, quoteEnd, bakeDepth))
		String_t* L_91 = ___inputString0;
		bool L_92 = V_4;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_93 = ___container3;
		int32_t* L_94 = ___offset1;
		int32_t L_95 = *((int32_t*)L_94);
		int32_t L_96 = V_1;
		int32_t L_97 = V_2;
		int32_t L_98 = V_5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = JSONObject_ParseColon_m917F7EC0729BB7E9A86C447034DA9C00310778E7(L_91, L_92, L_93, (&V_0), L_95, L_96, L_97, L_98, NULL);
		if (L_99)
		{
			goto IL_01b1;
		}
	}
	{
		// return;
		return;
	}

IL_019e:
	{
		// if (!ParseComma(inputString, openQuote, container, ref startOffset, offset, lastValidOffset, bakeDepth))
		String_t* L_100 = ___inputString0;
		bool L_101 = V_4;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_102 = ___container3;
		int32_t* L_103 = ___offset1;
		int32_t L_104 = *((int32_t*)L_103);
		int32_t L_105 = V_3;
		int32_t L_106 = V_5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = JSONObject_ParseComma_mE24033BD9D67738BC3DDC81E2F9B821C25E2E5E4(L_100, L_101, L_102, (&V_0), L_104, L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_01b1;
		}
	}
	{
		// return;
		return;
	}

IL_01b1:
	{
		// lastValidOffset = offset - 1;
		int32_t* L_108 = ___offset1;
		int32_t L_109 = *((int32_t*)L_108);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
	}

IL_01b6:
	{
		// while (offset <= endOffset) {
		int32_t* L_110 = ___offset1;
		int32_t L_111 = *((int32_t*)L_110);
		int32_t L_112 = ___endOffset2;
		if ((((int32_t)L_111) <= ((int32_t)L_112)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject::ParseAsync(System.String,System.Int32,System.Int32,Defective.JSON.JSONObject,System.Int32,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_ParseAsync_mD9CF1A456EE9552A71DEA4B1A71F2EEBAD1B6033 (String_t* ___inputString0, int32_t ___offset1, int32_t ___endOffset2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___maxDepth4, bool ___storeExcessLevels5, int32_t ___depth6, bool ___isRoot7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_0 = (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548*)il2cpp_codegen_object_new(U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CParseAsyncU3Ed__73__ctor_m35663A7C21BE4D9FF319F64E93568B2796611B71(L_0, ((int32_t)-2), NULL);
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_1 = L_0;
		String_t* L_2 = ___inputString0;
		NullCheck(L_1);
		L_1->___U3CU3E3__inputString_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__inputString_4), (void*)L_2);
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_3 = L_1;
		int32_t L_4 = ___offset1;
		NullCheck(L_3);
		L_3->___U3CU3E3__offset_6 = L_4;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_5 = L_3;
		int32_t L_6 = ___endOffset2;
		NullCheck(L_5);
		L_5->___U3CU3E3__endOffset_8 = L_6;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_7 = L_5;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = ___container3;
		NullCheck(L_7);
		L_7->___U3CU3E3__container_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E3__container_10), (void*)L_8);
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_9 = L_7;
		int32_t L_10 = ___maxDepth4;
		NullCheck(L_9);
		L_9->___U3CU3E3__maxDepth_12 = L_10;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_11 = L_9;
		bool L_12 = ___storeExcessLevels5;
		NullCheck(L_11);
		L_11->___U3CU3E3__storeExcessLevels_14 = L_12;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_13 = L_11;
		int32_t L_14 = ___depth6;
		NullCheck(L_13);
		L_13->___U3CU3E3__depth_16 = L_14;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_15 = L_13;
		bool L_16 = ___isRoot7;
		NullCheck(L_15);
		L_15->___U3CU3E3__isRoot_18 = L_16;
		return L_15;
	}
}
// System.Void Defective.JSON.JSONObject::SafeAddChild(Defective.JSON.JSONObject,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___child1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* V_0 = NULL;
	{
		// var list = container.list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___container0;
		NullCheck(L_0);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = L_0->___list_12;
		V_0 = L_1;
		// if (list == null) {
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_3 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_3, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		V_0 = L_3;
		// container.list = list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___container0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_5 = V_0;
		NullCheck(L_4);
		L_4->___list_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___list_12), (void*)L_5);
	}

IL_0017:
	{
		// list.Add(child);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_6 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = ___child1;
		NullCheck(L_6);
		List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_6, L_7, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::ParseValue(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseValue_mCCFFA4657D41ADB772EB6906B5AE76297AF0FEC3 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___inputString0, int32_t ___startOffset1, int32_t ___lastValidOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B30_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B29_0 = NULL;
	double G_B31_0 = 0.0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B31_1 = NULL;
	{
		// var firstCharacter = inputString[startOffset];
		String_t* L_0 = ___inputString0;
		int32_t L_1 = ___startOffset1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_0 = L_2;
	}

IL_0008:
	{
		// if (Array.IndexOf(Whitespace, firstCharacter) > -1) {
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___Whitespace_10;
		Il2CppChar L_4 = V_0;
		int32_t L_5;
		L_5 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9(L_3, L_4, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		// firstCharacter = inputString[++startOffset];
		String_t* L_6 = ___inputString0;
		int32_t L_7 = ___startOffset1;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		___startOffset1 = L_8;
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_8, NULL);
		V_0 = L_9;
		// continue;
		goto IL_0008;
	}

IL_0025:
	{
		Il2CppChar L_10 = V_0;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)73)))))
		{
			goto IL_0041;
		}
	}
	{
		Il2CppChar L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_0064;
		}
	}
	{
		Il2CppChar L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)45))))
		{
			goto IL_00d9;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)73))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00fd;
	}

IL_0041:
	{
		Il2CppChar L_14 = V_0;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)78))))
		{
			goto IL_00c2;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)102))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00fd;
	}

IL_0055:
	{
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)110))))
		{
			goto IL_00a3;
		}
	}
	{
		Il2CppChar L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)116))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00fd;
	}

IL_0064:
	{
		// type = Type.String;
		__this->___type_11 = 1;
		// stringValue = UnEscapeString(inputString.Substring(startOffset + 1, lastValidOffset - startOffset - 1));
		String_t* L_19 = ___inputString0;
		int32_t L_20 = ___startOffset1;
		int32_t L_21 = ___lastValidOffset2;
		int32_t L_22 = ___startOffset1;
		NullCheck(L_19);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_21, L_22)), 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = JSONObject_UnEscapeString_m2CBA283857DD92DF360CCE6997374980C3EED39A(L_23, NULL);
		__this->___stringValue_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringValue_14), (void*)L_24);
		// return;
		return;
	}

IL_0085:
	{
		// type = Type.Bool;
		__this->___type_11 = 5;
		// boolValue = true;
		__this->___boolValue_17 = (bool)1;
		// return;
		return;
	}

IL_0094:
	{
		// type = Type.Bool;
		__this->___type_11 = 5;
		// boolValue = false;
		__this->___boolValue_17 = (bool)0;
		// return;
		return;
	}

IL_00a3:
	{
		// type = Type.Null;
		__this->___type_11 = 0;
		// return;
		return;
	}

IL_00ab:
	{
		// type = Type.Number;
		__this->___type_11 = 2;
		// doubleValue = double.PositiveInfinity;
		__this->___doubleValue_18 = (std::numeric_limits<double>::infinity());
		// return;
		return;
	}

IL_00c2:
	{
		// type = Type.Number;
		__this->___type_11 = 2;
		// doubleValue = double.NaN;
		__this->___doubleValue_18 = (std::numeric_limits<double>::quiet_NaN());
		// return;
		return;
	}

IL_00d9:
	{
		// if (inputString[startOffset + 1] == 'I') {
		String_t* L_25 = ___inputString0;
		int32_t L_26 = ___startOffset1;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_00fd;
		}
	}
	{
		// type = Type.Number;
		__this->___type_11 = 2;
		// doubleValue = double.NegativeInfinity;
		__this->___doubleValue_18 = (-std::numeric_limits<double>::infinity());
		// return;
		return;
	}

IL_00fd:
	{
		// var numericString = inputString.Substring(startOffset, lastValidOffset - startOffset + 1);
		String_t* L_28 = ___inputString0;
		int32_t L_29 = ___startOffset1;
		int32_t L_30 = ___lastValidOffset2;
		int32_t L_31 = ___startOffset1;
		NullCheck(L_28);
		String_t* L_32;
		L_32 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_28, L_29, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_30, L_31)), 1)), NULL);
		V_1 = L_32;
	}
	try
	{// begin try (depth: 1)
		{
			// if (numericString.Contains(".")) {
			String_t* L_33 = V_1;
			NullCheck(L_33);
			bool L_34;
			L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			if (!L_34)
			{
				goto IL_012a_1;
			}
		}
		{
			// doubleValue = Convert.ToDouble(numericString, CultureInfo.InvariantCulture);
			String_t* L_35 = V_1;
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_36;
			L_36 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			double L_37;
			L_37 = Convert_ToDouble_mAA66A3AA3A6E53529E4F632BC69582B4B70D32B7(L_35, L_36, NULL);
			__this->___doubleValue_18 = L_37;
			goto IL_014f_1;
		}

IL_012a_1:
		{
			// longValue = Convert.ToInt64(numericString, CultureInfo.InvariantCulture);
			String_t* L_38 = V_1;
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_39;
			L_39 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			int64_t L_40;
			L_40 = Convert_ToInt64_m849AF82E6C86C69E45DDDD095A39679D036239B7(L_38, L_39, NULL);
			__this->___longValue_16 = L_40;
			// isInteger = true;
			__this->___isInteger_15 = (bool)1;
			// doubleValue = longValue;
			int64_t L_41 = __this->___longValue_16;
			__this->___doubleValue_18 = ((double)L_41);
		}

IL_014f_1:
		{
			// type = Type.Number;
			__this->___type_11 = 2;
			// } catch (OverflowException) {
			goto IL_01a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0158;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0189;
		}
		throw e;
	}

CATCH_0158:
	{// begin catch(System.OverflowException)
		{
			// } catch (OverflowException) {
			// type = Type.Number;
			__this->___type_11 = 2;
			// doubleValue = numericString.StartsWith("-") ? double.NegativeInfinity : double.PositiveInfinity;
			String_t* L_42 = V_1;
			NullCheck(L_42);
			bool L_43;
			L_43 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0)), NULL);
			G_B29_0 = __this;
			if (L_43)
			{
				G_B30_0 = __this;
				goto IL_0179;
			}
		}
		{
			G_B31_0 = (std::numeric_limits<double>::infinity());
			G_B31_1 = G_B29_0;
			goto IL_0182;
		}

IL_0179:
		{
			G_B31_0 = (-std::numeric_limits<double>::infinity());
			G_B31_1 = G_B30_0;
		}

IL_0182:
		{
			NullCheck(G_B31_1);
			G_B31_1->___doubleValue_18 = G_B31_0;
			// } catch (FormatException) {
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01a3;
		}
	}// end catch (depth: 1)

CATCH_0189:
	{// begin catch(System.FormatException)
		// } catch (FormatException) {
		// type = Type.Null;
		__this->___type_11 = 0;
		//                 Debug.LogWarning
		// #else
		//                 Debug.WriteLine
		// #endif
		//                     (string.Format("Improper JSON formatting:{0}", numericString));
		String_t* L_44 = V_1;
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA9F4ADBA883DCCA70B2BFF2E103994E8AA5A599)), L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_45, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a3;
	}// end catch (depth: 1)

IL_01a3:
	{
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject::ParseObjectEnd(System.String,System.Int32,System.Boolean,Defective.JSON.JSONObject,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseObjectEnd_m409EF6F2E8E663FF9D81D154E14B7FB54114CB2D (String_t* ___inputString0, int32_t ___offset1, bool ___openQuote2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___startOffset4, int32_t ___lastValidOffset5, int32_t ___maxDepth6, bool ___storeExcessLevels7, int32_t ___depth8, int32_t* ___bakeDepth9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06B4A96E9E13BC375962BF44CF7B409D3020362D);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B9_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B8_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B10_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B10_1 = NULL;
	{
		// if (openQuote)
		bool L_0 = ___openQuote2;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// if (container == null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = ___container3;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Parsing error: encountered `}` with no container object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral06B4A96E9E13BC375962BF44CF7B409D3020362D, NULL);
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (maxDepth >= 0 && depth >= maxDepth) {
		int32_t L_2 = ___maxDepth6;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = ___depth8;
		int32_t L_4 = ___maxDepth6;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0056;
		}
	}
	{
		// bakeDepth--;
		int32_t* L_5 = ___bakeDepth9;
		int32_t* L_6 = ___bakeDepth9;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// if (bakeDepth == 0) {
		int32_t* L_8 = ___bakeDepth9;
		int32_t L_9 = *((int32_t*)L_8);
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		// SafeAddChild(container,
		//     storeExcessLevels
		//         ? CreateBakedObject(inputString.Substring(startOffset, offset - startOffset))
		//         : nullObject);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10 = ___container3;
		bool L_11 = ___storeExcessLevels7;
		G_B8_0 = L_10;
		if (L_11)
		{
			G_B9_0 = L_10;
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12;
		L_12 = JSONObject_get_nullObject_m1F5C12DDD7E80EAE0F2DB6F9D0DC722F0BC76D51(NULL);
		G_B10_0 = L_12;
		G_B10_1 = G_B8_0;
		goto IL_0049;
	}

IL_0038:
	{
		String_t* L_13 = ___inputString0;
		int32_t L_14 = ___startOffset4;
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___startOffset4;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18;
		L_18 = JSONObject_CreateBakedObject_m2039F450D1C8D6B09DD2929411721737706B0730(L_17, NULL);
		G_B10_0 = L_18;
		G_B10_1 = G_B9_0;
	}

IL_0049:
	{
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(G_B10_1, G_B10_0, NULL);
	}

IL_004e:
	{
		// if (bakeDepth >= 0)
		int32_t* L_19 = ___bakeDepth9;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0056:
	{
		// ParseFinalObjectIfNeeded(inputString, container, startOffset, lastValidOffset);
		String_t* L_21 = ___inputString0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22 = ___container3;
		int32_t L_23 = ___startOffset4;
		int32_t L_24 = ___lastValidOffset5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_ParseFinalObjectIfNeeded_mC5BBD01E9B35A0B100D806B8A50C52F95FE6B636(L_21, L_22, L_23, L_24, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::ParseArrayEnd(System.String,System.Int32,System.Boolean,Defective.JSON.JSONObject,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseArrayEnd_mCD9D6A7C7F47DAA478304ED96B06ED332521C54C (String_t* ___inputString0, int32_t ___offset1, bool ___openQuote2, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container3, int32_t ___startOffset4, int32_t ___lastValidOffset5, int32_t ___maxDepth6, bool ___storeExcessLevels7, int32_t ___depth8, int32_t* ___bakeDepth9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54154E1F5FCB5154DF6748F2558087DBA8903D65);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B9_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B8_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B10_0 = NULL;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* G_B10_1 = NULL;
	{
		// if (openQuote)
		bool L_0 = ___openQuote2;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// if (container == null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = ___container3;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Parsing error: encountered `]` with no container object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral54154E1F5FCB5154DF6748F2558087DBA8903D65, NULL);
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (maxDepth >= 0 && depth >= maxDepth) {
		int32_t L_2 = ___maxDepth6;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = ___depth8;
		int32_t L_4 = ___maxDepth6;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0056;
		}
	}
	{
		// bakeDepth--;
		int32_t* L_5 = ___bakeDepth9;
		int32_t* L_6 = ___bakeDepth9;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// if (bakeDepth == 0) {
		int32_t* L_8 = ___bakeDepth9;
		int32_t L_9 = *((int32_t*)L_8);
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		// SafeAddChild(container,
		//     storeExcessLevels
		//         ? CreateBakedObject(inputString.Substring(startOffset, offset - startOffset))
		//         : nullObject);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10 = ___container3;
		bool L_11 = ___storeExcessLevels7;
		G_B8_0 = L_10;
		if (L_11)
		{
			G_B9_0 = L_10;
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12;
		L_12 = JSONObject_get_nullObject_m1F5C12DDD7E80EAE0F2DB6F9D0DC722F0BC76D51(NULL);
		G_B10_0 = L_12;
		G_B10_1 = G_B8_0;
		goto IL_0049;
	}

IL_0038:
	{
		String_t* L_13 = ___inputString0;
		int32_t L_14 = ___startOffset4;
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___startOffset4;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18;
		L_18 = JSONObject_CreateBakedObject_m2039F450D1C8D6B09DD2929411721737706B0730(L_17, NULL);
		G_B10_0 = L_18;
		G_B10_1 = G_B9_0;
	}

IL_0049:
	{
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(G_B10_1, G_B10_0, NULL);
	}

IL_004e:
	{
		// if (bakeDepth >= 0)
		int32_t* L_19 = ___bakeDepth9;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0056:
	{
		// ParseFinalObjectIfNeeded(inputString, container, startOffset, lastValidOffset);
		String_t* L_21 = ___inputString0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22 = ___container3;
		int32_t L_23 = ___startOffset4;
		int32_t L_24 = ___lastValidOffset5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_ParseFinalObjectIfNeeded_mC5BBD01E9B35A0B100D806B8A50C52F95FE6B636(L_21, L_22, L_23, L_24, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Defective.JSON.JSONObject::ParseQuote(System.Boolean&,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseQuote_mFBA405A5993329CD10F3255B7EA5FA0B512D9B9D (bool* ___openQuote0, int32_t ___offset1, int32_t* ___quoteStart2, int32_t* ___quoteEnd3, const RuntimeMethod* method) 
{
	{
		// if (openQuote) {
		bool* L_0 = ___openQuote0;
		int32_t L_1 = *((uint8_t*)L_0);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// quoteEnd = offset - 1;
		int32_t* L_2 = ___quoteEnd3;
		int32_t L_3 = ___offset1;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// openQuote = false;
		bool* L_4 = ___openQuote0;
		*((int8_t*)L_4) = (int8_t)0;
		return;
	}

IL_000d:
	{
		// quoteStart = offset;
		int32_t* L_5 = ___quoteStart2;
		int32_t L_6 = ___offset1;
		*((int32_t*)L_5) = (int32_t)L_6;
		// openQuote = true;
		bool* L_7 = ___openQuote0;
		*((int8_t*)L_7) = (int8_t)1;
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject::ParseColon(System.String,System.Boolean,Defective.JSON.JSONObject,System.Int32&,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseColon_m917F7EC0729BB7E9A86C447034DA9C00310778E7 (String_t* ___inputString0, bool ___openQuote1, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container2, int32_t* ___startOffset3, int32_t ___offset4, int32_t ___quoteStart5, int32_t ___quoteEnd6, int32_t ___bakeDepth7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19967C1E48314D711A74F7072B6A080EC2E7DCF0);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// if (openQuote || bakeDepth > 0)
		bool L_0 = ___openQuote1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___bakeDepth7;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (container == null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = ___container2;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Parsing error: encountered `:` with no container object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral19967C1E48314D711A74F7072B6A080EC2E7DCF0, NULL);
		// return false;
		return (bool)0;
	}

IL_0019:
	{
		// var keys = container.keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___container2;
		NullCheck(L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3->___keys_13;
		V_0 = L_4;
		// if (keys == null) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		// keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_6;
		// container.keys = keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = ___container2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		NullCheck(L_7);
		L_7->___keys_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___keys_13), (void*)L_8);
	}

IL_0030:
	{
		// container.keys.Add(inputString.Substring(quoteStart, quoteEnd - quoteStart));
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___container2;
		NullCheck(L_9);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9->___keys_13;
		String_t* L_11 = ___inputString0;
		int32_t L_12 = ___quoteStart5;
		int32_t L_13 = ___quoteEnd6;
		int32_t L_14 = ___quoteStart5;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// startOffset = offset;
		int32_t* L_16 = ___startOffset3;
		int32_t L_17 = ___offset4;
		*((int32_t*)L_16) = (int32_t)L_17;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Defective.JSON.JSONObject::ParseComma(System.String,System.Boolean,Defective.JSON.JSONObject,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_ParseComma_mE24033BD9D67738BC3DDC81E2F9B821C25E2E5E4 (String_t* ___inputString0, bool ___openQuote1, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container2, int32_t* ___startOffset3, int32_t ___offset4, int32_t ___lastValidOffset5, int32_t ___bakeDepth6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BDD6023A35877E4881FA93114DF2689C56BC822);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (openQuote || bakeDepth > 0)
		bool L_0 = ___openQuote1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___bakeDepth6;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (container == null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = ___container2;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Parsing error: encountered `,` with no container object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6BDD6023A35877E4881FA93114DF2689C56BC822, NULL);
		// return false;
		return (bool)0;
	}

IL_0019:
	{
		// ParseFinalObjectIfNeeded(inputString, container, startOffset, lastValidOffset);
		String_t* L_3 = ___inputString0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___container2;
		int32_t* L_5 = ___startOffset3;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___lastValidOffset5;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_ParseFinalObjectIfNeeded_mC5BBD01E9B35A0B100D806B8A50C52F95FE6B636(L_3, L_4, L_6, L_7, NULL);
		// startOffset = offset;
		int32_t* L_8 = ___startOffset3;
		int32_t L_9 = ___offset4;
		*((int32_t*)L_8) = (int32_t)L_9;
		// return true;
		return (bool)1;
	}
}
// System.Void Defective.JSON.JSONObject::ParseFinalObjectIfNeeded(System.String,Defective.JSON.JSONObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_ParseFinalObjectIfNeeded_mC5BBD01E9B35A0B100D806B8A50C52F95FE6B636 (String_t* ___inputString0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___container1, int32_t ___startOffset2, int32_t ___lastValidOffset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// if (IsClosingCharacter(inputString[lastValidOffset]))
		String_t* L_0 = ___inputString0;
		int32_t L_1 = ___lastValidOffset3;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = JSONObject_IsClosingCharacter_m9E9726C119837264FB5CE6DAADA3ACD873C198C2(L_2, NULL);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var child = Create();
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
		V_0 = L_4;
		// child.ParseValue(inputString, startOffset, lastValidOffset);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = V_0;
		String_t* L_6 = ___inputString0;
		int32_t L_7 = ___startOffset2;
		int32_t L_8 = ___lastValidOffset3;
		NullCheck(L_5);
		JSONObject_ParseValue_mCCFFA4657D41ADB772EB6906B5AE76297AF0FEC3(L_5, L_6, L_7, L_8, NULL);
		// SafeAddChild(container, child);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___container1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10 = V_0;
		JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject::IsClosingCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_IsClosingCharacter_m9E9726C119837264FB5CE6DAADA3ACD873C198C2 (Il2CppChar ___character0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___character0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)93))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___character0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_000c;
		}
	}

IL_000a:
	{
		// return true;
		return (bool)1;
	}

IL_000c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isNumber_mFF0AC85EC9EB1E86796259A806B82966C363A724 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Number; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isNull_m894F33D8E61AEB68A64F4B4C84098F398405476D (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Null; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isString_mA9371CB74F693CDC99B4C0AE0868D6A7DC247071 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.String; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isBool_m30034144E2E47D726F5421D15FABE70AE66D6E9F (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Bool; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isArray_m11EEEE30050A2447EBC624D4CA7C5E01AA9AD19E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Array; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isObject_m7CF762A35A59B5A8C5744F5E7A30894D43CAC416 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Object; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Defective.JSON.JSONObject::get_isBaked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isBaked_mBCE0590D0B13C553F5DE1617583AC049A5CDFFE5 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return type == Type.Baked; }
		int32_t L_0 = __this->___type_11;
		return (bool)((((int32_t)L_0) == ((int32_t)6))? 1 : 0);
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m85D2F576C36C58BC5AF1E20ED3A540A21504AA2D (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(value));
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_m1788D5E207F8DD08203F223F445269AFF49FBFBC(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mDD51F4C79CB5A9437956B2C05CF1738252C8E686 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(value));
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_m10CC383E53FB604C8A7159363CDE97F042F3AEA5(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m467064601D2A92C3141D8B24E4504FCF19EE581D (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(value));
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_mBEA3C860EF1AC144A435CB00EF4CC44E433DA90A(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mA24714C6367E02928DB103088EBD3AD7AB307683 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(value));
		int64_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_m82B00AF99D5B4373BBFB1792A7F3558F46210D4F(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m28A60D6FC28E96AC29EE7B58854E8E1F7A2BFC59 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(value));
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_mC0CB937160189E43A9CD2DB66D43C48AB840E604(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mA47CF44D3CEA6D8D9ECC46B857B6C5445DB9FCF4 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(CreateStringObject(value));
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(Defective.JSON.JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m4D9273EF6D0DB681CFFD996EB5F41C21005549FB (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(content));
		AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* L_0 = ___content0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_m3F61423188DA6AEB0E49022B393E544AB7C50AB8(L_0, NULL);
		JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Add(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mB7BCAAF2971334A0C6DEC1584518192CC9F30017 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jsonObject == null)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// type = Type.Array;
		__this->___type_11 = 4;
		// if (list == null)
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = __this->___list_12;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_2, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		__this->___list_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_2);
	}

IL_001e:
	{
		// list.Add(jsonObject);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_3 = __this->___list_12;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___jsonObject0;
		NullCheck(L_3);
		List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_3, L_4, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m663FF7334875F106290C1913F2554CBCA409B4B0 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(value));
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m1788D5E207F8DD08203F223F445269AFF49FBFBC(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(value));
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m10CC383E53FB604C8A7159363CDE97F042F3AEA5(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mFDBDF8D70EE0EF8E13658A636309BD8311BFF57A (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, double ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(value));
		String_t* L_0 = ___name0;
		double L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_mBEA3C860EF1AC144A435CB00EF4CC44E433DA90A(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(value));
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_mC0CB937160189E43A9CD2DB66D43C48AB840E604(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mB4545EA8C45B5892ED274ED52066429B0D8BC404 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, int64_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(value));
		String_t* L_0 = ___name0;
		int64_t L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m82B00AF99D5B4373BBFB1792A7F3558F46210D4F(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,Defective.JSON.JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mA933359CA56A671F04DE3437ACCA039D0E130A03 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* ___content1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(content));
		String_t* L_0 = ___name0;
		AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* L_1 = ___content1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m3F61423188DA6AEB0E49022B393E544AB7C50AB8(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mDD7F8946033243C03BE36B1E37D6AB6A7BF96232 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, CreateStringObject(value));
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_1, NULL);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::AddField(System.String,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (jsonObject == null)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// type = Type.Object;
		__this->___type_11 = 3;
		// if (list == null)
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = __this->___list_12;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = (List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E*)il2cpp_codegen_object_new(List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D(L_2, List_1__ctor_m512620C35691CD7C02708077DD0A844BD071283D_RuntimeMethod_var);
		__this->___list_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_2);
	}

IL_001e:
	{
		// if (keys == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		// keys = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___keys_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_13), (void*)L_4);
		goto IL_0056;
	}

IL_0033:
	{
		// keys.Add(keys.Count.ToString(CultureInfo.InvariantCulture));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___keys_13;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___keys_13;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_6, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_7;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_9;
		L_9 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_0), L_8, NULL);
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0056:
	{
		// while (keys.Count < list.Count) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = __this->___keys_13;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_10, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_12 = __this->___list_12;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_inline(L_12, List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0033;
		}
	}
	{
		// keys.Add(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___keys_13;
		String_t* L_15 = ___name0;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// list.Add(jsonObject);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_16 = __this->___list_12;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_17 = ___jsonObject1;
		NullCheck(L_16);
		List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_inline(L_16, L_17, List_1_Add_m67DC8AAA1F867623E0668663DD6FECC08D3CB03C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m8E4A9EAD05927B56B555A21E9CF36BA01B160B2B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, CreateStringObject(value));
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_CreateStringObject_mED17B312545B8702F7B9639B85631F53DD33A8D0(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m06A127498F9EFE31ECEE83C0CD97518E390C5926 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, Create(value));
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m1788D5E207F8DD08203F223F445269AFF49FBFBC(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m0ADC8ACFDDD8DD199B4AC901B04CE138A437FEB9 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, Create(value));
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m10CC383E53FB604C8A7159363CDE97F042F3AEA5(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_mE6407A1F21B139839D5E6ED51B43CEA6C5C977C8 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, double ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, Create(value));
		String_t* L_0 = ___name0;
		double L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_mBEA3C860EF1AC144A435CB00EF4CC44E433DA90A(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m9BDCE3B3098950FD04DE639231E8841C9555E1FA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, int64_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, Create(value));
		String_t* L_0 = ___name0;
		int64_t L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_m82B00AF99D5B4373BBFB1792A7F3558F46210D4F(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m1B6EEDF9B2483A636DD54D544BB70FFBA8F95598 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetField(name, Create(value));
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_Create_mC0CB937160189E43A9CD2DB66D43C48AB840E604(L_1, NULL);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::SetField(System.String,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC8B3232BBFBFF3B47366516A8CD80C61DF2F1149_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HasField(name)) {
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = JSONObject_HasField_m8A0AE1720F921358B8C1BF09E8A1C0483B54CA5C(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// list.Remove(this[name]);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		String_t* L_3 = ___name0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(__this, L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = List_1_Remove_mC8B3232BBFBFF3B47366516A8CD80C61DF2F1149(L_2, L_4, List_1_Remove_mC8B3232BBFBFF3B47366516A8CD80C61DF2F1149_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___keys_13;
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_6, L_7, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
	}

IL_0029:
	{
		// AddField(name, jsonObject);
		String_t* L_9 = ___name0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10 = ___jsonObject1;
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(__this, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::RemoveField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_RemoveField_mD875827E30235594F8CB5E6A832BC5D4DED937B2 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3ABD29A8F2D130881C8DB5CB162201B56A66189D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (keys == null || list == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___keys_13;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = __this->___list_12;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (keys.IndexOf(name) > -1) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___keys_13;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_2, L_3, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		// list.RemoveAt(keys.IndexOf(name));
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_5 = __this->___list_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___keys_13;
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_6, L_7, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_RemoveAt_m3ABD29A8F2D130881C8DB5CB162201B56A66189D(L_5, L_8, List_1_RemoveAt_m3ABD29A8F2D130881C8DB5CB162201B56A66189D_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___keys_13;
		String_t* L_10 = ___name0;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_9, L_10, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m7FFC41258D5F6A85BD546A39D77E80B0610A556E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool* ___field0, String_t* ___name1, bool ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		bool* L_0 = ___field0;
		bool L_1 = ___fallback2;
		*((int8_t*)L_0) = (int8_t)L_1;
		// return GetField(ref field, name);
		bool* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_mA63B2E46817FA7F572E9E62DDF293ADFC08E6322(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Boolean&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mA63B2E46817FA7F572E9E62DDF293ADFC08E6322 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// field = list[index].boolValue;
		bool* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = L_10->___boolValue_17;
		*((int8_t*)L_7) = (int8_t)L_11;
		// return true;
		return (bool)1;
	}

IL_003f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Double&,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mD601CA94949A32F9E1ADE844D1001E8DDF224DAD (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, double* ___field0, String_t* ___name1, double ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		double* L_0 = ___field0;
		double L_1 = ___fallback2;
		*((double*)L_0) = (double)L_1;
		// return GetField(ref field, name);
		double* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m9281D2DE083628D2E018D471172CD4B9CF9C68AE(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Double&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m9281D2DE083628D2E018D471172CD4B9CF9C68AE (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, double* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// field = list[index].doubleValue;
		double* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		double L_11 = L_10->___doubleValue_18;
		*((double*)L_7) = (double)L_11;
		// return true;
		return (bool)1;
	}

IL_003f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Single&,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m208BCD2A15011CDAE449AB9D2D6D98BED10D2AFE (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float* ___field0, String_t* ___name1, float ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		float* L_0 = ___field0;
		float L_1 = ___fallback2;
		*((float*)L_0) = (float)L_1;
		// return GetField(ref field, name);
		float* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m00029EC6FB4910C23428056BFD0F154958FC06E5(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Single&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m00029EC6FB4910C23428056BFD0F154958FC06E5 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, float* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// field = (float) list[index].doubleValue;
		float* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		double L_11 = L_10->___doubleValue_18;
		*((float*)L_7) = (float)((float)L_11);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int32&,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mF55954B4818478A33B5F256487739FFCBFC338A4 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t* ___field0, String_t* ___name1, int32_t ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		int32_t* L_0 = ___field0;
		int32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		int32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_mD4980E520F0A19F8EFD55C5530DDD712A55A43C7(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int32&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mD4980E520F0A19F8EFD55C5530DDD712A55A43C7 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// field = (int) list[index].longValue;
		int32_t* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		int64_t L_11 = L_10->___longValue_16;
		*((int32_t*)L_7) = (int32_t)((int32_t)L_11);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int64&,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m3848FC1C104147224F8F390323581A75A438C858 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int64_t* ___field0, String_t* ___name1, int64_t ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		int64_t* L_0 = ___field0;
		int64_t L_1 = ___fallback2;
		*((int64_t*)L_0) = (int64_t)L_1;
		// return GetField(ref field, name);
		int64_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m35567EB26CCB4B0439461CE0A93D8A8A4B8B5BB6(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.Int64&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m35567EB26CCB4B0439461CE0A93D8A8A4B8B5BB6 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// field = list[index].longValue;
		int64_t* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		int64_t L_11 = L_10->___longValue_16;
		*((int64_t*)L_7) = (int64_t)L_11;
		// return true;
		return (bool)1;
	}

IL_003f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m6E346C14ADD2E5F0C7FBD4D666308249DD283332 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, uint32_t* ___field0, String_t* ___name1, uint32_t ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		uint32_t* L_0 = ___field0;
		uint32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		uint32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m03CFC3112236BAF1610B9A314D68608F6098609C(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.UInt32&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m03CFC3112236BAF1610B9A314D68608F6098609C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// field = (uint) list[index].longValue;
		uint32_t* L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		int64_t L_11 = L_10->___longValue_16;
		*((int32_t*)L_7) = (int32_t)((int32_t)(uint32_t)L_11);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m37A018FC32B9FFDDA2AC504FA594AA49B9FB3DF9 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t** ___field0, String_t* ___name1, String_t* ___fallback2, const RuntimeMethod* method) 
{
	{
		// field = fallback;
		String_t** L_0 = ___field0;
		String_t* L_1 = ___fallback2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return GetField(ref field, name);
		String_t** L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_mEAC1E437846CBA82961D327579F7446760220E2E(__this, L_2, L_3, (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*)NULL, NULL);
		return L_4;
	}
}
// System.Boolean Defective.JSON.JSONObject::GetField(System.String&,System.String,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mEAC1E437846CBA82961D327579F7446760220E2E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// if (index >= 0) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// field = list[index].stringValue;
		String_t** L_7 = ___field0;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11 = L_10->___stringValue_14;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_11);
		// return true;
		return (bool)1;
	}

IL_003f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name1;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Defective.JSON.JSONObject::GetField(System.String,Defective.JSON.JSONObject/GetFieldResponse,Defective.JSON.JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_GetField_mAD879E3AFD5D0BEDAFA3559524BE1D1A3FD301D7 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* ___response1, FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (response != null && type == Type.Object && keys != null && list != null) {
		GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* L_0 = ___response1;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = __this->___type_11;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___keys_13;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_3 = __this->___list_12;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// var index = keys.IndexOf(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___keys_13;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_4, L_5, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_6;
		// if (index >= 0) {
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// response.Invoke(list[index]);
		GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* L_8 = ___response1;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_9 = __this->___list_12;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_11;
		L_11 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_9, L_10, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		NullCheck(L_8);
		GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_inline(L_8, L_11, NULL);
		// return;
		return;
	}

IL_0040:
	{
		// if (fail != null)
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_12 = ___fail2;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		// fail.Invoke(name);
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* L_13 = ___fail2;
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline(L_13, L_14, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_GetField_m2B0D3470E8784CF807ECAE34BBE45CB39EACCC53 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.Object && keys != null && list != null) {
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0050;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// for (var index = 0; index < keys.Count; index++)
		V_0 = 0;
		goto IL_0042;
	}

IL_001d:
	{
		// if (keys[index] == name)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_3, L_4, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_6 = ___name0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// return list[index];
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		return L_10;
	}

IL_003e:
	{
		// for (var index = 0; index < keys.Count; index++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		// for (var index = 0; index < keys.Count; index++)
		int32_t L_12 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___keys_13;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_13, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001d;
		}
	}

IL_0050:
	{
		// return null;
		return (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*)NULL;
	}
}
// System.Boolean Defective.JSON.JSONObject::HasFields(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasFields_m267D923FB2F095030F2CDA481D81C64D03B52B04 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (type != Type.Object || keys == null || list == null)
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (L_2)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// foreach (var name in names)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___names0;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0039;
	}

IL_0021:
	{
		// foreach (var name in names)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (!keys.Contains(name))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___keys_13;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_8, L_9, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		// foreach (var name in names)
		int32_t L_12 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Defective.JSON.JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m8A0AE1720F921358B8C1BF09E8A1C0483B54CA5C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (type != Type.Object || keys == null || list == null)
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___keys_13;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		if (L_2)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// if (keys == null || list == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_4 = __this->___list_12;
		if (L_4)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// foreach (var fieldName in keys)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___keys_13;
		NullCheck(L_5);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_6;
		L_6 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_5, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_003b_1:
			{
				// foreach (var fieldName in keys)
				String_t* L_7;
				L_7 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if (fieldName == name)
				String_t* L_8 = ___name0;
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_8, NULL);
				if (!L_9)
				{
					goto IL_004e_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0069;
			}

IL_004e_1:
			{
				// foreach (var fieldName in keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Void Defective.JSON.JSONObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Clear_m9641EBDAE25F65832ABD7265805DEC54A2C7EB8A (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m781253FB0E80BB4B628AF4FE6C733B473CE80E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = Type.Null;
		__this->___type_11 = 0;
		// if (list != null)
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_0 = __this->___list_12;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// list.Clear();
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_1 = __this->___list_12;
		NullCheck(L_1);
		List_1_Clear_m781253FB0E80BB4B628AF4FE6C733B473CE80E59_inline(L_1, List_1_Clear_m781253FB0E80BB4B628AF4FE6C733B473CE80E59_RuntimeMethod_var);
	}

IL_001a:
	{
		// if (keys != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___keys_13;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// keys.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		NullCheck(L_3);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_3, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_002d:
	{
		// stringValue = null;
		__this->___stringValue_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringValue_14), (void*)(String_t*)NULL);
		// longValue = 0;
		__this->___longValue_16 = ((int64_t)0);
		// boolValue = false;
		__this->___boolValue_17 = (bool)0;
		// isInteger = false;
		__this->___isInteger_15 = (bool)0;
		// doubleValue = 0;
		__this->___doubleValue_18 = (0.0);
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_Copy_m5D66A1322C0D494FAC1DC284FB8F7F0ADB505954 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Create(Print());
		String_t* L_0;
		L_0 = JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284(__this, (bool)0, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_Create_m737F0E10CB3D7495B72387BFD86E20E12B20D40D(L_0, 0, (-1), (-1), (bool)0, NULL);
		return L_1;
	}
}
// System.Void Defective.JSON.JSONObject::Merge(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Merge_m28705CD23A7A745A37848610CD9D07FC447FFFE9 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MergeRecur(this, jsonObject);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_mEA5296EBD08453953D10B5007EE486E896318932(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::MergeRecur(Defective.JSON.JSONObject,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_mEA5296EBD08453953D10B5007EE486E896318932 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___left0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (left.type == Type.Null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_11;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// left.Absorb(right);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = ___left0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___right1;
		NullCheck(L_2);
		JSONObject_Absorb_m837B43D88B2836C574B78E5CAB712A1CF2605F82(L_2, L_3, NULL);
		return;
	}

IL_0010:
	{
		// } else if (left.type == Type.Object && right.type == Type.Object && right.list != null && right.keys != null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___left0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___type_11;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_00c8;
		}
	}
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___right1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___type_11;
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_00c8;
		}
	}
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = ___right1;
		NullCheck(L_8);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_9 = L_8->___list_12;
		if (!L_9)
		{
			goto IL_00c8;
		}
	}
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10 = ___right1;
		NullCheck(L_10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10->___keys_13;
		if (!L_11)
		{
			goto IL_00c8;
		}
	}
	{
		// for (var i = 0; i < right.list.Count; i++) {
		V_0 = 0;
		goto IL_00b6;
	}

IL_0042:
	{
		// var key = right.keys[i];
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___right1;
		NullCheck(L_12);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12->___keys_13;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_13, L_14, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_15;
		// if (right[i].isContainer) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = ___right1;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18;
		L_18 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_16, L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = JSONObject_get_isContainer_m00F12A4F458FD3741B5B84FF00361E8B60E015CA(L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		// if (left.HasField(key))
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_20 = ___left0;
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22;
		L_22 = JSONObject_HasField_m8A0AE1720F921358B8C1BF09E8A1C0483B54CA5C(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_007b;
		}
	}
	{
		// MergeRecur(left[key], right[i]);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_23 = ___left0;
		String_t* L_24 = V_1;
		NullCheck(L_23);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_25;
		L_25 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_23, L_24, NULL);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_26 = ___right1;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_28;
		L_28 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_26, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_mEA5296EBD08453953D10B5007EE486E896318932(L_25, L_28, NULL);
		goto IL_00b2;
	}

IL_007b:
	{
		// left.AddField(key, right[i]);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_29 = ___left0;
		String_t* L_30 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_31 = ___right1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_33;
		L_33 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_31, L_32, NULL);
		NullCheck(L_29);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(L_29, L_30, L_33, NULL);
		goto IL_00b2;
	}

IL_008b:
	{
		// if (left.HasField(key))
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_34 = ___left0;
		String_t* L_35 = V_1;
		NullCheck(L_34);
		bool L_36;
		L_36 = JSONObject_HasField_m8A0AE1720F921358B8C1BF09E8A1C0483B54CA5C(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_00a4;
		}
	}
	{
		// left.SetField(key, right[i]);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_37 = ___left0;
		String_t* L_38 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_39 = ___right1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_41;
		L_41 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_39, L_40, NULL);
		NullCheck(L_37);
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(L_37, L_38, L_41, NULL);
		goto IL_00b2;
	}

IL_00a4:
	{
		// left.AddField(key, right[i]);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_42 = ___left0;
		String_t* L_43 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_44 = ___right1;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_46;
		L_46 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_44, L_45, NULL);
		NullCheck(L_42);
		JSONObject_AddField_m8D2942129267F094B16E9191B810441448DEBC43(L_42, L_43, L_46, NULL);
	}

IL_00b2:
	{
		// for (var i = 0; i < right.list.Count; i++) {
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00b6:
	{
		// for (var i = 0; i < right.list.Count; i++) {
		int32_t L_48 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_49 = ___right1;
		NullCheck(L_49);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_50 = L_49->___list_12;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_inline(L_50, List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_00c8:
	{
		// } else if (left.type == Type.Array && right.type == Type.Array && right.list != null) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_52 = ___left0;
		NullCheck(L_52);
		int32_t L_53 = L_52->___type_11;
		if ((!(((uint32_t)L_53) == ((uint32_t)4))))
		{
			goto IL_0162;
		}
	}
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_54 = ___right1;
		NullCheck(L_54);
		int32_t L_55 = L_54->___type_11;
		if ((!(((uint32_t)L_55) == ((uint32_t)4))))
		{
			goto IL_0162;
		}
	}
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_56 = ___right1;
		NullCheck(L_56);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_57 = L_56->___list_12;
		if (!L_57)
		{
			goto IL_0162;
		}
	}
	{
		// if (right.count > left.count) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_58 = ___right1;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_58, NULL);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_60 = ___left0;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_60, NULL);
		if ((((int32_t)L_59) <= ((int32_t)L_61)))
		{
			goto IL_0101;
		}
	}
	{
		//                     Debug.LogError
		// #else
		//                     Debug.WriteLine
		// #endif
		//                         ("Cannot merge arrays when right object has more elements");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B, NULL);
		// return;
		return;
	}

IL_0101:
	{
		// for (var i = 0; i < right.list.Count; i++) {
		V_2 = 0;
		goto IL_0154;
	}

IL_0105:
	{
		// if (left[i].type == right[i].type) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_62 = ___left0;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_64;
		L_64 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_62, L_63, NULL);
		NullCheck(L_64);
		int32_t L_65 = L_64->___type_11;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_66 = ___right1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_68;
		L_68 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_66, L_67, NULL);
		NullCheck(L_68);
		int32_t L_69 = L_68->___type_11;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_69))))
		{
			goto IL_0150;
		}
	}
	{
		// if (left[i].isContainer)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_70 = ___left0;
		int32_t L_71 = V_2;
		NullCheck(L_70);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_72;
		L_72 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_70, L_71, NULL);
		NullCheck(L_72);
		bool L_73;
		L_73 = JSONObject_get_isContainer_m00F12A4F458FD3741B5B84FF00361E8B60E015CA(L_72, NULL);
		if (!L_73)
		{
			goto IL_0142;
		}
	}
	{
		// MergeRecur(left[i], right[i]);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_74 = ___left0;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_76;
		L_76 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_74, L_75, NULL);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_77 = ___right1;
		int32_t L_78 = V_2;
		NullCheck(L_77);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_79;
		L_79 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_77, L_78, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_mEA5296EBD08453953D10B5007EE486E896318932(L_76, L_79, NULL);
		goto IL_0150;
	}

IL_0142:
	{
		// left[i] = right[i];
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_80 = ___left0;
		int32_t L_81 = V_2;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_82 = ___right1;
		int32_t L_83 = V_2;
		NullCheck(L_82);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_84;
		L_84 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_82, L_83, NULL);
		NullCheck(L_80);
		JSONObject_set_Item_m0169F3DEE234B878ACA9BA965508F8CC4227030E(L_80, L_81, L_84, NULL);
	}

IL_0150:
	{
		// for (var i = 0; i < right.list.Count; i++) {
		int32_t L_85 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0154:
	{
		// for (var i = 0; i < right.list.Count; i++) {
		int32_t L_86 = V_2;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_87 = ___right1;
		NullCheck(L_87);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_88 = L_87->___list_12;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_inline(L_88, List_1_get_Count_m919AA1B61CF20232484BC458BCED3FFAA510E11C_RuntimeMethod_var);
		if ((((int32_t)L_86) < ((int32_t)L_89)))
		{
			goto IL_0105;
		}
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Bake_mE2149D8598D72B48066EFEF74DD39325B1537F5B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// if (type == Type.Baked)
		int32_t L_0 = __this->___type_11;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// stringValue = Print();
		String_t* L_1;
		L_1 = JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284(__this, (bool)0, NULL);
		__this->___stringValue_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringValue_14), (void*)L_1);
		// type = Type.Baked;
		__this->___type_11 = 6;
		// }
		return;
	}
}
// System.Collections.IEnumerable Defective.JSON.JSONObject::BakeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_BakeAsync_mFC52A60AFC14F06EF3E1AEEA6DF192D380DB0CC6 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* L_0 = (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD*)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBakeAsyncU3Ed__144__ctor_mA94C1D2AF01D7E6206FD5F32E30AA5B0800FB117(L_0, ((int32_t)-2), NULL);
		U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.String Defective.JSON.JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___pretty0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// Print(builder, pretty);
		StringBuilder_t* L_1 = V_0;
		bool L_2 = ___pretty0;
		JSONObject_Print_mE75F1673BBF3CFCFF9F934E87068BFCD143AD1E8(__this, L_1, L_2, NULL);
		// return builder.ToString();
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void Defective.JSON.JSONObject::Print(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Print_mE75F1673BBF3CFCFF9F934E87068BFCD143AD1E8 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	{
		// Stringify(0, builder, pretty);
		StringBuilder_t* L_0 = ___builder0;
		bool L_1 = ___pretty1;
		JSONObject_Stringify_m1B4AB8F7C1726AA4FA744CDA2C0261771D7737CE(__this, 0, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String Defective.JSON.JSONObject::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_EscapeString_m9D82BC2F43D518B2C71EF91E9EB70EBDA338357C (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var escaped = input.Replace("\b", "\\b");
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// escaped = escaped.Replace("\f", "\\f");
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// escaped = escaped.Replace("\n", "\\n");
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// escaped = escaped.Replace("\r", "\\r");
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// escaped = escaped.Replace("\t", "\\t");
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// escaped = escaped.Replace("\"", "\\\"");
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// return escaped;
		return L_6;
	}
}
// System.String Defective.JSON.JSONObject::UnEscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_UnEscapeString_m2CBA283857DD92DF360CCE6997374980C3EED39A (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var unescaped = input.Replace("\\\"", "\"");
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// unescaped = unescaped.Replace("\\b", "\b");
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4, NULL);
		// unescaped = unescaped.Replace("\\f", "\f");
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2, NULL);
		// unescaped = unescaped.Replace("\\n", "\n");
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// unescaped = unescaped.Replace("\\r", "\r");
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		// unescaped = unescaped.Replace("\\t", "\t");
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		// return unescaped;
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Defective.JSON.JSONObject::PrintAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_mCB5FBE2DB1337C7EB08D8B3AA54DF6E607B9E3D1 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___pretty0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_0 = (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19*)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPrintAsyncU3Ed__149__ctor_mD4F869D25C809BE3C9ABC357D69F98F47CC4761E(L_0, ((int32_t)-2), NULL);
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_2 = L_1;
		bool L_3 = ___pretty0;
		NullCheck(L_2);
		L_2->___U3CU3E3__pretty_5 = L_3;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> Defective.JSON.JSONObject::PrintAsync(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m387EBF09BA88B98F25B260B5E7AE687B9B173375 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_0 = (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81*)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPrintAsyncU3Ed__150__ctor_m76AE442889877ABA71658717BEDAC09F13535C2F(L_0, ((int32_t)-2), NULL);
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_2 = L_1;
		StringBuilder_t* L_3 = ___builder0;
		NullCheck(L_2);
		L_2->___U3CU3E3__builder_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__builder_5), (void*)L_3);
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_4 = L_2;
		bool L_5 = ___pretty1;
		NullCheck(L_4);
		L_4->___U3CU3E3__pretty_7 = L_5;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> Defective.JSON.JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_mCAF9D38E572CA9C6F1875F99EAB5277BC2DBBAB0 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___depth0, StringBuilder_t* ___builder1, bool ___pretty2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_0 = (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F*)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStringifyAsyncU3Ed__151__ctor_m431EC10F7D319E0D9066CB2CF5652777EEE06710(L_0, ((int32_t)-2), NULL);
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_2 = L_1;
		int32_t L_3 = ___depth0;
		NullCheck(L_2);
		L_2->___U3CU3E3__depth_7 = L_3;
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_4 = L_2;
		StringBuilder_t* L_5 = ___builder1;
		NullCheck(L_4);
		L_4->___U3CU3E3__builder_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__builder_5), (void*)L_5);
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_6 = L_4;
		bool L_7 = ___pretty2;
		NullCheck(L_6);
		L_6->___U3CU3E3__pretty_9 = L_7;
		return L_6;
	}
}
// System.Void Defective.JSON.JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m1B4AB8F7C1726AA4FA744CDA2C0261771D7737CE (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___depth0, StringBuilder_t* ___builder1, bool ___pretty2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9AB7547595606304114C14F0450F15FD30F51468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB602A35E50D2614F8EB42D0EAB33B023FB737E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1499EAC836D33EE4BDFBC30928D75545E8F29523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2EA9CF993A1757CD6FA450F8FB76CE5C4797CA95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_6 = NULL;
	{
		// depth++;
		int32_t L_0 = ___depth0;
		___depth0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// switch (type) {
		int32_t L_1 = __this->___type_11;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0147;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_00cd;
			}
			case 5:
			{
				goto IL_013f;
			}
			case 6:
			{
				goto IL_002f;
			}
		}
	}
	{
		return;
	}

IL_002f:
	{
		// builder.Append(stringValue);
		StringBuilder_t* L_3 = ___builder1;
		String_t* L_4 = __this->___stringValue_14;
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		// break;
		return;
	}

IL_003d:
	{
		// StringifyString(builder);
		StringBuilder_t* L_6 = ___builder1;
		JSONObject_StringifyString_m6C60B157ADB60C0A400CE42AD83B78BF95531578(__this, L_6, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// StringifyNumber(builder);
		StringBuilder_t* L_7 = ___builder1;
		JSONObject_StringifyNumber_m59CDF5A6C31D5A0B994FB91C54C70A4B52CAC63E(__this, L_7, NULL);
		// break;
		return;
	}

IL_004d:
	{
		// var fieldCount = count;
		int32_t L_8;
		L_8 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		V_0 = L_8;
		// if (fieldCount <= 0) {
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// StringifyEmptyObject(builder);
		StringBuilder_t* L_10 = ___builder1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_StringifyEmptyObject_mF0208881D165951D3B98AC8D67B4E9CCF450C9D4(L_10, NULL);
		// break;
		return;
	}

IL_005f:
	{
		// BeginStringifyObjectContainer(builder, pretty);
		StringBuilder_t* L_11 = ___builder1;
		bool L_12 = ___pretty2;
		JSONObject_BeginStringifyObjectContainer_m5DDF0C38F6519E8291886BA780B4116C70A33B4C(__this, L_11, L_12, NULL);
		// for (var index = 0; index < fieldCount; index++) {
		V_2 = 0;
		goto IL_00bf;
	}

IL_006b:
	{
		// var jsonObject = list[index];
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_13 = __this->___list_12;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15;
		L_15 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_13, L_14, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		V_3 = L_15;
		// if (jsonObject == null)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = V_3;
		if (!L_16)
		{
			goto IL_00bb;
		}
	}
	{
		// if (keys == null || index >= keys.Count)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = __this->___keys_13;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_18 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___keys_13;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_19, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_18) >= ((int32_t)L_20)))
		{
			goto IL_00c3;
		}
	}
	{
		// var key = keys[index];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___keys_13;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, L_22, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_4 = L_23;
		// BeginStringifyObjectField(builder, pretty, depth, key);
		StringBuilder_t* L_24 = ___builder1;
		bool L_25 = ___pretty2;
		int32_t L_26 = ___depth0;
		String_t* L_27 = V_4;
		JSONObject_BeginStringifyObjectField_m7FD31C38CCAB181AF2499C2971B6A0FEE8D0298B(__this, L_24, L_25, L_26, L_27, NULL);
		// jsonObject.Stringify(depth, builder, pretty);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_28 = V_3;
		int32_t L_29 = ___depth0;
		StringBuilder_t* L_30 = ___builder1;
		bool L_31 = ___pretty2;
		NullCheck(L_28);
		JSONObject_Stringify_m1B4AB8F7C1726AA4FA744CDA2C0261771D7737CE(L_28, L_29, L_30, L_31, NULL);
		// EndStringifyObjectField(builder, pretty);
		StringBuilder_t* L_32 = ___builder1;
		bool L_33 = ___pretty2;
		JSONObject_EndStringifyObjectField_mE69FE33F5E034275318A7C3D9AE2C5A802945090(__this, L_32, L_33, NULL);
	}

IL_00bb:
	{
		// for (var index = 0; index < fieldCount; index++) {
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00bf:
	{
		// for (var index = 0; index < fieldCount; index++) {
		int32_t L_35 = V_2;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_006b;
		}
	}

IL_00c3:
	{
		// EndStringifyObjectContainer(builder, pretty, depth);
		StringBuilder_t* L_37 = ___builder1;
		bool L_38 = ___pretty2;
		int32_t L_39 = ___depth0;
		JSONObject_EndStringifyObjectContainer_mD874A086B26BFD0B1543B4747D14CF073639F05B(__this, L_37, L_38, L_39, NULL);
		// break;
		return;
	}

IL_00cd:
	{
		// if (count <= 0) {
		int32_t L_40;
		L_40 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		// StringifyEmptyArray(builder);
		StringBuilder_t* L_41 = ___builder1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_StringifyEmptyArray_mC78592CCEB915F47CCB8F3F3EF3F0CEECE0CD624(L_41, NULL);
		// break;
		return;
	}

IL_00dd:
	{
		// BeginStringifyArrayContainer(builder, pretty);
		StringBuilder_t* L_42 = ___builder1;
		bool L_43 = ___pretty2;
		JSONObject_BeginStringifyArrayContainer_m59F4D18EDB10B3243DD1AD8CF673F92EA912AE57(__this, L_42, L_43, NULL);
		// foreach (var jsonObject in list) {
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_44 = __this->___list_12;
		NullCheck(L_44);
		Enumerator_t67AE52CF7FD6EE3C251143D6B7534AF4A04048A1 L_45;
		L_45 = List_1_GetEnumerator_m2EA9CF993A1757CD6FA450F8FB76CE5C4797CA95(L_44, List_1_GetEnumerator_m2EA9CF993A1757CD6FA450F8FB76CE5C4797CA95_RuntimeMethod_var);
		V_5 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0127:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9AB7547595606304114C14F0450F15FD30F51468((&V_5), Enumerator_Dispose_m9AB7547595606304114C14F0450F15FD30F51468_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011c_1;
			}

IL_00f4_1:
			{
				// foreach (var jsonObject in list) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_46;
				L_46 = Enumerator_get_Current_m1499EAC836D33EE4BDFBC30928D75545E8F29523_inline((&V_5), Enumerator_get_Current_m1499EAC836D33EE4BDFBC30928D75545E8F29523_RuntimeMethod_var);
				V_6 = L_46;
				// if (jsonObject == null)
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_47 = V_6;
				if (!L_47)
				{
					goto IL_011c_1;
				}
			}
			{
				// BeginStringifyArrayElement(builder, pretty, depth);
				StringBuilder_t* L_48 = ___builder1;
				bool L_49 = ___pretty2;
				int32_t L_50 = ___depth0;
				JSONObject_BeginStringifyArrayElement_m401B397C85AA21E3E8707178CD43782B533141B3(__this, L_48, L_49, L_50, NULL);
				// jsonObject.Stringify(depth, builder, pretty);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_51 = V_6;
				int32_t L_52 = ___depth0;
				StringBuilder_t* L_53 = ___builder1;
				bool L_54 = ___pretty2;
				NullCheck(L_51);
				JSONObject_Stringify_m1B4AB8F7C1726AA4FA744CDA2C0261771D7737CE(L_51, L_52, L_53, L_54, NULL);
				// EndStringifyArrayElement(builder, pretty);
				StringBuilder_t* L_55 = ___builder1;
				bool L_56 = ___pretty2;
				JSONObject_EndStringifyArrayElement_mD9266EAC7BC72C2ED1586C924DC8EA395E34E7F9(__this, L_55, L_56, NULL);
			}

IL_011c_1:
			{
				// foreach (var jsonObject in list) {
				bool L_57;
				L_57 = Enumerator_MoveNext_mB602A35E50D2614F8EB42D0EAB33B023FB737E4B((&V_5), Enumerator_MoveNext_mB602A35E50D2614F8EB42D0EAB33B023FB737E4B_RuntimeMethod_var);
				if (L_57)
				{
					goto IL_00f4_1;
				}
			}
			{
				goto IL_0135;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0135:
	{
		// EndStringifyArrayContainer(builder, pretty, depth);
		StringBuilder_t* L_58 = ___builder1;
		bool L_59 = ___pretty2;
		int32_t L_60 = ___depth0;
		JSONObject_EndStringifyArrayContainer_m4A176DF24C519585CF36618B389483DB439C88EB(__this, L_58, L_59, L_60, NULL);
		// break;
		return;
	}

IL_013f:
	{
		// StringifyBool(builder);
		StringBuilder_t* L_61 = ___builder1;
		JSONObject_StringifyBool_m898A6B762DB8BFF8031306FCDE98DD54113853C4(__this, L_61, NULL);
		// break;
		return;
	}

IL_0147:
	{
		// StringifyNull(builder);
		StringBuilder_t* L_62 = ___builder1;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_StringifyNull_m07BEE11BF14EE6CE788602C34450790A33411004(L_62, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyString_m6C60B157ADB60C0A400CE42AD83B78BF95531578 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.AppendFormat("\"{0}\"", EscapeString(stringValue));
		StringBuilder_t* L_0 = ___builder0;
		String_t* L_1 = __this->___stringValue_14;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JSONObject_EscapeString_m9D82BC2F43D518B2C71EF91E9EB70EBDA338357C(L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_0, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_2, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::BeginStringifyObjectContainer(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyObjectContainer_m5DDF0C38F6519E8291886BA780B4116C70A33B4C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append("{");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// if (pretty)
		bool L_2 = ___pretty1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_3 = ___builder0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyEmptyObject(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyEmptyObject_mF0208881D165951D3B98AC8D67B4E9CCF450C9D4 (StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append("{}");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::BeginStringifyObjectField(System.Text.StringBuilder,System.Boolean,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyObjectField_m7FD31C38CCAB181AF2499C2971B6A0FEE8D0298B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, String_t* ___key3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (pretty)
		bool L_0 = ___pretty1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// for (var j = 0; j < depth; j++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		// builder.Append(Tab); //for a bit more readability
		StringBuilder_t* L_1 = ___builder0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		// for (var j = 0; j < depth; j++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0017:
	{
		// for (var j = 0; j < depth; j++)
		int32_t L_4 = V_0;
		int32_t L_5 = ___depth2;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0007;
		}
	}

IL_001b:
	{
		// builder.AppendFormat("\"{0}\":", key);
		StringBuilder_t* L_6 = ___builder0;
		String_t* L_7 = ___key3;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_6, _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D, L_7, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::EndStringifyObjectField(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyObjectField_mE69FE33F5E034275318A7C3D9AE2C5A802945090 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append(",");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// if (pretty)
		bool L_2 = ___pretty1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_3 = ___builder0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::EndStringifyObjectContainer(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyObjectContainer_mD874A086B26BFD0B1543B4747D14CF073639F05B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (pretty)
		bool L_0 = ___pretty1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// builder.Length -= 3;
		StringBuilder_t* L_1 = ___builder0;
		StringBuilder_t* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_2, NULL);
		NullCheck(L_2);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 3)), NULL);
		goto IL_0023;
	}

IL_0013:
	{
		// builder.Length--;
		StringBuilder_t* L_4 = ___builder0;
		StringBuilder_t* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
	}

IL_0023:
	{
		// if (pretty && count > 0) {
		bool L_8 = ___pretty1;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9;
		L_9 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_10 = ___builder0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		// for (var j = 0; j < depth - 1; j++)
		V_1 = 0;
		goto IL_004f;
	}

IL_003f:
	{
		// builder.Append(Tab);
		StringBuilder_t* L_12 = ___builder0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		// for (var j = 0; j < depth - 1; j++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004f:
	{
		// for (var j = 0; j < depth - 1; j++)
		int32_t L_15 = V_1;
		int32_t L_16 = ___depth2;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_003f;
		}
	}

IL_0055:
	{
		// builder.Append("}");
		StringBuilder_t* L_17 = ___builder0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyEmptyArray(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyEmptyArray_mC78592CCEB915F47CCB8F3F3EF3F0CEECE0CD624 (StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append("[]");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::BeginStringifyArrayContainer(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyArrayContainer_m59F4D18EDB10B3243DD1AD8CF673F92EA912AE57 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append("[");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		// if (pretty)
		bool L_2 = ___pretty1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_3 = ___builder0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::BeginStringifyArrayElement(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_BeginStringifyArrayElement_m401B397C85AA21E3E8707178CD43782B533141B3 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (pretty)
		bool L_0 = ___pretty1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// for (var j = 0; j < depth; j++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		// builder.Append(Tab); //for a bit more readability
		StringBuilder_t* L_1 = ___builder0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		// for (var j = 0; j < depth; j++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0017:
	{
		// for (var j = 0; j < depth; j++)
		int32_t L_4 = V_0;
		int32_t L_5 = ___depth2;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0007;
		}
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::EndStringifyArrayElement(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyArrayElement_mD9266EAC7BC72C2ED1586C924DC8EA395E34E7F9 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append(",");
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// if (pretty)
		bool L_2 = ___pretty1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_3 = ___builder0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::EndStringifyArrayContainer(System.Text.StringBuilder,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_EndStringifyArrayContainer_m4A176DF24C519585CF36618B389483DB439C88EB (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, bool ___pretty1, int32_t ___depth2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (pretty)
		bool L_0 = ___pretty1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// builder.Length -= 3;
		StringBuilder_t* L_1 = ___builder0;
		StringBuilder_t* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_2, NULL);
		NullCheck(L_2);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 3)), NULL);
		goto IL_0023;
	}

IL_0013:
	{
		// builder.Length--;
		StringBuilder_t* L_4 = ___builder0;
		StringBuilder_t* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
	}

IL_0023:
	{
		// if (pretty && count > 0) {
		bool L_8 = ___pretty1;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9;
		L_9 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// builder.Append(Newline);
		StringBuilder_t* L_10 = ___builder0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		// for (var j = 0; j < depth - 1; j++)
		V_1 = 0;
		goto IL_004f;
	}

IL_003f:
	{
		// builder.Append(Tab);
		StringBuilder_t* L_12 = ___builder0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		// for (var j = 0; j < depth - 1; j++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004f:
	{
		// for (var j = 0; j < depth - 1; j++)
		int32_t L_15 = V_1;
		int32_t L_16 = ___depth2;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_003f;
		}
	}

IL_0055:
	{
		// builder.Append("]");
		StringBuilder_t* L_17 = ___builder0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyNumber(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyNumber_m59CDF5A6C31D5A0B994FB91C54C70A4B52CAC63E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isInteger) {
		bool L_0 = __this->___isInteger_15;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// builder.Append(longValue.ToString(CultureInfo.InvariantCulture));
		StringBuilder_t* L_1 = ___builder0;
		int64_t* L_2 = (&__this->___longValue_16);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD(L_2, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		return;
	}

IL_0020:
	{
		// if (double.IsNegativeInfinity(doubleValue))
		double L_6 = __this->___doubleValue_18;
		bool L_7;
		L_7 = Double_IsNegativeInfinity_m13015C1072581C43BA6AAED02596E631C18942F6_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// builder.Append(NegativeInfinity);
		StringBuilder_t* L_8 = ___builder0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3, NULL);
		return;
	}

IL_003a:
	{
		// else if (double.IsInfinity(doubleValue))
		double L_10 = __this->___doubleValue_18;
		bool L_11;
		L_11 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// builder.Append(Infinity);
		StringBuilder_t* L_12 = ___builder0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA, NULL);
		return;
	}

IL_0054:
	{
		// else if (double.IsNaN(doubleValue))
		double L_14 = __this->___doubleValue_18;
		bool L_15;
		L_15 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// builder.Append(NaN);
		StringBuilder_t* L_16 = ___builder0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615, NULL);
		return;
	}

IL_006e:
	{
		// builder.Append(doubleValue.ToString("R", CultureInfo.InvariantCulture));
		StringBuilder_t* L_18 = ___builder0;
		double* L_19 = (&__this->___doubleValue_18);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
		L_20 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_21;
		L_21 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789(L_19, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_20, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_21, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyBool(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyBool_m898A6B762DB8BFF8031306FCDE98DD54113853C4 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// builder.Append(boolValue ? True : False);
		StringBuilder_t* L_0 = ___builder0;
		bool L_1 = __this->___boolValue_17;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Defective.JSON.JSONObject::StringifyNull(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_StringifyNull_m07BEE11BF14EE6CE788602C34450790A33411004 (StringBuilder_t* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append(Null);
		StringBuilder_t* L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// UnityEngine.WWWForm Defective.JSON.JSONObject::op_Implicit(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* JSONObject_op_Implicit_m70407BEE1B3A12A44474A220A28D0F6DEE25011A (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* V_2 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B8_0 = NULL;
	{
		// var form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_0, NULL);
		V_0 = L_0;
		// var count = jsonObject.count;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = ___jsonObject0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_1, NULL);
		V_1 = L_2;
		// var list = jsonObject.list;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_4 = L_3->___list_12;
		V_2 = L_4;
		// var keys = jsonObject.keys;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = ___jsonObject0;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5->___keys_13;
		V_3 = L_6;
		// var hasKeys = jsonObject.type == Type.Object && keys != null && keys.Count >= count;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = ___jsonObject0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___type_11;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0035;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_10, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = 0;
	}

IL_0036:
	{
		V_4 = (bool)G_B4_0;
		// for (var i = 0; i < count; i++) {
		V_5 = 0;
		goto IL_0094;
	}

IL_003d:
	{
		// var key = hasKeys ? keys[i] : i.ToString(CultureInfo.InvariantCulture);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_15;
		L_15 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_14, NULL);
		G_B8_0 = L_15;
		goto IL_0057;
	}

IL_004f:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_16, L_17, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		G_B8_0 = L_18;
	}

IL_0057:
	{
		V_6 = G_B8_0;
		// var element = list[i];
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21;
		L_21 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_19, L_20, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		// var val = element.ToString();
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22 = L_21;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		V_7 = L_23;
		// if (element.type == Type.String)
		NullCheck(L_22);
		int32_t L_24 = L_22->___type_11;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		// val = val.Replace("\"", "");
		String_t* L_25 = V_7;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_25, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_7 = L_26;
	}

IL_0084:
	{
		// form.AddField(key, val);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_27 = V_0;
		String_t* L_28 = V_6;
		String_t* L_29 = V_7;
		NullCheck(L_27);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_27, L_28, L_29, NULL);
		// for (var i = 0; i < count; i++) {
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0094:
	{
		// for (var i = 0; i < count; i++) {
		int32_t L_31 = V_5;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_003d;
		}
	}
	{
		// return form;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_33 = V_0;
		return L_33;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return count > index ? list[index] : null;
		int32_t L_0;
		L_0 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		int32_t L_1 = ___index0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*)NULL;
	}

IL_000b:
	{
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_2, L_3, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Defective.JSON.JSONObject::set_Item(System.Int32,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m0169F3DEE234B878ACA9BA965508F8CC4227030E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, int32_t ___index0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m14D37568F8283C45E21AA4A79F1AA25413ACD816_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (count > index)
		int32_t L_0;
		L_0 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		int32_t L_1 = ___index0;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// list[index] = value;
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_2 = __this->___list_12;
		int32_t L_3 = ___index0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = ___value1;
		NullCheck(L_2);
		List_1_set_Item_m14D37568F8283C45E21AA4A79F1AA25413ACD816(L_2, L_3, L_4, List_1_set_Item_m14D37568F8283C45E21AA4A79F1AA25413ACD816_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___index0, const RuntimeMethod* method) 
{
	{
		// get { return GetField(index); }
		String_t* L_0 = ___index0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_GetField_m2B0D3470E8784CF807ECAE34BBE45CB39EACCC53(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Defective.JSON.JSONObject::set_Item(System.String,Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mDE2BBA3C946D65EF2B48EAB717C07ADA0CA8ABF0 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, String_t* ___index0, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___value1, const RuntimeMethod* method) 
{
	{
		// set { SetField(index, value); }
		String_t* L_0 = ___index0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = ___value1;
		JSONObject_SetField_m1C2A2E5C80BAC28BC5D93F0E7170D8A1F8240380(__this, L_0, L_1, NULL);
		// set { SetField(index, value); }
		return;
	}
}
// System.String Defective.JSON.JSONObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_mC75F8ED6593F16613D74FE21534C7857F4D4D19D (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// return Print();
		String_t* L_0;
		L_0 = JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.String Defective.JSON.JSONObject::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_m2FF21676509731C47F0B3B6DF2AC190638118E29 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, bool ___pretty0, const RuntimeMethod* method) 
{
	{
		// return Print(pretty);
		bool L_0 = ___pretty0;
		String_t* L_1;
		L_1 = JSONObject_Print_m3AC68522204B19733E330B8DA1F8919099E6C284(__this, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Defective.JSON.JSONObject::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* JSONObject_ToDictionary_m23082758CE575B84DB57C5BAE6FD9B9882597CDA (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral563AB0FDA70B7B892A6DC96F49EE2B6C2C5E6766);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// if (type != Type.Object) {
		int32_t L_0 = __this->___type_11;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		//                 Debug.Log
		// #else
		//                 Debug.WriteLine
		// #endif
		//                     ("Tried to turn non-Object JSONObject into a dictionary");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616, NULL);
		// return null;
		return (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
	}

IL_0015:
	{
		// var result = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_1;
		// var listCount = count;
		int32_t L_2;
		L_2 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(__this, NULL);
		V_1 = L_2;
		// if (keys == null || keys.Count != listCount)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___keys_13;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___keys_13;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_4, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		// return result;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = V_0;
		return L_7;
	}

IL_003a:
	{
		// for (var index = 0; index < listCount; index++) {
		V_2 = 0;
		goto IL_00f6;
	}

IL_0041:
	{
		// var element = list[index];
		List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_8 = __this->___list_12;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_8, L_9, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		V_3 = L_10;
		// switch (element.type) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = L_11->___type_11;
		V_4 = L_12;
		int32_t L_13 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1)))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00d7;
			}
			case 4:
			{
				goto IL_00b3;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_0075:
	{
		// result.Add(keys[index], element.stringValue);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->___keys_13;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, L_16, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_3;
		NullCheck(L_18);
		String_t* L_19 = L_18->___stringValue_14;
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, L_17, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// break;
		goto IL_00f2;
	}

IL_008f:
	{
		// result.Add(keys[index], element.doubleValue.ToString(CultureInfo.InvariantCulture));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___keys_13;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, L_22, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = V_3;
		NullCheck(L_24);
		double* L_25 = (&L_24->___doubleValue_18);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
		L_26 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_27;
		L_27 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357(L_25, L_26, NULL);
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, L_23, L_27, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// break;
		goto IL_00f2;
	}

IL_00b3:
	{
		// result.Add(keys[index], element.boolValue.ToString(CultureInfo.InvariantCulture));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = __this->___keys_13;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_29, L_30, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_32 = V_3;
		NullCheck(L_32);
		bool* L_33 = (&L_32->___boolValue_17);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_34;
		L_34 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_35;
		L_35 = Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4(L_33, L_34, NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, L_31, L_35, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// break;
		goto IL_00f2;
	}

IL_00d7:
	{
		//                         Debug.LogWarning
		// #else
		//                         Debug.WriteLine
		// #endif
		//                             (string.Format("Omitting object: {0} in dictionary conversion", keys[index]));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___keys_13;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, L_37, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_39;
		L_39 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral563AB0FDA70B7B892A6DC96F49EE2B6C2C5E6766, L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_39, NULL);
	}

IL_00f2:
	{
		// for (var index = 0; index < listCount; index++) {
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00f6:
	{
		// for (var index = 0; index < listCount; index++) {
		int32_t L_41 = V_2;
		int32_t L_42 = V_1;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0041;
		}
	}
	{
		// return result;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = V_0;
		return L_43;
	}
}
// System.Boolean Defective.JSON.JSONObject::op_Implicit(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	{
		// return jsonObject != null;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		return (bool)((!(((RuntimeObject*)(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_System_Collections_IEnumerable_GetEnumerator_mD11F6ABC323D05CAD33E0968487A894D48F942B7 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* L_0;
		L_0 = JSONObject_GetEnumerator_mB47C5B15F96CECE98FD0D8B8A64AB98CC78178BF(__this, NULL);
		return L_0;
	}
}
// Defective.JSON.JSONObjectEnumerator Defective.JSON.JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* JSONObject_GetEnumerator_mB47C5B15F96CECE98FD0D8B8A64AB98CC78178BF (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONObjectEnumerator(this);
		JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* L_0 = (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5*)il2cpp_codegen_object_new(JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObjectEnumerator__ctor_m24FA52671B6CD2C9492B8273FD881FA9B0499383(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__cctor_m027D19D544CEABDFB5E9F84F76CAE9F1D395559D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Stopwatch PrintWatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9), (void*)L_0);
		// public static readonly char[] Whitespace = { ' ', '\r', '\n', '\t', '\uFEFF', '\u0009' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)6);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___Whitespace_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___Whitespace_10), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Defective.JSON.JSONObject/ParseResult
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_pinvoke(const ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484& unmarshaled, ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_pinvoke& marshaled)
{
	Exception_t* ___result_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'result' of type 'ParseResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___result_0Exception, NULL);
}
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_pinvoke_back(const ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_pinvoke& marshaled, ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484& unmarshaled)
{
	Exception_t* ___result_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'result' of type 'ParseResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___result_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Defective.JSON.JSONObject/ParseResult
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_pinvoke_cleanup(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Defective.JSON.JSONObject/ParseResult
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_com(const ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484& unmarshaled, ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_com& marshaled)
{
	Exception_t* ___result_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'result' of type 'ParseResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___result_0Exception, NULL);
}
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_com_back(const ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_com& marshaled, ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484& unmarshaled)
{
	Exception_t* ___result_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'result' of type 'ParseResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___result_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Defective.JSON.JSONObject/ParseResult
IL2CPP_EXTERN_C void ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshal_com_cleanup(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_marshaled_com& marshaled)
{
}
// System.Void Defective.JSON.JSONObject/ParseResult::.ctor(Defective.JSON.JSONObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC (ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result0, int32_t ___offset1, bool ___pause2, const RuntimeMethod* method) 
{
	{
		// this.result = result;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___result0;
		__this->___result_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_0), (void*)L_0);
		// this.offset = offset;
		int32_t L_1 = ___offset1;
		__this->___offset_1 = L_1;
		// this.pause = pause;
		bool L_2 = ___pause2;
		__this->___pause_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC_AdjustorThunk (RuntimeObject* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___result0, int32_t ___offset1, bool ___pause2, const RuntimeMethod* method)
{
	ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484*>(__this + _offset);
	ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC(_thisAdjusted, ___result0, ___offset1, ___pause2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_Multicast(FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* currentDelegate = reinterpret_cast<FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___name0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenInst(FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	NullCheck(___name0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, method);
}
void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenStatic(FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, method);
}
void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenStaticInvoker(FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___name0);
}
void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_ClosedStaticInvoker(FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___name0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77 (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	il2cppPInvokeFunc(____name0_marshaled);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void Defective.JSON.JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound__ctor_m0DB648B9075D80164808D3251A5A8C6AB6BB0915 (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_Multicast;
}
// System.Void Defective.JSON.JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___name0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Defective.JSON.JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldNotFound_BeginInvoke_m9F14D87AF92BB7ADD95C6497F6EA5D8E33DAA4C2 (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___name0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Defective.JSON.JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_EndInvoke_mA2ACE1422E27333A07322810F28159B362CC7FAB (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_Multicast(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* currentDelegate = reinterpret_cast<GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___jsonObject0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenInst(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	NullCheck(___jsonObject0);
	typedef void (*FunctionPointerType) (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___jsonObject0, method);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenStatic(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___jsonObject0, method);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenStaticInvoker(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* >::Invoke(__this->___method_ptr_0, method, NULL, ___jsonObject0);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_ClosedStaticInvoker(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___jsonObject0);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenVirtual(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	NullCheck(___jsonObject0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___jsonObject0);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenInterface(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	NullCheck(___jsonObject0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___jsonObject0);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenGenericVirtual(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	NullCheck(___jsonObject0);
	GenericVirtualActionInvoker0::Invoke(method, ___jsonObject0);
}
void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenGenericInterface(GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method)
{
	NullCheck(___jsonObject0);
	GenericInterfaceActionInvoker0::Invoke(method, ___jsonObject0);
}
// System.Void Defective.JSON.JSONObject/GetFieldResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse__ctor_mCC6370E1BB85AFB50F1F3B413B3B66BCEBB3C772 (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_Multicast;
}
// System.Void Defective.JSON.JSONObject/GetFieldResponse::Invoke(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0 (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___jsonObject0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Defective.JSON.JSONObject/GetFieldResponse::BeginInvoke(Defective.JSON.JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFieldResponse_BeginInvoke_m4EDEBA4ACC92D545DA98DAB88274C05568AB003C (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jsonObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Defective.JSON.JSONObject/GetFieldResponse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_EndInvoke_m639D6EBB429A72AAC8ECEDA527C91F8A580F3FDA (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_Multicast(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* currentDelegate = reinterpret_cast<AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___self0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenInst(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	NullCheck(___self0);
	typedef void (*FunctionPointerType) (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___self0, method);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenStatic(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___self0, method);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenStaticInvoker(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* >::Invoke(__this->___method_ptr_0, method, NULL, ___self0);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_ClosedStaticInvoker(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___self0);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenVirtual(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	NullCheck(___self0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___self0);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenInterface(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	NullCheck(___self0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___self0);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenGenericVirtual(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	NullCheck(___self0);
	GenericVirtualActionInvoker0::Invoke(method, ___self0);
}
void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenGenericInterface(AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method)
{
	NullCheck(___self0);
	GenericInterfaceActionInvoker0::Invoke(method, ___self0);
}
// System.Void Defective.JSON.JSONObject/AddJSONContents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents__ctor_m8FCF937D710F4633E7704FB0D1E1AA91918E97F7 (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_Multicast;
}
// System.Void Defective.JSON.JSONObject/AddJSONContents::Invoke(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4 (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___self0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Defective.JSON.JSONObject/AddJSONContents::BeginInvoke(Defective.JSON.JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddJSONContents_BeginInvoke_m76470BE39539476BD99A0F1ECC1C0F54A66CC460 (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___self0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Defective.JSON.JSONObject/AddJSONContents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_EndInvoke_m7338DE0773AB640889F45A65EE9D0AEAACA7D40F (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68__ctor_m73342FE672B04F95C4ADBEEADA07765F7D3E777D (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68_System_IDisposable_Dispose_mA2379377CCDE0F24D624C6549C13E7ACC0E907EE (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CCreateAsyncU3Ed__68_U3CU3Em__Finally1_mB2D0F83679926380C8F79EC5E0ABAE8C375EDBCE(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<CreateAsync>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateAsyncU3Ed__68_MoveNext_m881C3C19323983C2C329A7A06876CE47A8AFB3D4 (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0128:
			{// begin fault (depth: 1)
				U3CCreateAsyncU3Ed__68_System_IDisposable_Dispose_mA2379377CCDE0F24D624C6549C13E7ACC0E907EE(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0020_1;
					}
					case 1:
					{
						goto IL_00bb_1;
					}
					case 2:
					{
						goto IL_011d_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_012f;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var jsonObject = Create();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
				L_2 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
				__this->___U3CjsonObjectU3E5__2_13 = L_2;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonObjectU3E5__2_13), (void*)L_2);
				// PrintWatch.Reset();
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_3);
				Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_3, NULL);
				// PrintWatch.Start();
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_4);
				Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_4, NULL);
				// foreach (var e in ParseAsync(jsonString, offset, endOffset, jsonObject, maxDepth, storeExcessLevels)) {
				String_t* L_5 = __this->___jsonString_3;
				int32_t L_6 = __this->___offset_5;
				int32_t L_7 = __this->___endOffset_7;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = __this->___U3CjsonObjectU3E5__2_13;
				int32_t L_9 = __this->___maxDepth_9;
				bool L_10 = __this->___storeExcessLevels_11;
				RuntimeObject* L_11;
				L_11 = JSONObject_ParseAsync_mD9CF1A456EE9552A71DEA4B1A71F2EEBAD1B6033(L_5, L_6, L_7, L_8, L_9, L_10, 0, (bool)1, NULL);
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult>::GetEnumerator() */, IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var, L_11);
				__this->___U3CU3E7__wrap2_14 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_14), (void*)L_12);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00e0_1;
			}

IL_0086_1:
			{
				// foreach (var e in ParseAsync(jsonString, offset, endOffset, jsonObject, maxDepth, storeExcessLevels)) {
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap2_14;
				NullCheck(L_13);
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_14;
				L_14 = InterfaceFuncInvoker0< ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult>::get_Current() */, IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var, L_13);
				__this->___U3CeU3E5__4_15 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CeU3E5__4_15))->___result_0), (void*)NULL);
				// if (e.pause)
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_15 = (&__this->___U3CeU3E5__4_15);
				bool L_16 = L_15->___pause_2;
				if (!L_16)
				{
					goto IL_00c3_1;
				}
			}
			{
				// yield return e;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_17 = __this->___U3CeU3E5__4_15;
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_012f;
			}

IL_00bb_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00c3_1:
			{
				// offset = e.offset;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_18 = (&__this->___U3CeU3E5__4_15);
				int32_t L_19 = L_18->___offset_1;
				__this->___offset_5 = L_19;
				// }
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_20 = (&__this->___U3CeU3E5__4_15);
				il2cpp_codegen_initobj(L_20, sizeof(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484));
			}

IL_00e0_1:
			{
				// foreach (var e in ParseAsync(jsonString, offset, endOffset, jsonObject, maxDepth, storeExcessLevels)) {
				RuntimeObject* L_21 = __this->___U3CU3E7__wrap2_14;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0086_1;
				}
			}
			{
				U3CCreateAsyncU3Ed__68_U3CU3Em__Finally1_mB2D0F83679926380C8F79EC5E0ABAE8C375EDBCE(__this, NULL);
				__this->___U3CU3E7__wrap2_14 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_14), (void*)(RuntimeObject*)NULL);
				// yield return new ParseResult(jsonObject, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_23 = __this->___U3CjsonObjectU3E5__2_13;
				int32_t L_24 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_25;
				memset((&L_25), 0, sizeof(L_25));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_25), L_23, L_24, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_012f;
			}

IL_011d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// }
				V_0 = (bool)0;
				goto IL_012f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012f:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68_U3CU3Em__Finally1_mB2D0F83679926380C8F79EC5E0ABAE8C375EDBCE (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_14;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.Generic.IEnumerator<Defective.JSON.JSONObject.ParseResult>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 U3CCreateAsyncU3Ed__68_System_Collections_Generic_IEnumeratorU3CDefective_JSON_JSONObject_ParseResultU3E_get_Current_mFE2659F69AEA231B58E8E5570C8397EA4FF742A2 (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	{
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAsyncU3Ed__68_System_Collections_IEnumerator_Reset_mF65475F22F9B98E12245A17B9A4BFEABEE7F062D (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateAsyncU3Ed__68_System_Collections_IEnumerator_Reset_mF65475F22F9B98E12245A17B9A4BFEABEE7F062D_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateAsyncU3Ed__68_System_Collections_IEnumerator_get_Current_m538289A6AC1FE8876C69D71D045D4F6BCBDC120D (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_0 = __this->___U3CU3E2__current_1;
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_1 = L_0;
		RuntimeObject* L_2 = Box(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.Generic.IEnumerable<Defective.JSON.JSONObject.ParseResult>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateAsyncU3Ed__68_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m32461717630B296EAA1792B7E489A40D05AB8E81 (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_3 = (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0*)il2cpp_codegen_object_new(U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CCreateAsyncU3Ed__68__ctor_m73342FE672B04F95C4ADBEEADA07765F7D3E777D(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__jsonString_4;
		NullCheck(L_4);
		L_4->___jsonString_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___jsonString_3), (void*)L_5);
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__offset_6;
		NullCheck(L_6);
		L_6->___offset_5 = L_7;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_8 = V_0;
		int32_t L_9 = __this->___U3CU3E3__endOffset_8;
		NullCheck(L_8);
		L_8->___endOffset_7 = L_9;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_10 = V_0;
		int32_t L_11 = __this->___U3CU3E3__maxDepth_10;
		NullCheck(L_10);
		L_10->___maxDepth_9 = L_11;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_12 = V_0;
		bool L_13 = __this->___U3CU3E3__storeExcessLevels_12;
		NullCheck(L_12);
		L_12->___storeExcessLevels_11 = L_13;
		U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* L_14 = V_0;
		return L_14;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<CreateAsync>d__68::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateAsyncU3Ed__68_System_Collections_IEnumerable_GetEnumerator_m363195E768293B0C80BCB617E0066C6944B1BE63 (U3CCreateAsyncU3Ed__68_tE9C5AE44093001F2540C7C3D54DDAE5BC1C60FF0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CCreateAsyncU3Ed__68_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m32461717630B296EAA1792B7E489A40D05AB8E81(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73__ctor_m35663A7C21BE4D9FF319F64E93568B2796611B71 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_System_IDisposable_Dispose_m13F01CD01D57E0294803AB399780E6AF1BB4A30E (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-4))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				U3CParseAsyncU3Ed__73_U3CU3Em__Finally1_m482A862B7902AD7391AD1219D44134784397A73D(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				U3CParseAsyncU3Ed__73_U3CU3Em__Finally2_m78CA52C647FB7924454346A0231A4F60034C79B4(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<ParseAsync>d__73::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CParseAsyncU3Ed__73_MoveNext_m306492C173EC19374DE05CF29BA4C287753062F8 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_3 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0608:
			{// begin fault (depth: 1)
				U3CParseAsyncU3Ed__73_System_IDisposable_Dispose_m13F01CD01D57E0294803AB399780E6AF1BB4A30E(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0038_1;
					}
					case 1:
					{
						goto IL_00f8_1;
					}
					case 2:
					{
						goto IL_0275_1;
					}
					case 3:
					{
						goto IL_0394_1;
					}
					case 4:
					{
						goto IL_0444_1;
					}
					case 5:
					{
						goto IL_04be_1;
					}
					case 6:
					{
						goto IL_054e_1;
					}
					case 7:
					{
						goto IL_05b0_1;
					}
					case 8:
					{
						goto IL_05fd_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_0038_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (!BeginParse(inputString, offset, ref endOffset, container, maxDepth, storeExcessLevels))
				String_t* L_2 = __this->___inputString_3;
				int32_t L_3 = __this->___offset_5;
				int32_t* L_4 = (&__this->___endOffset_7);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = __this->___container_9;
				int32_t L_6 = __this->___maxDepth_11;
				bool L_7 = __this->___storeExcessLevels_13;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = JSONObject_BeginParse_m5DC3434F026462D2385421261304923E197E6C27(L_2, L_3, L_4, L_5, L_6, L_7, NULL);
				if (L_8)
				{
					goto IL_0071_1;
				}
			}
			{
				// yield break;
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_0071_1:
			{
				// var startOffset = offset;
				int32_t L_9 = __this->___offset_5;
				__this->___U3CstartOffsetU3E5__2_19 = L_9;
				// var quoteStart = 0;
				__this->___U3CquoteStartU3E5__3_20 = 0;
				// var quoteEnd = 0;
				__this->___U3CquoteEndU3E5__4_21 = 0;
				// var lastValidOffset = offset;
				int32_t L_10 = __this->___offset_5;
				__this->___U3ClastValidOffsetU3E5__5_22 = L_10;
				// var openQuote = false;
				__this->___U3CopenQuoteU3E5__6_23 = (bool)0;
				// var bakeDepth = 0;
				__this->___U3CbakeDepthU3E5__7_24 = 0;
				goto IL_05c9_1;
			}

IL_00aa_1:
			{
				// if (PrintWatch.Elapsed.TotalSeconds > MaxFrameTime) {
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_11 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_11);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
				L_12 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_11, NULL);
				V_4 = L_12;
				double L_13;
				L_13 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_4), NULL);
				if ((!(((double)L_13) > ((double)(0.0080000003799796104)))))
				{
					goto IL_0109_1;
				}
			}
			{
				// PrintWatch.Reset();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_14 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_14);
				Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_14, NULL);
				// yield return new ParseResult(container, offset, true);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = __this->___container_9;
				int32_t L_16 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_17;
				memset((&L_17), 0, sizeof(L_17));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_17), L_15, L_16, (bool)1, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_00f8_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// PrintWatch.Start();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_18 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_18);
				Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_18, NULL);
			}

IL_0109_1:
			{
				// var currentCharacter = inputString[offset++];
				String_t* L_19 = __this->___inputString_3;
				int32_t L_20 = __this->___offset_5;
				V_5 = L_20;
				int32_t L_21 = V_5;
				__this->___offset_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
				int32_t L_22 = V_5;
				NullCheck(L_19);
				Il2CppChar L_23;
				L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_22, NULL);
				V_2 = L_23;
				// if (Array.IndexOf(Whitespace, currentCharacter) > -1)
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___Whitespace_10;
				Il2CppChar L_25 = V_2;
				int32_t L_26;
				L_26 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9(L_24, L_25, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
				if ((((int32_t)L_26) > ((int32_t)(-1))))
				{
					goto IL_05c9_1;
				}
			}
			{
				Il2CppChar L_27 = V_2;
				if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)58)))))
				{
					goto IL_015c_1;
				}
			}
			{
				Il2CppChar L_28 = V_2;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
				{
					goto IL_04cc_1;
				}
			}
			{
				Il2CppChar L_29 = V_2;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)44))))
				{
					goto IL_055c_1;
				}
			}
			{
				Il2CppChar L_30 = V_2;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
				{
					goto IL_04ee_1;
				}
			}
			{
				goto IL_05bb_1;
			}

IL_015c_1:
			{
				Il2CppChar L_31 = V_2;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_31, ((int32_t)91))))
				{
					case 0:
					{
						goto IL_02b9_1;
					}
					case 1:
					{
						goto IL_0183_1;
					}
					case 2:
					{
						goto IL_0452_1;
					}
				}
			}
			{
				Il2CppChar L_32 = V_2;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)123))))
				{
					goto IL_019a_1;
				}
			}
			{
				Il2CppChar L_33 = V_2;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)125))))
				{
					goto IL_03d8_1;
				}
			}
			{
				goto IL_05bb_1;
			}

IL_0183_1:
			{
				// offset++;
				int32_t L_34 = __this->___offset_5;
				V_5 = L_34;
				int32_t L_35 = V_5;
				__this->___offset_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
				// break;
				goto IL_05bb_1;
			}

IL_019a_1:
			{
				// if (openQuote)
				bool L_36 = __this->___U3CopenQuoteU3E5__6_23;
				if (L_36)
				{
					goto IL_05bb_1;
				}
			}
			{
				// if (maxDepth >= 0 && depth >= maxDepth) {
				int32_t L_37 = __this->___maxDepth_11;
				if ((((int32_t)L_37) < ((int32_t)0)))
				{
					goto IL_01d3_1;
				}
			}
			{
				int32_t L_38 = __this->___depth_15;
				int32_t L_39 = __this->___maxDepth_11;
				if ((((int32_t)L_38) < ((int32_t)L_39)))
				{
					goto IL_01d3_1;
				}
			}
			{
				// bakeDepth++;
				int32_t L_40 = __this->___U3CbakeDepthU3E5__7_24;
				V_5 = L_40;
				int32_t L_41 = V_5;
				__this->___U3CbakeDepthU3E5__7_24 = ((int32_t)il2cpp_codegen_add(L_41, 1));
				// break;
				goto IL_05bb_1;
			}

IL_01d3_1:
			{
				// newContainer = container;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_42 = __this->___container_9;
				V_3 = L_42;
				// if (!isRoot) {
				bool L_43 = __this->___isRoot_17;
				if (L_43)
				{
					goto IL_01f4_1;
				}
			}
			{
				// newContainer = Create();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_44;
				L_44 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
				V_3 = L_44;
				// SafeAddChild(container, newContainer);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_45 = __this->___container_9;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_46 = V_3;
				JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(L_45, L_46, NULL);
			}

IL_01f4_1:
			{
				// newContainer.type = Type.Object;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_47 = V_3;
				NullCheck(L_47);
				L_47->___type_11 = 3;
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				String_t* L_48 = __this->___inputString_3;
				int32_t L_49 = __this->___offset_5;
				int32_t L_50 = __this->___endOffset_7;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_51 = V_3;
				int32_t L_52 = __this->___maxDepth_11;
				bool L_53 = __this->___storeExcessLevels_13;
				int32_t L_54 = __this->___depth_15;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				RuntimeObject* L_55;
				L_55 = JSONObject_ParseAsync_mD9CF1A456EE9552A71DEA4B1A71F2EEBAD1B6033(L_48, L_49, L_50, L_51, L_52, L_53, ((int32_t)il2cpp_codegen_add(L_54, 1)), (bool)0, NULL);
				NullCheck(L_55);
				RuntimeObject* L_56;
				L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult>::GetEnumerator() */, IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var, L_55);
				__this->___U3CU3E7__wrap7_25 = L_56;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap7_25), (void*)L_56);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_029a_1;
			}

IL_023d_1:
			{
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				RuntimeObject* L_57 = __this->___U3CU3E7__wrap7_25;
				NullCheck(L_57);
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_58;
				L_58 = InterfaceFuncInvoker0< ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult>::get_Current() */, IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var, L_57);
				__this->___U3CeU3E5__9_26 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CeU3E5__9_26))->___result_0), (void*)NULL);
				// if (e.pause)
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_59 = (&__this->___U3CeU3E5__9_26);
				bool L_60 = L_59->___pause_2;
				if (!L_60)
				{
					goto IL_027d_1;
				}
			}
			{
				// yield return e;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_61 = __this->___U3CeU3E5__9_26;
				__this->___U3CU3E2__current_1 = L_61;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_0275_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_027d_1:
			{
				// offset = e.offset;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_62 = (&__this->___U3CeU3E5__9_26);
				int32_t L_63 = L_62->___offset_1;
				__this->___offset_5 = L_63;
				// }
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_64 = (&__this->___U3CeU3E5__9_26);
				il2cpp_codegen_initobj(L_64, sizeof(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484));
			}

IL_029a_1:
			{
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				RuntimeObject* L_65 = __this->___U3CU3E7__wrap7_25;
				NullCheck(L_65);
				bool L_66;
				L_66 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_65);
				if (L_66)
				{
					goto IL_023d_1;
				}
			}
			{
				U3CParseAsyncU3Ed__73_U3CU3Em__Finally1_m482A862B7902AD7391AD1219D44134784397A73D(__this, NULL);
				__this->___U3CU3E7__wrap7_25 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap7_25), (void*)(RuntimeObject*)NULL);
				// break;
				goto IL_05bb_1;
			}

IL_02b9_1:
			{
				// if (openQuote)
				bool L_67 = __this->___U3CopenQuoteU3E5__6_23;
				if (L_67)
				{
					goto IL_05bb_1;
				}
			}
			{
				// if (maxDepth >= 0 && depth >= maxDepth) {
				int32_t L_68 = __this->___maxDepth_11;
				if ((((int32_t)L_68) < ((int32_t)0)))
				{
					goto IL_02f2_1;
				}
			}
			{
				int32_t L_69 = __this->___depth_15;
				int32_t L_70 = __this->___maxDepth_11;
				if ((((int32_t)L_69) < ((int32_t)L_70)))
				{
					goto IL_02f2_1;
				}
			}
			{
				// bakeDepth++;
				int32_t L_71 = __this->___U3CbakeDepthU3E5__7_24;
				V_5 = L_71;
				int32_t L_72 = V_5;
				__this->___U3CbakeDepthU3E5__7_24 = ((int32_t)il2cpp_codegen_add(L_72, 1));
				// break;
				goto IL_05bb_1;
			}

IL_02f2_1:
			{
				// newContainer = container;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_73 = __this->___container_9;
				V_3 = L_73;
				// if (!isRoot) {
				bool L_74 = __this->___isRoot_17;
				if (L_74)
				{
					goto IL_0313_1;
				}
			}
			{
				// newContainer = Create();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_75;
				L_75 = JSONObject_Create_m43209E76E53E1DBE231EB3D763841EADD511D4A3(NULL);
				V_3 = L_75;
				// SafeAddChild(container, newContainer);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_76 = __this->___container_9;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_77 = V_3;
				JSONObject_SafeAddChild_mF8B89C42E3021F550FF4D7030F361B3A9578A588(L_76, L_77, NULL);
			}

IL_0313_1:
			{
				// newContainer.type = Type.Array;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_78 = V_3;
				NullCheck(L_78);
				L_78->___type_11 = 4;
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				String_t* L_79 = __this->___inputString_3;
				int32_t L_80 = __this->___offset_5;
				int32_t L_81 = __this->___endOffset_7;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_82 = V_3;
				int32_t L_83 = __this->___maxDepth_11;
				bool L_84 = __this->___storeExcessLevels_13;
				int32_t L_85 = __this->___depth_15;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				RuntimeObject* L_86;
				L_86 = JSONObject_ParseAsync_mD9CF1A456EE9552A71DEA4B1A71F2EEBAD1B6033(L_79, L_80, L_81, L_82, L_83, L_84, ((int32_t)il2cpp_codegen_add(L_85, 1)), (bool)0, NULL);
				NullCheck(L_86);
				RuntimeObject* L_87;
				L_87 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Defective.JSON.JSONObject/ParseResult>::GetEnumerator() */, IEnumerable_1_t723DB3C7DED01238B8BEC90FE7A119EC371467F7_il2cpp_TypeInfo_var, L_86);
				__this->___U3CU3E7__wrap7_25 = L_87;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap7_25), (void*)L_87);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_03b9_1;
			}

IL_035c_1:
			{
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				RuntimeObject* L_88 = __this->___U3CU3E7__wrap7_25;
				NullCheck(L_88);
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_89;
				L_89 = InterfaceFuncInvoker0< ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult>::get_Current() */, IEnumerator_1_t5D5FC6D731BC54ACB58242B0BB9D0FD9E851FA7F_il2cpp_TypeInfo_var, L_88);
				__this->___U3CeU3E5__9_26 = L_89;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CeU3E5__9_26))->___result_0), (void*)NULL);
				// if (e.pause)
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_90 = (&__this->___U3CeU3E5__9_26);
				bool L_91 = L_90->___pause_2;
				if (!L_91)
				{
					goto IL_039c_1;
				}
			}
			{
				// yield return e;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_92 = __this->___U3CeU3E5__9_26;
				__this->___U3CU3E2__current_1 = L_92;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_0394_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_039c_1:
			{
				// offset = e.offset;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_93 = (&__this->___U3CeU3E5__9_26);
				int32_t L_94 = L_93->___offset_1;
				__this->___offset_5 = L_94;
				// }
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484* L_95 = (&__this->___U3CeU3E5__9_26);
				il2cpp_codegen_initobj(L_95, sizeof(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484));
			}

IL_03b9_1:
			{
				// foreach (var e in ParseAsync(inputString, offset, endOffset, newContainer, maxDepth, storeExcessLevels, depth + 1, false)) {
				RuntimeObject* L_96 = __this->___U3CU3E7__wrap7_25;
				NullCheck(L_96);
				bool L_97;
				L_97 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_96);
				if (L_97)
				{
					goto IL_035c_1;
				}
			}
			{
				U3CParseAsyncU3Ed__73_U3CU3Em__Finally2_m78CA52C647FB7924454346A0231A4F60034C79B4(__this, NULL);
				__this->___U3CU3E7__wrap7_25 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap7_25), (void*)(RuntimeObject*)NULL);
				// break;
				goto IL_05bb_1;
			}

IL_03d8_1:
			{
				// if (!ParseObjectEnd(inputString, offset, openQuote, container, startOffset, lastValidOffset, maxDepth, storeExcessLevels, depth, ref bakeDepth)) {
				String_t* L_98 = __this->___inputString_3;
				int32_t L_99 = __this->___offset_5;
				bool L_100 = __this->___U3CopenQuoteU3E5__6_23;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_101 = __this->___container_9;
				int32_t L_102 = __this->___U3CstartOffsetU3E5__2_19;
				int32_t L_103 = __this->___U3ClastValidOffsetU3E5__5_22;
				int32_t L_104 = __this->___maxDepth_11;
				bool L_105 = __this->___storeExcessLevels_13;
				int32_t L_106 = __this->___depth_15;
				int32_t* L_107 = (&__this->___U3CbakeDepthU3E5__7_24);
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				bool L_108;
				L_108 = JSONObject_ParseObjectEnd_m409EF6F2E8E663FF9D81D154E14B7FB54114CB2D(L_98, L_99, L_100, L_101, L_102, L_103, L_104, L_105, L_106, L_107, NULL);
				if (L_108)
				{
					goto IL_05bb_1;
				}
			}
			{
				// yield return new ParseResult(container, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_109 = __this->___container_9;
				int32_t L_110 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_111;
				memset((&L_111), 0, sizeof(L_111));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_111), L_109, L_110, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_111;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 4;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_0444_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield break;
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_0452_1:
			{
				// if (!ParseArrayEnd(inputString, offset, openQuote, container, startOffset, lastValidOffset, maxDepth, storeExcessLevels, depth, ref bakeDepth)) {
				String_t* L_112 = __this->___inputString_3;
				int32_t L_113 = __this->___offset_5;
				bool L_114 = __this->___U3CopenQuoteU3E5__6_23;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_115 = __this->___container_9;
				int32_t L_116 = __this->___U3CstartOffsetU3E5__2_19;
				int32_t L_117 = __this->___U3ClastValidOffsetU3E5__5_22;
				int32_t L_118 = __this->___maxDepth_11;
				bool L_119 = __this->___storeExcessLevels_13;
				int32_t L_120 = __this->___depth_15;
				int32_t* L_121 = (&__this->___U3CbakeDepthU3E5__7_24);
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				bool L_122;
				L_122 = JSONObject_ParseArrayEnd_mCD9D6A7C7F47DAA478304ED96B06ED332521C54C(L_112, L_113, L_114, L_115, L_116, L_117, L_118, L_119, L_120, L_121, NULL);
				if (L_122)
				{
					goto IL_05bb_1;
				}
			}
			{
				// yield return new ParseResult(container, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_123 = __this->___container_9;
				int32_t L_124 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_125;
				memset((&L_125), 0, sizeof(L_125));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_125), L_123, L_124, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_125;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 5;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_04be_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield break;
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_04cc_1:
			{
				// ParseQuote(ref openQuote, offset, ref quoteStart, ref quoteEnd);
				bool* L_126 = (&__this->___U3CopenQuoteU3E5__6_23);
				int32_t L_127 = __this->___offset_5;
				int32_t* L_128 = (&__this->___U3CquoteStartU3E5__3_20);
				int32_t* L_129 = (&__this->___U3CquoteEndU3E5__4_21);
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_ParseQuote_mFBA405A5993329CD10F3255B7EA5FA0B512D9B9D(L_126, L_127, L_128, L_129, NULL);
				// break;
				goto IL_05bb_1;
			}

IL_04ee_1:
			{
				// if (!ParseColon(inputString, openQuote, container, ref startOffset, offset, quoteStart, quoteEnd, bakeDepth)) {
				String_t* L_130 = __this->___inputString_3;
				bool L_131 = __this->___U3CopenQuoteU3E5__6_23;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_132 = __this->___container_9;
				int32_t* L_133 = (&__this->___U3CstartOffsetU3E5__2_19);
				int32_t L_134 = __this->___offset_5;
				int32_t L_135 = __this->___U3CquoteStartU3E5__3_20;
				int32_t L_136 = __this->___U3CquoteEndU3E5__4_21;
				int32_t L_137 = __this->___U3CbakeDepthU3E5__7_24;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				bool L_138;
				L_138 = JSONObject_ParseColon_m917F7EC0729BB7E9A86C447034DA9C00310778E7(L_130, L_131, L_132, L_133, L_134, L_135, L_136, L_137, NULL);
				if (L_138)
				{
					goto IL_05bb_1;
				}
			}
			{
				// yield return new ParseResult(container, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_139 = __this->___container_9;
				int32_t L_140 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_141;
				memset((&L_141), 0, sizeof(L_141));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_141), L_139, L_140, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_141;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 6;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_054e_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield break;
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_055c_1:
			{
				// if (!ParseComma(inputString, openQuote, container, ref startOffset, offset, lastValidOffset, bakeDepth)) {
				String_t* L_142 = __this->___inputString_3;
				bool L_143 = __this->___U3CopenQuoteU3E5__6_23;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_144 = __this->___container_9;
				int32_t* L_145 = (&__this->___U3CstartOffsetU3E5__2_19);
				int32_t L_146 = __this->___offset_5;
				int32_t L_147 = __this->___U3ClastValidOffsetU3E5__5_22;
				int32_t L_148 = __this->___U3CbakeDepthU3E5__7_24;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				bool L_149;
				L_149 = JSONObject_ParseComma_mE24033BD9D67738BC3DDC81E2F9B821C25E2E5E4(L_142, L_143, L_144, L_145, L_146, L_147, L_148, NULL);
				if (L_149)
				{
					goto IL_05bb_1;
				}
			}
			{
				// yield return new ParseResult(container, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_150 = __this->___container_9;
				int32_t L_151 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_152;
				memset((&L_152), 0, sizeof(L_152));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_152), L_150, L_151, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_152;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 7;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_05b0_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield break;
				V_0 = (bool)0;
				goto IL_060f;
			}

IL_05bb_1:
			{
				// lastValidOffset = offset - 1;
				int32_t L_153 = __this->___offset_5;
				__this->___U3ClastValidOffsetU3E5__5_22 = ((int32_t)il2cpp_codegen_subtract(L_153, 1));
			}

IL_05c9_1:
			{
				// while (offset <= endOffset) {
				int32_t L_154 = __this->___offset_5;
				int32_t L_155 = __this->___endOffset_7;
				if ((((int32_t)L_154) <= ((int32_t)L_155)))
				{
					goto IL_00aa_1;
				}
			}
			{
				// yield return new ParseResult(container, offset, false);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_156 = __this->___container_9;
				int32_t L_157 = __this->___offset_5;
				ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_158;
				memset((&L_158), 0, sizeof(L_158));
				ParseResult__ctor_mDA43943FF52FA215B90721EAB7B90A71DCF387BC((&L_158), L_156, L_157, (bool)0, /*hidden argument*/NULL);
				__this->___U3CU3E2__current_1 = L_158;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___result_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = 8;
				V_0 = (bool)1;
				goto IL_060f;
			}

IL_05fd_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// }
				V_0 = (bool)0;
				goto IL_060f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_060f:
	{
		bool L_159 = V_0;
		return L_159;
	}
}
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_U3CU3Em__Finally1_m482A862B7902AD7391AD1219D44134784397A73D (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap7_25;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap7_25;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_U3CU3Em__Finally2_m78CA52C647FB7924454346A0231A4F60034C79B4 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap7_25;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap7_25;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Defective.JSON.JSONObject/ParseResult Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.Generic.IEnumerator<Defective.JSON.JSONObject.ParseResult>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 U3CParseAsyncU3Ed__73_System_Collections_Generic_IEnumeratorU3CDefective_JSON_JSONObject_ParseResultU3E_get_Current_mE7EC5CEF28AC638C8FE81DEB25C00B6B8262BD0E (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	{
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseAsyncU3Ed__73_System_Collections_IEnumerator_Reset_m25FF387607097D11C1BB35D6E03E6BC729482045 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseAsyncU3Ed__73_System_Collections_IEnumerator_Reset_m25FF387607097D11C1BB35D6E03E6BC729482045_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseAsyncU3Ed__73_System_Collections_IEnumerator_get_Current_mD944A909598BD0DC6971E039781E2B59FFEF1807 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_0 = __this->___U3CU3E2__current_1;
		ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484 L_1 = L_0;
		RuntimeObject* L_2 = Box(ParseResult_tA916F16AEAE2A9FC5F3D7CCFD5BFA2FE5B09C484_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Defective.JSON.JSONObject/ParseResult> Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.Generic.IEnumerable<Defective.JSON.JSONObject.ParseResult>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseAsyncU3Ed__73_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m71C579CD32AF48A119F8FF42C018A5E6C2A7B0D1 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_3 = (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548*)il2cpp_codegen_object_new(U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CParseAsyncU3Ed__73__ctor_m35663A7C21BE4D9FF319F64E93568B2796611B71(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__inputString_4;
		NullCheck(L_4);
		L_4->___inputString_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___inputString_3), (void*)L_5);
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__offset_6;
		NullCheck(L_6);
		L_6->___offset_5 = L_7;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_8 = V_0;
		int32_t L_9 = __this->___U3CU3E3__endOffset_8;
		NullCheck(L_8);
		L_8->___endOffset_7 = L_9;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_10 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_11 = __this->___U3CU3E3__container_10;
		NullCheck(L_10);
		L_10->___container_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___container_9), (void*)L_11);
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_12 = V_0;
		int32_t L_13 = __this->___U3CU3E3__maxDepth_12;
		NullCheck(L_12);
		L_12->___maxDepth_11 = L_13;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_14 = V_0;
		bool L_15 = __this->___U3CU3E3__storeExcessLevels_14;
		NullCheck(L_14);
		L_14->___storeExcessLevels_13 = L_15;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_16 = V_0;
		int32_t L_17 = __this->___U3CU3E3__depth_16;
		NullCheck(L_16);
		L_16->___depth_15 = L_17;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_18 = V_0;
		bool L_19 = __this->___U3CU3E3__isRoot_18;
		NullCheck(L_18);
		L_18->___isRoot_17 = L_19;
		U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<ParseAsync>d__73::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseAsyncU3Ed__73_System_Collections_IEnumerable_GetEnumerator_m73AF3FC6BFE47A422DB212C1E940E9AA53710DF3 (U3CParseAsyncU3Ed__73_tFED58AEB3DFC9E4F099906BC1A2C8DA9486F7548* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CParseAsyncU3Ed__73_System_Collections_Generic_IEnumerableU3CDefective_JSON_JSONObject_ParseResultU3E_GetEnumerator_m71C579CD32AF48A119F8FF42C018A5E6C2A7B0D1(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144__ctor_mA94C1D2AF01D7E6206FD5F32E30AA5B0800FB117 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144_System_IDisposable_Dispose_m27C1E1BC536944AEE25FB38438DAEDD7F7C30BD1 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CBakeAsyncU3Ed__144_U3CU3Em__Finally1_m4F2BAC626B1180350DF43866B96C4945DCF5E3D9(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<BakeAsync>d__144::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBakeAsyncU3Ed__144_MoveNext_mEBEE8BF65D2EA04A644D9B71572733B753D30CA0 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00bd:
			{// begin fault (depth: 1)
				U3CBakeAsyncU3Ed__144_System_IDisposable_Dispose_m27C1E1BC536944AEE25FB38438DAEDD7F7C30BD1(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_007f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00c4;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (type == Type.Baked)
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = V_2;
				NullCheck(L_4);
				int32_t L_5 = L_4->___type_11;
				if ((!(((uint32_t)L_5) == ((uint32_t)6))))
				{
					goto IL_0033_1;
				}
			}
			{
				// yield break;
				V_0 = (bool)0;
				goto IL_00c4;
			}

IL_0033_1:
			{
				// var builder = new StringBuilder();
				StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
				__this->___U3CbuilderU3E5__2_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuilderU3E5__2_4), (void*)L_6);
				// using (var enumerator = PrintAsync(builder).GetEnumerator()) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7 = V_2;
				StringBuilder_t* L_8 = __this->___U3CbuilderU3E5__2_4;
				NullCheck(L_7);
				RuntimeObject* L_9;
				L_9 = JSONObject_PrintAsync_m387EBF09BA88B98F25B260B5E7AE687B9B173375(L_7, L_8, (bool)0, NULL);
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_9);
				__this->___U3CenumeratorU3E5__3_5 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenumeratorU3E5__3_5), (void*)L_10);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0087_1;
			}

IL_0060_1:
			{
				// if (enumerator.Current)
				RuntimeObject* L_11 = __this->___U3CenumeratorU3E5__3_5;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var, L_11);
				if (!L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00c4;
			}

IL_007f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0087_1:
			{
				// while (enumerator.MoveNext()) {
				RuntimeObject* L_13 = __this->___U3CenumeratorU3E5__3_5;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0060_1;
				}
			}
			{
				// stringValue = builder.ToString();
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = V_2;
				StringBuilder_t* L_16 = __this->___U3CbuilderU3E5__2_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
				NullCheck(L_15);
				L_15->___stringValue_14 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___stringValue_14), (void*)L_17);
				// type = Type.Baked;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_2;
				NullCheck(L_18);
				L_18->___type_11 = 6;
				// }
				U3CBakeAsyncU3Ed__144_U3CU3Em__Finally1_m4F2BAC626B1180350DF43866B96C4945DCF5E3D9(__this, NULL);
				__this->___U3CenumeratorU3E5__3_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenumeratorU3E5__3_5), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00c4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144_U3CU3Em__Finally1_m4F2BAC626B1180350DF43866B96C4945DCF5E3D9 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CenumeratorU3E5__3_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CenumeratorU3E5__3_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__144_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5005DAB87B9CCC330996377B6FFE0B8BE6DC2819 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__144_System_Collections_IEnumerator_Reset_m3F22403FB8A802E882102602F3AB77C4D0D8E8CB (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBakeAsyncU3Ed__144_System_Collections_IEnumerator_Reset_m3F22403FB8A802E882102602F3AB77C4D0D8E8CB_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__144_System_Collections_IEnumerator_get_Current_mC31C336E2851A09BA45137917457DBCBBD6503D6 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__144_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mF079A5D40A11A5CEBB3BE437BEFBC602A9D061E6 (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* L_3 = (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD*)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CBakeAsyncU3Ed__144__ctor_mA94C1D2AF01D7E6206FD5F32E30AA5B0800FB117(L_3, 0, NULL);
		V_0 = L_3;
		U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* L_4 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<BakeAsync>d__144::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__144_System_Collections_IEnumerable_GetEnumerator_mC437DA02E7033BBE8349C04F8ACF0CEB53F7E35B (U3CBakeAsyncU3Ed__144_t5CC28A6267A4E921B9339C070C53472C3FF408DD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CBakeAsyncU3Ed__144_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mF079A5D40A11A5CEBB3BE437BEFBC602A9D061E6(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149__ctor_mD4F869D25C809BE3C9ABC357D69F98F47CC4761E (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149_System_IDisposable_Dispose_m3D90AF8BE6471B6A8E2BF87E3A83BBFC3AF99847 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CPrintAsyncU3Ed__149_U3CU3Em__Finally1_m727B138D93BDD059674CB9E2941B1E8E58357078(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__149::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrintAsyncU3Ed__149_MoveNext_mCD951DB607E7E332F23A7F02484D5A59A5B71380 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c8:
			{// begin fault (depth: 1)
				U3CPrintAsyncU3Ed__149_System_IDisposable_Dispose_m3D90AF8BE6471B6A8E2BF87E3A83BBFC3AF99847(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_007f_1;
					}
					case 2:
					{
						goto IL_00bd_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00cf;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var builder = new StringBuilder();
				StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
				__this->___U3CbuilderU3E5__2_6 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuilderU3E5__2_6), (void*)L_3);
				// foreach (var pause in PrintAsync(builder, pretty)) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4 = V_2;
				StringBuilder_t* L_5 = __this->___U3CbuilderU3E5__2_6;
				bool L_6 = __this->___pretty_4;
				NullCheck(L_4);
				RuntimeObject* L_7;
				L_7 = JSONObject_PrintAsync_m387EBF09BA88B98F25B260B5E7AE687B9B173375(L_4, L_5, L_6, NULL);
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_7);
				__this->___U3CU3E7__wrap2_7 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_7), (void*)L_8);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0087_1;
			}

IL_0060_1:
			{
				// foreach (var pause in PrintAsync(builder, pretty)) {
				RuntimeObject* L_9 = __this->___U3CU3E7__wrap2_7;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var, L_9);
				// if (pause)
				if (!L_10)
				{
					goto IL_0087_1;
				}
			}
			{
				// yield return null;
				__this->___U3CU3E2__current_1 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)(String_t*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00cf;
			}

IL_007f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0087_1:
			{
				// foreach (var pause in PrintAsync(builder, pretty)) {
				RuntimeObject* L_11 = __this->___U3CU3E7__wrap2_7;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0060_1;
				}
			}
			{
				U3CPrintAsyncU3Ed__149_U3CU3Em__Finally1_m727B138D93BDD059674CB9E2941B1E8E58357078(__this, NULL);
				__this->___U3CU3E7__wrap2_7 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_7), (void*)(RuntimeObject*)NULL);
				// yield return builder.ToString();
				StringBuilder_t* L_13 = __this->___U3CbuilderU3E5__2_6;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_00cf;
			}

IL_00bd_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// }
				V_0 = (bool)0;
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149_U3CU3Em__Finally1_m727B138D93BDD059674CB9E2941B1E8E58357078 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_7;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.String Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CPrintAsyncU3Ed__149_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m5C5B74E0E6DF50CE7DF22AF207B0EBEAEEB34AD6 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__149_System_Collections_IEnumerator_Reset_m87639A20F250DD4F7B7CCC85EF2DD69F3F34177A (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrintAsyncU3Ed__149_System_Collections_IEnumerator_Reset_m87639A20F250DD4F7B7CCC85EF2DD69F3F34177A_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__149_System_Collections_IEnumerator_get_Current_m53961BA596F3CBACD0CE3D431A6EC4F80B531848 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__149_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3536950E12E80DB4D36309DC2E42FB41CACA9F99 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_3 = (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19*)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CPrintAsyncU3Ed__149__ctor_mD4F869D25C809BE3C9ABC357D69F98F47CC4761E(L_3, 0, NULL);
		V_0 = L_3;
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_4 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_6 = V_0;
		bool L_7 = __this->___U3CU3E3__pretty_5;
		NullCheck(L_6);
		L_6->___pretty_4 = L_7;
		U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<PrintAsync>d__149::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__149_System_Collections_IEnumerable_GetEnumerator_m6ABD2FA0915E767E7E473A2BB851F18CEE9F1715 (U3CPrintAsyncU3Ed__149_t6ECF36D14A0FB96A77CACFD4CC88C27B71221F19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CPrintAsyncU3Ed__149_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3536950E12E80DB4D36309DC2E42FB41CACA9F99(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150__ctor_m76AE442889877ABA71658717BEDAC09F13535C2F (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150_System_IDisposable_Dispose_m548874C17D7796A551B77FB89B5E694BC40CF3A8 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CPrintAsyncU3Ed__150_U3CU3Em__Finally1_m10EEA6A1EB84CF55DF1C743A340AE69AE810F4B0(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__150::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrintAsyncU3Ed__150_MoveNext_m251EBEB88C7AFF1704692697D519431472789855 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a4:
			{// begin fault (depth: 1)
				U3CPrintAsyncU3Ed__150_System_IDisposable_Dispose_m548874C17D7796A551B77FB89B5E694BC40CF3A8(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_007e_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00ab;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// PrintWatch.Reset();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_4);
				Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_4, NULL);
				// PrintWatch.Start();
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_5 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_5);
				Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_5, NULL);
				// using (var enumerator = StringifyAsync(0, builder, pretty).GetEnumerator()) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = V_2;
				StringBuilder_t* L_7 = __this->___builder_4;
				bool L_8 = __this->___pretty_6;
				NullCheck(L_6);
				RuntimeObject* L_9;
				L_9 = JSONObject_StringifyAsync_mCAF9D38E572CA9C6F1875F99EAB5277BC2DBBAB0(L_6, 0, L_7, L_8, NULL);
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_9);
				__this->___U3CenumeratorU3E5__2_8 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenumeratorU3E5__2_8), (void*)L_10);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0086_1;
			}

IL_005f_1:
			{
				// if (enumerator.Current)
				RuntimeObject* L_11 = __this->___U3CenumeratorU3E5__2_8;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var, L_11);
				if (!L_12)
				{
					goto IL_0086_1;
				}
			}
			{
				// yield return true;
				__this->___U3CU3E2__current_1 = (bool)1;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00ab;
			}

IL_007e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0086_1:
			{
				// while (enumerator.MoveNext()) {
				RuntimeObject* L_13 = __this->___U3CenumeratorU3E5__2_8;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_005f_1;
				}
			}
			{
				// }
				U3CPrintAsyncU3Ed__150_U3CU3Em__Finally1_m10EEA6A1EB84CF55DF1C743A340AE69AE810F4B0(__this, NULL);
				__this->___U3CenumeratorU3E5__2_8 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenumeratorU3E5__2_8), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150_U3CU3Em__Finally1_m10EEA6A1EB84CF55DF1C743A340AE69AE810F4B0 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CenumeratorU3E5__2_8;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CenumeratorU3E5__2_8;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrintAsyncU3Ed__150_System_Collections_Generic_IEnumeratorU3CSystem_BooleanU3E_get_Current_mF1C6BCB28673297F1AA1A681548F3DF10AAA6989 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__150_System_Collections_IEnumerator_Reset_mE4D085DF8B4212A0D33E59FD2D847DB44C06B96F (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrintAsyncU3Ed__150_System_Collections_IEnumerator_Reset_mE4D085DF8B4212A0D33E59FD2D847DB44C06B96F_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__150_System_Collections_IEnumerator_get_Current_m908047DAA62DB9145F4DACF8F9FB95DB58922BAE (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__150_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m997250CFD5A6FA17271B571F3E1EC34793CDA7FC (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_3 = (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81*)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CPrintAsyncU3Ed__150__ctor_m76AE442889877ABA71658717BEDAC09F13535C2F(L_3, 0, NULL);
		V_0 = L_3;
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_4 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_6 = V_0;
		StringBuilder_t* L_7 = __this->___U3CU3E3__builder_5;
		NullCheck(L_6);
		L_6->___builder_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___builder_4), (void*)L_7);
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_8 = V_0;
		bool L_9 = __this->___U3CU3E3__pretty_7;
		NullCheck(L_8);
		L_8->___pretty_6 = L_9;
		U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<PrintAsync>d__150::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__150_System_Collections_IEnumerable_GetEnumerator_m4893D8CA6FD5931114FC3C81157ABA7D5709BF80 (U3CPrintAsyncU3Ed__150_t15F8705A18B93E54CD78DBF9481940C621994B81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CPrintAsyncU3Ed__150_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m997250CFD5A6FA17271B571F3E1EC34793CDA7FC(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151__ctor_m431EC10F7D319E0D9066CB2CF5652777EEE06710 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_System_IDisposable_Dispose_m3DC6E25A6099F5A4A3CAA8DCD3DAF34BF992E8C9 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-4))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally1_mFB20068ACECE12AA238F2B15582D91F028AA5D9A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally2_m5795F8F66E7F31EF7065C39EE2F3CE5CF13EE6BB(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<StringifyAsync>d__151::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStringifyAsyncU3Ed__151_MoveNext_m175359E6B36A4C33024C9E7194418CE7140B2E77 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_2 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_03a6:
			{// begin fault (depth: 1)
				U3CStringifyAsyncU3Ed__151_System_IDisposable_Dispose_m3DC6E25A6099F5A4A3CAA8DCD3DAF34BF992E8C9(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_002b_1;
					}
					case 1:
					{
						goto IL_006e_1;
					}
					case 2:
					{
						goto IL_01d4_1;
					}
					case 3:
					{
						goto IL_0318_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_03ad;
			}

IL_002b_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (PrintWatch.Elapsed.TotalSeconds > MaxFrameTime) {
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_3);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
				L_4 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_3, NULL);
				V_3 = L_4;
				double L_5;
				L_5 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_3), NULL);
				if ((!(((double)L_5) > ((double)(0.0080000003799796104)))))
				{
					goto IL_007f_1;
				}
			}
			{
				// PrintWatch.Reset();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_6 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_6);
				Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_6, NULL);
				// yield return true;
				__this->___U3CU3E2__current_1 = (bool)1;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_03ad;
			}

IL_006e_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// PrintWatch.Start();
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = ((JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var))->___PrintWatch_9;
				NullCheck(L_7);
				Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_7, NULL);
			}

IL_007f_1:
			{
				// switch (type) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_2;
				NullCheck(L_8);
				int32_t L_9 = L_8->___type_11;
				V_4 = L_9;
				int32_t L_10 = V_4;
				switch (L_10)
				{
					case 0:
					{
						goto IL_0397_1;
					}
					case 1:
					{
						goto IL_00c6_1;
					}
					case 2:
					{
						goto IL_00d7_1;
					}
					case 3:
					{
						goto IL_00e8_1;
					}
					case 4:
					{
						goto IL_0248_1;
					}
					case 5:
					{
						goto IL_0389_1;
					}
					case 6:
					{
						goto IL_00af_1;
					}
				}
			}
			{
				goto IL_03a2_1;
			}

IL_00af_1:
			{
				// builder.Append(stringValue);
				StringBuilder_t* L_11 = __this->___builder_4;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13 = L_12->___stringValue_14;
				NullCheck(L_11);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_00c6_1:
			{
				// StringifyString(builder);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = V_2;
				StringBuilder_t* L_16 = __this->___builder_4;
				NullCheck(L_15);
				JSONObject_StringifyString_m6C60B157ADB60C0A400CE42AD83B78BF95531578(L_15, L_16, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_00d7_1:
			{
				// StringifyNumber(builder);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_17 = V_2;
				StringBuilder_t* L_18 = __this->___builder_4;
				NullCheck(L_17);
				JSONObject_StringifyNumber_m59CDF5A6C31D5A0B994FB91C54C70A4B52CAC63E(L_17, L_18, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_00e8_1:
			{
				// var fieldCount = count;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_19 = V_2;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_19, NULL);
				__this->___U3CfieldCountU3E5__2_10 = L_20;
				// if (fieldCount <= 0) {
				int32_t L_21 = __this->___U3CfieldCountU3E5__2_10;
				if ((((int32_t)L_21) > ((int32_t)0)))
				{
					goto IL_010d_1;
				}
			}
			{
				// StringifyEmptyObject(builder);
				StringBuilder_t* L_22 = __this->___builder_4;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_StringifyEmptyObject_mF0208881D165951D3B98AC8D67B4E9CCF450C9D4(L_22, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_010d_1:
			{
				// depth++;
				int32_t L_23 = __this->___depth_6;
				V_5 = L_23;
				int32_t L_24 = V_5;
				__this->___depth_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				// BeginStringifyObjectContainer(builder, pretty);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_25 = V_2;
				StringBuilder_t* L_26 = __this->___builder_4;
				bool L_27 = __this->___pretty_8;
				NullCheck(L_25);
				JSONObject_BeginStringifyObjectContainer_m5DDF0C38F6519E8291886BA780B4116C70A33B4C(L_25, L_26, L_27, NULL);
				// for (var index = 0; index < fieldCount; index++) {
				__this->___U3CindexU3E5__4_12 = 0;
				goto IL_021a_1;
			}

IL_013d_1:
			{
				// var jsonObject = list[index];
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_28 = V_2;
				NullCheck(L_28);
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_29 = L_28->___list_12;
				int32_t L_30 = __this->___U3CindexU3E5__4_12;
				NullCheck(L_29);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_31;
				L_31 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_29, L_30, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
				V_6 = L_31;
				// if (jsonObject == null)
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_32 = V_6;
				if (!L_32)
				{
					goto IL_0208_1;
				}
			}
			{
				// var key = keys[index];
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_33 = V_2;
				NullCheck(L_33);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = L_33->___keys_13;
				int32_t L_35 = __this->___U3CindexU3E5__4_12;
				NullCheck(L_34);
				String_t* L_36;
				L_36 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_34, L_35, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_7 = L_36;
				// BeginStringifyObjectField(builder, pretty, depth, key);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_37 = V_2;
				StringBuilder_t* L_38 = __this->___builder_4;
				bool L_39 = __this->___pretty_8;
				int32_t L_40 = __this->___depth_6;
				String_t* L_41 = V_7;
				NullCheck(L_37);
				JSONObject_BeginStringifyObjectField_m7FD31C38CCAB181AF2499C2971B6A0FEE8D0298B(L_37, L_38, L_39, L_40, L_41, NULL);
				// foreach (var pause in jsonObject.StringifyAsync(depth, builder, pretty)) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_42 = V_6;
				int32_t L_43 = __this->___depth_6;
				StringBuilder_t* L_44 = __this->___builder_4;
				bool L_45 = __this->___pretty_8;
				NullCheck(L_42);
				RuntimeObject* L_46;
				L_46 = JSONObject_StringifyAsync_mCAF9D38E572CA9C6F1875F99EAB5277BC2DBBAB0(L_42, L_43, L_44, L_45, NULL);
				NullCheck(L_46);
				RuntimeObject* L_47;
				L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_46);
				__this->___U3CU3E7__wrap4_13 = L_47;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_13), (void*)L_47);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_01dc_1;
			}

IL_01b2_1:
			{
				// foreach (var pause in jsonObject.StringifyAsync(depth, builder, pretty)) {
				RuntimeObject* L_48 = __this->___U3CU3E7__wrap4_13;
				NullCheck(L_48);
				bool L_49;
				L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var, L_48);
				// if (pause)
				if (!L_49)
				{
					goto IL_01dc_1;
				}
			}
			{
				// yield return true;
				__this->___U3CU3E2__current_1 = (bool)1;
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_03ad;
			}

IL_01d4_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_01dc_1:
			{
				// foreach (var pause in jsonObject.StringifyAsync(depth, builder, pretty)) {
				RuntimeObject* L_50 = __this->___U3CU3E7__wrap4_13;
				NullCheck(L_50);
				bool L_51;
				L_51 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_50);
				if (L_51)
				{
					goto IL_01b2_1;
				}
			}
			{
				U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally1_mFB20068ACECE12AA238F2B15582D91F028AA5D9A(__this, NULL);
				__this->___U3CU3E7__wrap4_13 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_13), (void*)(RuntimeObject*)NULL);
				// EndStringifyObjectField(builder, pretty);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_52 = V_2;
				StringBuilder_t* L_53 = __this->___builder_4;
				bool L_54 = __this->___pretty_8;
				NullCheck(L_52);
				JSONObject_EndStringifyObjectField_mE69FE33F5E034275318A7C3D9AE2C5A802945090(L_52, L_53, L_54, NULL);
			}

IL_0208_1:
			{
				// for (var index = 0; index < fieldCount; index++) {
				int32_t L_55 = __this->___U3CindexU3E5__4_12;
				V_5 = L_55;
				int32_t L_56 = V_5;
				__this->___U3CindexU3E5__4_12 = ((int32_t)il2cpp_codegen_add(L_56, 1));
			}

IL_021a_1:
			{
				// for (var index = 0; index < fieldCount; index++) {
				int32_t L_57 = __this->___U3CindexU3E5__4_12;
				int32_t L_58 = __this->___U3CfieldCountU3E5__2_10;
				if ((((int32_t)L_57) < ((int32_t)L_58)))
				{
					goto IL_013d_1;
				}
			}
			{
				// EndStringifyObjectContainer(builder, pretty, depth);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_59 = V_2;
				StringBuilder_t* L_60 = __this->___builder_4;
				bool L_61 = __this->___pretty_8;
				int32_t L_62 = __this->___depth_6;
				NullCheck(L_59);
				JSONObject_EndStringifyObjectContainer_mD874A086B26BFD0B1543B4747D14CF073639F05B(L_59, L_60, L_61, L_62, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_0248_1:
			{
				// var arraySize = count;
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_63 = V_2;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_63, NULL);
				__this->___U3CarraySizeU3E5__3_11 = L_64;
				// if (arraySize <= 0) {
				int32_t L_65 = __this->___U3CarraySizeU3E5__3_11;
				if ((((int32_t)L_65) > ((int32_t)0)))
				{
					goto IL_026d_1;
				}
			}
			{
				// StringifyEmptyArray(builder);
				StringBuilder_t* L_66 = __this->___builder_4;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_StringifyEmptyArray_mC78592CCEB915F47CCB8F3F3EF3F0CEECE0CD624(L_66, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_026d_1:
			{
				// BeginStringifyArrayContainer(builder, pretty);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_67 = V_2;
				StringBuilder_t* L_68 = __this->___builder_4;
				bool L_69 = __this->___pretty_8;
				NullCheck(L_67);
				JSONObject_BeginStringifyArrayContainer_m59F4D18EDB10B3243DD1AD8CF673F92EA912AE57(L_67, L_68, L_69, NULL);
				// for (var index = 0; index < arraySize; index++) {
				__this->___U3CindexU3E5__4_12 = 0;
				goto IL_035e_1;
			}

IL_028b_1:
			{
				// var jsonObject = list[index];
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_70 = V_2;
				NullCheck(L_70);
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_71 = L_70->___list_12;
				int32_t L_72 = __this->___U3CindexU3E5__4_12;
				NullCheck(L_71);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_73;
				L_73 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_71, L_72, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
				// if (jsonObject == null)
				if (!L_73)
				{
					goto IL_034c_1;
				}
			}
			{
				// BeginStringifyArrayElement(builder, pretty, depth);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_74 = V_2;
				StringBuilder_t* L_75 = __this->___builder_4;
				bool L_76 = __this->___pretty_8;
				int32_t L_77 = __this->___depth_6;
				NullCheck(L_74);
				JSONObject_BeginStringifyArrayElement_m401B397C85AA21E3E8707178CD43782B533141B3(L_74, L_75, L_76, L_77, NULL);
				// foreach (var pause in list[index].StringifyAsync(depth, builder, pretty)) {
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_78 = V_2;
				NullCheck(L_78);
				List_1_tAF8C7FE7745E3AF175E6652DEE3CB8C82B65E63E* L_79 = L_78->___list_12;
				int32_t L_80 = __this->___U3CindexU3E5__4_12;
				NullCheck(L_79);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_81;
				L_81 = List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490(L_79, L_80, List_1_get_Item_m72F3DB0603A408B7B91C4591FADFC8E855D81490_RuntimeMethod_var);
				int32_t L_82 = __this->___depth_6;
				StringBuilder_t* L_83 = __this->___builder_4;
				bool L_84 = __this->___pretty_8;
				NullCheck(L_81);
				RuntimeObject* L_85;
				L_85 = JSONObject_StringifyAsync_mCAF9D38E572CA9C6F1875F99EAB5277BC2DBBAB0(L_81, L_82, L_83, L_84, NULL);
				NullCheck(L_85);
				RuntimeObject* L_86;
				L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6_il2cpp_TypeInfo_var, L_85);
				__this->___U3CU3E7__wrap4_13 = L_86;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_13), (void*)L_86);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_0320_1;
			}

IL_02f6_1:
			{
				// foreach (var pause in list[index].StringifyAsync(depth, builder, pretty)) {
				RuntimeObject* L_87 = __this->___U3CU3E7__wrap4_13;
				NullCheck(L_87);
				bool L_88;
				L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362_il2cpp_TypeInfo_var, L_87);
				// if (pause)
				if (!L_88)
				{
					goto IL_0320_1;
				}
			}
			{
				// yield return true;
				__this->___U3CU3E2__current_1 = (bool)1;
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_03ad;
			}

IL_0318_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_0320_1:
			{
				// foreach (var pause in list[index].StringifyAsync(depth, builder, pretty)) {
				RuntimeObject* L_89 = __this->___U3CU3E7__wrap4_13;
				NullCheck(L_89);
				bool L_90;
				L_90 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_89);
				if (L_90)
				{
					goto IL_02f6_1;
				}
			}
			{
				U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally2_m5795F8F66E7F31EF7065C39EE2F3CE5CF13EE6BB(__this, NULL);
				__this->___U3CU3E7__wrap4_13 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_13), (void*)(RuntimeObject*)NULL);
				// EndStringifyArrayElement(builder, pretty);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_91 = V_2;
				StringBuilder_t* L_92 = __this->___builder_4;
				bool L_93 = __this->___pretty_8;
				NullCheck(L_91);
				JSONObject_EndStringifyArrayElement_mD9266EAC7BC72C2ED1586C924DC8EA395E34E7F9(L_91, L_92, L_93, NULL);
			}

IL_034c_1:
			{
				// for (var index = 0; index < arraySize; index++) {
				int32_t L_94 = __this->___U3CindexU3E5__4_12;
				V_5 = L_94;
				int32_t L_95 = V_5;
				__this->___U3CindexU3E5__4_12 = ((int32_t)il2cpp_codegen_add(L_95, 1));
			}

IL_035e_1:
			{
				// for (var index = 0; index < arraySize; index++) {
				int32_t L_96 = __this->___U3CindexU3E5__4_12;
				int32_t L_97 = __this->___U3CarraySizeU3E5__3_11;
				if ((((int32_t)L_96) < ((int32_t)L_97)))
				{
					goto IL_028b_1;
				}
			}
			{
				// EndStringifyArrayContainer(builder, pretty, depth);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_98 = V_2;
				StringBuilder_t* L_99 = __this->___builder_4;
				bool L_100 = __this->___pretty_8;
				int32_t L_101 = __this->___depth_6;
				NullCheck(L_98);
				JSONObject_EndStringifyArrayContainer_m4A176DF24C519585CF36618B389483DB439C88EB(L_98, L_99, L_100, L_101, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_0389_1:
			{
				// StringifyBool(builder);
				JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_102 = V_2;
				StringBuilder_t* L_103 = __this->___builder_4;
				NullCheck(L_102);
				JSONObject_StringifyBool_m898A6B762DB8BFF8031306FCDE98DD54113853C4(L_102, L_103, NULL);
				// break;
				goto IL_03a2_1;
			}

IL_0397_1:
			{
				// StringifyNull(builder);
				StringBuilder_t* L_104 = __this->___builder_4;
				il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
				JSONObject_StringifyNull_m07BEE11BF14EE6CE788602C34450790A33411004(L_104, NULL);
			}

IL_03a2_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_03ad;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		bool L_105 = V_0;
		return L_105;
	}
}
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally1_mFB20068ACECE12AA238F2B15582D91F028AA5D9A (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap4_13;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap4_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_U3CU3Em__Finally2_m5795F8F66E7F31EF7065C39EE2F3CE5CF13EE6BB (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap4_13;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap4_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStringifyAsyncU3Ed__151_System_Collections_Generic_IEnumeratorU3CSystem_BooleanU3E_get_Current_m6E8641FD259E1929CC83CC80EC82BE957097B583 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__151_System_Collections_IEnumerator_Reset_mEB9387ED69228D7ED831E32806465936F4D15457 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStringifyAsyncU3Ed__151_System_Collections_IEnumerator_Reset_mEB9387ED69228D7ED831E32806465936F4D15457_RuntimeMethod_var)));
	}
}
// System.Object Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__151_System_Collections_IEnumerator_get_Current_mA7646311D069728C29D468D1BB52E7E3A669F2DE (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___U3CU3E2__current_1;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__151_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDEB59307F203A6EB9198E973CB1AA9D34C860177 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_3 = (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F*)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CStringifyAsyncU3Ed__151__ctor_m431EC10F7D319E0D9066CB2CF5652777EEE06710(L_3, 0, NULL);
		V_0 = L_3;
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_4 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__depth_7;
		NullCheck(L_6);
		L_6->___depth_6 = L_7;
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_8 = V_0;
		StringBuilder_t* L_9 = __this->___U3CU3E3__builder_5;
		NullCheck(L_8);
		L_8->___builder_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___builder_4), (void*)L_9);
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_10 = V_0;
		bool L_11 = __this->___U3CU3E3__pretty_9;
		NullCheck(L_10);
		L_10->___pretty_8 = L_11;
		U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator Defective.JSON.JSONObject/<StringifyAsync>d__151::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__151_System_Collections_IEnumerable_GetEnumerator_m1CC71AF236FF0CEA752F2964E2F3FDE1E1838E48 (U3CStringifyAsyncU3Ed__151_tB4179317A7E08C8CC38B492A4860D0493088446F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CStringifyAsyncU3Ed__151_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDEB59307F203A6EB9198E973CB1AA9D34C860177(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Defective.JSON.JSONObjectEnumerator::.ctor(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumerator__ctor_m24FA52671B6CD2C9492B8273FD881FA9B0499383 (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	{
		// int position = -1;
		__this->___position_1 = (-1);
		// public JSONObjectEnumerator(JSONObject jsonObject) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (!jsonObject.isContainer)
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JSONObject_get_isContainer_m00F12A4F458FD3741B5B84FF00361E8B60E015CA(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("JSONObject must be an array or object to provide an iterator");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A85F7924EB5D4EE9D1DD6344A4679BFEB95F45C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONObjectEnumerator__ctor_m24FA52671B6CD2C9492B8273FD881FA9B0499383_RuntimeMethod_var)));
	}

IL_0020:
	{
		// target = jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		__this->___target_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_0), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean Defective.JSON.JSONObjectEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObjectEnumerator_MoveNext_m2425B8A23491F18F8C0D41C9271BA35057422A64 (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, const RuntimeMethod* method) 
{
	{
		// position++;
		int32_t L_0 = __this->___position_1;
		__this->___position_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return position < target.count;
		int32_t L_1 = __this->___position_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = __this->___target_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Void Defective.JSON.JSONObjectEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumerator_Reset_mB699A9DE360AB13B85F0DB535DAEB0DECBE70EC3 (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, const RuntimeMethod* method) 
{
	{
		// position = -1;
		__this->___position_1 = (-1);
		// }
		return;
	}
}
// System.Object Defective.JSON.JSONObjectEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObjectEnumerator_System_Collections_IEnumerator_get_Current_m40EE8D11793F1C74EFD9EC85C9BB17FC2455AC75 (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return Current; }
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObjectEnumerator_get_Current_m10B9A8901D2BB6CB9D84B23AEF44B25271762D8F(__this, NULL);
		return L_0;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONObjectEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONObjectEnumerator_get_Current_m10B9A8901D2BB6CB9D84B23AEF44B25271762D8F (JSONObjectEnumerator_t943E3CCEC1B0A03D69F4FBD7A99C8355AEC408E5* __this, const RuntimeMethod* method) 
{
	{
		// return target[position];
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = __this->___target_0;
		int32_t L_1 = __this->___position_1;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2;
		L_2 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 Defective.JSON.JSONTemplates::ToVector2(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 JSONTemplates_ToVector2_m907C8504B02B8810C656D630E9D898EC3E6FE77E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// var x = jsonObject["x"] ? jsonObject["x"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// var y = jsonObject["y"] ? jsonObject["y"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___jsonObject0;
		NullCheck(L_6);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7;
		L_7 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_7, NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___jsonObject0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// return new Vector2(x, y);
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), G_B6_1, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector2_mA89194DA08FC7DC205E476F7E3E6EC839ED48A97 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___vector0;
		float L_2 = L_1.___x_0;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		float L_5 = L_4.___x_0;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, NULL);
	}

IL_0024:
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___vector0;
		float L_7 = L_6.___y_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___vector0;
		float L_10 = L_9.___y_1;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, NULL);
	}

IL_0042:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_11 = V_0;
		return L_11;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_m013A4E9549854F111C5D938B8A9842C29490C91E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	{
		// return vector.FromVector2();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromVector2_mA89194DA08FC7DC205E476F7E3E6EC839ED48A97(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector3_m49654ECF0EAA54908EC8E8B8369EEFAC64785EDD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2 = L_1.___x_2;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___x_2;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, NULL);
	}

IL_0024:
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vector0;
		float L_10 = L_9.___y_3;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, NULL);
	}

IL_0042:
	{
		// if (vector.z != 0) jsonObject.AddField("z", vector.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___vector0;
		float L_12 = L_11.___z_4;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if (vector.z != 0) jsonObject.AddField("z", vector.z);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___vector0;
		float L_15 = L_14.___z_4;
		NullCheck(L_13);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_13, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_15, NULL);
	}

IL_0060:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 Defective.JSON.JSONTemplates::ToVector3(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 JSONTemplates_ToVector3_m6AC67D89FDF38C990FDB42238D6756F75E273B2E (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	{
		// var x = jsonObject["x"] ? jsonObject["x"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// var y = jsonObject["y"] ? jsonObject["y"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___jsonObject0;
		NullCheck(L_6);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7;
		L_7 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_7, NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___jsonObject0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// var z = jsonObject["z"] ? jsonObject["z"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13;
		L_13 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_13, NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = ___jsonObject0;
		NullCheck(L_15);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16;
		L_16 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_16, NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// return new Vector3(x, y, z);
		float L_18 = V_0;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), G_B9_1, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mBF5E9520D70018F88C81B8EEA34A319BAD0E650A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	{
		// return vector.FromVector3();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromVector3_m49654ECF0EAA54908EC8E8B8369EEFAC64785EDD(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromVector4_m039AF2BCB47A3B6DC6D7E9AA45ED957E39F76807 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___vector0;
		float L_2 = L_1.___x_1;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (vector.x != 0) jsonObject.AddField("x", vector.x);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___vector0;
		float L_5 = L_4.___x_1;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, NULL);
	}

IL_0024:
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___vector0;
		float L_7 = L_6.___y_2;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (vector.y != 0) jsonObject.AddField("y", vector.y);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___vector0;
		float L_10 = L_9.___y_2;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, NULL);
	}

IL_0042:
	{
		// if (vector.z != 0) jsonObject.AddField("z", vector.z);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___vector0;
		float L_12 = L_11.___z_3;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if (vector.z != 0) jsonObject.AddField("z", vector.z);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___vector0;
		float L_15 = L_14.___z_3;
		NullCheck(L_13);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_13, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_15, NULL);
	}

IL_0060:
	{
		// if (vector.w != 0) jsonObject.AddField("w", vector.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = ___vector0;
		float L_17 = L_16.___w_4;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if (vector.w != 0) jsonObject.AddField("w", vector.w);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = ___vector0;
		float L_20 = L_19.___w_4;
		NullCheck(L_18);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_20, NULL);
	}

IL_007e:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector4 Defective.JSON.JSONTemplates::ToVector4(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 JSONTemplates_ToVector4_m57C3A004D31C90C95CB27BEB976542E2603DD440 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		// var x = jsonObject["x"] ? jsonObject["x"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// var y = jsonObject["y"] ? jsonObject["y"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___jsonObject0;
		NullCheck(L_6);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7;
		L_7 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_7, NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___jsonObject0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// var z = jsonObject["z"] ? jsonObject["z"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13;
		L_13 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_13, NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = ___jsonObject0;
		NullCheck(L_15);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16;
		L_16 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_16, NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// var w = jsonObject["w"] ? jsonObject["w"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = ___jsonObject0;
		NullCheck(L_18);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_19;
		L_19 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_19, NULL);
		G_B10_0 = G_B9_1;
		if (L_20)
		{
			G_B11_0 = G_B9_1;
			goto IL_0096;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_00a6;
	}

IL_0096:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = ___jsonObject0;
		NullCheck(L_21);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22;
		L_22 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_21, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_22, NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
	}

IL_00a6:
	{
		V_2 = G_B12_0;
		// return new Vector4(x, y, z, w);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_27), G_B12_1, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mDE33DFC7F975FB1CB9656826A8A6062CEFA81441 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, const RuntimeMethod* method) 
{
	{
		// return vector.FromVector4();
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___vector0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromVector4_m039AF2BCB47A3B6DC6D7E9AA45ED957E39F76807(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromMatrix4x4_m2ABDFC006C1FD6882EFC599ACC6869CD532C478C (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD78D112848D426A98044320516AE321116F74C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (matrix.m00 != 0) jsonObject.AddField("m00", matrix.m00);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___matrix0;
		float L_2 = L_1.___m00_0;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (matrix.m00 != 0) jsonObject.AddField("m00", matrix.m00);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___matrix0;
		float L_5 = L_4.___m00_0;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, L_5, NULL);
	}

IL_0024:
	{
		// if (matrix.m01 != 0) jsonObject.AddField("m01", matrix.m01);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___matrix0;
		float L_7 = L_6.___m01_4;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (matrix.m01 != 0) jsonObject.AddField("m01", matrix.m01);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___matrix0;
		float L_10 = L_9.___m01_4;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, L_10, NULL);
	}

IL_0042:
	{
		// if (matrix.m02 != 0) jsonObject.AddField("m02", matrix.m02);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = ___matrix0;
		float L_12 = L_11.___m02_8;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if (matrix.m02 != 0) jsonObject.AddField("m02", matrix.m02);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___matrix0;
		float L_15 = L_14.___m02_8;
		NullCheck(L_13);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_13, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, L_15, NULL);
	}

IL_0060:
	{
		// if (matrix.m03 != 0) jsonObject.AddField("m03", matrix.m03);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___matrix0;
		float L_17 = L_16.___m03_12;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if (matrix.m03 != 0) jsonObject.AddField("m03", matrix.m03);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = ___matrix0;
		float L_20 = L_19.___m03_12;
		NullCheck(L_18);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_18, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, L_20, NULL);
	}

IL_007e:
	{
		// if (matrix.m10 != 0) jsonObject.AddField("m10", matrix.m10);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = ___matrix0;
		float L_22 = L_21.___m10_1;
		if ((((float)L_22) == ((float)(0.0f))))
		{
			goto IL_009c;
		}
	}
	{
		// if (matrix.m10 != 0) jsonObject.AddField("m10", matrix.m10);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_23 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___matrix0;
		float L_25 = L_24.___m10_1;
		NullCheck(L_23);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_23, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, L_25, NULL);
	}

IL_009c:
	{
		// if (matrix.m11 != 0) jsonObject.AddField("m11", matrix.m11);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___matrix0;
		float L_27 = L_26.___m11_5;
		if ((((float)L_27) == ((float)(0.0f))))
		{
			goto IL_00ba;
		}
	}
	{
		// if (matrix.m11 != 0) jsonObject.AddField("m11", matrix.m11);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_28 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29 = ___matrix0;
		float L_30 = L_29.___m11_5;
		NullCheck(L_28);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_28, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, L_30, NULL);
	}

IL_00ba:
	{
		// if (matrix.m12 != 0) jsonObject.AddField("m12", matrix.m12);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = ___matrix0;
		float L_32 = L_31.___m12_9;
		if ((((float)L_32) == ((float)(0.0f))))
		{
			goto IL_00d8;
		}
	}
	{
		// if (matrix.m12 != 0) jsonObject.AddField("m12", matrix.m12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_33 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = ___matrix0;
		float L_35 = L_34.___m12_9;
		NullCheck(L_33);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_33, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, L_35, NULL);
	}

IL_00d8:
	{
		// if (matrix.m13 != 0) jsonObject.AddField("m13", matrix.m13);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_36 = ___matrix0;
		float L_37 = L_36.___m13_13;
		if ((((float)L_37) == ((float)(0.0f))))
		{
			goto IL_00f6;
		}
	}
	{
		// if (matrix.m13 != 0) jsonObject.AddField("m13", matrix.m13);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_38 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = ___matrix0;
		float L_40 = L_39.___m13_13;
		NullCheck(L_38);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_38, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, L_40, NULL);
	}

IL_00f6:
	{
		// if (matrix.m20 != 0) jsonObject.AddField("m20", matrix.m20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41 = ___matrix0;
		float L_42 = L_41.___m20_2;
		if ((((float)L_42) == ((float)(0.0f))))
		{
			goto IL_0114;
		}
	}
	{
		// if (matrix.m20 != 0) jsonObject.AddField("m20", matrix.m20);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_43 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = ___matrix0;
		float L_45 = L_44.___m20_2;
		NullCheck(L_43);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_43, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, L_45, NULL);
	}

IL_0114:
	{
		// if (matrix.m21 != 0) jsonObject.AddField("m21", matrix.m21);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46 = ___matrix0;
		float L_47 = L_46.___m21_6;
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0132;
		}
	}
	{
		// if (matrix.m21 != 0) jsonObject.AddField("m21", matrix.m21);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_48 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49 = ___matrix0;
		float L_50 = L_49.___m21_6;
		NullCheck(L_48);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_48, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, L_50, NULL);
	}

IL_0132:
	{
		// if (matrix.m22 != 0) jsonObject.AddField("m22", matrix.m22);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_51 = ___matrix0;
		float L_52 = L_51.___m22_10;
		if ((((float)L_52) == ((float)(0.0f))))
		{
			goto IL_0150;
		}
	}
	{
		// if (matrix.m22 != 0) jsonObject.AddField("m22", matrix.m22);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_53 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54 = ___matrix0;
		float L_55 = L_54.___m22_10;
		NullCheck(L_53);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_53, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, L_55, NULL);
	}

IL_0150:
	{
		// if (matrix.m23 != 0) jsonObject.AddField("m23", matrix.m23);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56 = ___matrix0;
		float L_57 = L_56.___m23_14;
		if ((((float)L_57) == ((float)(0.0f))))
		{
			goto IL_016e;
		}
	}
	{
		// if (matrix.m23 != 0) jsonObject.AddField("m23", matrix.m23);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_58 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_59 = ___matrix0;
		float L_60 = L_59.___m23_14;
		NullCheck(L_58);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_58, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, L_60, NULL);
	}

IL_016e:
	{
		// if (matrix.m30 != 0) jsonObject.AddField("m30", matrix.m30);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_61 = ___matrix0;
		float L_62 = L_61.___m30_3;
		if ((((float)L_62) == ((float)(0.0f))))
		{
			goto IL_018c;
		}
	}
	{
		// if (matrix.m30 != 0) jsonObject.AddField("m30", matrix.m30);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_63 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_64 = ___matrix0;
		float L_65 = L_64.___m30_3;
		NullCheck(L_63);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_63, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, L_65, NULL);
	}

IL_018c:
	{
		// if (matrix.m31 != 0) jsonObject.AddField("m31", matrix.m31);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_66 = ___matrix0;
		float L_67 = L_66.___m31_7;
		if ((((float)L_67) == ((float)(0.0f))))
		{
			goto IL_01aa;
		}
	}
	{
		// if (matrix.m31 != 0) jsonObject.AddField("m31", matrix.m31);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_68 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_69 = ___matrix0;
		float L_70 = L_69.___m31_7;
		NullCheck(L_68);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_68, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, L_70, NULL);
	}

IL_01aa:
	{
		// if (matrix.m32 != 0) jsonObject.AddField("m32", matrix.m32);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_71 = ___matrix0;
		float L_72 = L_71.___m32_11;
		if ((((float)L_72) == ((float)(0.0f))))
		{
			goto IL_01c8;
		}
	}
	{
		// if (matrix.m32 != 0) jsonObject.AddField("m32", matrix.m32);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_73 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_74 = ___matrix0;
		float L_75 = L_74.___m32_11;
		NullCheck(L_73);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_73, _stringLiteralD78D112848D426A98044320516AE321116F74C50, L_75, NULL);
	}

IL_01c8:
	{
		// if (matrix.m33 != 0) jsonObject.AddField("m33", matrix.m33);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_76 = ___matrix0;
		float L_77 = L_76.___m33_15;
		if ((((float)L_77) == ((float)(0.0f))))
		{
			goto IL_01e6;
		}
	}
	{
		// if (matrix.m33 != 0) jsonObject.AddField("m33", matrix.m33);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_78 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_79 = ___matrix0;
		float L_80 = L_79.___m33_15;
		NullCheck(L_78);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_78, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, L_80, NULL);
	}

IL_01e6:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_81 = V_0;
		return L_81;
	}
}
// UnityEngine.Matrix4x4 Defective.JSON.JSONTemplates::ToMatrix4x4(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 JSONTemplates_ToMatrix4x4_mAAD26EB8496C6E738F0140F8F979896C501B7E34 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD78D112848D426A98044320516AE321116F74C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// if (jsonObject["m00"]) matrix.m00 = jsonObject["m00"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if (jsonObject["m00"]) matrix.m00 = jsonObject["m00"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_3, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_4, NULL);
		(&V_0)->___m00_0 = L_5;
	}

IL_0031:
	{
		// if (jsonObject["m01"]) matrix.m01 = jsonObject["m01"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___jsonObject0;
		NullCheck(L_6);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7;
		L_7 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_6, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_7, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// if (jsonObject["m01"]) matrix.m01 = jsonObject["m01"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___jsonObject0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_9, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_10, NULL);
		(&V_0)->___m01_4 = L_11;
	}

IL_005a:
	{
		// if (jsonObject["m02"]) matrix.m02 = jsonObject["m02"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13;
		L_13 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_12, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_13, NULL);
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// if (jsonObject["m02"]) matrix.m02 = jsonObject["m02"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = ___jsonObject0;
		NullCheck(L_15);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16;
		L_16 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_15, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_16, NULL);
		(&V_0)->___m02_8 = L_17;
	}

IL_0083:
	{
		// if (jsonObject["m03"]) matrix.m03 = jsonObject["m03"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = ___jsonObject0;
		NullCheck(L_18);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_19;
		L_19 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_18, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_19, NULL);
		if (!L_20)
		{
			goto IL_00ac;
		}
	}
	{
		// if (jsonObject["m03"]) matrix.m03 = jsonObject["m03"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = ___jsonObject0;
		NullCheck(L_21);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22;
		L_22 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_21, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_22, NULL);
		(&V_0)->___m03_12 = L_23;
	}

IL_00ac:
	{
		// if (jsonObject["m10"]) matrix.m10 = jsonObject["m10"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = ___jsonObject0;
		NullCheck(L_24);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_25;
		L_25 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_24, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_25, NULL);
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// if (jsonObject["m10"]) matrix.m10 = jsonObject["m10"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_27 = ___jsonObject0;
		NullCheck(L_27);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_28;
		L_28 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_27, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, NULL);
		NullCheck(L_28);
		float L_29;
		L_29 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_28, NULL);
		(&V_0)->___m10_1 = L_29;
	}

IL_00d5:
	{
		// if (jsonObject["m11"]) matrix.m11 = jsonObject["m11"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_30 = ___jsonObject0;
		NullCheck(L_30);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_31;
		L_31 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_30, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_31, NULL);
		if (!L_32)
		{
			goto IL_00fe;
		}
	}
	{
		// if (jsonObject["m11"]) matrix.m11 = jsonObject["m11"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_33 = ___jsonObject0;
		NullCheck(L_33);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_34;
		L_34 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_33, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, NULL);
		NullCheck(L_34);
		float L_35;
		L_35 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_34, NULL);
		(&V_0)->___m11_5 = L_35;
	}

IL_00fe:
	{
		// if (jsonObject["m12"]) matrix.m12 = jsonObject["m12"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_36 = ___jsonObject0;
		NullCheck(L_36);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_37;
		L_37 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_36, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_37, NULL);
		if (!L_38)
		{
			goto IL_0127;
		}
	}
	{
		// if (jsonObject["m12"]) matrix.m12 = jsonObject["m12"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_39 = ___jsonObject0;
		NullCheck(L_39);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_40;
		L_40 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_39, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, NULL);
		NullCheck(L_40);
		float L_41;
		L_41 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_40, NULL);
		(&V_0)->___m12_9 = L_41;
	}

IL_0127:
	{
		// if (jsonObject["m13"]) matrix.m13 = jsonObject["m13"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_42 = ___jsonObject0;
		NullCheck(L_42);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_43;
		L_43 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_42, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_43, NULL);
		if (!L_44)
		{
			goto IL_0150;
		}
	}
	{
		// if (jsonObject["m13"]) matrix.m13 = jsonObject["m13"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_45 = ___jsonObject0;
		NullCheck(L_45);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_46;
		L_46 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_45, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, NULL);
		NullCheck(L_46);
		float L_47;
		L_47 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_46, NULL);
		(&V_0)->___m13_13 = L_47;
	}

IL_0150:
	{
		// if (jsonObject["m20"]) matrix.m20 = jsonObject["m20"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_48 = ___jsonObject0;
		NullCheck(L_48);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_49;
		L_49 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_48, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_49, NULL);
		if (!L_50)
		{
			goto IL_0179;
		}
	}
	{
		// if (jsonObject["m20"]) matrix.m20 = jsonObject["m20"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_51 = ___jsonObject0;
		NullCheck(L_51);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_52;
		L_52 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_51, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, NULL);
		NullCheck(L_52);
		float L_53;
		L_53 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_52, NULL);
		(&V_0)->___m20_2 = L_53;
	}

IL_0179:
	{
		// if (jsonObject["m21"]) matrix.m21 = jsonObject["m21"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_54 = ___jsonObject0;
		NullCheck(L_54);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_55;
		L_55 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_54, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_55, NULL);
		if (!L_56)
		{
			goto IL_01a2;
		}
	}
	{
		// if (jsonObject["m21"]) matrix.m21 = jsonObject["m21"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_57 = ___jsonObject0;
		NullCheck(L_57);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_58;
		L_58 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_57, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, NULL);
		NullCheck(L_58);
		float L_59;
		L_59 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_58, NULL);
		(&V_0)->___m21_6 = L_59;
	}

IL_01a2:
	{
		// if (jsonObject["m22"]) matrix.m22 = jsonObject["m22"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_60 = ___jsonObject0;
		NullCheck(L_60);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_61;
		L_61 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_60, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_61, NULL);
		if (!L_62)
		{
			goto IL_01cb;
		}
	}
	{
		// if (jsonObject["m22"]) matrix.m22 = jsonObject["m22"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_63 = ___jsonObject0;
		NullCheck(L_63);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_64;
		L_64 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_63, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, NULL);
		NullCheck(L_64);
		float L_65;
		L_65 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_64, NULL);
		(&V_0)->___m22_10 = L_65;
	}

IL_01cb:
	{
		// if (jsonObject["m23"]) matrix.m23 = jsonObject["m23"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_66 = ___jsonObject0;
		NullCheck(L_66);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_67;
		L_67 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_66, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_67, NULL);
		if (!L_68)
		{
			goto IL_01f4;
		}
	}
	{
		// if (jsonObject["m23"]) matrix.m23 = jsonObject["m23"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_69 = ___jsonObject0;
		NullCheck(L_69);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_70;
		L_70 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_69, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, NULL);
		NullCheck(L_70);
		float L_71;
		L_71 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_70, NULL);
		(&V_0)->___m23_14 = L_71;
	}

IL_01f4:
	{
		// if (jsonObject["m30"]) matrix.m30 = jsonObject["m30"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_72 = ___jsonObject0;
		NullCheck(L_72);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_73;
		L_73 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_72, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_73, NULL);
		if (!L_74)
		{
			goto IL_021d;
		}
	}
	{
		// if (jsonObject["m30"]) matrix.m30 = jsonObject["m30"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_75 = ___jsonObject0;
		NullCheck(L_75);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_76;
		L_76 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_75, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, NULL);
		NullCheck(L_76);
		float L_77;
		L_77 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_76, NULL);
		(&V_0)->___m30_3 = L_77;
	}

IL_021d:
	{
		// if (jsonObject["m31"]) matrix.m31 = jsonObject["m31"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_78 = ___jsonObject0;
		NullCheck(L_78);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_79;
		L_79 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_78, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_79, NULL);
		if (!L_80)
		{
			goto IL_0246;
		}
	}
	{
		// if (jsonObject["m31"]) matrix.m31 = jsonObject["m31"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_81 = ___jsonObject0;
		NullCheck(L_81);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_82;
		L_82 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_81, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, NULL);
		NullCheck(L_82);
		float L_83;
		L_83 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_82, NULL);
		(&V_0)->___m31_7 = L_83;
	}

IL_0246:
	{
		// if (jsonObject["m32"]) matrix.m32 = jsonObject["m32"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_84 = ___jsonObject0;
		NullCheck(L_84);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_85;
		L_85 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_84, _stringLiteralD78D112848D426A98044320516AE321116F74C50, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_85, NULL);
		if (!L_86)
		{
			goto IL_026f;
		}
	}
	{
		// if (jsonObject["m32"]) matrix.m32 = jsonObject["m32"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_87 = ___jsonObject0;
		NullCheck(L_87);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_88;
		L_88 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_87, _stringLiteralD78D112848D426A98044320516AE321116F74C50, NULL);
		NullCheck(L_88);
		float L_89;
		L_89 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_88, NULL);
		(&V_0)->___m32_11 = L_89;
	}

IL_026f:
	{
		// if (jsonObject["m33"]) matrix.m33 = jsonObject["m33"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_90 = ___jsonObject0;
		NullCheck(L_90);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_91;
		L_91 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_90, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_91, NULL);
		if (!L_92)
		{
			goto IL_0298;
		}
	}
	{
		// if (jsonObject["m33"]) matrix.m33 = jsonObject["m33"].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_93 = ___jsonObject0;
		NullCheck(L_93);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_94;
		L_94 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_93, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, NULL);
		NullCheck(L_94);
		float L_95;
		L_95 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_94, NULL);
		(&V_0)->___m33_15 = L_95;
	}

IL_0298:
	{
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_96 = V_0;
		return L_96;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mF5EAD8C048D0383EDD7EB132BDBDC7705796ACAC (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) 
{
	{
		// return matrix.FromMatrix4x4();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___matrix0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromMatrix4x4_m2ABDFC006C1FD6882EFC599ACC6869CD532C478C(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromQuaternion_m7772B7596A359F0504635A1281ED4D48A74AFB88 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (quaternion.w != 0) jsonObject.AddField("w", quaternion.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___quaternion0;
		float L_2 = L_1.___w_3;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (quaternion.w != 0) jsonObject.AddField("w", quaternion.w);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___quaternion0;
		float L_5 = L_4.___w_3;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_5, NULL);
	}

IL_0024:
	{
		// if (quaternion.x != 0) jsonObject.AddField("x", quaternion.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___quaternion0;
		float L_7 = L_6.___x_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (quaternion.x != 0) jsonObject.AddField("x", quaternion.x);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___quaternion0;
		float L_10 = L_9.___x_0;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_10, NULL);
	}

IL_0042:
	{
		// if (quaternion.y != 0) jsonObject.AddField("y", quaternion.y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___quaternion0;
		float L_12 = L_11.___y_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if (quaternion.y != 0) jsonObject.AddField("y", quaternion.y);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___quaternion0;
		float L_15 = L_14.___y_1;
		NullCheck(L_13);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_13, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_15, NULL);
	}

IL_0060:
	{
		// if (quaternion.z != 0) jsonObject.AddField("z", quaternion.z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___quaternion0;
		float L_17 = L_16.___z_2;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if (quaternion.z != 0) jsonObject.AddField("z", quaternion.z);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = ___quaternion0;
		float L_20 = L_19.___z_2;
		NullCheck(L_18);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_18, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_20, NULL);
	}

IL_007e:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Quaternion Defective.JSON.JSONTemplates::ToQuaternion(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 JSONTemplates_ToQuaternion_m6FD13036E75498A34F26A575E019BC56B616F5C2 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		// var x = jsonObject["x"] ? jsonObject["x"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = ___jsonObject0;
		NullCheck(L_3);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_4;
		L_4 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// var y = jsonObject["y"] ? jsonObject["y"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_6 = ___jsonObject0;
		NullCheck(L_6);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_7;
		L_7 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_7, NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_9 = ___jsonObject0;
		NullCheck(L_9);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_10;
		L_10 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// var z = jsonObject["z"] ? jsonObject["z"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13;
		L_13 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_13, NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_15 = ___jsonObject0;
		NullCheck(L_15);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16;
		L_16 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_16, NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// var w = jsonObject["w"] ? jsonObject["w"].floatValue : 0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = ___jsonObject0;
		NullCheck(L_18);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_19;
		L_19 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m7C8BF6A61526F13507A1EBCA0CBB6474AADE6327(L_19, NULL);
		G_B10_0 = G_B9_1;
		if (L_20)
		{
			G_B11_0 = G_B9_1;
			goto IL_0096;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_00a6;
	}

IL_0096:
	{
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = ___jsonObject0;
		NullCheck(L_21);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22;
		L_22 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_21, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_22, NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
	}

IL_00a6:
	{
		V_2 = G_B12_0;
		// return new Quaternion(x, y, z, w);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_27), G_B12_1, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mC68CE8D59160EAF7556A52D454665CB86138F647 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	{
		// return quaternion.FromQuaternion();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___quaternion0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromQuaternion_m7772B7596A359F0504635A1281ED4D48A74AFB88(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromColor_mC98BFA31A9ABAA2B2F9473071DFE2E6537E9AEC9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (color.r != 0) jsonObject.AddField("r", color.r);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		float L_2 = L_1.___r_0;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if (color.r != 0) jsonObject.AddField("r", color.r);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_3, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_5, NULL);
	}

IL_0024:
	{
		// if (color.g != 0) jsonObject.AddField("g", color.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___color0;
		float L_7 = L_6.___g_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if (color.g != 0) jsonObject.AddField("g", color.g);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___color0;
		float L_10 = L_9.___g_1;
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, L_10, NULL);
	}

IL_0042:
	{
		// if (color.b != 0) jsonObject.AddField("b", color.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___color0;
		float L_12 = L_11.___b_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if (color.b != 0) jsonObject.AddField("b", color.b);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___color0;
		float L_15 = L_14.___b_2;
		NullCheck(L_13);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_13, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_15, NULL);
	}

IL_0060:
	{
		// if (color.a != 0) jsonObject.AddField("a", color.a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___color0;
		float L_17 = L_16.___a_3;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if (color.a != 0) jsonObject.AddField("a", color.a);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___color0;
		float L_20 = L_19.___a_3;
		NullCheck(L_18);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_18, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, L_20, NULL);
	}

IL_007e:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Color Defective.JSON.JSONTemplates::ToColor(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F JSONTemplates_ToColor_mA36CA264042529063B6E85FBB329C044E5199590 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var color = new Color();
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// for (var i = 0; i < jsonObject.count; i++) {
		V_1 = 0;
		goto IL_00a8;
	}

IL_000f:
	{
		// switch (jsonObject.keys[i]) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0->___keys_13;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_2 = L_3;
		String_t* L_4 = V_2;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, NULL);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_11)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00a4;
	}

IL_0052:
	{
		// color.r = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_14;
		L_14 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_12, L_13, NULL);
		NullCheck(L_14);
		float L_15;
		L_15 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_14, NULL);
		(&V_0)->___r_0 = L_15;
		// break;
		goto IL_00a4;
	}

IL_0067:
	{
		// color.g = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = ___jsonObject0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18;
		L_18 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_16, L_17, NULL);
		NullCheck(L_18);
		float L_19;
		L_19 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_18, NULL);
		(&V_0)->___g_1 = L_19;
		// break;
		goto IL_00a4;
	}

IL_007c:
	{
		// color.b = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_20 = ___jsonObject0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22;
		L_22 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_20, L_21, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_22, NULL);
		(&V_0)->___b_2 = L_23;
		// break;
		goto IL_00a4;
	}

IL_0091:
	{
		// color.a = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = ___jsonObject0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_26;
		L_26 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_24, L_25, NULL);
		NullCheck(L_26);
		float L_27;
		L_27 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_26, NULL);
		(&V_0)->___a_3 = L_27;
	}

IL_00a4:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a8:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_29 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_30 = ___jsonObject0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
	{
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = V_0;
		return L_32;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mF2B8431572659AFCE873EA4EED15754421BBEF61 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// return color.FromColor();
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromColor_mC98BFA31A9ABAA2B2F9473071DFE2E6537E9AEC9(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromLayerMask_mEA15F20E090D0B596A08E3C00222CFF7EEE3EFA0 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		// jsonObject.AddField("value", layerMask.value);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = L_0;
		int32_t L_2;
		L_2 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974((&___layerMask0), NULL);
		NullCheck(L_1);
		JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43(L_1, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, L_2, NULL);
		// return jsonObject;
		return L_1;
	}
}
// UnityEngine.LayerMask Defective.JSON.JSONTemplates::ToLayerMask(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB JSONTemplates_ToLayerMask_mCA053792639D2BBF8391DB7515768E8BADE2B9FD (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var layerMask = new LayerMask { value = jsonObject["value"].intValue };
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONObject_get_Item_m32CD450E44D55B639F7C13F48A4CC98AF4E4B6EA(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111(L_1, NULL);
		LayerMask_set_value_m3A5F4B8889D23C5AB9CC630FE260BF7ABD5890E8((&V_0), L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = V_0;
		// return layerMask;
		return L_3;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_m95F03E0699FB120574EB1F5FA77CE2D4D000D515 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, const RuntimeMethod* method) 
{
	{
		// return layerMask.FromLayerMask();
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___layerMask0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromLayerMask_mEA15F20E090D0B596A08E3C00222CFF7EEE3EFA0(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromRect_m689B0315243A82641210F853BB06A40FDEFF5D67 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (rect.x != 0) jsonObject.AddField("x", rect.x);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		// if (rect.x != 0) jsonObject.AddField("x", rect.x);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_2 = V_0;
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		NullCheck(L_2);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
	}

IL_0026:
	{
		// if (rect.y != 0) jsonObject.AddField("y", rect.y);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}
	{
		// if (rect.y != 0) jsonObject.AddField("y", rect.y);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_5 = V_0;
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		NullCheck(L_5);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
	}

IL_0046:
	{
		// if (rect.height != 0) jsonObject.AddField("height", rect.height);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0066;
		}
	}
	{
		// if (rect.height != 0) jsonObject.AddField("height", rect.height);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		NullCheck(L_8);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_8, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, L_9, NULL);
	}

IL_0066:
	{
		// if (rect.width != 0) jsonObject.AddField("width", rect.width);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0086;
		}
	}
	{
		// if (rect.width != 0) jsonObject.AddField("width", rect.width);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_11 = V_0;
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		NullCheck(L_11);
		JSONObject_AddField_mD685A8B1577B9AAF6616BB1FA42035A1EBA9C798(L_11, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, L_12, NULL);
	}

IL_0086:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Rect Defective.JSON.JSONTemplates::ToRect(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D JSONTemplates_ToRect_m6291CA93380396ACE64CE21EA006B7011540120B (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var rect = new Rect();
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// for (var i = 0; i < jsonObject.count; i++) {
		V_1 = 0;
		goto IL_00a8;
	}

IL_000f:
	{
		// switch (jsonObject.keys[i]) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0 = ___jsonObject0;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0->___keys_13;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_2 = L_3;
		String_t* L_4 = V_2;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, NULL);
		if (L_11)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00a4;
	}

IL_0052:
	{
		// rect.x = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_12 = ___jsonObject0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_14;
		L_14 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_12, L_13, NULL);
		NullCheck(L_14);
		float L_15;
		L_15 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_14, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_0), L_15, NULL);
		// break;
		goto IL_00a4;
	}

IL_0067:
	{
		// rect.y = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16 = ___jsonObject0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18;
		L_18 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_16, L_17, NULL);
		NullCheck(L_18);
		float L_19;
		L_19 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_18, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_0), L_19, NULL);
		// break;
		goto IL_00a4;
	}

IL_007c:
	{
		// rect.height = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_20 = ___jsonObject0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_22;
		L_22 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_20, L_21, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_22, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_0), L_23, NULL);
		// break;
		goto IL_00a4;
	}

IL_0091:
	{
		// rect.width = jsonObject[i].floatValue;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = ___jsonObject0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_26;
		L_26 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_24, L_25, NULL);
		NullCheck(L_26);
		float L_27;
		L_27 = JSONObject_get_floatValue_mDFCE4713139029F151DD8EB5B19057561FAD050F(L_26, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_0), L_27, NULL);
	}

IL_00a4:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a8:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_29 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_30 = ___jsonObject0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
	{
		// return rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32 = V_0;
		return L_32;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mBACE7EAEDB6A93E39257894E102639A853ACFF0D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) 
{
	{
		// return rect.FromRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___rect0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromRect_m689B0315243A82641210F853BB06A40FDEFF5D67(L_0, NULL);
		return L_1;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_FromRectOffset_m69440B729EBC1F1F7257C77EEB88591D4EA91D5E (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___rectOffset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* V_0 = NULL;
	{
		// var jsonObject = JSONObject.emptyObject;
		il2cpp_codegen_runtime_class_init_inline(JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC_il2cpp_TypeInfo_var);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_0;
		L_0 = JSONObject_get_emptyObject_mF0C60FDFF6CA9971041B3040CBDD0C2BB8BFE0BC(NULL);
		V_0 = L_0;
		// if (rectOffset.bottom != 0) jsonObject.AddField("bottom", rectOffset.bottom);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = ___rectOffset0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (rectOffset.bottom != 0) jsonObject.AddField("bottom", rectOffset.bottom);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_3 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = ___rectOffset0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_4, NULL);
		NullCheck(L_3);
		JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43(L_3, _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665, L_5, NULL);
	}

IL_001f:
	{
		// if (rectOffset.left != 0) jsonObject.AddField("left", rectOffset.left);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = ___rectOffset0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if (rectOffset.left != 0) jsonObject.AddField("left", rectOffset.left);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_8 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_9 = ___rectOffset0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_9, NULL);
		NullCheck(L_8);
		JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43(L_8, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, L_10, NULL);
	}

IL_0038:
	{
		// if (rectOffset.right != 0) jsonObject.AddField("right", rectOffset.right);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11 = ___rectOffset0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_11, NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if (rectOffset.right != 0) jsonObject.AddField("right", rectOffset.right);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_13 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_14 = ___rectOffset0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_14, NULL);
		NullCheck(L_13);
		JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43(L_13, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, L_15, NULL);
	}

IL_0051:
	{
		// if (rectOffset.top != 0) jsonObject.AddField("top", rectOffset.top);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16 = ___rectOffset0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_16, NULL);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		// if (rectOffset.top != 0) jsonObject.AddField("top", rectOffset.top);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_18 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_19 = ___rectOffset0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_19, NULL);
		NullCheck(L_18);
		JSONObject_AddField_m8F37920A655BB17DA9EB6F66D55BE581D776CF43(L_18, _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3, L_20, NULL);
	}

IL_006a:
	{
		// return jsonObject;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.RectOffset Defective.JSON.JSONTemplates::ToRectOffset(Defective.JSON.JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* JSONTemplates_ToRectOffset_m22869103AAC6522411F6A9CA81CC1177961BDF17 (JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var rectOffset = new RectOffset();
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RectOffset__ctor_m7DB8E8EDDB814824299F9EF661DAFA32854F0CC9(L_0, NULL);
		V_0 = L_0;
		// for (var i = 0; i < jsonObject.count; i++) {
		V_1 = 0;
		goto IL_00a2;
	}

IL_000d:
	{
		// switch (jsonObject.keys[i]) {
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1 = ___jsonObject0;
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1->___keys_13;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_2, L_3, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_2 = L_4;
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665, NULL);
		if (L_6)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3, NULL);
		if (L_12)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_009e;
	}

IL_0050:
	{
		// rectOffset.bottom = jsonObject[i].intValue;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_13 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_14 = ___jsonObject0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_16;
		L_16 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_14, L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111(L_16, NULL);
		NullCheck(L_13);
		RectOffset_set_bottom_mB303CE31F9932C3BE8A3FD48E5049D624F395C83(L_13, L_17, NULL);
		// break;
		goto IL_009e;
	}

IL_0064:
	{
		// rectOffset.left = jsonObject[i].intValue;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_18 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_19 = ___jsonObject0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_21;
		L_21 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_19, L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111(L_21, NULL);
		NullCheck(L_18);
		RectOffset_set_left_mEE36418FAC0A5C5AA4A1C886C7CFF5D35AFAD2C0(L_18, L_22, NULL);
		// break;
		goto IL_009e;
	}

IL_0078:
	{
		// rectOffset.right = jsonObject[i].intValue;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_23 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_24 = ___jsonObject0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_26;
		L_26 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_24, L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111(L_26, NULL);
		NullCheck(L_23);
		RectOffset_set_right_m6D3608E0973F68CC0D0A6A9863D31D70972A9588(L_23, L_27, NULL);
		// break;
		goto IL_009e;
	}

IL_008c:
	{
		// rectOffset.top = jsonObject[i].intValue;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_28 = V_0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_29 = ___jsonObject0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_31;
		L_31 = JSONObject_get_Item_mFDB9D6D8206F6899009E5D35EF69E5085735AB1C(L_29, L_30, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = JSONObject_get_intValue_m4AFE881DFE5E3B5370C2EA5CC8D990DEFE26D111(L_31, NULL);
		NullCheck(L_28);
		RectOffset_set_top_mEF389A8923A33EC2927AD13ADE00D960D4593207(L_28, L_32, NULL);
	}

IL_009e:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a2:
	{
		// for (var i = 0; i < jsonObject.count; i++) {
		int32_t L_34 = V_1;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_35 = ___jsonObject0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = JSONObject_get_count_m3013D1542E66CD45405528D5A5A7DCBE4F85421F(L_35, NULL);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_000d;
		}
	}
	{
		// return rectOffset;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_37 = V_0;
		return L_37;
	}
}
// Defective.JSON.JSONObject Defective.JSON.JSONTemplates::ToJson(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* JSONTemplates_ToJson_mE70A2549DDF5BD2A2E56B5949C4FE6BB0D67E6E3 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___rectOffset0, const RuntimeMethod* method) 
{
	{
		// return rectOffset.FromRectOffset();
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = ___rectOffset0;
		JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* L_1;
		L_1 = JSONTemplates_FromRectOffset_m69440B729EBC1F1F7257C77EEB88591D4EA91D5E(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m349E26B39BC39945C4CBD70D0061BD7D3D0B56E4_inline (AddJSONContents_tA0877B191FE8359A43765E352E42F45E2A9EB488* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___self0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___self0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mCD3E9777E646B2C748B6036ADFBAF4A4038295AF_inline (FieldNotFound_t200160ADCE437043A36556830C7A1C742867EF77* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___name0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mEED8FA330FD205B92BC0A1D29486BCF2E0980CB0_inline (GetFieldResponse_tF9C18FE5B76ED6AFEFA7BA4CD88D47E63928C808* __this, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC* ___jsonObject0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JSONObject_t8EDF02FD857855C9DC72DE51C3FD37EEABC5EBCC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___jsonObject0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNegativeInfinity_m13015C1072581C43BA6AAED02596E631C18942F6_inline (double ___d0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___d0;
		return (bool)((((double)L_0) == ((double)(-std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) == ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
