#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_t2963233308;
// FullSerializer.fsConfig
struct fsConfig_t14416447;
// FullSerializer.fsContext
struct fsContext_t2261407774;
// FullSerializer.fsConverter
struct fsConverter_t1940635020;
// FullSerializer.fsData
struct fsData_t406773287;
// FullSerializer.fsData[]
struct fsDataU5BU5D_t3161635166;
// FullSerializer.fsSerializer
struct fsSerializer_t4093814827;
// FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t239783049;
// IBM.Watson.DeveloperCloud.Connection.RESTConnector/ProgressEvent
struct ProgressEvent_t1392879013;
// IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request
struct Request_t1876465969;
// IBM.Watson.DeveloperCloud.Connection.RESTConnector/ResponseEvent
struct ResponseEvent_t3229978485;
// IBM.Watson.DeveloperCloud.Editor.UnitTestManager
struct UnitTestManager_t2624635688;
// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete
struct OnTestsComplete_t1076207448;
// IBM.Watson.DeveloperCloud.UnitTests.UnitTest
struct UnitTest_t4208175170;
// IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken
struct AuthenticationToken_t2650554029;
// IBM.Watson.DeveloperCloud.Utilities.Credential
struct Credential_t1160400382;
// IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq
struct GetWatsonTokenReq_t3567185861;
// IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken
struct OnGetWatsonToken_t1424218558;
// IBM.Watson.DeveloperCloud.Utilities.VcapCredential
struct VcapCredential_t1342927885;
// IBM.Watson.DeveloperCloud.Utilities.VcapCredential[]
struct VcapCredentialU5BU5D_t2045673760;
// IBM.Watson.DeveloperCloud.Utilities.VcapCredentials
struct VcapCredentials_t1310294039;
// IBM.Watson.DeveloperCloud.Utilities.WatsonException
struct WatsonException_t4135824359;
// IBM.Watson.DeveloperCloud.Widgets.Widget
struct Widget_t1534328253;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Data
struct Data_t4259022272;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input
struct Input_t789873443;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input[]
struct InputU5BU5D_t632706290;
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded
struct OnInputAdded_t3329887880;
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved
struct OnInputRemoved_t4133684454;
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded
struct OnOutputAdded_t1994924040;
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved
struct OnOutputRemoved_t2484111978;
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData
struct OnReceiveData_t3166915800;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output
struct Output_t2166053520;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection
struct Connection_t4165129509;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection[]
struct ConnectionU5BU5D_t3727671464;
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[]
struct OutputU5BU5D_t4065696049;
// IBM.Watson.DeveloperCloud.Widgets.Widget[]
struct WidgetU5BU5D_t425568944;
// IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup
struct CaptureGroup_t1549177136;
// IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup[]
struct CaptureGroupU5BU5D_t3469644817;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage
struct DialogLogMessage_t3385623792;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage[]
struct DialogLogMessageU5BU5D_t544577873;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction
struct DialogNodeAction_t90292948;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction[]
struct DialogNodeActionU5BU5D_t3941847901;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement
struct DialogNodeOutputOptionsElement_t1707701688;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue
struct DialogNodeOutputOptionsElementValue_t720329632;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement[]
struct DialogNodeOutputOptionsElementU5BU5D_t2777031785;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited
struct DialogNodesVisited_t3733264797;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited[]
struct DialogNodesVisitedU5BU5D_t3311682384;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric
struct DialogRuntimeResponseGeneric_t1865932536;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric[]
struct DialogRuntimeResponseGenericU5BU5D_t1578413609;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion
struct DialogSuggestion_t2391879174;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue
struct DialogSuggestionValue_t3070474203;
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion[]
struct DialogSuggestionU5BU5D_t1865296675;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext
struct MessageContext_t633623232;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal
struct MessageContextGlobal_t2065255329;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem
struct MessageContextGlobalSystem_t3823677794;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextSkills
struct MessageContextSkills_t562966926;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput
struct MessageInput_t1231455263;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter
struct MessageInputConverter_t1644137348;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions
struct MessageInputOptions_t321510208;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter
struct MessageInputOptionsConverter_t740336248;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput
struct MessageOutput_t3260606978;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug
struct MessageOutputDebug_t2595507150;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest
struct MessageRequest_t177877626;
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse
struct MessageResponse_t1912396260;
// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity
struct RuntimeEntity_t251665649;
// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity[]
struct RuntimeEntityU5BU5D_t2260943916;
// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent
struct RuntimeIntent_t305404492;
// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent[]
struct RuntimeIntentU5BU5D_t2305726213;
// IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse
struct SessionResponse_t4186475537;
// IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel
struct CreateLanguageModel_t1081996541;
// MiniJSON.Json/Parser
struct Parser_t3021620180;
// MiniJSON.Json/Serializer
struct Serializer_t1539586466;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FullSerializer.fsData,System.Collections.DictionaryEntry>
struct Transform_1_t2012046882;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>,System.Collections.DictionaryEntry>
struct Transform_1_t4091669846;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,FullSerializer.fsData>
struct Dictionary_2_t192029586;
// System.Collections.Generic.Dictionary`2<System.String,IBM.Watson.DeveloperCloud.Connection.RESTConnector/Form>
struct Dictionary_2_t1213973337;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>
struct Dictionary_2_t2600258926;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Type,FullSerializer.fsBaseConverter>
struct Dictionary_2_t4012097003;
// System.Collections.Generic.Dictionary`2<System.Type,FullSerializer.fsDirectConverter>
struct Dictionary_2_t1339064699;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<FullSerializer.fsObjectProcessor>>
struct Dictionary_2_t40823354;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t633324528;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<FullSerializer.fsConverter>
struct List_1_t3412709762;
// System.Collections.Generic.List`1<FullSerializer.fsObjectProcessor>
struct List_1_t1891443586;
// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>
struct List_1_t2815002627;
// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>[]
struct List_1U5BU5D_t946290834;
// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>
struct List_1_t1342236955;
// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>
struct List_1_t3638128262;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup>
struct List_1_t3021251878;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage>
struct List_1_t562731238;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction>
struct List_1_t1562367690;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement>
struct List_1_t3179776430;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited>
struct List_1_t910372243;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric>
struct List_1_t3338007278;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion>
struct List_1_t3863953916;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity>
struct List_1_t1723740391;
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent>
struct List_1_t1777479234;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_t913674750;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Queue`1<System.Type>
struct Queue_1_t2330204254;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IList
struct IList_t2094931216;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.Func`2<FullSerializer.fsDataType,System.String>
struct Func_2_t2106788937;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// System.IO.BinaryWriter
struct BinaryWriter_t3992595042;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.UI.Image
struct Image_t2670269651;
// explode
struct explode_t315222985;
// explodeHouse
struct explodeHouse_t2507012274;
// tracking
struct tracking_t1519717030;

extern RuntimeClass* BinaryReader_t2428077293_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryWriter_t3992595042_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* Connection_t4165129509_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t192029586_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1342236955_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2815002627_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3638128262_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageInputOptions_t321510208_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageInput_t1231455263_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OnReceiveData_t3166915800_il2cpp_TypeInfo_var;
extern RuntimeClass* OnTestsComplete_t1076207448_il2cpp_TypeInfo_var;
extern RuntimeClass* Parser_t3021620180_il2cpp_TypeInfo_var;
extern RuntimeClass* RunUnitTest_t4092700481_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Serializer_t1539586466_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* UnitTestManager_t2624635688_il2cpp_TypeInfo_var;
extern RuntimeClass* Utility_t1391606413_il2cpp_TypeInfo_var;
extern RuntimeClass* WAV_PCM_t124248382_il2cpp_TypeInfo_var;
extern RuntimeClass* fsData_t406773287_il2cpp_TypeInfo_var;
extern RuntimeClass* fsResult_t591339677_il2cpp_TypeInfo_var;
extern RuntimeClass* fsSerializer_t4093814827_il2cpp_TypeInfo_var;
extern RuntimeClass* fsTypeCache_t3469578604_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1108042368;
extern String_t* _stringLiteral1110997578;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1209311930;
extern String_t* _stringLiteral1240184648;
extern String_t* _stringLiteral1242317819;
extern String_t* _stringLiteral1482762766;
extern String_t* _stringLiteral1566648052;
extern String_t* _stringLiteral1689800641;
extern String_t* _stringLiteral1957967226;
extern String_t* _stringLiteral2037252866;
extern String_t* _stringLiteral2094178676;
extern String_t* _stringLiteral2111101917;
extern String_t* _stringLiteral2224792573;
extern String_t* _stringLiteral2244838609;
extern String_t* _stringLiteral2250557825;
extern String_t* _stringLiteral2253887102;
extern String_t* _stringLiteral2361604584;
extern String_t* _stringLiteral2404045365;
extern String_t* _stringLiteral2449238902;
extern String_t* _stringLiteral2618906327;
extern String_t* _stringLiteral2678398007;
extern String_t* _stringLiteral2715197523;
extern String_t* _stringLiteral2834979077;
extern String_t* _stringLiteral2922058023;
extern String_t* _stringLiteral3392320156;
extern String_t* _stringLiteral3416266264;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3451041664;
extern String_t* _stringLiteral3451303896;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3452614638;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3486416773;
extern String_t* _stringLiteral3554631648;
extern String_t* _stringLiteral3828196555;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral3951197682;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral4177267058;
extern String_t* _stringLiteral429001330;
extern String_t* _stringLiteral569419300;
extern String_t* _stringLiteral590273232;
extern String_t* _stringLiteral648138441;
extern String_t* _stringLiteral7250284;
extern String_t* _stringLiteral731316992;
extern String_t* _stringLiteral837235735;
extern String_t* _stringLiteral855515498;
extern String_t* _stringLiteral874315656;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m734428058_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3121163555_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1476497131_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2889734923_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1535556385_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1962014498_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m26165935_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3470494932_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1935991257_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2105435828_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m641151094_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2822380694_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3004613996_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m355331424_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisWidget_t1534328253_m1340924440_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1664403995_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3934450950_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m891841590_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m982985126_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m563392257_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2309797786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3809269953_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1614517502_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m4138914593_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1403542956_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3631305337_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1224377238_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2049013512_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3564539098_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1957816562_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3534178295_RuntimeMethod_var;
extern const RuntimeMethod* MessageInputOptionsConverter_TryDeserialize_m4051108094_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m2116488300_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m2952668986_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisWidget_t1534328253_m1655898492_RuntimeMethod_var;
extern const RuntimeMethod* RunUnitTest_OnTestsComplete_m3943969815_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245_RuntimeMethod_var;
extern const RuntimeMethod* WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198_RuntimeMethod_var;
extern const RuntimeMethod* Widget_GetMembersByType_TisInput_t789873443_m3125330832_RuntimeMethod_var;
extern const RuntimeMethod* Widget_GetMembersByType_TisOutput_t2166053520_m2036084381_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisList_1_t1723740391_m2459794001_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisList_1_t1777479234_m568565007_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisMessageInputOptions_t321510208_m1229013631_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671_RuntimeMethod_var;
extern const RuntimeMethod* fsSerializer_TrySerialize_TisString_t_m1458439198_RuntimeMethod_var;
extern const RuntimeType* MessageInputOptions_t321510208_0_0_0_var;
extern const RuntimeType* MessageInput_t1231455263_0_0_0_var;
extern const RuntimeType* OnReceiveData_t3166915800_0_0_0_var;
extern const RuntimeType* UnitTest_t4208175170_0_0_0_var;
extern const uint32_t Connection_ResolveTargetInput_m761714751_MetadataUsageId;
extern const uint32_t Connection_set_TargetInput_m1487836820_MetadataUsageId;
extern const uint32_t Input_AddOutput_m1670639108_MetadataUsageId;
extern const uint32_t Input_RemoveOutput_m3375657997_MetadataUsageId;
extern const uint32_t Input_Start_m1538958278_MetadataUsageId;
extern const uint32_t Input_ToString_m4184213043_MetadataUsageId;
extern const uint32_t Input__ctor_m514936633_MetadataUsageId;
extern const uint32_t Input_get_Connections_m3464384795_MetadataUsageId;
extern const uint32_t Input_get_FullInputName_m3142238679_MetadataUsageId;
extern const uint32_t MessageInputConverter_CanProcess_m1865841679_MetadataUsageId;
extern const uint32_t MessageInputConverter_CreateInstance_m2038806132_MetadataUsageId;
extern const uint32_t MessageInputConverter_TryDeserialize_m255809569_MetadataUsageId;
extern const uint32_t MessageInputConverter_TrySerialize_m3827162831_MetadataUsageId;
extern const uint32_t MessageInputConverter__ctor_m861489002_MetadataUsageId;
extern const uint32_t MessageInputOptionsConverter_CanProcess_m871601925_MetadataUsageId;
extern const uint32_t MessageInputOptionsConverter_TryDeserialize_m4051108094_MetadataUsageId;
extern const uint32_t MessageInputOptionsConverter_TrySerialize_m3945099248_MetadataUsageId;
extern const uint32_t MessageInputOptionsConverter__ctor_m4158977738_MetadataUsageId;
extern const uint32_t Output_AddConnection_m2129234292_MetadataUsageId;
extern const uint32_t Output_AddConnection_m3549496410_MetadataUsageId;
extern const uint32_t Output_RemoveConnection_m2582312550_MetadataUsageId;
extern const uint32_t Output_SendData_m324321874_MetadataUsageId;
extern const uint32_t Output_Start_m1493241048_MetadataUsageId;
extern const uint32_t Output_ToString_m3027564494_MetadataUsageId;
extern const uint32_t Output__ctor_m1543475086_MetadataUsageId;
extern const uint32_t Output_get_Connections_m3466450746_MetadataUsageId;
extern const uint32_t Output_get_IsConnected_m831068958_MetadataUsageId;
extern const uint32_t Parser_EatWhitespace_m2111473281_MetadataUsageId;
extern const uint32_t Parser_IsWordBreak_m16388875_MetadataUsageId;
extern const uint32_t Parser_ParseArray_m965643129_MetadataUsageId;
extern const uint32_t Parser_ParseByToken_m166062117_MetadataUsageId;
extern const uint32_t Parser_ParseNumber_m358869732_MetadataUsageId;
extern const uint32_t Parser_ParseObject_m1489219549_MetadataUsageId;
extern const uint32_t Parser_ParseString_m4025690792_MetadataUsageId;
extern const uint32_t Parser_Parse_m3734145081_MetadataUsageId;
extern const uint32_t Parser__ctor_m848019096_MetadataUsageId;
extern const uint32_t Parser_get_NextChar_m3496231823_MetadataUsageId;
extern const uint32_t Parser_get_NextToken_m3030552256_MetadataUsageId;
extern const uint32_t Parser_get_NextWord_m3688284121_MetadataUsageId;
extern const uint32_t Parser_get_PeekChar_m1673566566_MetadataUsageId;
extern const uint32_t RunUnitTest_All_m2354428265_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_m12259788_MetadataUsageId;
extern const uint32_t Serializer_SerializeObject_m1783201083_MetadataUsageId;
extern const uint32_t Serializer_SerializeOther_m3630688433_MetadataUsageId;
extern const uint32_t Serializer_SerializeString_m4051446155_MetadataUsageId;
extern const uint32_t Serializer_SerializeValue_m1193830714_MetadataUsageId;
extern const uint32_t Serializer_Serialize_m3080445642_MetadataUsageId;
extern const uint32_t Serializer__ctor_m2316880293_MetadataUsageId;
extern const uint32_t VcapCredentials_GetCredentialByname_m4245962954_MetadataUsageId;
extern const uint32_t WatsonException__ctor_m2351300910_MetadataUsageId;
extern const uint32_t WatsonException__ctor_m887462022_MetadataUsageId;
extern const uint32_t WaveFile_CreateWAV_m3752693229_MetadataUsageId;
extern const uint32_t WaveFile_GetID_m3113013044_MetadataUsageId;
extern const uint32_t WaveFile_MakeID_m3070611325_MetadataUsageId;
extern const uint32_t WaveFile_ParseWAV_m2910170970_MetadataUsageId;
extern const uint32_t Widget_InitializeConnections_m4256191606_MetadataUsageId;
extern const uint32_t Widget_InitializeIO_m829930977_MetadataUsageId;
extern const uint32_t explode_OnTriggerEnter_m2186697760_MetadataUsageId;
extern const uint32_t tracking_OnTrackingFound_m2892839080_MetadataUsageId;

struct InputU5BU5D_t632706290;
struct ConnectionU5BU5D_t3727671464;
struct OutputU5BU5D_t4065696049;
struct WidgetU5BU5D_t425568944;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;
struct RendererU5BU5D_t3210418286;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef FSBASECONVERTER_T1567749939_H
#define FSBASECONVERTER_T1567749939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsBaseConverter
struct  fsBaseConverter_t1567749939  : public RuntimeObject
{
public:
	// FullSerializer.fsSerializer FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t4093814827 * ___Serializer_0;

public:
	inline static int32_t get_offset_of_Serializer_0() { return static_cast<int32_t>(offsetof(fsBaseConverter_t1567749939, ___Serializer_0)); }
	inline fsSerializer_t4093814827 * get_Serializer_0() const { return ___Serializer_0; }
	inline fsSerializer_t4093814827 ** get_address_of_Serializer_0() { return &___Serializer_0; }
	inline void set_Serializer_0(fsSerializer_t4093814827 * value)
	{
		___Serializer_0 = value;
		Il2CppCodeGenWriteBarrier((&___Serializer_0), value);
	}
};

struct fsBaseConverter_t1567749939_StaticFields
{
public:
	// System.Func`2<FullSerializer.fsDataType,System.String> FullSerializer.fsBaseConverter::<>f__am$cache0
	Func_2_t2106788937 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(fsBaseConverter_t1567749939_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_2_t2106788937 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_2_t2106788937 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_2_t2106788937 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSBASECONVERTER_T1567749939_H
#ifndef FSDATA_T406773287_H
#define FSDATA_T406773287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsData
struct  fsData_t406773287  : public RuntimeObject
{
public:
	// System.Object FullSerializer.fsData::_value
	RuntimeObject * ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(fsData_t406773287, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

struct fsData_t406773287_StaticFields
{
public:
	// FullSerializer.fsData FullSerializer.fsData::True
	fsData_t406773287 * ___True_1;
	// FullSerializer.fsData FullSerializer.fsData::False
	fsData_t406773287 * ___False_2;
	// FullSerializer.fsData FullSerializer.fsData::Null
	fsData_t406773287 * ___Null_3;

public:
	inline static int32_t get_offset_of_True_1() { return static_cast<int32_t>(offsetof(fsData_t406773287_StaticFields, ___True_1)); }
	inline fsData_t406773287 * get_True_1() const { return ___True_1; }
	inline fsData_t406773287 ** get_address_of_True_1() { return &___True_1; }
	inline void set_True_1(fsData_t406773287 * value)
	{
		___True_1 = value;
		Il2CppCodeGenWriteBarrier((&___True_1), value);
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(fsData_t406773287_StaticFields, ___False_2)); }
	inline fsData_t406773287 * get_False_2() const { return ___False_2; }
	inline fsData_t406773287 ** get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(fsData_t406773287 * value)
	{
		___False_2 = value;
		Il2CppCodeGenWriteBarrier((&___False_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(fsData_t406773287_StaticFields, ___Null_3)); }
	inline fsData_t406773287 * get_Null_3() const { return ___Null_3; }
	inline fsData_t406773287 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(fsData_t406773287 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSDATA_T406773287_H
#ifndef FSSERIALIZER_T4093814827_H
#define FSSERIALIZER_T4093814827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsSerializer
struct  fsSerializer_t4093814827  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,FullSerializer.fsBaseConverter> FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_t4012097003 * ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,FullSerializer.fsBaseConverter> FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_t4012097003 * ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<FullSerializer.fsObjectProcessor>> FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_t40823354 * ____cachedProcessors_8;
	// System.Collections.Generic.List`1<FullSerializer.fsConverter> FullSerializer.fsSerializer::_availableConverters
	List_1_t3412709762 * ____availableConverters_9;
	// System.Collections.Generic.Dictionary`2<System.Type,FullSerializer.fsDirectConverter> FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_t1339064699 * ____availableDirectConverters_10;
	// System.Collections.Generic.List`1<FullSerializer.fsObjectProcessor> FullSerializer.fsSerializer::_processors
	List_1_t1891443586 * ____processors_11;
	// FullSerializer.Internal.fsCyclicReferenceManager FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_t2963233308 * ____references_12;
	// FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_t239783049 * ____lazyReferenceWriter_13;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_t633324528 * ____abstractTypeRemap_14;
	// FullSerializer.fsContext FullSerializer.fsSerializer::Context
	fsContext_t2261407774 * ___Context_15;
	// FullSerializer.fsConfig FullSerializer.fsSerializer::Config
	fsConfig_t14416447 * ___Config_16;

public:
	inline static int32_t get_offset_of__cachedConverterTypeInstances_6() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____cachedConverterTypeInstances_6)); }
	inline Dictionary_2_t4012097003 * get__cachedConverterTypeInstances_6() const { return ____cachedConverterTypeInstances_6; }
	inline Dictionary_2_t4012097003 ** get_address_of__cachedConverterTypeInstances_6() { return &____cachedConverterTypeInstances_6; }
	inline void set__cachedConverterTypeInstances_6(Dictionary_2_t4012097003 * value)
	{
		____cachedConverterTypeInstances_6 = value;
		Il2CppCodeGenWriteBarrier((&____cachedConverterTypeInstances_6), value);
	}

	inline static int32_t get_offset_of__cachedConverters_7() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____cachedConverters_7)); }
	inline Dictionary_2_t4012097003 * get__cachedConverters_7() const { return ____cachedConverters_7; }
	inline Dictionary_2_t4012097003 ** get_address_of__cachedConverters_7() { return &____cachedConverters_7; }
	inline void set__cachedConverters_7(Dictionary_2_t4012097003 * value)
	{
		____cachedConverters_7 = value;
		Il2CppCodeGenWriteBarrier((&____cachedConverters_7), value);
	}

	inline static int32_t get_offset_of__cachedProcessors_8() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____cachedProcessors_8)); }
	inline Dictionary_2_t40823354 * get__cachedProcessors_8() const { return ____cachedProcessors_8; }
	inline Dictionary_2_t40823354 ** get_address_of__cachedProcessors_8() { return &____cachedProcessors_8; }
	inline void set__cachedProcessors_8(Dictionary_2_t40823354 * value)
	{
		____cachedProcessors_8 = value;
		Il2CppCodeGenWriteBarrier((&____cachedProcessors_8), value);
	}

	inline static int32_t get_offset_of__availableConverters_9() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____availableConverters_9)); }
	inline List_1_t3412709762 * get__availableConverters_9() const { return ____availableConverters_9; }
	inline List_1_t3412709762 ** get_address_of__availableConverters_9() { return &____availableConverters_9; }
	inline void set__availableConverters_9(List_1_t3412709762 * value)
	{
		____availableConverters_9 = value;
		Il2CppCodeGenWriteBarrier((&____availableConverters_9), value);
	}

	inline static int32_t get_offset_of__availableDirectConverters_10() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____availableDirectConverters_10)); }
	inline Dictionary_2_t1339064699 * get__availableDirectConverters_10() const { return ____availableDirectConverters_10; }
	inline Dictionary_2_t1339064699 ** get_address_of__availableDirectConverters_10() { return &____availableDirectConverters_10; }
	inline void set__availableDirectConverters_10(Dictionary_2_t1339064699 * value)
	{
		____availableDirectConverters_10 = value;
		Il2CppCodeGenWriteBarrier((&____availableDirectConverters_10), value);
	}

	inline static int32_t get_offset_of__processors_11() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____processors_11)); }
	inline List_1_t1891443586 * get__processors_11() const { return ____processors_11; }
	inline List_1_t1891443586 ** get_address_of__processors_11() { return &____processors_11; }
	inline void set__processors_11(List_1_t1891443586 * value)
	{
		____processors_11 = value;
		Il2CppCodeGenWriteBarrier((&____processors_11), value);
	}

	inline static int32_t get_offset_of__references_12() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____references_12)); }
	inline fsCyclicReferenceManager_t2963233308 * get__references_12() const { return ____references_12; }
	inline fsCyclicReferenceManager_t2963233308 ** get_address_of__references_12() { return &____references_12; }
	inline void set__references_12(fsCyclicReferenceManager_t2963233308 * value)
	{
		____references_12 = value;
		Il2CppCodeGenWriteBarrier((&____references_12), value);
	}

	inline static int32_t get_offset_of__lazyReferenceWriter_13() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____lazyReferenceWriter_13)); }
	inline fsLazyCycleDefinitionWriter_t239783049 * get__lazyReferenceWriter_13() const { return ____lazyReferenceWriter_13; }
	inline fsLazyCycleDefinitionWriter_t239783049 ** get_address_of__lazyReferenceWriter_13() { return &____lazyReferenceWriter_13; }
	inline void set__lazyReferenceWriter_13(fsLazyCycleDefinitionWriter_t239783049 * value)
	{
		____lazyReferenceWriter_13 = value;
		Il2CppCodeGenWriteBarrier((&____lazyReferenceWriter_13), value);
	}

	inline static int32_t get_offset_of__abstractTypeRemap_14() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ____abstractTypeRemap_14)); }
	inline Dictionary_2_t633324528 * get__abstractTypeRemap_14() const { return ____abstractTypeRemap_14; }
	inline Dictionary_2_t633324528 ** get_address_of__abstractTypeRemap_14() { return &____abstractTypeRemap_14; }
	inline void set__abstractTypeRemap_14(Dictionary_2_t633324528 * value)
	{
		____abstractTypeRemap_14 = value;
		Il2CppCodeGenWriteBarrier((&____abstractTypeRemap_14), value);
	}

	inline static int32_t get_offset_of_Context_15() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ___Context_15)); }
	inline fsContext_t2261407774 * get_Context_15() const { return ___Context_15; }
	inline fsContext_t2261407774 ** get_address_of_Context_15() { return &___Context_15; }
	inline void set_Context_15(fsContext_t2261407774 * value)
	{
		___Context_15 = value;
		Il2CppCodeGenWriteBarrier((&___Context_15), value);
	}

	inline static int32_t get_offset_of_Config_16() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827, ___Config_16)); }
	inline fsConfig_t14416447 * get_Config_16() const { return ___Config_16; }
	inline fsConfig_t14416447 ** get_address_of_Config_16() { return &___Config_16; }
	inline void set_Config_16(fsConfig_t14416447 * value)
	{
		___Config_16 = value;
		Il2CppCodeGenWriteBarrier((&___Config_16), value);
	}
};

struct fsSerializer_t4093814827_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.String> FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_t412400163 * ____reservedKeywords_0;
	// System.String FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_1;
	// System.String FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_2;
	// System.String FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_3;
	// System.String FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_4;
	// System.String FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_5;

public:
	inline static int32_t get_offset_of__reservedKeywords_0() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ____reservedKeywords_0)); }
	inline HashSet_1_t412400163 * get__reservedKeywords_0() const { return ____reservedKeywords_0; }
	inline HashSet_1_t412400163 ** get_address_of__reservedKeywords_0() { return &____reservedKeywords_0; }
	inline void set__reservedKeywords_0(HashSet_1_t412400163 * value)
	{
		____reservedKeywords_0 = value;
		Il2CppCodeGenWriteBarrier((&____reservedKeywords_0), value);
	}

	inline static int32_t get_offset_of_Key_ObjectReference_1() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ___Key_ObjectReference_1)); }
	inline String_t* get_Key_ObjectReference_1() const { return ___Key_ObjectReference_1; }
	inline String_t** get_address_of_Key_ObjectReference_1() { return &___Key_ObjectReference_1; }
	inline void set_Key_ObjectReference_1(String_t* value)
	{
		___Key_ObjectReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___Key_ObjectReference_1), value);
	}

	inline static int32_t get_offset_of_Key_ObjectDefinition_2() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ___Key_ObjectDefinition_2)); }
	inline String_t* get_Key_ObjectDefinition_2() const { return ___Key_ObjectDefinition_2; }
	inline String_t** get_address_of_Key_ObjectDefinition_2() { return &___Key_ObjectDefinition_2; }
	inline void set_Key_ObjectDefinition_2(String_t* value)
	{
		___Key_ObjectDefinition_2 = value;
		Il2CppCodeGenWriteBarrier((&___Key_ObjectDefinition_2), value);
	}

	inline static int32_t get_offset_of_Key_InstanceType_3() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ___Key_InstanceType_3)); }
	inline String_t* get_Key_InstanceType_3() const { return ___Key_InstanceType_3; }
	inline String_t** get_address_of_Key_InstanceType_3() { return &___Key_InstanceType_3; }
	inline void set_Key_InstanceType_3(String_t* value)
	{
		___Key_InstanceType_3 = value;
		Il2CppCodeGenWriteBarrier((&___Key_InstanceType_3), value);
	}

	inline static int32_t get_offset_of_Key_Version_4() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ___Key_Version_4)); }
	inline String_t* get_Key_Version_4() const { return ___Key_Version_4; }
	inline String_t** get_address_of_Key_Version_4() { return &___Key_Version_4; }
	inline void set_Key_Version_4(String_t* value)
	{
		___Key_Version_4 = value;
		Il2CppCodeGenWriteBarrier((&___Key_Version_4), value);
	}

	inline static int32_t get_offset_of_Key_Content_5() { return static_cast<int32_t>(offsetof(fsSerializer_t4093814827_StaticFields, ___Key_Content_5)); }
	inline String_t* get_Key_Content_5() const { return ___Key_Content_5; }
	inline String_t** get_address_of_Key_Content_5() { return &___Key_Content_5; }
	inline void set_Key_Content_5(String_t* value)
	{
		___Key_Content_5 = value;
		Il2CppCodeGenWriteBarrier((&___Key_Content_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSSERIALIZER_T4093814827_H
#ifndef REQUEST_T1876465969_H
#define REQUEST_T1876465969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request
struct  Request_t1876465969  : public RuntimeObject
{
public:
	// System.Single IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Timeout>k__BackingField
	float ___U3CTimeoutU3Ek__BackingField_0;
	// System.Boolean IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Cancel>k__BackingField
	bool ___U3CCancelU3Ek__BackingField_1;
	// System.Boolean IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Delete>k__BackingField
	bool ___U3CDeleteU3Ek__BackingField_2;
	// System.Boolean IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Post>k__BackingField
	bool ___U3CPostU3Ek__BackingField_3;
	// System.String IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Function>k__BackingField
	String_t* ___U3CFunctionU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Parameters>k__BackingField
	Dictionary_2_t2865362463 * ___U3CParametersU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Headers>k__BackingField
	Dictionary_2_t1632706988 * ___U3CHeadersU3Ek__BackingField_6;
	// System.Byte[] IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Send>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CSendU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,IBM.Watson.DeveloperCloud.Connection.RESTConnector/Form> IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<Forms>k__BackingField
	Dictionary_2_t1213973337 * ___U3CFormsU3Ek__BackingField_8;
	// IBM.Watson.DeveloperCloud.Connection.RESTConnector/ResponseEvent IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<OnResponse>k__BackingField
	ResponseEvent_t3229978485 * ___U3COnResponseU3Ek__BackingField_9;
	// IBM.Watson.DeveloperCloud.Connection.RESTConnector/ProgressEvent IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<OnDownloadProgress>k__BackingField
	ProgressEvent_t1392879013 * ___U3COnDownloadProgressU3Ek__BackingField_10;
	// IBM.Watson.DeveloperCloud.Connection.RESTConnector/ProgressEvent IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<OnUploadProgress>k__BackingField
	ProgressEvent_t1392879013 * ___U3COnUploadProgressU3Ek__BackingField_11;
	// System.String IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::<HttpMethod>k__BackingField
	String_t* ___U3CHttpMethodU3Ek__BackingField_12;
	// System.Boolean IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::disableSslVerification
	bool ___disableSslVerification_13;

public:
	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CTimeoutU3Ek__BackingField_0)); }
	inline float get_U3CTimeoutU3Ek__BackingField_0() const { return ___U3CTimeoutU3Ek__BackingField_0; }
	inline float* get_address_of_U3CTimeoutU3Ek__BackingField_0() { return &___U3CTimeoutU3Ek__BackingField_0; }
	inline void set_U3CTimeoutU3Ek__BackingField_0(float value)
	{
		___U3CTimeoutU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCancelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CCancelU3Ek__BackingField_1)); }
	inline bool get_U3CCancelU3Ek__BackingField_1() const { return ___U3CCancelU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCancelU3Ek__BackingField_1() { return &___U3CCancelU3Ek__BackingField_1; }
	inline void set_U3CCancelU3Ek__BackingField_1(bool value)
	{
		___U3CCancelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CDeleteU3Ek__BackingField_2)); }
	inline bool get_U3CDeleteU3Ek__BackingField_2() const { return ___U3CDeleteU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CDeleteU3Ek__BackingField_2() { return &___U3CDeleteU3Ek__BackingField_2; }
	inline void set_U3CDeleteU3Ek__BackingField_2(bool value)
	{
		___U3CDeleteU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPostU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CPostU3Ek__BackingField_3)); }
	inline bool get_U3CPostU3Ek__BackingField_3() const { return ___U3CPostU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPostU3Ek__BackingField_3() { return &___U3CPostU3Ek__BackingField_3; }
	inline void set_U3CPostU3Ek__BackingField_3(bool value)
	{
		___U3CPostU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFunctionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CFunctionU3Ek__BackingField_4)); }
	inline String_t* get_U3CFunctionU3Ek__BackingField_4() const { return ___U3CFunctionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CFunctionU3Ek__BackingField_4() { return &___U3CFunctionU3Ek__BackingField_4; }
	inline void set_U3CFunctionU3Ek__BackingField_4(String_t* value)
	{
		___U3CFunctionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFunctionU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CParametersU3Ek__BackingField_5)); }
	inline Dictionary_2_t2865362463 * get_U3CParametersU3Ek__BackingField_5() const { return ___U3CParametersU3Ek__BackingField_5; }
	inline Dictionary_2_t2865362463 ** get_address_of_U3CParametersU3Ek__BackingField_5() { return &___U3CParametersU3Ek__BackingField_5; }
	inline void set_U3CParametersU3Ek__BackingField_5(Dictionary_2_t2865362463 * value)
	{
		___U3CParametersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParametersU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CHeadersU3Ek__BackingField_6)); }
	inline Dictionary_2_t1632706988 * get_U3CHeadersU3Ek__BackingField_6() const { return ___U3CHeadersU3Ek__BackingField_6; }
	inline Dictionary_2_t1632706988 ** get_address_of_U3CHeadersU3Ek__BackingField_6() { return &___U3CHeadersU3Ek__BackingField_6; }
	inline void set_U3CHeadersU3Ek__BackingField_6(Dictionary_2_t1632706988 * value)
	{
		___U3CHeadersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHeadersU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CSendU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CSendU3Ek__BackingField_7)); }
	inline ByteU5BU5D_t4116647657* get_U3CSendU3Ek__BackingField_7() const { return ___U3CSendU3Ek__BackingField_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CSendU3Ek__BackingField_7() { return &___U3CSendU3Ek__BackingField_7; }
	inline void set_U3CSendU3Ek__BackingField_7(ByteU5BU5D_t4116647657* value)
	{
		___U3CSendU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSendU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CFormsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CFormsU3Ek__BackingField_8)); }
	inline Dictionary_2_t1213973337 * get_U3CFormsU3Ek__BackingField_8() const { return ___U3CFormsU3Ek__BackingField_8; }
	inline Dictionary_2_t1213973337 ** get_address_of_U3CFormsU3Ek__BackingField_8() { return &___U3CFormsU3Ek__BackingField_8; }
	inline void set_U3CFormsU3Ek__BackingField_8(Dictionary_2_t1213973337 * value)
	{
		___U3CFormsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFormsU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3COnResponseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3COnResponseU3Ek__BackingField_9)); }
	inline ResponseEvent_t3229978485 * get_U3COnResponseU3Ek__BackingField_9() const { return ___U3COnResponseU3Ek__BackingField_9; }
	inline ResponseEvent_t3229978485 ** get_address_of_U3COnResponseU3Ek__BackingField_9() { return &___U3COnResponseU3Ek__BackingField_9; }
	inline void set_U3COnResponseU3Ek__BackingField_9(ResponseEvent_t3229978485 * value)
	{
		___U3COnResponseU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnResponseU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3COnDownloadProgressU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3COnDownloadProgressU3Ek__BackingField_10)); }
	inline ProgressEvent_t1392879013 * get_U3COnDownloadProgressU3Ek__BackingField_10() const { return ___U3COnDownloadProgressU3Ek__BackingField_10; }
	inline ProgressEvent_t1392879013 ** get_address_of_U3COnDownloadProgressU3Ek__BackingField_10() { return &___U3COnDownloadProgressU3Ek__BackingField_10; }
	inline void set_U3COnDownloadProgressU3Ek__BackingField_10(ProgressEvent_t1392879013 * value)
	{
		___U3COnDownloadProgressU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnDownloadProgressU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3COnUploadProgressU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3COnUploadProgressU3Ek__BackingField_11)); }
	inline ProgressEvent_t1392879013 * get_U3COnUploadProgressU3Ek__BackingField_11() const { return ___U3COnUploadProgressU3Ek__BackingField_11; }
	inline ProgressEvent_t1392879013 ** get_address_of_U3COnUploadProgressU3Ek__BackingField_11() { return &___U3COnUploadProgressU3Ek__BackingField_11; }
	inline void set_U3COnUploadProgressU3Ek__BackingField_11(ProgressEvent_t1392879013 * value)
	{
		___U3COnUploadProgressU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnUploadProgressU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CHttpMethodU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___U3CHttpMethodU3Ek__BackingField_12)); }
	inline String_t* get_U3CHttpMethodU3Ek__BackingField_12() const { return ___U3CHttpMethodU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CHttpMethodU3Ek__BackingField_12() { return &___U3CHttpMethodU3Ek__BackingField_12; }
	inline void set_U3CHttpMethodU3Ek__BackingField_12(String_t* value)
	{
		___U3CHttpMethodU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHttpMethodU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_disableSslVerification_13() { return static_cast<int32_t>(offsetof(Request_t1876465969, ___disableSslVerification_13)); }
	inline bool get_disableSslVerification_13() const { return ___disableSslVerification_13; }
	inline bool* get_address_of_disableSslVerification_13() { return &___disableSslVerification_13; }
	inline void set_disableSslVerification_13(bool value)
	{
		___disableSslVerification_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUEST_T1876465969_H
#ifndef CREDENTIAL_T1160400382_H
#define CREDENTIAL_T1160400382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.Credential
struct  Credential_t1160400382  : public RuntimeObject
{
public:
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_0;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_1;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_2;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<WorkspaceId>k__BackingField
	String_t* ___U3CWorkspaceIdU3Ek__BackingField_3;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_4;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<IamApikey>k__BackingField
	String_t* ___U3CIamApikeyU3Ek__BackingField_5;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<IamUrl>k__BackingField
	String_t* ___U3CIamUrlU3Ek__BackingField_6;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Credential::<AssistantId>k__BackingField
	String_t* ___U3CAssistantIdU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CUrlU3Ek__BackingField_0)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_0() const { return ___U3CUrlU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_0() { return &___U3CUrlU3Ek__BackingField_0; }
	inline void set_U3CUrlU3Ek__BackingField_0(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUrlU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CUsernameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CUsernameU3Ek__BackingField_1)); }
	inline String_t* get_U3CUsernameU3Ek__BackingField_1() const { return ___U3CUsernameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUsernameU3Ek__BackingField_1() { return &___U3CUsernameU3Ek__BackingField_1; }
	inline void set_U3CUsernameU3Ek__BackingField_1(String_t* value)
	{
		___U3CUsernameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUsernameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPasswordU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CPasswordU3Ek__BackingField_2)); }
	inline String_t* get_U3CPasswordU3Ek__BackingField_2() const { return ___U3CPasswordU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPasswordU3Ek__BackingField_2() { return &___U3CPasswordU3Ek__BackingField_2; }
	inline void set_U3CPasswordU3Ek__BackingField_2(String_t* value)
	{
		___U3CPasswordU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPasswordU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CWorkspaceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CWorkspaceIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CWorkspaceIdU3Ek__BackingField_3() const { return ___U3CWorkspaceIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CWorkspaceIdU3Ek__BackingField_3() { return &___U3CWorkspaceIdU3Ek__BackingField_3; }
	inline void set_U3CWorkspaceIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CWorkspaceIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWorkspaceIdU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CApiKeyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CApiKeyU3Ek__BackingField_4)); }
	inline String_t* get_U3CApiKeyU3Ek__BackingField_4() const { return ___U3CApiKeyU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CApiKeyU3Ek__BackingField_4() { return &___U3CApiKeyU3Ek__BackingField_4; }
	inline void set_U3CApiKeyU3Ek__BackingField_4(String_t* value)
	{
		___U3CApiKeyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CApiKeyU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CIamApikeyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CIamApikeyU3Ek__BackingField_5)); }
	inline String_t* get_U3CIamApikeyU3Ek__BackingField_5() const { return ___U3CIamApikeyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CIamApikeyU3Ek__BackingField_5() { return &___U3CIamApikeyU3Ek__BackingField_5; }
	inline void set_U3CIamApikeyU3Ek__BackingField_5(String_t* value)
	{
		___U3CIamApikeyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIamApikeyU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CIamUrlU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CIamUrlU3Ek__BackingField_6)); }
	inline String_t* get_U3CIamUrlU3Ek__BackingField_6() const { return ___U3CIamUrlU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CIamUrlU3Ek__BackingField_6() { return &___U3CIamUrlU3Ek__BackingField_6; }
	inline void set_U3CIamUrlU3Ek__BackingField_6(String_t* value)
	{
		___U3CIamUrlU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIamUrlU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CAssistantIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Credential_t1160400382, ___U3CAssistantIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CAssistantIdU3Ek__BackingField_7() const { return ___U3CAssistantIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAssistantIdU3Ek__BackingField_7() { return &___U3CAssistantIdU3Ek__BackingField_7; }
	inline void set_U3CAssistantIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CAssistantIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAssistantIdU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREDENTIAL_T1160400382_H
#ifndef VCAPCREDENTIAL_T1342927885_H
#define VCAPCREDENTIAL_T1342927885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.VcapCredential
struct  VcapCredential_t1342927885  : public RuntimeObject
{
public:
	// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_1;
	// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::<Plan>k__BackingField
	String_t* ___U3CPlanU3Ek__BackingField_2;
	// IBM.Watson.DeveloperCloud.Utilities.Credential IBM.Watson.DeveloperCloud.Utilities.VcapCredential::<Credentials>k__BackingField
	Credential_t1160400382 * ___U3CCredentialsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VcapCredential_t1342927885, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VcapCredential_t1342927885, ___U3CLabelU3Ek__BackingField_1)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_1() const { return ___U3CLabelU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_1() { return &___U3CLabelU3Ek__BackingField_1; }
	inline void set_U3CLabelU3Ek__BackingField_1(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLabelU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPlanU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VcapCredential_t1342927885, ___U3CPlanU3Ek__BackingField_2)); }
	inline String_t* get_U3CPlanU3Ek__BackingField_2() const { return ___U3CPlanU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPlanU3Ek__BackingField_2() { return &___U3CPlanU3Ek__BackingField_2; }
	inline void set_U3CPlanU3Ek__BackingField_2(String_t* value)
	{
		___U3CPlanU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlanU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CCredentialsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VcapCredential_t1342927885, ___U3CCredentialsU3Ek__BackingField_3)); }
	inline Credential_t1160400382 * get_U3CCredentialsU3Ek__BackingField_3() const { return ___U3CCredentialsU3Ek__BackingField_3; }
	inline Credential_t1160400382 ** get_address_of_U3CCredentialsU3Ek__BackingField_3() { return &___U3CCredentialsU3Ek__BackingField_3; }
	inline void set_U3CCredentialsU3Ek__BackingField_3(Credential_t1160400382 * value)
	{
		___U3CCredentialsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCredentialsU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VCAPCREDENTIAL_T1342927885_H
#ifndef VCAPCREDENTIALS_T1310294039_H
#define VCAPCREDENTIALS_T1310294039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.VcapCredentials
struct  VcapCredentials_t1310294039  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>> IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::<VCAP_SERVICES>k__BackingField
	Dictionary_2_t2600258926 * ___U3CVCAP_SERVICESU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVCAP_SERVICESU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VcapCredentials_t1310294039, ___U3CVCAP_SERVICESU3Ek__BackingField_0)); }
	inline Dictionary_2_t2600258926 * get_U3CVCAP_SERVICESU3Ek__BackingField_0() const { return ___U3CVCAP_SERVICESU3Ek__BackingField_0; }
	inline Dictionary_2_t2600258926 ** get_address_of_U3CVCAP_SERVICESU3Ek__BackingField_0() { return &___U3CVCAP_SERVICESU3Ek__BackingField_0; }
	inline void set_U3CVCAP_SERVICESU3Ek__BackingField_0(Dictionary_2_t2600258926 * value)
	{
		___U3CVCAP_SERVICESU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVCAP_SERVICESU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VCAPCREDENTIALS_T1310294039_H
#ifndef WAVEFILE_T441356970_H
#define WAVEFILE_T441356970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.WaveFile
struct  WaveFile_t441356970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAVEFILE_T441356970_H
#ifndef DATA_T4259022272_H
#define DATA_T4259022272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/Data
struct  Data_t4259022272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_T4259022272_H
#ifndef INPUT_T789873443_H
#define INPUT_T789873443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/Input
struct  Input_t789873443  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output> IBM.Watson.DeveloperCloud.Widgets.Widget/Input::_connections
	List_1_t3638128262 * ____connections_0;
	// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<Owner>k__BackingField
	Widget_t1534328253 * ___U3COwnerU3Ek__BackingField_1;
	// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<InputName>k__BackingField
	String_t* ___U3CInputNameU3Ek__BackingField_2;
	// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<DataType>k__BackingField
	Type_t * ___U3CDataTypeU3Ek__BackingField_3;
	// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<AllowMany>k__BackingField
	bool ___U3CAllowManyU3Ek__BackingField_4;
	// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<ReceiverFunction>k__BackingField
	String_t* ___U3CReceiverFunctionU3Ek__BackingField_5;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<DataReceiver>k__BackingField
	OnReceiveData_t3166915800 * ___U3CDataReceiverU3Ek__BackingField_6;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<OnOutputAdded>k__BackingField
	OnOutputAdded_t1994924040 * ___U3COnOutputAddedU3Ek__BackingField_7;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Input::<OnOutputRemoved>k__BackingField
	OnOutputRemoved_t2484111978 * ___U3COnOutputRemovedU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__connections_0() { return static_cast<int32_t>(offsetof(Input_t789873443, ____connections_0)); }
	inline List_1_t3638128262 * get__connections_0() const { return ____connections_0; }
	inline List_1_t3638128262 ** get_address_of__connections_0() { return &____connections_0; }
	inline void set__connections_0(List_1_t3638128262 * value)
	{
		____connections_0 = value;
		Il2CppCodeGenWriteBarrier((&____connections_0), value);
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3COwnerU3Ek__BackingField_1)); }
	inline Widget_t1534328253 * get_U3COwnerU3Ek__BackingField_1() const { return ___U3COwnerU3Ek__BackingField_1; }
	inline Widget_t1534328253 ** get_address_of_U3COwnerU3Ek__BackingField_1() { return &___U3COwnerU3Ek__BackingField_1; }
	inline void set_U3COwnerU3Ek__BackingField_1(Widget_t1534328253 * value)
	{
		___U3COwnerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CInputNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3CInputNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CInputNameU3Ek__BackingField_2() const { return ___U3CInputNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CInputNameU3Ek__BackingField_2() { return &___U3CInputNameU3Ek__BackingField_2; }
	inline void set_U3CInputNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CInputNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CDataTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3CDataTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CDataTypeU3Ek__BackingField_3() const { return ___U3CDataTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CDataTypeU3Ek__BackingField_3() { return &___U3CDataTypeU3Ek__BackingField_3; }
	inline void set_U3CDataTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CDataTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CAllowManyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3CAllowManyU3Ek__BackingField_4)); }
	inline bool get_U3CAllowManyU3Ek__BackingField_4() const { return ___U3CAllowManyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CAllowManyU3Ek__BackingField_4() { return &___U3CAllowManyU3Ek__BackingField_4; }
	inline void set_U3CAllowManyU3Ek__BackingField_4(bool value)
	{
		___U3CAllowManyU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReceiverFunctionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3CReceiverFunctionU3Ek__BackingField_5)); }
	inline String_t* get_U3CReceiverFunctionU3Ek__BackingField_5() const { return ___U3CReceiverFunctionU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CReceiverFunctionU3Ek__BackingField_5() { return &___U3CReceiverFunctionU3Ek__BackingField_5; }
	inline void set_U3CReceiverFunctionU3Ek__BackingField_5(String_t* value)
	{
		___U3CReceiverFunctionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CReceiverFunctionU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CDataReceiverU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3CDataReceiverU3Ek__BackingField_6)); }
	inline OnReceiveData_t3166915800 * get_U3CDataReceiverU3Ek__BackingField_6() const { return ___U3CDataReceiverU3Ek__BackingField_6; }
	inline OnReceiveData_t3166915800 ** get_address_of_U3CDataReceiverU3Ek__BackingField_6() { return &___U3CDataReceiverU3Ek__BackingField_6; }
	inline void set_U3CDataReceiverU3Ek__BackingField_6(OnReceiveData_t3166915800 * value)
	{
		___U3CDataReceiverU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataReceiverU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3COnOutputAddedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3COnOutputAddedU3Ek__BackingField_7)); }
	inline OnOutputAdded_t1994924040 * get_U3COnOutputAddedU3Ek__BackingField_7() const { return ___U3COnOutputAddedU3Ek__BackingField_7; }
	inline OnOutputAdded_t1994924040 ** get_address_of_U3COnOutputAddedU3Ek__BackingField_7() { return &___U3COnOutputAddedU3Ek__BackingField_7; }
	inline void set_U3COnOutputAddedU3Ek__BackingField_7(OnOutputAdded_t1994924040 * value)
	{
		___U3COnOutputAddedU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnOutputAddedU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3COnOutputRemovedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Input_t789873443, ___U3COnOutputRemovedU3Ek__BackingField_8)); }
	inline OnOutputRemoved_t2484111978 * get_U3COnOutputRemovedU3Ek__BackingField_8() const { return ___U3COnOutputRemovedU3Ek__BackingField_8; }
	inline OnOutputRemoved_t2484111978 ** get_address_of_U3COnOutputRemovedU3Ek__BackingField_8() { return &___U3COnOutputRemovedU3Ek__BackingField_8; }
	inline void set_U3COnOutputRemovedU3Ek__BackingField_8(OnOutputRemoved_t2484111978 * value)
	{
		___U3COnOutputRemovedU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnOutputRemovedU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T789873443_H
#ifndef OUTPUT_T2166053520_H
#define OUTPUT_T2166053520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/Output
struct  Output_t2166053520  : public RuntimeObject
{
public:
	// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Output::<Owner>k__BackingField
	Widget_t1534328253 * ___U3COwnerU3Ek__BackingField_0;
	// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Output::<DataType>k__BackingField
	Type_t * ___U3CDataTypeU3Ek__BackingField_1;
	// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::<AllowMany>k__BackingField
	bool ___U3CAllowManyU3Ek__BackingField_2;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Output::<OnInputAdded>k__BackingField
	OnInputAdded_t3329887880 * ___U3COnInputAddedU3Ek__BackingField_3;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Output::<OnInputRemoved>k__BackingField
	OnInputRemoved_t4133684454 * ___U3COnInputRemovedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection> IBM.Watson.DeveloperCloud.Widgets.Widget/Output::_connections
	List_1_t1342236955 * ____connections_5;

public:
	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Output_t2166053520, ___U3COwnerU3Ek__BackingField_0)); }
	inline Widget_t1534328253 * get_U3COwnerU3Ek__BackingField_0() const { return ___U3COwnerU3Ek__BackingField_0; }
	inline Widget_t1534328253 ** get_address_of_U3COwnerU3Ek__BackingField_0() { return &___U3COwnerU3Ek__BackingField_0; }
	inline void set_U3COwnerU3Ek__BackingField_0(Widget_t1534328253 * value)
	{
		___U3COwnerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDataTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Output_t2166053520, ___U3CDataTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CDataTypeU3Ek__BackingField_1() const { return ___U3CDataTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CDataTypeU3Ek__BackingField_1() { return &___U3CDataTypeU3Ek__BackingField_1; }
	inline void set_U3CDataTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CDataTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAllowManyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Output_t2166053520, ___U3CAllowManyU3Ek__BackingField_2)); }
	inline bool get_U3CAllowManyU3Ek__BackingField_2() const { return ___U3CAllowManyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowManyU3Ek__BackingField_2() { return &___U3CAllowManyU3Ek__BackingField_2; }
	inline void set_U3CAllowManyU3Ek__BackingField_2(bool value)
	{
		___U3CAllowManyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COnInputAddedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Output_t2166053520, ___U3COnInputAddedU3Ek__BackingField_3)); }
	inline OnInputAdded_t3329887880 * get_U3COnInputAddedU3Ek__BackingField_3() const { return ___U3COnInputAddedU3Ek__BackingField_3; }
	inline OnInputAdded_t3329887880 ** get_address_of_U3COnInputAddedU3Ek__BackingField_3() { return &___U3COnInputAddedU3Ek__BackingField_3; }
	inline void set_U3COnInputAddedU3Ek__BackingField_3(OnInputAdded_t3329887880 * value)
	{
		___U3COnInputAddedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnInputAddedU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3COnInputRemovedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Output_t2166053520, ___U3COnInputRemovedU3Ek__BackingField_4)); }
	inline OnInputRemoved_t4133684454 * get_U3COnInputRemovedU3Ek__BackingField_4() const { return ___U3COnInputRemovedU3Ek__BackingField_4; }
	inline OnInputRemoved_t4133684454 ** get_address_of_U3COnInputRemovedU3Ek__BackingField_4() { return &___U3COnInputRemovedU3Ek__BackingField_4; }
	inline void set_U3COnInputRemovedU3Ek__BackingField_4(OnInputRemoved_t4133684454 * value)
	{
		___U3COnInputRemovedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnInputRemovedU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of__connections_5() { return static_cast<int32_t>(offsetof(Output_t2166053520, ____connections_5)); }
	inline List_1_t1342236955 * get__connections_5() const { return ____connections_5; }
	inline List_1_t1342236955 ** get_address_of__connections_5() { return &____connections_5; }
	inline void set__connections_5(List_1_t1342236955 * value)
	{
		____connections_5 = value;
		Il2CppCodeGenWriteBarrier((&____connections_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPUT_T2166053520_H
#ifndef CONNECTION_T4165129509_H
#define CONNECTION_T4165129509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection
struct  Connection_t4165129509  : public RuntimeObject
{
public:
	// IBM.Watson.DeveloperCloud.Widgets.Widget/Output IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::_owner
	Output_t2166053520 * ____owner_0;
	// UnityEngine.GameObject IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::_targetObject
	GameObject_t1113636619 * ____targetObject_1;
	// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::_targetConnection
	String_t* ____targetConnection_2;
	// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::_targetInputResolved
	bool ____targetInputResolved_3;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/Input IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::_targetInput
	Input_t789873443 * ____targetInput_4;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(Connection_t4165129509, ____owner_0)); }
	inline Output_t2166053520 * get__owner_0() const { return ____owner_0; }
	inline Output_t2166053520 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(Output_t2166053520 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier((&____owner_0), value);
	}

	inline static int32_t get_offset_of__targetObject_1() { return static_cast<int32_t>(offsetof(Connection_t4165129509, ____targetObject_1)); }
	inline GameObject_t1113636619 * get__targetObject_1() const { return ____targetObject_1; }
	inline GameObject_t1113636619 ** get_address_of__targetObject_1() { return &____targetObject_1; }
	inline void set__targetObject_1(GameObject_t1113636619 * value)
	{
		____targetObject_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetObject_1), value);
	}

	inline static int32_t get_offset_of__targetConnection_2() { return static_cast<int32_t>(offsetof(Connection_t4165129509, ____targetConnection_2)); }
	inline String_t* get__targetConnection_2() const { return ____targetConnection_2; }
	inline String_t** get_address_of__targetConnection_2() { return &____targetConnection_2; }
	inline void set__targetConnection_2(String_t* value)
	{
		____targetConnection_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetConnection_2), value);
	}

	inline static int32_t get_offset_of__targetInputResolved_3() { return static_cast<int32_t>(offsetof(Connection_t4165129509, ____targetInputResolved_3)); }
	inline bool get__targetInputResolved_3() const { return ____targetInputResolved_3; }
	inline bool* get_address_of__targetInputResolved_3() { return &____targetInputResolved_3; }
	inline void set__targetInputResolved_3(bool value)
	{
		____targetInputResolved_3 = value;
	}

	inline static int32_t get_offset_of__targetInput_4() { return static_cast<int32_t>(offsetof(Connection_t4165129509, ____targetInput_4)); }
	inline Input_t789873443 * get__targetInput_4() const { return ____targetInput_4; }
	inline Input_t789873443 ** get_address_of__targetInput_4() { return &____targetInput_4; }
	inline void set__targetInput_4(Input_t789873443 * value)
	{
		____targetInput_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetInput_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTION_T4165129509_H
#ifndef CAPTUREGROUP_T1549177136_H
#define CAPTUREGROUP_T1549177136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup
struct  CaptureGroup_t1549177136  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::<Location>k__BackingField
	List_1_t913674750 * ___U3CLocationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CaptureGroup_t1549177136, ___U3CGroupU3Ek__BackingField_0)); }
	inline String_t* get_U3CGroupU3Ek__BackingField_0() const { return ___U3CGroupU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CGroupU3Ek__BackingField_0() { return &___U3CGroupU3Ek__BackingField_0; }
	inline void set_U3CGroupU3Ek__BackingField_0(String_t* value)
	{
		___U3CGroupU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGroupU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CaptureGroup_t1549177136, ___U3CLocationU3Ek__BackingField_1)); }
	inline List_1_t913674750 * get_U3CLocationU3Ek__BackingField_1() const { return ___U3CLocationU3Ek__BackingField_1; }
	inline List_1_t913674750 ** get_address_of_U3CLocationU3Ek__BackingField_1() { return &___U3CLocationU3Ek__BackingField_1; }
	inline void set_U3CLocationU3Ek__BackingField_1(List_1_t913674750 * value)
	{
		___U3CLocationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocationU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREGROUP_T1549177136_H
#ifndef DIALOGNODEOUTPUTOPTIONSELEMENT_T1707701688_H
#define DIALOGNODEOUTPUTOPTIONSELEMENT_T1707701688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement
struct  DialogNodeOutputOptionsElement_t1707701688  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_0;
	// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::<Value>k__BackingField
	DialogNodeOutputOptionsElementValue_t720329632 * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogNodeOutputOptionsElement_t1707701688, ___U3CLabelU3Ek__BackingField_0)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_0() const { return ___U3CLabelU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_0() { return &___U3CLabelU3Ek__BackingField_0; }
	inline void set_U3CLabelU3Ek__BackingField_0(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLabelU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogNodeOutputOptionsElement_t1707701688, ___U3CValueU3Ek__BackingField_1)); }
	inline DialogNodeOutputOptionsElementValue_t720329632 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline DialogNodeOutputOptionsElementValue_t720329632 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(DialogNodeOutputOptionsElementValue_t720329632 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGNODEOUTPUTOPTIONSELEMENT_T1707701688_H
#ifndef DIALOGNODEOUTPUTOPTIONSELEMENTVALUE_T720329632_H
#define DIALOGNODEOUTPUTOPTIONSELEMENTVALUE_T720329632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue
struct  DialogNodeOutputOptionsElementValue_t720329632  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue::<Input>k__BackingField
	MessageInput_t1231455263 * ___U3CInputU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogNodeOutputOptionsElementValue_t720329632, ___U3CInputU3Ek__BackingField_0)); }
	inline MessageInput_t1231455263 * get_U3CInputU3Ek__BackingField_0() const { return ___U3CInputU3Ek__BackingField_0; }
	inline MessageInput_t1231455263 ** get_address_of_U3CInputU3Ek__BackingField_0() { return &___U3CInputU3Ek__BackingField_0; }
	inline void set_U3CInputU3Ek__BackingField_0(MessageInput_t1231455263 * value)
	{
		___U3CInputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGNODEOUTPUTOPTIONSELEMENTVALUE_T720329632_H
#ifndef DIALOGNODESVISITED_T3733264797_H
#define DIALOGNODESVISITED_T3733264797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited
struct  DialogNodesVisited_t3733264797  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::<DialogNode>k__BackingField
	String_t* ___U3CDialogNodeU3Ek__BackingField_0;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::<Conditions>k__BackingField
	String_t* ___U3CConditionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CDialogNodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogNodesVisited_t3733264797, ___U3CDialogNodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CDialogNodeU3Ek__BackingField_0() const { return ___U3CDialogNodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDialogNodeU3Ek__BackingField_0() { return &___U3CDialogNodeU3Ek__BackingField_0; }
	inline void set_U3CDialogNodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CDialogNodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDialogNodeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogNodesVisited_t3733264797, ___U3CTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_1() const { return ___U3CTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_1() { return &___U3CTitleU3Ek__BackingField_1; }
	inline void set_U3CTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTitleU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CConditionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DialogNodesVisited_t3733264797, ___U3CConditionsU3Ek__BackingField_2)); }
	inline String_t* get_U3CConditionsU3Ek__BackingField_2() const { return ___U3CConditionsU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CConditionsU3Ek__BackingField_2() { return &___U3CConditionsU3Ek__BackingField_2; }
	inline void set_U3CConditionsU3Ek__BackingField_2(String_t* value)
	{
		___U3CConditionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConditionsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGNODESVISITED_T3733264797_H
#ifndef DIALOGSUGGESTION_T2391879174_H
#define DIALOGSUGGESTION_T2391879174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion
struct  DialogSuggestion_t2391879174  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_0;
	// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::<Value>k__BackingField
	DialogSuggestionValue_t3070474203 * ___U3CValueU3Ek__BackingField_1;
	// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::<Output>k__BackingField
	RuntimeObject * ___U3COutputU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogSuggestion_t2391879174, ___U3CLabelU3Ek__BackingField_0)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_0() const { return ___U3CLabelU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_0() { return &___U3CLabelU3Ek__BackingField_0; }
	inline void set_U3CLabelU3Ek__BackingField_0(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLabelU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogSuggestion_t2391879174, ___U3CValueU3Ek__BackingField_1)); }
	inline DialogSuggestionValue_t3070474203 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline DialogSuggestionValue_t3070474203 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(DialogSuggestionValue_t3070474203 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DialogSuggestion_t2391879174, ___U3COutputU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COutputU3Ek__BackingField_2() const { return ___U3COutputU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COutputU3Ek__BackingField_2() { return &___U3COutputU3Ek__BackingField_2; }
	inline void set_U3COutputU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COutputU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutputU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGSUGGESTION_T2391879174_H
#ifndef DIALOGSUGGESTIONVALUE_T3070474203_H
#define DIALOGSUGGESTIONVALUE_T3070474203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue
struct  DialogSuggestionValue_t3070474203  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue::<Input>k__BackingField
	MessageInput_t1231455263 * ___U3CInputU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogSuggestionValue_t3070474203, ___U3CInputU3Ek__BackingField_0)); }
	inline MessageInput_t1231455263 * get_U3CInputU3Ek__BackingField_0() const { return ___U3CInputU3Ek__BackingField_0; }
	inline MessageInput_t1231455263 ** get_address_of_U3CInputU3Ek__BackingField_0() { return &___U3CInputU3Ek__BackingField_0; }
	inline void set_U3CInputU3Ek__BackingField_0(MessageInput_t1231455263 * value)
	{
		___U3CInputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGSUGGESTIONVALUE_T3070474203_H
#ifndef MESSAGECONTEXT_T633623232_H
#define MESSAGECONTEXT_T633623232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext
struct  MessageContext_t633623232  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::<Global>k__BackingField
	MessageContextGlobal_t2065255329 * ___U3CGlobalU3Ek__BackingField_0;
	// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::<Skills>k__BackingField
	RuntimeObject * ___U3CSkillsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CGlobalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageContext_t633623232, ___U3CGlobalU3Ek__BackingField_0)); }
	inline MessageContextGlobal_t2065255329 * get_U3CGlobalU3Ek__BackingField_0() const { return ___U3CGlobalU3Ek__BackingField_0; }
	inline MessageContextGlobal_t2065255329 ** get_address_of_U3CGlobalU3Ek__BackingField_0() { return &___U3CGlobalU3Ek__BackingField_0; }
	inline void set_U3CGlobalU3Ek__BackingField_0(MessageContextGlobal_t2065255329 * value)
	{
		___U3CGlobalU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGlobalU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CSkillsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageContext_t633623232, ___U3CSkillsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CSkillsU3Ek__BackingField_1() const { return ___U3CSkillsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CSkillsU3Ek__BackingField_1() { return &___U3CSkillsU3Ek__BackingField_1; }
	inline void set_U3CSkillsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CSkillsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSkillsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGECONTEXT_T633623232_H
#ifndef MESSAGECONTEXTGLOBAL_T2065255329_H
#define MESSAGECONTEXTGLOBAL_T2065255329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal
struct  MessageContextGlobal_t2065255329  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal::<System>k__BackingField
	MessageContextGlobalSystem_t3823677794 * ___U3CSystemU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageContextGlobal_t2065255329, ___U3CSystemU3Ek__BackingField_0)); }
	inline MessageContextGlobalSystem_t3823677794 * get_U3CSystemU3Ek__BackingField_0() const { return ___U3CSystemU3Ek__BackingField_0; }
	inline MessageContextGlobalSystem_t3823677794 ** get_address_of_U3CSystemU3Ek__BackingField_0() { return &___U3CSystemU3Ek__BackingField_0; }
	inline void set_U3CSystemU3Ek__BackingField_0(MessageContextGlobalSystem_t3823677794 * value)
	{
		___U3CSystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSystemU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGECONTEXTGLOBAL_T2065255329_H
#ifndef MESSAGECONTEXTSKILLS_T562966926_H
#define MESSAGECONTEXTSKILLS_T562966926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextSkills
struct  MessageContextSkills_t562966926  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGECONTEXTSKILLS_T562966926_H
#ifndef MESSAGEOUTPUT_T3260606978_H
#define MESSAGEOUTPUT_T3260606978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput
struct  MessageOutput_t3260606978  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<Generic>k__BackingField
	List_1_t3338007278 * ___U3CGenericU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<Intents>k__BackingField
	List_1_t1777479234 * ___U3CIntentsU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<Entities>k__BackingField
	List_1_t1723740391 * ___U3CEntitiesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<Actions>k__BackingField
	List_1_t1562367690 * ___U3CActionsU3Ek__BackingField_3;
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<Debug>k__BackingField
	MessageOutputDebug_t2595507150 * ___U3CDebugU3Ek__BackingField_4;
	// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::<UserDefined>k__BackingField
	RuntimeObject * ___U3CUserDefinedU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CGenericU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CGenericU3Ek__BackingField_0)); }
	inline List_1_t3338007278 * get_U3CGenericU3Ek__BackingField_0() const { return ___U3CGenericU3Ek__BackingField_0; }
	inline List_1_t3338007278 ** get_address_of_U3CGenericU3Ek__BackingField_0() { return &___U3CGenericU3Ek__BackingField_0; }
	inline void set_U3CGenericU3Ek__BackingField_0(List_1_t3338007278 * value)
	{
		___U3CGenericU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGenericU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIntentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CIntentsU3Ek__BackingField_1)); }
	inline List_1_t1777479234 * get_U3CIntentsU3Ek__BackingField_1() const { return ___U3CIntentsU3Ek__BackingField_1; }
	inline List_1_t1777479234 ** get_address_of_U3CIntentsU3Ek__BackingField_1() { return &___U3CIntentsU3Ek__BackingField_1; }
	inline void set_U3CIntentsU3Ek__BackingField_1(List_1_t1777479234 * value)
	{
		___U3CIntentsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIntentsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CEntitiesU3Ek__BackingField_2)); }
	inline List_1_t1723740391 * get_U3CEntitiesU3Ek__BackingField_2() const { return ___U3CEntitiesU3Ek__BackingField_2; }
	inline List_1_t1723740391 ** get_address_of_U3CEntitiesU3Ek__BackingField_2() { return &___U3CEntitiesU3Ek__BackingField_2; }
	inline void set_U3CEntitiesU3Ek__BackingField_2(List_1_t1723740391 * value)
	{
		___U3CEntitiesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEntitiesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CActionsU3Ek__BackingField_3)); }
	inline List_1_t1562367690 * get_U3CActionsU3Ek__BackingField_3() const { return ___U3CActionsU3Ek__BackingField_3; }
	inline List_1_t1562367690 ** get_address_of_U3CActionsU3Ek__BackingField_3() { return &___U3CActionsU3Ek__BackingField_3; }
	inline void set_U3CActionsU3Ek__BackingField_3(List_1_t1562367690 * value)
	{
		___U3CActionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActionsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDebugU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CDebugU3Ek__BackingField_4)); }
	inline MessageOutputDebug_t2595507150 * get_U3CDebugU3Ek__BackingField_4() const { return ___U3CDebugU3Ek__BackingField_4; }
	inline MessageOutputDebug_t2595507150 ** get_address_of_U3CDebugU3Ek__BackingField_4() { return &___U3CDebugU3Ek__BackingField_4; }
	inline void set_U3CDebugU3Ek__BackingField_4(MessageOutputDebug_t2595507150 * value)
	{
		___U3CDebugU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDebugU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CUserDefinedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MessageOutput_t3260606978, ___U3CUserDefinedU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CUserDefinedU3Ek__BackingField_5() const { return ___U3CUserDefinedU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CUserDefinedU3Ek__BackingField_5() { return &___U3CUserDefinedU3Ek__BackingField_5; }
	inline void set_U3CUserDefinedU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CUserDefinedU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserDefinedU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEOUTPUT_T3260606978_H
#ifndef MESSAGEREQUEST_T177877626_H
#define MESSAGEREQUEST_T177877626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest
struct  MessageRequest_t177877626  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::<Input>k__BackingField
	MessageInput_t1231455263 * ___U3CInputU3Ek__BackingField_0;
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::<Context>k__BackingField
	MessageContext_t633623232 * ___U3CContextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageRequest_t177877626, ___U3CInputU3Ek__BackingField_0)); }
	inline MessageInput_t1231455263 * get_U3CInputU3Ek__BackingField_0() const { return ___U3CInputU3Ek__BackingField_0; }
	inline MessageInput_t1231455263 ** get_address_of_U3CInputU3Ek__BackingField_0() { return &___U3CInputU3Ek__BackingField_0; }
	inline void set_U3CInputU3Ek__BackingField_0(MessageInput_t1231455263 * value)
	{
		___U3CInputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageRequest_t177877626, ___U3CContextU3Ek__BackingField_1)); }
	inline MessageContext_t633623232 * get_U3CContextU3Ek__BackingField_1() const { return ___U3CContextU3Ek__BackingField_1; }
	inline MessageContext_t633623232 ** get_address_of_U3CContextU3Ek__BackingField_1() { return &___U3CContextU3Ek__BackingField_1; }
	inline void set_U3CContextU3Ek__BackingField_1(MessageContext_t633623232 * value)
	{
		___U3CContextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContextU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEREQUEST_T177877626_H
#ifndef MESSAGERESPONSE_T1912396260_H
#define MESSAGERESPONSE_T1912396260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse
struct  MessageResponse_t1912396260  : public RuntimeObject
{
public:
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::<Output>k__BackingField
	MessageOutput_t3260606978 * ___U3COutputU3Ek__BackingField_0;
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::<Context>k__BackingField
	MessageContext_t633623232 * ___U3CContextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageResponse_t1912396260, ___U3COutputU3Ek__BackingField_0)); }
	inline MessageOutput_t3260606978 * get_U3COutputU3Ek__BackingField_0() const { return ___U3COutputU3Ek__BackingField_0; }
	inline MessageOutput_t3260606978 ** get_address_of_U3COutputU3Ek__BackingField_0() { return &___U3COutputU3Ek__BackingField_0; }
	inline void set_U3COutputU3Ek__BackingField_0(MessageOutput_t3260606978 * value)
	{
		___U3COutputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutputU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageResponse_t1912396260, ___U3CContextU3Ek__BackingField_1)); }
	inline MessageContext_t633623232 * get_U3CContextU3Ek__BackingField_1() const { return ___U3CContextU3Ek__BackingField_1; }
	inline MessageContext_t633623232 ** get_address_of_U3CContextU3Ek__BackingField_1() { return &___U3CContextU3Ek__BackingField_1; }
	inline void set_U3CContextU3Ek__BackingField_1(MessageContext_t633623232 * value)
	{
		___U3CContextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContextU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGERESPONSE_T1912396260_H
#ifndef SESSIONRESPONSE_T4186475537_H
#define SESSIONRESPONSE_T4186475537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse
struct  SessionResponse_t4186475537  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SessionResponse_t4186475537, ___U3CSessionIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CSessionIdU3Ek__BackingField_0() const { return ___U3CSessionIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSessionIdU3Ek__BackingField_0() { return &___U3CSessionIdU3Ek__BackingField_0; }
	inline void set_U3CSessionIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CSessionIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionIdU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONRESPONSE_T4186475537_H
#ifndef CREATELANGUAGEMODEL_T1081996541_H
#define CREATELANGUAGEMODEL_T1081996541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel
struct  CreateLanguageModel_t1081996541  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::<BaseModelName>k__BackingField
	String_t* ___U3CBaseModelNameU3Ek__BackingField_17;
	// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::<Dialect>k__BackingField
	String_t* ___U3CDialectU3Ek__BackingField_19;
	// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CBaseModelNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CreateLanguageModel_t1081996541, ___U3CBaseModelNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CBaseModelNameU3Ek__BackingField_17() const { return ___U3CBaseModelNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CBaseModelNameU3Ek__BackingField_17() { return &___U3CBaseModelNameU3Ek__BackingField_17; }
	inline void set_U3CBaseModelNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CBaseModelNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseModelNameU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(CreateLanguageModel_t1081996541, ___U3CNameU3Ek__BackingField_18)); }
	inline String_t* get_U3CNameU3Ek__BackingField_18() const { return ___U3CNameU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_18() { return &___U3CNameU3Ek__BackingField_18; }
	inline void set_U3CNameU3Ek__BackingField_18(String_t* value)
	{
		___U3CNameU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_U3CDialectU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(CreateLanguageModel_t1081996541, ___U3CDialectU3Ek__BackingField_19)); }
	inline String_t* get_U3CDialectU3Ek__BackingField_19() const { return ___U3CDialectU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CDialectU3Ek__BackingField_19() { return &___U3CDialectU3Ek__BackingField_19; }
	inline void set_U3CDialectU3Ek__BackingField_19(String_t* value)
	{
		___U3CDialectU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDialectU3Ek__BackingField_19), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(CreateLanguageModel_t1081996541, ___U3CDescriptionU3Ek__BackingField_20)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_20() const { return ___U3CDescriptionU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_20() { return &___U3CDescriptionU3Ek__BackingField_20; }
	inline void set_U3CDescriptionU3Ek__BackingField_20(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATELANGUAGEMODEL_T1081996541_H
#ifndef JSON_T27535148_H
#define JSON_T27535148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json
struct  Json_t27535148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T27535148_H
#ifndef PARSER_T3021620180_H
#define PARSER_T3021620180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser
struct  Parser_t3021620180  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3021620180, ___json_1)); }
	inline StringReader_t3465604688 * get_json_1() const { return ___json_1; }
	inline StringReader_t3465604688 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3465604688 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3021620180_H
#ifndef SERIALIZER_T1539586466_H
#define SERIALIZER_T1539586466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Serializer
struct  Serializer_t1539586466  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1539586466, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T1539586466_H
#ifndef RUNUNITTEST_T4092700481_H
#define RUNUNITTEST_T4092700481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RunUnitTest
struct  RunUnitTest_t4092700481  : public RuntimeObject
{
public:

public:
};

struct RunUnitTest_t4092700481_StaticFields
{
public:
	// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete RunUnitTest::<>f__mg$cache0
	OnTestsComplete_t1076207448 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(RunUnitTest_t4092700481_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline OnTestsComplete_t1076207448 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline OnTestsComplete_t1076207448 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(OnTestsComplete_t1076207448 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNUNITTEST_T4092700481_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T192029586_H
#define DICTIONARY_2_T192029586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,FullSerializer.fsData>
struct  Dictionary_2_t192029586  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	fsDataU5BU5D_t3161635166* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___valueSlots_7)); }
	inline fsDataU5BU5D_t3161635166* get_valueSlots_7() const { return ___valueSlots_7; }
	inline fsDataU5BU5D_t3161635166** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(fsDataU5BU5D_t3161635166* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t192029586_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2012046882 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t192029586_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2012046882 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2012046882 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2012046882 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T192029586_H
#ifndef DICTIONARY_2_T2600258926_H
#define DICTIONARY_2_T2600258926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>
struct  Dictionary_2_t2600258926  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t946290834* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___valueSlots_7)); }
	inline List_1U5BU5D_t946290834* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t946290834** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t946290834* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2600258926_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4091669846 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2600258926_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4091669846 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4091669846 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4091669846 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2600258926_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef LIST_1_T2815002627_H
#define LIST_1_T2815002627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>
struct  List_1_t2815002627  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VcapCredentialU5BU5D_t2045673760* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2815002627, ____items_1)); }
	inline VcapCredentialU5BU5D_t2045673760* get__items_1() const { return ____items_1; }
	inline VcapCredentialU5BU5D_t2045673760** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VcapCredentialU5BU5D_t2045673760* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2815002627, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2815002627, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2815002627_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	VcapCredentialU5BU5D_t2045673760* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2815002627_StaticFields, ___EmptyArray_4)); }
	inline VcapCredentialU5BU5D_t2045673760* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline VcapCredentialU5BU5D_t2045673760** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(VcapCredentialU5BU5D_t2045673760* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2815002627_H
#ifndef LIST_1_T1342236955_H
#define LIST_1_T1342236955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>
struct  List_1_t1342236955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionU5BU5D_t3727671464* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1342236955, ____items_1)); }
	inline ConnectionU5BU5D_t3727671464* get__items_1() const { return ____items_1; }
	inline ConnectionU5BU5D_t3727671464** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionU5BU5D_t3727671464* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1342236955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1342236955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1342236955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ConnectionU5BU5D_t3727671464* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1342236955_StaticFields, ___EmptyArray_4)); }
	inline ConnectionU5BU5D_t3727671464* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ConnectionU5BU5D_t3727671464** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ConnectionU5BU5D_t3727671464* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1342236955_H
#ifndef LIST_1_T3638128262_H
#define LIST_1_T3638128262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>
struct  List_1_t3638128262  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OutputU5BU5D_t4065696049* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3638128262, ____items_1)); }
	inline OutputU5BU5D_t4065696049* get__items_1() const { return ____items_1; }
	inline OutputU5BU5D_t4065696049** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OutputU5BU5D_t4065696049* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3638128262, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3638128262, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3638128262_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OutputU5BU5D_t4065696049* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3638128262_StaticFields, ___EmptyArray_4)); }
	inline OutputU5BU5D_t4065696049* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OutputU5BU5D_t4065696049** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OutputU5BU5D_t4065696049* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3638128262_H
#ifndef LIST_1_T3021251878_H
#define LIST_1_T3021251878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup>
struct  List_1_t3021251878  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CaptureGroupU5BU5D_t3469644817* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3021251878, ____items_1)); }
	inline CaptureGroupU5BU5D_t3469644817* get__items_1() const { return ____items_1; }
	inline CaptureGroupU5BU5D_t3469644817** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CaptureGroupU5BU5D_t3469644817* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3021251878, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3021251878, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3021251878_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CaptureGroupU5BU5D_t3469644817* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3021251878_StaticFields, ___EmptyArray_4)); }
	inline CaptureGroupU5BU5D_t3469644817* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CaptureGroupU5BU5D_t3469644817** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CaptureGroupU5BU5D_t3469644817* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3021251878_H
#ifndef LIST_1_T562731238_H
#define LIST_1_T562731238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage>
struct  List_1_t562731238  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogLogMessageU5BU5D_t544577873* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t562731238, ____items_1)); }
	inline DialogLogMessageU5BU5D_t544577873* get__items_1() const { return ____items_1; }
	inline DialogLogMessageU5BU5D_t544577873** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogLogMessageU5BU5D_t544577873* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t562731238, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t562731238, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t562731238_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogLogMessageU5BU5D_t544577873* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t562731238_StaticFields, ___EmptyArray_4)); }
	inline DialogLogMessageU5BU5D_t544577873* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogLogMessageU5BU5D_t544577873** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogLogMessageU5BU5D_t544577873* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T562731238_H
#ifndef LIST_1_T1562367690_H
#define LIST_1_T1562367690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction>
struct  List_1_t1562367690  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogNodeActionU5BU5D_t3941847901* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1562367690, ____items_1)); }
	inline DialogNodeActionU5BU5D_t3941847901* get__items_1() const { return ____items_1; }
	inline DialogNodeActionU5BU5D_t3941847901** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogNodeActionU5BU5D_t3941847901* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1562367690, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1562367690, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1562367690_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogNodeActionU5BU5D_t3941847901* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1562367690_StaticFields, ___EmptyArray_4)); }
	inline DialogNodeActionU5BU5D_t3941847901* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogNodeActionU5BU5D_t3941847901** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogNodeActionU5BU5D_t3941847901* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1562367690_H
#ifndef LIST_1_T3179776430_H
#define LIST_1_T3179776430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement>
struct  List_1_t3179776430  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogNodeOutputOptionsElementU5BU5D_t2777031785* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3179776430, ____items_1)); }
	inline DialogNodeOutputOptionsElementU5BU5D_t2777031785* get__items_1() const { return ____items_1; }
	inline DialogNodeOutputOptionsElementU5BU5D_t2777031785** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogNodeOutputOptionsElementU5BU5D_t2777031785* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3179776430, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3179776430, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3179776430_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogNodeOutputOptionsElementU5BU5D_t2777031785* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3179776430_StaticFields, ___EmptyArray_4)); }
	inline DialogNodeOutputOptionsElementU5BU5D_t2777031785* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogNodeOutputOptionsElementU5BU5D_t2777031785** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogNodeOutputOptionsElementU5BU5D_t2777031785* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3179776430_H
#ifndef LIST_1_T910372243_H
#define LIST_1_T910372243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited>
struct  List_1_t910372243  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogNodesVisitedU5BU5D_t3311682384* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t910372243, ____items_1)); }
	inline DialogNodesVisitedU5BU5D_t3311682384* get__items_1() const { return ____items_1; }
	inline DialogNodesVisitedU5BU5D_t3311682384** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogNodesVisitedU5BU5D_t3311682384* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t910372243, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t910372243, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t910372243_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogNodesVisitedU5BU5D_t3311682384* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t910372243_StaticFields, ___EmptyArray_4)); }
	inline DialogNodesVisitedU5BU5D_t3311682384* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogNodesVisitedU5BU5D_t3311682384** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogNodesVisitedU5BU5D_t3311682384* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T910372243_H
#ifndef LIST_1_T3338007278_H
#define LIST_1_T3338007278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric>
struct  List_1_t3338007278  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogRuntimeResponseGenericU5BU5D_t1578413609* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3338007278, ____items_1)); }
	inline DialogRuntimeResponseGenericU5BU5D_t1578413609* get__items_1() const { return ____items_1; }
	inline DialogRuntimeResponseGenericU5BU5D_t1578413609** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogRuntimeResponseGenericU5BU5D_t1578413609* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3338007278, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3338007278, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3338007278_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogRuntimeResponseGenericU5BU5D_t1578413609* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3338007278_StaticFields, ___EmptyArray_4)); }
	inline DialogRuntimeResponseGenericU5BU5D_t1578413609* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogRuntimeResponseGenericU5BU5D_t1578413609** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogRuntimeResponseGenericU5BU5D_t1578413609* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3338007278_H
#ifndef LIST_1_T3863953916_H
#define LIST_1_T3863953916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion>
struct  List_1_t3863953916  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DialogSuggestionU5BU5D_t1865296675* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3863953916, ____items_1)); }
	inline DialogSuggestionU5BU5D_t1865296675* get__items_1() const { return ____items_1; }
	inline DialogSuggestionU5BU5D_t1865296675** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DialogSuggestionU5BU5D_t1865296675* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3863953916, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3863953916, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3863953916_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DialogSuggestionU5BU5D_t1865296675* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3863953916_StaticFields, ___EmptyArray_4)); }
	inline DialogSuggestionU5BU5D_t1865296675* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DialogSuggestionU5BU5D_t1865296675** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DialogSuggestionU5BU5D_t1865296675* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3863953916_H
#ifndef LIST_1_T1723740391_H
#define LIST_1_T1723740391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity>
struct  List_1_t1723740391  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RuntimeEntityU5BU5D_t2260943916* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1723740391, ____items_1)); }
	inline RuntimeEntityU5BU5D_t2260943916* get__items_1() const { return ____items_1; }
	inline RuntimeEntityU5BU5D_t2260943916** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RuntimeEntityU5BU5D_t2260943916* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1723740391, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1723740391, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1723740391_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RuntimeEntityU5BU5D_t2260943916* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1723740391_StaticFields, ___EmptyArray_4)); }
	inline RuntimeEntityU5BU5D_t2260943916* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RuntimeEntityU5BU5D_t2260943916** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RuntimeEntityU5BU5D_t2260943916* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1723740391_H
#ifndef LIST_1_T1777479234_H
#define LIST_1_T1777479234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent>
struct  List_1_t1777479234  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RuntimeIntentU5BU5D_t2305726213* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1777479234, ____items_1)); }
	inline RuntimeIntentU5BU5D_t2305726213* get__items_1() const { return ____items_1; }
	inline RuntimeIntentU5BU5D_t2305726213** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RuntimeIntentU5BU5D_t2305726213* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1777479234, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1777479234, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1777479234_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RuntimeIntentU5BU5D_t2305726213* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1777479234_StaticFields, ___EmptyArray_4)); }
	inline RuntimeIntentU5BU5D_t2305726213* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RuntimeIntentU5BU5D_t2305726213** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RuntimeIntentU5BU5D_t2305726213* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1777479234_H
#ifndef LIST_1_T913674750_H
#define LIST_1_T913674750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int64>
struct  List_1_t913674750  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_t2559172825* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____items_1)); }
	inline Int64U5BU5D_t2559172825* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_t2559172825** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_t2559172825* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t913674750_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int64U5BU5D_t2559172825* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t913674750_StaticFields, ___EmptyArray_4)); }
	inline Int64U5BU5D_t2559172825* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int64U5BU5D_t2559172825** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int64U5BU5D_t2559172825* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T913674750_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef BINARYREADER_T2428077293_H
#define BINARYREADER_T2428077293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2428077293  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1273022909 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1523322056 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t2204182725 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_stream_0)); }
	inline Stream_t1273022909 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t1273022909 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t1273022909 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_encoding_1)); }
	inline Encoding_t1523322056 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t1523322056 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_1), value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___decoder_3)); }
	inline Decoder_t2204182725 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t2204182725 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t2204182725 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_3), value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___charBuffer_4)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T2428077293_H
#ifndef BINARYWRITER_T3992595042_H
#define BINARYWRITER_T3992595042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3992595042  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1273022909 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t4116647657* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___OutStream_1)); }
	inline Stream_t1273022909 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t1273022909 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t1273022909 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___stringBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t3992595042_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3992595042 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3992595042 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3992595042 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3992595042 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T3992595042_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef FSCONVERTER_T1940635020_H
#define FSCONVERTER_T1940635020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsConverter
struct  fsConverter_t1940635020  : public fsBaseConverter_t1567749939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSCONVERTER_T1940635020_H
#ifndef FSRESULT_T591339677_H
#define FSRESULT_T591339677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsResult
struct  fsResult_t591339677 
{
public:
	// System.Boolean FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> FullSerializer.fsResult::_messages
	List_1_t3319525431 * ____messages_2;

public:
	inline static int32_t get_offset_of__success_1() { return static_cast<int32_t>(offsetof(fsResult_t591339677, ____success_1)); }
	inline bool get__success_1() const { return ____success_1; }
	inline bool* get_address_of__success_1() { return &____success_1; }
	inline void set__success_1(bool value)
	{
		____success_1 = value;
	}

	inline static int32_t get_offset_of__messages_2() { return static_cast<int32_t>(offsetof(fsResult_t591339677, ____messages_2)); }
	inline List_1_t3319525431 * get__messages_2() const { return ____messages_2; }
	inline List_1_t3319525431 ** get_address_of__messages_2() { return &____messages_2; }
	inline void set__messages_2(List_1_t3319525431 * value)
	{
		____messages_2 = value;
		Il2CppCodeGenWriteBarrier((&____messages_2), value);
	}
};

struct fsResult_t591339677_StaticFields
{
public:
	// System.String[] FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t1281789340* ___EmptyStringArray_0;
	// FullSerializer.fsResult FullSerializer.fsResult::Success
	fsResult_t591339677  ___Success_3;

public:
	inline static int32_t get_offset_of_EmptyStringArray_0() { return static_cast<int32_t>(offsetof(fsResult_t591339677_StaticFields, ___EmptyStringArray_0)); }
	inline StringU5BU5D_t1281789340* get_EmptyStringArray_0() const { return ___EmptyStringArray_0; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyStringArray_0() { return &___EmptyStringArray_0; }
	inline void set_EmptyStringArray_0(StringU5BU5D_t1281789340* value)
	{
		___EmptyStringArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyStringArray_0), value);
	}

	inline static int32_t get_offset_of_Success_3() { return static_cast<int32_t>(offsetof(fsResult_t591339677_StaticFields, ___Success_3)); }
	inline fsResult_t591339677  get_Success_3() const { return ___Success_3; }
	inline fsResult_t591339677 * get_address_of_Success_3() { return &___Success_3; }
	inline void set_Success_3(fsResult_t591339677  value)
	{
		___Success_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FullSerializer.fsResult
struct fsResult_t591339677_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_t3319525431 * ____messages_2;
};
// Native definition for COM marshalling of FullSerializer.fsResult
struct fsResult_t591339677_marshaled_com
{
	int32_t ____success_1;
	List_1_t3319525431 * ____messages_2;
};
#endif // FSRESULT_T591339677_H
#ifndef GETWATSONTOKENREQ_T3567185861_H
#define GETWATSONTOKENREQ_T3567185861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq
struct  GetWatsonTokenReq_t3567185861  : public Request_t1876465969
{
public:
	// System.String IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::<Data>k__BackingField
	String_t* ___U3CDataU3Ek__BackingField_14;
	// IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::<Callback>k__BackingField
	OnGetWatsonToken_t1424218558 * ___U3CCallbackU3Ek__BackingField_15;
	// System.String IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::<TokenName>k__BackingField
	String_t* ___U3CTokenNameU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GetWatsonTokenReq_t3567185861, ___U3CDataU3Ek__BackingField_14)); }
	inline String_t* get_U3CDataU3Ek__BackingField_14() const { return ___U3CDataU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CDataU3Ek__BackingField_14() { return &___U3CDataU3Ek__BackingField_14; }
	inline void set_U3CDataU3Ek__BackingField_14(String_t* value)
	{
		___U3CDataU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GetWatsonTokenReq_t3567185861, ___U3CCallbackU3Ek__BackingField_15)); }
	inline OnGetWatsonToken_t1424218558 * get_U3CCallbackU3Ek__BackingField_15() const { return ___U3CCallbackU3Ek__BackingField_15; }
	inline OnGetWatsonToken_t1424218558 ** get_address_of_U3CCallbackU3Ek__BackingField_15() { return &___U3CCallbackU3Ek__BackingField_15; }
	inline void set_U3CCallbackU3Ek__BackingField_15(OnGetWatsonToken_t1424218558 * value)
	{
		___U3CCallbackU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallbackU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CTokenNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GetWatsonTokenReq_t3567185861, ___U3CTokenNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CTokenNameU3Ek__BackingField_16() const { return ___U3CTokenNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CTokenNameU3Ek__BackingField_16() { return &___U3CTokenNameU3Ek__BackingField_16; }
	inline void set_U3CTokenNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CTokenNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenNameU3Ek__BackingField_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETWATSONTOKENREQ_T3567185861_H
#ifndef WATSONEXCEPTION_T4135824359_H
#define WATSONEXCEPTION_T4135824359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.WatsonException
struct  WatsonException_t4135824359  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATSONEXCEPTION_T4135824359_H
#ifndef IFF_CHUNK_T1040744086_H
#define IFF_CHUNK_T1040744086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK
#pragma pack(push, tp, 1)
struct  IFF_CHUNK_t1040744086 
{
public:
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK::id
	uint32_t ___id_0;
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK::length
	uint32_t ___length_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(IFF_CHUNK_t1040744086, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(IFF_CHUNK_t1040744086, ___length_1)); }
	inline uint32_t get_length_1() const { return ___length_1; }
	inline uint32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(uint32_t value)
	{
		___length_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFF_CHUNK_T1040744086_H
#ifndef IFF_FORM_CHUNK_T403332380_H
#define IFF_FORM_CHUNK_T403332380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK
#pragma pack(push, tp, 1)
struct  IFF_FORM_CHUNK_t403332380 
{
public:
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK::form_id
	uint32_t ___form_id_0;
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK::form_length
	uint32_t ___form_length_1;
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK::id
	uint32_t ___id_2;

public:
	inline static int32_t get_offset_of_form_id_0() { return static_cast<int32_t>(offsetof(IFF_FORM_CHUNK_t403332380, ___form_id_0)); }
	inline uint32_t get_form_id_0() const { return ___form_id_0; }
	inline uint32_t* get_address_of_form_id_0() { return &___form_id_0; }
	inline void set_form_id_0(uint32_t value)
	{
		___form_id_0 = value;
	}

	inline static int32_t get_offset_of_form_length_1() { return static_cast<int32_t>(offsetof(IFF_FORM_CHUNK_t403332380, ___form_length_1)); }
	inline uint32_t get_form_length_1() const { return ___form_length_1; }
	inline uint32_t* get_address_of_form_length_1() { return &___form_length_1; }
	inline void set_form_length_1(uint32_t value)
	{
		___form_length_1 = value;
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(IFF_FORM_CHUNK_t403332380, ___id_2)); }
	inline uint32_t get_id_2() const { return ___id_2; }
	inline uint32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(uint32_t value)
	{
		___id_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFF_FORM_CHUNK_T403332380_H
#ifndef WAV_PCM_T124248382_H
#define WAV_PCM_T124248382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM
#pragma pack(push, tp, 1)
struct  WAV_PCM_t124248382 
{
public:
	// System.UInt16 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::format_tag
	uint16_t ___format_tag_0;
	// System.UInt16 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::channels
	uint16_t ___channels_1;
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::sample_rate
	uint32_t ___sample_rate_2;
	// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::average_data_rate
	uint32_t ___average_data_rate_3;
	// System.UInt16 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::alignment
	uint16_t ___alignment_4;
	// System.UInt16 IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM::bits_per_sample
	uint16_t ___bits_per_sample_5;

public:
	inline static int32_t get_offset_of_format_tag_0() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___format_tag_0)); }
	inline uint16_t get_format_tag_0() const { return ___format_tag_0; }
	inline uint16_t* get_address_of_format_tag_0() { return &___format_tag_0; }
	inline void set_format_tag_0(uint16_t value)
	{
		___format_tag_0 = value;
	}

	inline static int32_t get_offset_of_channels_1() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___channels_1)); }
	inline uint16_t get_channels_1() const { return ___channels_1; }
	inline uint16_t* get_address_of_channels_1() { return &___channels_1; }
	inline void set_channels_1(uint16_t value)
	{
		___channels_1 = value;
	}

	inline static int32_t get_offset_of_sample_rate_2() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___sample_rate_2)); }
	inline uint32_t get_sample_rate_2() const { return ___sample_rate_2; }
	inline uint32_t* get_address_of_sample_rate_2() { return &___sample_rate_2; }
	inline void set_sample_rate_2(uint32_t value)
	{
		___sample_rate_2 = value;
	}

	inline static int32_t get_offset_of_average_data_rate_3() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___average_data_rate_3)); }
	inline uint32_t get_average_data_rate_3() const { return ___average_data_rate_3; }
	inline uint32_t* get_address_of_average_data_rate_3() { return &___average_data_rate_3; }
	inline void set_average_data_rate_3(uint32_t value)
	{
		___average_data_rate_3 = value;
	}

	inline static int32_t get_offset_of_alignment_4() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___alignment_4)); }
	inline uint16_t get_alignment_4() const { return ___alignment_4; }
	inline uint16_t* get_address_of_alignment_4() { return &___alignment_4; }
	inline void set_alignment_4(uint16_t value)
	{
		___alignment_4 = value;
	}

	inline static int32_t get_offset_of_bits_per_sample_5() { return static_cast<int32_t>(offsetof(WAV_PCM_t124248382, ___bits_per_sample_5)); }
	inline uint16_t get_bits_per_sample_5() const { return ___bits_per_sample_5; }
	inline uint16_t* get_address_of_bits_per_sample_5() { return &___bits_per_sample_5; }
	inline void set_bits_per_sample_5(uint16_t value)
	{
		___bits_per_sample_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAV_PCM_T124248382_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T702963797_H
#define KEYVALUEPAIR_2_T702963797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>
struct  KeyValuePair_2_t702963797 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t2815002627 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t702963797, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t702963797, ___value_1)); }
	inline List_1_t2815002627 * get_value_1() const { return ___value_1; }
	inline List_1_t2815002627 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t2815002627 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T702963797_H
#ifndef ENUMERATOR_T409279208_H
#define ENUMERATOR_T409279208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>
struct  Enumerator_t409279208 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2815002627 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VcapCredential_t1342927885 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t409279208, ___l_0)); }
	inline List_1_t2815002627 * get_l_0() const { return ___l_0; }
	inline List_1_t2815002627 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2815002627 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t409279208, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t409279208, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t409279208, ___current_3)); }
	inline VcapCredential_t1342927885 * get_current_3() const { return ___current_3; }
	inline VcapCredential_t1342927885 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VcapCredential_t1342927885 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T409279208_H
#ifndef ENUMERATOR_T3231480832_H
#define ENUMERATOR_T3231480832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>
struct  Enumerator_t3231480832 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1342236955 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Connection_t4165129509 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3231480832, ___l_0)); }
	inline List_1_t1342236955 * get_l_0() const { return ___l_0; }
	inline List_1_t1342236955 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1342236955 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3231480832, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3231480832, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3231480832, ___current_3)); }
	inline Connection_t4165129509 * get_current_3() const { return ___current_3; }
	inline Connection_t4165129509 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Connection_t4165129509 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3231480832_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef NULLABLE_1_T2317227445_H
#define NULLABLE_1_T2317227445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t2317227445 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2317227445, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2317227445_H
#ifndef NULLABLE_1_T1164162090_H
#define NULLABLE_1_T1164162090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int64>
struct  Nullable_1_t1164162090 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1164162090_H
#ifndef NULLABLE_1_T3119828856_H
#define NULLABLE_1_T3119828856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t3119828856 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3119828856, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3119828856_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef LEVELENUM_T2193352400_H
#define LEVELENUM_T2193352400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum
struct  LevelEnum_t2193352400 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LevelEnum_t2193352400, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELENUM_T2193352400_H
#ifndef ACTIONTYPEENUM_T1014784438_H
#define ACTIONTYPEENUM_T1014784438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum
struct  ActionTypeEnum_t1014784438 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActionTypeEnum_t1014784438, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONTYPEENUM_T1014784438_H
#ifndef PREFERENCEENUM_T1901039961_H
#define PREFERENCEENUM_T1901039961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum
struct  PreferenceEnum_t1901039961 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PreferenceEnum_t1901039961, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERENCEENUM_T1901039961_H
#ifndef RESPONSETYPEENUM_T842595164_H
#define RESPONSETYPEENUM_T842595164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum
struct  ResponseTypeEnum_t842595164 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResponseTypeEnum_t842595164, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSETYPEENUM_T842595164_H
#ifndef MESSAGECONTEXTGLOBALSYSTEM_T3823677794_H
#define MESSAGECONTEXTGLOBALSYSTEM_T3823677794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem
struct  MessageContextGlobalSystem_t3823677794  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::<Timezone>k__BackingField
	String_t* ___U3CTimezoneU3Ek__BackingField_0;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_1;
	// System.Nullable`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::<TurnCount>k__BackingField
	Nullable_1_t1164162090  ___U3CTurnCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTimezoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageContextGlobalSystem_t3823677794, ___U3CTimezoneU3Ek__BackingField_0)); }
	inline String_t* get_U3CTimezoneU3Ek__BackingField_0() const { return ___U3CTimezoneU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTimezoneU3Ek__BackingField_0() { return &___U3CTimezoneU3Ek__BackingField_0; }
	inline void set_U3CTimezoneU3Ek__BackingField_0(String_t* value)
	{
		___U3CTimezoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTimezoneU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageContextGlobalSystem_t3823677794, ___U3CUserIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_1() const { return ___U3CUserIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_1() { return &___U3CUserIdU3Ek__BackingField_1; }
	inline void set_U3CUserIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTurnCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageContextGlobalSystem_t3823677794, ___U3CTurnCountU3Ek__BackingField_2)); }
	inline Nullable_1_t1164162090  get_U3CTurnCountU3Ek__BackingField_2() const { return ___U3CTurnCountU3Ek__BackingField_2; }
	inline Nullable_1_t1164162090 * get_address_of_U3CTurnCountU3Ek__BackingField_2() { return &___U3CTurnCountU3Ek__BackingField_2; }
	inline void set_U3CTurnCountU3Ek__BackingField_2(Nullable_1_t1164162090  value)
	{
		___U3CTurnCountU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGECONTEXTGLOBALSYSTEM_T3823677794_H
#ifndef MESSAGETYPEENUM_T3492995292_H
#define MESSAGETYPEENUM_T3492995292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum
struct  MessageTypeEnum_t3492995292 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MessageTypeEnum_t3492995292, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPEENUM_T3492995292_H
#ifndef MESSAGEINPUTCONVERTER_T1644137348_H
#define MESSAGEINPUTCONVERTER_T1644137348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter
struct  MessageInputConverter_t1644137348  : public fsConverter_t1940635020
{
public:
	// FullSerializer.fsSerializer IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::_serializer
	fsSerializer_t4093814827 * ____serializer_2;

public:
	inline static int32_t get_offset_of__serializer_2() { return static_cast<int32_t>(offsetof(MessageInputConverter_t1644137348, ____serializer_2)); }
	inline fsSerializer_t4093814827 * get__serializer_2() const { return ____serializer_2; }
	inline fsSerializer_t4093814827 ** get_address_of__serializer_2() { return &____serializer_2; }
	inline void set__serializer_2(fsSerializer_t4093814827 * value)
	{
		____serializer_2 = value;
		Il2CppCodeGenWriteBarrier((&____serializer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEINPUTCONVERTER_T1644137348_H
#ifndef MESSAGEINPUTOPTIONS_T321510208_H
#define MESSAGEINPUTOPTIONS_T321510208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions
struct  MessageInputOptions_t321510208  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::<Debug>k__BackingField
	Nullable_1_t1819850047  ___U3CDebugU3Ek__BackingField_0;
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::<Restart>k__BackingField
	Nullable_1_t1819850047  ___U3CRestartU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::<AlternateIntents>k__BackingField
	Nullable_1_t1819850047  ___U3CAlternateIntentsU3Ek__BackingField_2;
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::<ReturnContext>k__BackingField
	Nullable_1_t1819850047  ___U3CReturnContextU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDebugU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageInputOptions_t321510208, ___U3CDebugU3Ek__BackingField_0)); }
	inline Nullable_1_t1819850047  get_U3CDebugU3Ek__BackingField_0() const { return ___U3CDebugU3Ek__BackingField_0; }
	inline Nullable_1_t1819850047 * get_address_of_U3CDebugU3Ek__BackingField_0() { return &___U3CDebugU3Ek__BackingField_0; }
	inline void set_U3CDebugU3Ek__BackingField_0(Nullable_1_t1819850047  value)
	{
		___U3CDebugU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRestartU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageInputOptions_t321510208, ___U3CRestartU3Ek__BackingField_1)); }
	inline Nullable_1_t1819850047  get_U3CRestartU3Ek__BackingField_1() const { return ___U3CRestartU3Ek__BackingField_1; }
	inline Nullable_1_t1819850047 * get_address_of_U3CRestartU3Ek__BackingField_1() { return &___U3CRestartU3Ek__BackingField_1; }
	inline void set_U3CRestartU3Ek__BackingField_1(Nullable_1_t1819850047  value)
	{
		___U3CRestartU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAlternateIntentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageInputOptions_t321510208, ___U3CAlternateIntentsU3Ek__BackingField_2)); }
	inline Nullable_1_t1819850047  get_U3CAlternateIntentsU3Ek__BackingField_2() const { return ___U3CAlternateIntentsU3Ek__BackingField_2; }
	inline Nullable_1_t1819850047 * get_address_of_U3CAlternateIntentsU3Ek__BackingField_2() { return &___U3CAlternateIntentsU3Ek__BackingField_2; }
	inline void set_U3CAlternateIntentsU3Ek__BackingField_2(Nullable_1_t1819850047  value)
	{
		___U3CAlternateIntentsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CReturnContextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MessageInputOptions_t321510208, ___U3CReturnContextU3Ek__BackingField_3)); }
	inline Nullable_1_t1819850047  get_U3CReturnContextU3Ek__BackingField_3() const { return ___U3CReturnContextU3Ek__BackingField_3; }
	inline Nullable_1_t1819850047 * get_address_of_U3CReturnContextU3Ek__BackingField_3() { return &___U3CReturnContextU3Ek__BackingField_3; }
	inline void set_U3CReturnContextU3Ek__BackingField_3(Nullable_1_t1819850047  value)
	{
		___U3CReturnContextU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEINPUTOPTIONS_T321510208_H
#ifndef MESSAGEINPUTOPTIONSCONVERTER_T740336248_H
#define MESSAGEINPUTOPTIONSCONVERTER_T740336248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter
struct  MessageInputOptionsConverter_t740336248  : public fsConverter_t1940635020
{
public:
	// FullSerializer.fsSerializer IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter::_serializer
	fsSerializer_t4093814827 * ____serializer_2;

public:
	inline static int32_t get_offset_of__serializer_2() { return static_cast<int32_t>(offsetof(MessageInputOptionsConverter_t740336248, ____serializer_2)); }
	inline fsSerializer_t4093814827 * get__serializer_2() const { return ____serializer_2; }
	inline fsSerializer_t4093814827 ** get_address_of__serializer_2() { return &____serializer_2; }
	inline void set__serializer_2(fsSerializer_t4093814827 * value)
	{
		____serializer_2 = value;
		Il2CppCodeGenWriteBarrier((&____serializer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEINPUTOPTIONSCONVERTER_T740336248_H
#ifndef BRANCHEXITEDREASONENUM_T988107024_H
#define BRANCHEXITEDREASONENUM_T988107024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum
struct  BranchExitedReasonEnum_t988107024 
{
public:
	// System.Int32 IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BranchExitedReasonEnum_t988107024, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRANCHEXITEDREASONENUM_T988107024_H
#ifndef RUNTIMEENTITY_T251665649_H
#define RUNTIMEENTITY_T251665649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity
struct  RuntimeEntity_t251665649  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Entity>k__BackingField
	String_t* ___U3CEntityU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Location>k__BackingField
	List_1_t913674750 * ___U3CLocationU3Ek__BackingField_1;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_2;
	// System.Nullable`1<System.Single> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Confidence>k__BackingField
	Nullable_1_t3119828856  ___U3CConfidenceU3Ek__BackingField_3;
	// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Metadata>k__BackingField
	RuntimeObject * ___U3CMetadataU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::<Groups>k__BackingField
	List_1_t3021251878 * ___U3CGroupsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEntityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CEntityU3Ek__BackingField_0)); }
	inline String_t* get_U3CEntityU3Ek__BackingField_0() const { return ___U3CEntityU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CEntityU3Ek__BackingField_0() { return &___U3CEntityU3Ek__BackingField_0; }
	inline void set_U3CEntityU3Ek__BackingField_0(String_t* value)
	{
		___U3CEntityU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEntityU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CLocationU3Ek__BackingField_1)); }
	inline List_1_t913674750 * get_U3CLocationU3Ek__BackingField_1() const { return ___U3CLocationU3Ek__BackingField_1; }
	inline List_1_t913674750 ** get_address_of_U3CLocationU3Ek__BackingField_1() { return &___U3CLocationU3Ek__BackingField_1; }
	inline void set_U3CLocationU3Ek__BackingField_1(List_1_t913674750 * value)
	{
		___U3CLocationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocationU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CValueU3Ek__BackingField_2)); }
	inline String_t* get_U3CValueU3Ek__BackingField_2() const { return ___U3CValueU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_2() { return &___U3CValueU3Ek__BackingField_2; }
	inline void set_U3CValueU3Ek__BackingField_2(String_t* value)
	{
		___U3CValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CConfidenceU3Ek__BackingField_3)); }
	inline Nullable_1_t3119828856  get_U3CConfidenceU3Ek__BackingField_3() const { return ___U3CConfidenceU3Ek__BackingField_3; }
	inline Nullable_1_t3119828856 * get_address_of_U3CConfidenceU3Ek__BackingField_3() { return &___U3CConfidenceU3Ek__BackingField_3; }
	inline void set_U3CConfidenceU3Ek__BackingField_3(Nullable_1_t3119828856  value)
	{
		___U3CConfidenceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CMetadataU3Ek__BackingField_4() const { return ___U3CMetadataU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CMetadataU3Ek__BackingField_4() { return &___U3CMetadataU3Ek__BackingField_4; }
	inline void set_U3CMetadataU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetadataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CGroupsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RuntimeEntity_t251665649, ___U3CGroupsU3Ek__BackingField_5)); }
	inline List_1_t3021251878 * get_U3CGroupsU3Ek__BackingField_5() const { return ___U3CGroupsU3Ek__BackingField_5; }
	inline List_1_t3021251878 ** get_address_of_U3CGroupsU3Ek__BackingField_5() { return &___U3CGroupsU3Ek__BackingField_5; }
	inline void set_U3CGroupsU3Ek__BackingField_5(List_1_t3021251878 * value)
	{
		___U3CGroupsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGroupsU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENTITY_T251665649_H
#ifndef RUNTIMEINTENT_T305404492_H
#define RUNTIMEINTENT_T305404492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent
struct  RuntimeIntent_t305404492  : public RuntimeObject
{
public:
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Nullable`1<System.Double> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::<Confidence>k__BackingField
	Nullable_1_t2317227445  ___U3CConfidenceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIntentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeIntent_t305404492, ___U3CIntentU3Ek__BackingField_0)); }
	inline String_t* get_U3CIntentU3Ek__BackingField_0() const { return ___U3CIntentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIntentU3Ek__BackingField_0() { return &___U3CIntentU3Ek__BackingField_0; }
	inline void set_U3CIntentU3Ek__BackingField_0(String_t* value)
	{
		___U3CIntentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIntentU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeIntent_t305404492, ___U3CConfidenceU3Ek__BackingField_1)); }
	inline Nullable_1_t2317227445  get_U3CConfidenceU3Ek__BackingField_1() const { return ___U3CConfidenceU3Ek__BackingField_1; }
	inline Nullable_1_t2317227445 * get_address_of_U3CConfidenceU3Ek__BackingField_1() { return &___U3CConfidenceU3Ek__BackingField_1; }
	inline void set_U3CConfidenceU3Ek__BackingField_1(Nullable_1_t2317227445  value)
	{
		___U3CConfidenceU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEINTENT_T305404492_H
#ifndef TOKEN_T3126366611_H
#define TOKEN_T3126366611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t3126366611 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t3126366611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T3126366611_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T259474405_H
#define ENUMERATOR_T259474405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>
struct  Enumerator_t259474405 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2600258926 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t702963797  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t259474405, ___dictionary_0)); }
	inline Dictionary_2_t2600258926 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2600258926 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2600258926 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t259474405, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t259474405, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t259474405, ___current_3)); }
	inline KeyValuePair_2_t702963797  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t702963797 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t702963797  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T259474405_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T1441174344_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef NULLABLE_1_T3915914482_H
#define NULLABLE_1_T3915914482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum>
struct  Nullable_1_t3915914482 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3915914482, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3915914482, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3915914482_H
#ifndef NULLABLE_1_T2737346520_H
#define NULLABLE_1_T2737346520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum>
struct  Nullable_1_t2737346520 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2737346520, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2737346520, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2737346520_H
#ifndef NULLABLE_1_T3623602043_H
#define NULLABLE_1_T3623602043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum>
struct  Nullable_1_t3623602043 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3623602043, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3623602043, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3623602043_H
#ifndef NULLABLE_1_T2565157246_H
#define NULLABLE_1_T2565157246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum>
struct  Nullable_1_t2565157246 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2565157246, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2565157246, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2565157246_H
#ifndef NULLABLE_1_T920590078_H
#define NULLABLE_1_T920590078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>
struct  Nullable_1_t920590078 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t920590078, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t920590078, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T920590078_H
#ifndef NULLABLE_1_T2710669106_H
#define NULLABLE_1_T2710669106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum>
struct  Nullable_1_t2710669106 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2710669106, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2710669106, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2710669106_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef ONTESTSCOMPLETE_T1076207448_H
#define ONTESTSCOMPLETE_T1076207448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete
struct  OnTestsComplete_t1076207448  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTESTSCOMPLETE_T1076207448_H
#ifndef AUTHENTICATIONTOKEN_T2650554029_H
#define AUTHENTICATIONTOKEN_T2650554029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken
struct  AuthenticationToken_t2650554029  : public RuntimeObject
{
public:
	// System.String IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_0;
	// System.DateTime IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken::<Created>k__BackingField
	DateTime_t3738529785  ___U3CCreatedU3Ek__BackingField_1;
	// System.String IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken::<ServiceName>k__BackingField
	String_t* ___U3CServiceNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationToken_t2650554029, ___U3CTokenU3Ek__BackingField_0)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCreatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationToken_t2650554029, ___U3CCreatedU3Ek__BackingField_1)); }
	inline DateTime_t3738529785  get_U3CCreatedU3Ek__BackingField_1() const { return ___U3CCreatedU3Ek__BackingField_1; }
	inline DateTime_t3738529785 * get_address_of_U3CCreatedU3Ek__BackingField_1() { return &___U3CCreatedU3Ek__BackingField_1; }
	inline void set_U3CCreatedU3Ek__BackingField_1(DateTime_t3738529785  value)
	{
		___U3CCreatedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CServiceNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationToken_t2650554029, ___U3CServiceNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CServiceNameU3Ek__BackingField_2() const { return ___U3CServiceNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CServiceNameU3Ek__BackingField_2() { return &___U3CServiceNameU3Ek__BackingField_2; }
	inline void set_U3CServiceNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CServiceNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServiceNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONTOKEN_T2650554029_H
#ifndef ONGETWATSONTOKEN_T1424218558_H
#define ONGETWATSONTOKEN_T1424218558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken
struct  OnGetWatsonToken_t1424218558  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONGETWATSONTOKEN_T1424218558_H
#ifndef ONINPUTADDED_T3329887880_H
#define ONINPUTADDED_T3329887880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded
struct  OnInputAdded_t3329887880  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONINPUTADDED_T3329887880_H
#ifndef ONINPUTREMOVED_T4133684454_H
#define ONINPUTREMOVED_T4133684454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved
struct  OnInputRemoved_t4133684454  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONINPUTREMOVED_T4133684454_H
#ifndef ONOUTPUTADDED_T1994924040_H
#define ONOUTPUTADDED_T1994924040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded
struct  OnOutputAdded_t1994924040  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOUTPUTADDED_T1994924040_H
#ifndef ONOUTPUTREMOVED_T2484111978_H
#define ONOUTPUTREMOVED_T2484111978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved
struct  OnOutputRemoved_t2484111978  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOUTPUTREMOVED_T2484111978_H
#ifndef ONRECEIVEDATA_T3166915800_H
#define ONRECEIVEDATA_T3166915800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData
struct  OnReceiveData_t3166915800  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONRECEIVEDATA_T3166915800_H
#ifndef DIALOGLOGMESSAGE_T3385623792_H
#define DIALOGLOGMESSAGE_T3385623792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage
struct  DialogLogMessage_t3385623792  : public RuntimeObject
{
public:
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::<Level>k__BackingField
	Nullable_1_t3915914482  ___U3CLevelU3Ek__BackingField_0;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLevelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogLogMessage_t3385623792, ___U3CLevelU3Ek__BackingField_0)); }
	inline Nullable_1_t3915914482  get_U3CLevelU3Ek__BackingField_0() const { return ___U3CLevelU3Ek__BackingField_0; }
	inline Nullable_1_t3915914482 * get_address_of_U3CLevelU3Ek__BackingField_0() { return &___U3CLevelU3Ek__BackingField_0; }
	inline void set_U3CLevelU3Ek__BackingField_0(Nullable_1_t3915914482  value)
	{
		___U3CLevelU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogLogMessage_t3385623792, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGLOGMESSAGE_T3385623792_H
#ifndef DIALOGNODEACTION_T90292948_H
#define DIALOGNODEACTION_T90292948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction
struct  DialogNodeAction_t90292948  : public RuntimeObject
{
public:
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::<ActionType>k__BackingField
	Nullable_1_t2737346520  ___U3CActionTypeU3Ek__BackingField_0;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::<Parameters>k__BackingField
	RuntimeObject * ___U3CParametersU3Ek__BackingField_2;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::<ResultVariable>k__BackingField
	String_t* ___U3CResultVariableU3Ek__BackingField_3;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::<Credentials>k__BackingField
	String_t* ___U3CCredentialsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CActionTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogNodeAction_t90292948, ___U3CActionTypeU3Ek__BackingField_0)); }
	inline Nullable_1_t2737346520  get_U3CActionTypeU3Ek__BackingField_0() const { return ___U3CActionTypeU3Ek__BackingField_0; }
	inline Nullable_1_t2737346520 * get_address_of_U3CActionTypeU3Ek__BackingField_0() { return &___U3CActionTypeU3Ek__BackingField_0; }
	inline void set_U3CActionTypeU3Ek__BackingField_0(Nullable_1_t2737346520  value)
	{
		___U3CActionTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogNodeAction_t90292948, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DialogNodeAction_t90292948, ___U3CParametersU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CParametersU3Ek__BackingField_2() const { return ___U3CParametersU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CParametersU3Ek__BackingField_2() { return &___U3CParametersU3Ek__BackingField_2; }
	inline void set_U3CParametersU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CParametersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParametersU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CResultVariableU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DialogNodeAction_t90292948, ___U3CResultVariableU3Ek__BackingField_3)); }
	inline String_t* get_U3CResultVariableU3Ek__BackingField_3() const { return ___U3CResultVariableU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResultVariableU3Ek__BackingField_3() { return &___U3CResultVariableU3Ek__BackingField_3; }
	inline void set_U3CResultVariableU3Ek__BackingField_3(String_t* value)
	{
		___U3CResultVariableU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultVariableU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CCredentialsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DialogNodeAction_t90292948, ___U3CCredentialsU3Ek__BackingField_4)); }
	inline String_t* get_U3CCredentialsU3Ek__BackingField_4() const { return ___U3CCredentialsU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCredentialsU3Ek__BackingField_4() { return &___U3CCredentialsU3Ek__BackingField_4; }
	inline void set_U3CCredentialsU3Ek__BackingField_4(String_t* value)
	{
		___U3CCredentialsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCredentialsU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGNODEACTION_T90292948_H
#ifndef DIALOGRUNTIMERESPONSEGENERIC_T1865932536_H
#define DIALOGRUNTIMERESPONSEGENERIC_T1865932536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric
struct  DialogRuntimeResponseGeneric_t1865932536  : public RuntimeObject
{
public:
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<ResponseType>k__BackingField
	Nullable_1_t2565157246  ___U3CResponseTypeU3Ek__BackingField_0;
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Preference>k__BackingField
	Nullable_1_t3623602043  ___U3CPreferenceU3Ek__BackingField_1;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Nullable`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Time>k__BackingField
	Nullable_1_t1164162090  ___U3CTimeU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Typing>k__BackingField
	Nullable_1_t1819850047  ___U3CTypingU3Ek__BackingField_4;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Source>k__BackingField
	String_t* ___U3CSourceU3Ek__BackingField_5;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_6;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Options>k__BackingField
	List_1_t3179776430 * ___U3COptionsU3Ek__BackingField_8;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<MessageToHumanAgent>k__BackingField
	String_t* ___U3CMessageToHumanAgentU3Ek__BackingField_9;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Topic>k__BackingField
	String_t* ___U3CTopicU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::<Suggestions>k__BackingField
	List_1_t3863953916 * ___U3CSuggestionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CResponseTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CResponseTypeU3Ek__BackingField_0)); }
	inline Nullable_1_t2565157246  get_U3CResponseTypeU3Ek__BackingField_0() const { return ___U3CResponseTypeU3Ek__BackingField_0; }
	inline Nullable_1_t2565157246 * get_address_of_U3CResponseTypeU3Ek__BackingField_0() { return &___U3CResponseTypeU3Ek__BackingField_0; }
	inline void set_U3CResponseTypeU3Ek__BackingField_0(Nullable_1_t2565157246  value)
	{
		___U3CResponseTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPreferenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CPreferenceU3Ek__BackingField_1)); }
	inline Nullable_1_t3623602043  get_U3CPreferenceU3Ek__BackingField_1() const { return ___U3CPreferenceU3Ek__BackingField_1; }
	inline Nullable_1_t3623602043 * get_address_of_U3CPreferenceU3Ek__BackingField_1() { return &___U3CPreferenceU3Ek__BackingField_1; }
	inline void set_U3CPreferenceU3Ek__BackingField_1(Nullable_1_t3623602043  value)
	{
		___U3CPreferenceU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CTimeU3Ek__BackingField_3)); }
	inline Nullable_1_t1164162090  get_U3CTimeU3Ek__BackingField_3() const { return ___U3CTimeU3Ek__BackingField_3; }
	inline Nullable_1_t1164162090 * get_address_of_U3CTimeU3Ek__BackingField_3() { return &___U3CTimeU3Ek__BackingField_3; }
	inline void set_U3CTimeU3Ek__BackingField_3(Nullable_1_t1164162090  value)
	{
		___U3CTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTypingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CTypingU3Ek__BackingField_4)); }
	inline Nullable_1_t1819850047  get_U3CTypingU3Ek__BackingField_4() const { return ___U3CTypingU3Ek__BackingField_4; }
	inline Nullable_1_t1819850047 * get_address_of_U3CTypingU3Ek__BackingField_4() { return &___U3CTypingU3Ek__BackingField_4; }
	inline void set_U3CTypingU3Ek__BackingField_4(Nullable_1_t1819850047  value)
	{
		___U3CTypingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CSourceU3Ek__BackingField_5)); }
	inline String_t* get_U3CSourceU3Ek__BackingField_5() const { return ___U3CSourceU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CSourceU3Ek__BackingField_5() { return &___U3CSourceU3Ek__BackingField_5; }
	inline void set_U3CSourceU3Ek__BackingField_5(String_t* value)
	{
		___U3CSourceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CTitleU3Ek__BackingField_6)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_6() const { return ___U3CTitleU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_6() { return &___U3CTitleU3Ek__BackingField_6; }
	inline void set_U3CTitleU3Ek__BackingField_6(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTitleU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CDescriptionU3Ek__BackingField_7)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_7() const { return ___U3CDescriptionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_7() { return &___U3CDescriptionU3Ek__BackingField_7; }
	inline void set_U3CDescriptionU3Ek__BackingField_7(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3COptionsU3Ek__BackingField_8)); }
	inline List_1_t3179776430 * get_U3COptionsU3Ek__BackingField_8() const { return ___U3COptionsU3Ek__BackingField_8; }
	inline List_1_t3179776430 ** get_address_of_U3COptionsU3Ek__BackingField_8() { return &___U3COptionsU3Ek__BackingField_8; }
	inline void set_U3COptionsU3Ek__BackingField_8(List_1_t3179776430 * value)
	{
		___U3COptionsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COptionsU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CMessageToHumanAgentU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CMessageToHumanAgentU3Ek__BackingField_9)); }
	inline String_t* get_U3CMessageToHumanAgentU3Ek__BackingField_9() const { return ___U3CMessageToHumanAgentU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CMessageToHumanAgentU3Ek__BackingField_9() { return &___U3CMessageToHumanAgentU3Ek__BackingField_9; }
	inline void set_U3CMessageToHumanAgentU3Ek__BackingField_9(String_t* value)
	{
		___U3CMessageToHumanAgentU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageToHumanAgentU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CTopicU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CTopicU3Ek__BackingField_10)); }
	inline String_t* get_U3CTopicU3Ek__BackingField_10() const { return ___U3CTopicU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CTopicU3Ek__BackingField_10() { return &___U3CTopicU3Ek__BackingField_10; }
	inline void set_U3CTopicU3Ek__BackingField_10(String_t* value)
	{
		___U3CTopicU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTopicU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CSuggestionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(DialogRuntimeResponseGeneric_t1865932536, ___U3CSuggestionsU3Ek__BackingField_11)); }
	inline List_1_t3863953916 * get_U3CSuggestionsU3Ek__BackingField_11() const { return ___U3CSuggestionsU3Ek__BackingField_11; }
	inline List_1_t3863953916 ** get_address_of_U3CSuggestionsU3Ek__BackingField_11() { return &___U3CSuggestionsU3Ek__BackingField_11; }
	inline void set_U3CSuggestionsU3Ek__BackingField_11(List_1_t3863953916 * value)
	{
		___U3CSuggestionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSuggestionsU3Ek__BackingField_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGRUNTIMERESPONSEGENERIC_T1865932536_H
#ifndef MESSAGEINPUT_T1231455263_H
#define MESSAGEINPUT_T1231455263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput
struct  MessageInput_t1231455263  : public RuntimeObject
{
public:
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<MessageType>k__BackingField
	Nullable_1_t920590078  ___U3CMessageTypeU3Ek__BackingField_0;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<Options>k__BackingField
	MessageInputOptions_t321510208 * ___U3COptionsU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<Intents>k__BackingField
	List_1_t1777479234 * ___U3CIntentsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<Entities>k__BackingField
	List_1_t1723740391 * ___U3CEntitiesU3Ek__BackingField_4;
	// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::<SuggestionId>k__BackingField
	String_t* ___U3CSuggestionIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMessageTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3CMessageTypeU3Ek__BackingField_0)); }
	inline Nullable_1_t920590078  get_U3CMessageTypeU3Ek__BackingField_0() const { return ___U3CMessageTypeU3Ek__BackingField_0; }
	inline Nullable_1_t920590078 * get_address_of_U3CMessageTypeU3Ek__BackingField_0() { return &___U3CMessageTypeU3Ek__BackingField_0; }
	inline void set_U3CMessageTypeU3Ek__BackingField_0(Nullable_1_t920590078  value)
	{
		___U3CMessageTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3COptionsU3Ek__BackingField_2)); }
	inline MessageInputOptions_t321510208 * get_U3COptionsU3Ek__BackingField_2() const { return ___U3COptionsU3Ek__BackingField_2; }
	inline MessageInputOptions_t321510208 ** get_address_of_U3COptionsU3Ek__BackingField_2() { return &___U3COptionsU3Ek__BackingField_2; }
	inline void set_U3COptionsU3Ek__BackingField_2(MessageInputOptions_t321510208 * value)
	{
		___U3COptionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COptionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CIntentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3CIntentsU3Ek__BackingField_3)); }
	inline List_1_t1777479234 * get_U3CIntentsU3Ek__BackingField_3() const { return ___U3CIntentsU3Ek__BackingField_3; }
	inline List_1_t1777479234 ** get_address_of_U3CIntentsU3Ek__BackingField_3() { return &___U3CIntentsU3Ek__BackingField_3; }
	inline void set_U3CIntentsU3Ek__BackingField_3(List_1_t1777479234 * value)
	{
		___U3CIntentsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIntentsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3CEntitiesU3Ek__BackingField_4)); }
	inline List_1_t1723740391 * get_U3CEntitiesU3Ek__BackingField_4() const { return ___U3CEntitiesU3Ek__BackingField_4; }
	inline List_1_t1723740391 ** get_address_of_U3CEntitiesU3Ek__BackingField_4() { return &___U3CEntitiesU3Ek__BackingField_4; }
	inline void set_U3CEntitiesU3Ek__BackingField_4(List_1_t1723740391 * value)
	{
		___U3CEntitiesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEntitiesU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CSuggestionIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MessageInput_t1231455263, ___U3CSuggestionIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CSuggestionIdU3Ek__BackingField_5() const { return ___U3CSuggestionIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CSuggestionIdU3Ek__BackingField_5() { return &___U3CSuggestionIdU3Ek__BackingField_5; }
	inline void set_U3CSuggestionIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CSuggestionIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSuggestionIdU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEINPUT_T1231455263_H
#ifndef MESSAGEOUTPUTDEBUG_T2595507150_H
#define MESSAGEOUTPUTDEBUG_T2595507150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug
struct  MessageOutputDebug_t2595507150  : public RuntimeObject
{
public:
	// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::<BranchExitedReason>k__BackingField
	Nullable_1_t2710669106  ___U3CBranchExitedReasonU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::<NodesVisited>k__BackingField
	List_1_t910372243 * ___U3CNodesVisitedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::<LogMessages>k__BackingField
	List_1_t562731238 * ___U3CLogMessagesU3Ek__BackingField_2;
	// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::<BranchExited>k__BackingField
	Nullable_1_t1819850047  ___U3CBranchExitedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBranchExitedReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageOutputDebug_t2595507150, ___U3CBranchExitedReasonU3Ek__BackingField_0)); }
	inline Nullable_1_t2710669106  get_U3CBranchExitedReasonU3Ek__BackingField_0() const { return ___U3CBranchExitedReasonU3Ek__BackingField_0; }
	inline Nullable_1_t2710669106 * get_address_of_U3CBranchExitedReasonU3Ek__BackingField_0() { return &___U3CBranchExitedReasonU3Ek__BackingField_0; }
	inline void set_U3CBranchExitedReasonU3Ek__BackingField_0(Nullable_1_t2710669106  value)
	{
		___U3CBranchExitedReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNodesVisitedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageOutputDebug_t2595507150, ___U3CNodesVisitedU3Ek__BackingField_1)); }
	inline List_1_t910372243 * get_U3CNodesVisitedU3Ek__BackingField_1() const { return ___U3CNodesVisitedU3Ek__BackingField_1; }
	inline List_1_t910372243 ** get_address_of_U3CNodesVisitedU3Ek__BackingField_1() { return &___U3CNodesVisitedU3Ek__BackingField_1; }
	inline void set_U3CNodesVisitedU3Ek__BackingField_1(List_1_t910372243 * value)
	{
		___U3CNodesVisitedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNodesVisitedU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CLogMessagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageOutputDebug_t2595507150, ___U3CLogMessagesU3Ek__BackingField_2)); }
	inline List_1_t562731238 * get_U3CLogMessagesU3Ek__BackingField_2() const { return ___U3CLogMessagesU3Ek__BackingField_2; }
	inline List_1_t562731238 ** get_address_of_U3CLogMessagesU3Ek__BackingField_2() { return &___U3CLogMessagesU3Ek__BackingField_2; }
	inline void set_U3CLogMessagesU3Ek__BackingField_2(List_1_t562731238 * value)
	{
		___U3CLogMessagesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLogMessagesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBranchExitedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MessageOutputDebug_t2595507150, ___U3CBranchExitedU3Ek__BackingField_3)); }
	inline Nullable_1_t1819850047  get_U3CBranchExitedU3Ek__BackingField_3() const { return ___U3CBranchExitedU3Ek__BackingField_3; }
	inline Nullable_1_t1819850047 * get_address_of_U3CBranchExitedU3Ek__BackingField_3() { return &___U3CBranchExitedU3Ek__BackingField_3; }
	inline void set_U3CBranchExitedU3Ek__BackingField_3(Nullable_1_t1819850047  value)
	{
		___U3CBranchExitedU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEOUTPUTDEBUG_T2595507150_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UNITTESTMANAGER_T2624635688_H
#define UNITTESTMANAGER_T2624635688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Editor.UnitTestManager
struct  UnitTestManager_t2624635688  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 IBM.Watson.DeveloperCloud.Editor.UnitTestManager::<TestsFailed>k__BackingField
	int32_t ___U3CTestsFailedU3Ek__BackingField_5;
	// System.Int32 IBM.Watson.DeveloperCloud.Editor.UnitTestManager::<TestsComplete>k__BackingField
	int32_t ___U3CTestsCompleteU3Ek__BackingField_6;
	// System.Boolean IBM.Watson.DeveloperCloud.Editor.UnitTestManager::<QuitOnTestsComplete>k__BackingField
	bool ___U3CQuitOnTestsCompleteU3Ek__BackingField_7;
	// IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete IBM.Watson.DeveloperCloud.Editor.UnitTestManager::<OnTestCompleteCallback>k__BackingField
	OnTestsComplete_t1076207448 * ___U3COnTestCompleteCallbackU3Ek__BackingField_8;
	// System.String IBM.Watson.DeveloperCloud.Editor.UnitTestManager::_projectNameToTest
	String_t* ____projectNameToTest_9;
	// System.Collections.Generic.Queue`1<System.Type> IBM.Watson.DeveloperCloud.Editor.UnitTestManager::_queuedTests
	Queue_1_t2330204254 * ____queuedTests_11;
	// System.Type[] IBM.Watson.DeveloperCloud.Editor.UnitTestManager::_testsAvailable
	TypeU5BU5D_t3940880105* ____testsAvailable_12;
	// IBM.Watson.DeveloperCloud.UnitTests.UnitTest IBM.Watson.DeveloperCloud.Editor.UnitTestManager::_activeTest
	UnitTest_t4208175170 * ____activeTest_13;

public:
	inline static int32_t get_offset_of_U3CTestsFailedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ___U3CTestsFailedU3Ek__BackingField_5)); }
	inline int32_t get_U3CTestsFailedU3Ek__BackingField_5() const { return ___U3CTestsFailedU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTestsFailedU3Ek__BackingField_5() { return &___U3CTestsFailedU3Ek__BackingField_5; }
	inline void set_U3CTestsFailedU3Ek__BackingField_5(int32_t value)
	{
		___U3CTestsFailedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTestsCompleteU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ___U3CTestsCompleteU3Ek__BackingField_6)); }
	inline int32_t get_U3CTestsCompleteU3Ek__BackingField_6() const { return ___U3CTestsCompleteU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTestsCompleteU3Ek__BackingField_6() { return &___U3CTestsCompleteU3Ek__BackingField_6; }
	inline void set_U3CTestsCompleteU3Ek__BackingField_6(int32_t value)
	{
		___U3CTestsCompleteU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CQuitOnTestsCompleteU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ___U3CQuitOnTestsCompleteU3Ek__BackingField_7)); }
	inline bool get_U3CQuitOnTestsCompleteU3Ek__BackingField_7() const { return ___U3CQuitOnTestsCompleteU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CQuitOnTestsCompleteU3Ek__BackingField_7() { return &___U3CQuitOnTestsCompleteU3Ek__BackingField_7; }
	inline void set_U3CQuitOnTestsCompleteU3Ek__BackingField_7(bool value)
	{
		___U3CQuitOnTestsCompleteU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3COnTestCompleteCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ___U3COnTestCompleteCallbackU3Ek__BackingField_8)); }
	inline OnTestsComplete_t1076207448 * get_U3COnTestCompleteCallbackU3Ek__BackingField_8() const { return ___U3COnTestCompleteCallbackU3Ek__BackingField_8; }
	inline OnTestsComplete_t1076207448 ** get_address_of_U3COnTestCompleteCallbackU3Ek__BackingField_8() { return &___U3COnTestCompleteCallbackU3Ek__BackingField_8; }
	inline void set_U3COnTestCompleteCallbackU3Ek__BackingField_8(OnTestsComplete_t1076207448 * value)
	{
		___U3COnTestCompleteCallbackU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnTestCompleteCallbackU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of__projectNameToTest_9() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ____projectNameToTest_9)); }
	inline String_t* get__projectNameToTest_9() const { return ____projectNameToTest_9; }
	inline String_t** get_address_of__projectNameToTest_9() { return &____projectNameToTest_9; }
	inline void set__projectNameToTest_9(String_t* value)
	{
		____projectNameToTest_9 = value;
		Il2CppCodeGenWriteBarrier((&____projectNameToTest_9), value);
	}

	inline static int32_t get_offset_of__queuedTests_11() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ____queuedTests_11)); }
	inline Queue_1_t2330204254 * get__queuedTests_11() const { return ____queuedTests_11; }
	inline Queue_1_t2330204254 ** get_address_of__queuedTests_11() { return &____queuedTests_11; }
	inline void set__queuedTests_11(Queue_1_t2330204254 * value)
	{
		____queuedTests_11 = value;
		Il2CppCodeGenWriteBarrier((&____queuedTests_11), value);
	}

	inline static int32_t get_offset_of__testsAvailable_12() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ____testsAvailable_12)); }
	inline TypeU5BU5D_t3940880105* get__testsAvailable_12() const { return ____testsAvailable_12; }
	inline TypeU5BU5D_t3940880105** get_address_of__testsAvailable_12() { return &____testsAvailable_12; }
	inline void set__testsAvailable_12(TypeU5BU5D_t3940880105* value)
	{
		____testsAvailable_12 = value;
		Il2CppCodeGenWriteBarrier((&____testsAvailable_12), value);
	}

	inline static int32_t get_offset_of__activeTest_13() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688, ____activeTest_13)); }
	inline UnitTest_t4208175170 * get__activeTest_13() const { return ____activeTest_13; }
	inline UnitTest_t4208175170 ** get_address_of__activeTest_13() { return &____activeTest_13; }
	inline void set__activeTest_13(UnitTest_t4208175170 * value)
	{
		____activeTest_13 = value;
		Il2CppCodeGenWriteBarrier((&____activeTest_13), value);
	}
};

struct UnitTestManager_t2624635688_StaticFields
{
public:
	// System.String IBM.Watson.DeveloperCloud.Editor.UnitTestManager::ProjectToTest
	String_t* ___ProjectToTest_10;

public:
	inline static int32_t get_offset_of_ProjectToTest_10() { return static_cast<int32_t>(offsetof(UnitTestManager_t2624635688_StaticFields, ___ProjectToTest_10)); }
	inline String_t* get_ProjectToTest_10() const { return ___ProjectToTest_10; }
	inline String_t** get_address_of_ProjectToTest_10() { return &___ProjectToTest_10; }
	inline void set_ProjectToTest_10(String_t* value)
	{
		___ProjectToTest_10 = value;
		Il2CppCodeGenWriteBarrier((&___ProjectToTest_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITTESTMANAGER_T2624635688_H
#ifndef WIDGET_T1534328253_H
#define WIDGET_T1534328253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Watson.DeveloperCloud.Widgets.Widget
struct  Widget_t1534328253  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget::_autoConnect
	bool ____autoConnect_4;
	// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget::_initialized
	bool ____initialized_5;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/Input[] IBM.Watson.DeveloperCloud.Widgets.Widget::_inputs
	InputU5BU5D_t632706290* ____inputs_6;
	// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[] IBM.Watson.DeveloperCloud.Widgets.Widget::_outputs
	OutputU5BU5D_t4065696049* ____outputs_7;

public:
	inline static int32_t get_offset_of__autoConnect_4() { return static_cast<int32_t>(offsetof(Widget_t1534328253, ____autoConnect_4)); }
	inline bool get__autoConnect_4() const { return ____autoConnect_4; }
	inline bool* get_address_of__autoConnect_4() { return &____autoConnect_4; }
	inline void set__autoConnect_4(bool value)
	{
		____autoConnect_4 = value;
	}

	inline static int32_t get_offset_of__initialized_5() { return static_cast<int32_t>(offsetof(Widget_t1534328253, ____initialized_5)); }
	inline bool get__initialized_5() const { return ____initialized_5; }
	inline bool* get_address_of__initialized_5() { return &____initialized_5; }
	inline void set__initialized_5(bool value)
	{
		____initialized_5 = value;
	}

	inline static int32_t get_offset_of__inputs_6() { return static_cast<int32_t>(offsetof(Widget_t1534328253, ____inputs_6)); }
	inline InputU5BU5D_t632706290* get__inputs_6() const { return ____inputs_6; }
	inline InputU5BU5D_t632706290** get_address_of__inputs_6() { return &____inputs_6; }
	inline void set__inputs_6(InputU5BU5D_t632706290* value)
	{
		____inputs_6 = value;
		Il2CppCodeGenWriteBarrier((&____inputs_6), value);
	}

	inline static int32_t get_offset_of__outputs_7() { return static_cast<int32_t>(offsetof(Widget_t1534328253, ____outputs_7)); }
	inline OutputU5BU5D_t4065696049* get__outputs_7() const { return ____outputs_7; }
	inline OutputU5BU5D_t4065696049** get_address_of__outputs_7() { return &____outputs_7; }
	inline void set__outputs_7(OutputU5BU5D_t4065696049* value)
	{
		____outputs_7 = value;
		Il2CppCodeGenWriteBarrier((&____outputs_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIDGET_T1534328253_H
#ifndef EXPLODE_T315222985_H
#define EXPLODE_T315222985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// explode
struct  explode_t315222985  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image explode::customImage
	Image_t2670269651 * ___customImage_4;

public:
	inline static int32_t get_offset_of_customImage_4() { return static_cast<int32_t>(offsetof(explode_t315222985, ___customImage_4)); }
	inline Image_t2670269651 * get_customImage_4() const { return ___customImage_4; }
	inline Image_t2670269651 ** get_address_of_customImage_4() { return &___customImage_4; }
	inline void set_customImage_4(Image_t2670269651 * value)
	{
		___customImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___customImage_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLODE_T315222985_H
#ifndef EXPLODEHOUSE_T2507012274_H
#define EXPLODEHOUSE_T2507012274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// explodeHouse
struct  explodeHouse_t2507012274  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLODEHOUSE_T2507012274_H
#ifndef TRACKING_T1519717030_H
#define TRACKING_T1519717030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tracking
struct  tracking_t1519717030  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKING_T1519717030_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input[]
struct InputU5BU5D_t632706290  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Input_t789873443 * m_Items[1];

public:
	inline Input_t789873443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Input_t789873443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Input_t789873443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Input_t789873443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Input_t789873443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Input_t789873443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[]
struct OutputU5BU5D_t4065696049  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Output_t2166053520 * m_Items[1];

public:
	inline Output_t2166053520 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Output_t2166053520 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Output_t2166053520 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Output_t2166053520 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Output_t2166053520 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Output_t2166053520 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// IBM.Watson.DeveloperCloud.Widgets.Widget[]
struct WidgetU5BU5D_t425568944  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Widget_t1534328253 * m_Items[1];

public:
	inline Widget_t1534328253 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Widget_t1534328253 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Widget_t1534328253 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Widget_t1534328253 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Widget_t1534328253 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Widget_t1534328253 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection[]
struct ConnectionU5BU5D_t3727671464  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Connection_t4165129509 * m_Items[1];

public:
	inline Connection_t4165129509 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Connection_t4165129509 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Connection_t4165129509 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Connection_t4165129509 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Connection_t4165129509 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Connection_t4165129509 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK>(System.IO.BinaryReader)
extern "C" IL2CPP_METHOD_ATTR IFF_FORM_CHUNK_t403332380  WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469_gshared (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method);
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK>(System.IO.BinaryReader)
extern "C" IL2CPP_METHOD_ATTR IFF_CHUNK_t1040744086  WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240_gshared (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method);
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM>(System.IO.BinaryReader)
extern "C" IL2CPP_METHOD_ATTR WAV_PCM_t124248382  WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970_gshared (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK>(System.IO.BinaryWriter,T)
extern "C" IL2CPP_METHOD_ATTR void WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245_gshared (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, IFF_FORM_CHUNK_t403332380  ___data1, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK>(System.IO.BinaryWriter,T)
extern "C" IL2CPP_METHOD_ATTR void WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165_gshared (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, IFF_CHUNK_t1040744086  ___data1, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM>(System.IO.BinaryWriter,T)
extern "C" IL2CPP_METHOD_ATTR void WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198_gshared (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, WAV_PCM_t124248382  ___data1, const RuntimeMethod* method);
// T[] IBM.Watson.DeveloperCloud.Widgets.Widget::GetMembersByType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Widget_GetMembersByType_TisRuntimeObject_m696164598_gshared (Widget_t1534328253 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2647183545_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m1360663425_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2116488300_gshared (Nullable_1_t920590078 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>>(T,FullSerializer.fsData&)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671_gshared (fsSerializer_t4093814827 * __this, Nullable_1_t920590078  ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Object>(T,FullSerializer.fsData&)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  fsSerializer_TrySerialize_TisRuntimeObject_m3789936598_gshared (fsSerializer_t4093814827 * __this, RuntimeObject * ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2952668986_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Nullable`1<System.Boolean>>(T,FullSerializer.fsData&)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_gshared (fsSerializer_t4093814827 * __this, Nullable_1_t1819850047  ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void IBM.Watson.DeveloperCloud.Connection.RESTConnector/Request::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Request__ctor_m166190510 (Request_t1876465969 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken::Invoke(IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken,System.String)
extern "C" IL2CPP_METHOD_ATTR void OnGetWatsonToken_Invoke_m1695713753 (OnGetWatsonToken_t1424218558 * __this, AuthenticationToken_t2650554029 * ___authenticationToken0, String_t* ___data1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::.ctor()
inline void List_1__ctor_m2049013512 (List_1_t2815002627 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2815002627 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>> IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::get_VCAP_SERVICES()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2600258926 * VcapCredentials_get_VCAP_SERVICES_m1778498019 (VcapCredentials_t1310294039 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>::GetEnumerator()
inline Enumerator_t259474405  Dictionary_2_GetEnumerator_m3121163555 (Dictionary_2_t2600258926 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t259474405  (*) (Dictionary_2_t2600258926 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>::get_Current()
inline KeyValuePair_2_t702963797  Enumerator_get_Current_m2822380694 (Enumerator_t259474405 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t702963797  (*) (Enumerator_t259474405 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>::get_Value()
inline List_1_t2815002627 * KeyValuePair_2_get_Value_m1664403995 (KeyValuePair_2_t702963797 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t2815002627 * (*) (KeyValuePair_2_t702963797 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::GetEnumerator()
inline Enumerator_t409279208  List_1_GetEnumerator_m2309797786 (List_1_t2815002627 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t409279208  (*) (List_1_t2815002627 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::get_Current()
inline VcapCredential_t1342927885 * Enumerator_get_Current_m3004613996 (Enumerator_t409279208 * __this, const RuntimeMethod* method)
{
	return ((  VcapCredential_t1342927885 * (*) (Enumerator_t409279208 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* VcapCredential_get_Name_m2612783563 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::Add(!0)
inline void List_1_Add_m982985126 (List_1_t2815002627 * __this, VcapCredential_t1342927885 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2815002627 *, VcapCredential_t1342927885 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::MoveNext()
inline bool Enumerator_MoveNext_m641151094 (Enumerator_t409279208 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t409279208 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>::Dispose()
inline void Enumerator_Dispose_m1962014498 (Enumerator_t409279208 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t409279208 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>::MoveNext()
inline bool Enumerator_MoveNext_m1935991257 (Enumerator_t259474405 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t259474405 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>::Dispose()
inline void Enumerator_Dispose_m3470494932 (Enumerator_t259474405 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t259474405 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Logging.Log::Critical(System.String,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Log_Critical_m785394361 (RuntimeObject * __this /* static, unused */, String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_ASCII_m3595602635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m3737646381 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m2890086663 (RuntimeObject * __this /* static, unused */, uint32_t p0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3676565578 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, bool p1, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryReader__ctor_m2602947653 (BinaryReader_t2428077293 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK>(System.IO.BinaryReader)
inline IFF_FORM_CHUNK_t403332380  WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method)
{
	return ((  IFF_FORM_CHUNK_t403332380  (*) (RuntimeObject * /* static, unused */, BinaryReader_t2428077293 *, const RuntimeMethod*))WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469_gshared)(__this /* static, unused */, ___reader0, method);
}
// System.String IBM.Watson.DeveloperCloud.Utilities.WaveFile::GetID(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR String_t* WaveFile_GetID_m3113013044 (RuntimeObject * __this /* static, unused */, uint32_t ___id0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Logging.Log::Error(System.String,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Log_Error_m2227311220 (RuntimeObject * __this /* static, unused */, String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method);
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK>(System.IO.BinaryReader)
inline IFF_CHUNK_t1040744086  WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method)
{
	return ((  IFF_CHUNK_t1040744086  (*) (RuntimeObject * /* static, unused */, BinaryReader_t2428077293 *, const RuntimeMethod*))WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240_gshared)(__this /* static, unused */, ___reader0, method);
}
// T IBM.Watson.DeveloperCloud.Utilities.WaveFile::ReadType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM>(System.IO.BinaryReader)
inline WAV_PCM_t124248382  WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___reader0, const RuntimeMethod* method)
{
	return ((  WAV_PCM_t124248382  (*) (RuntimeObject * /* static, unused */, BinaryReader_t2428077293 *, const RuntimeMethod*))WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970_gshared)(__this /* static, unused */, ___reader0, method);
}
// System.Void IBM.Watson.DeveloperCloud.Logging.Log::Debug(System.String,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Log_Debug_m3685190310 (RuntimeObject * __this /* static, unused */, String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method);
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m2376388426 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Char System.BitConverter::ToChar(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar BitConverter_ToChar_m1348346703 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Create_m255819841 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, int32_t p2, int32_t p3, bool p4, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_SetData_m313920037 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m1874693998 (BinaryWriter_t3992595042 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile::MakeID(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t WaveFile_MakeID_m3070611325 (RuntimeObject * __this /* static, unused */, String_t* ___id0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_FORM_CHUNK>(System.IO.BinaryWriter,T)
inline void WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245 (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, IFF_FORM_CHUNK_t403332380  ___data1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, BinaryWriter_t3992595042 *, IFF_FORM_CHUNK_t403332380 , const RuntimeMethod*))WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245_gshared)(__this /* static, unused */, ___writer0, ___data1, method);
}
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m3907759635 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m2392813414 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m973108693 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/IFF_CHUNK>(System.IO.BinaryWriter,T)
inline void WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165 (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, IFF_CHUNK_t1040744086  ___data1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, BinaryWriter_t3992595042 *, IFF_CHUNK_t1040744086 , const RuntimeMethod*))WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165_gshared)(__this /* static, unused */, ___writer0, ___data1, method);
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.WaveFile::WriteType<IBM.Watson.DeveloperCloud.Utilities.WaveFile/WAV_PCM>(System.IO.BinaryWriter,T)
inline void WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198 (RuntimeObject * __this /* static, unused */, BinaryWriter_t3992595042 * ___writer0, WAV_PCM_t124248382  ___data1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, BinaryWriter_t3992595042 *, WAV_PCM_t124248382 , const RuntimeMethod*))WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198_gshared)(__this /* static, unused */, ___writer0, ___data1, method);
}
// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m1836473408 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1251334845 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::InitializeIO()
extern "C" IL2CPP_METHOD_ATTR void Widget_InitializeIO_m829930977 (Widget_t1534328253 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::InitializeConnections()
extern "C" IL2CPP_METHOD_ATTR void Widget_InitializeConnections_m4256191606 (Widget_t1534328253 * __this, const RuntimeMethod* method);
// T[] IBM.Watson.DeveloperCloud.Widgets.Widget::GetMembersByType<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>()
inline OutputU5BU5D_t4065696049* Widget_GetMembersByType_TisOutput_t2166053520_m2036084381 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	return ((  OutputU5BU5D_t4065696049* (*) (Widget_t1534328253 *, const RuntimeMethod*))Widget_GetMembersByType_TisRuntimeObject_m696164598_gshared)(__this, method);
}
// T[] IBM.Watson.DeveloperCloud.Widgets.Widget::GetMembersByType<IBM.Watson.DeveloperCloud.Widgets.Widget/Input>()
inline InputU5BU5D_t632706290* Widget_GetMembersByType_TisInput_t789873443_m3125330832 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	return ((  InputU5BU5D_t632706290* (*) (Widget_t1534328253 *, const RuntimeMethod*))Widget_GetMembersByType_TisRuntimeObject_m696164598_gshared)(__this, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<IBM.Watson.DeveloperCloud.Widgets.Widget>()
inline WidgetU5BU5D_t425568944* Object_FindObjectsOfType_TisWidget_t1534328253_m1655898492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  WidgetU5BU5D_t425568944* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2647183545_gshared)(__this /* static, unused */, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[] IBM.Watson.DeveloperCloud.Widgets.Widget::get_Outputs()
extern "C" IL2CPP_METHOD_ATTR OutputU5BU5D_t4065696049* Widget_get_Outputs_m3428385191 (Widget_t1534328253 * __this, const RuntimeMethod* method);
// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Input_get_DataType_m3427786224 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Output_get_DataType_m1419930338 (Output_t2166053520 * __this, const RuntimeMethod* method);
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::AddConnection(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR bool Output_AddConnection_m3549496410 (Output_t2166053520 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Logging.Log::Status(System.String,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Log_Status_m910176486 (RuntimeObject * __this /* static, unused */, String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::.ctor()
inline void List_1__ctor_m1224377238 (List_1_t3638128262 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3638128262 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_InputName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Input_set_InputName_m61770620 (Input_t789873443 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Input_set_DataType_m1046321217 (Input_t789873443 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_ReceiverFunction(System.String)
extern "C" IL2CPP_METHOD_ATTR void Input_set_ReceiverFunction_m647479957 (Input_t789873443 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Input_set_AllowMany_m2209375957 (Input_t789873443 * __this, bool ___value0, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t1534328253 * Input_get_Owner_m2452489486 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_InputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_InputName_m3530248252 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget::get_WidgetName()
extern "C" IL2CPP_METHOD_ATTR String_t* Widget_get_WidgetName_m2107460511 (Widget_t1534328253 * __this, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OwnerName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_OwnerName_m1028539334 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::ToArray()
inline OutputU5BU5D_t4065696049* List_1_ToArray_m1403542956 (List_1_t3638128262 * __this, const RuntimeMethod* method)
{
	return ((  OutputU5BU5D_t4065696049* (*) (List_1_t3638128262 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Input_get_AllowMany_m4052470851 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::get_Count()
inline int32_t List_1_get_Count_m1957816562 (List_1_t3638128262 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3638128262 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::Contains(!0)
inline bool List_1_Contains_m563392257 (List_1_t3638128262 * __this, Output_t2166053520 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3638128262 *, Output_t2166053520 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::Add(!0)
inline void List_1_Add_m3934450950 (List_1_t3638128262 * __this, Output_t2166053520 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3638128262 *, Output_t2166053520 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OnOutputAdded()
extern "C" IL2CPP_METHOD_ATTR OnOutputAdded_t1994924040 * Input_get_OnOutputAdded_m3153701904 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded_Invoke_m501525943 (OnOutputAdded_t1994924040 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output>::Remove(!0)
inline bool List_1_Remove_m4138914593 (List_1_t3638128262 * __this, Output_t2166053520 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3638128262 *, Output_t2166053520 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OnOutputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnOutputRemoved_t2484111978 * Input_get_OnOutputRemoved_m1581741683 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved_Invoke_m884226655 (OnOutputRemoved_t2484111978 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_Owner(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Input_set_Owner_m554388651 (Input_t789873443 * __this, Widget_t1534328253 * ___value0, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_ReceiverFunction()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_ReceiverFunction_m835436049 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m1197120913 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m995503480 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_DataReceiver(IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData)
extern "C" IL2CPP_METHOD_ATTR void Input_set_DataReceiver_m893126737 (Input_t789873443 * __this, OnReceiveData_t3166915800 * ___value0, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_DataReceiver()
extern "C" IL2CPP_METHOD_ATTR OnReceiveData_t3166915800 * Input_get_DataReceiver_m2450229106 (Input_t789873443 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData_Invoke_m583478454 (OnReceiveData_t3166915800 * __this, Data_t4259022272 * ___data0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_Invoke_m4000746063 (OnInputAdded_t3329887880 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_Invoke_m2766180747 (OnInputRemoved_t4133684454 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::.ctor()
inline void List_1__ctor_m3564539098 (List_1_t1342236955 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1342236955 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Output_set_DataType_m3682298338 (Output_t2166053520 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output_set_AllowMany_m1943411253 (Output_t2166053520 * __this, bool ___value0, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t1534328253 * Output_get_Owner_m2506546873 (Output_t2166053520 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::GetEnumerator()
inline Enumerator_t3231480832  List_1_GetEnumerator_m3809269953 (List_1_t1342236955 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3231480832  (*) (List_1_t1342236955 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::get_Current()
inline Connection_t4165129509 * Enumerator_get_Current_m355331424 (Enumerator_t3231480832 * __this, const RuntimeMethod* method)
{
	return ((  Connection_t4165129509 * (*) (Enumerator_t3231480832 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::ResolveTargetInput()
extern "C" IL2CPP_METHOD_ATTR bool Connection_ResolveTargetInput_m761714751 (Connection_t4165129509 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::MoveNext()
inline bool Enumerator_MoveNext_m2105435828 (Enumerator_t3231480832 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3231480832 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::Dispose()
inline void Enumerator_Dispose_m26165935 (Enumerator_t3231480832 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3231480832 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::ToArray()
inline ConnectionU5BU5D_t3727671464* List_1_ToArray_m3631305337 (List_1_t1342236955 * __this, const RuntimeMethod* method)
{
	return ((  ConnectionU5BU5D_t3727671464* (*) (List_1_t1342236955 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_Owner(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_set_Owner_m2019747983 (Output_t2166053520 * __this, Widget_t1534328253 * ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::Start(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void Connection_Start_m2999172782 (Connection_t4165129509 * __this, Output_t2166053520 * ___owner0, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::get_TargetInput()
extern "C" IL2CPP_METHOD_ATTR Input_t789873443 * Connection_get_TargetInput_m2713917159 (Connection_t4165129509 * __this, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Data::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Data_get_Name_m2175619905 (Data_t4259022272 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::get_TargetObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Connection_get_TargetObject_m3467488831 (Connection_t4165129509 * __this, const RuntimeMethod* method);
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_AllowMany_m3875736062 (Output_t2166053520 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::get_Count()
inline int32_t List_1_get_Count_m3534178295 (List_1_t1342236955 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1342236955 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Connection__ctor_m930138303 (Connection_t4165129509 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetInput(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetInput_m1487836820 (Connection_t4165129509 * __this, Input_t789873443 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::Add(!0)
inline void List_1_Add_m891841590 (List_1_t1342236955 * __this, Connection_t4165129509 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1342236955 *, Connection_t4165129509 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_OnInputAdded()
extern "C" IL2CPP_METHOD_ATTR OnInputAdded_t3329887880 * Output_get_OnInputAdded_m3929450682 (Output_t2166053520 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetObject_m2216651879 (Connection_t4165129509 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetConnection(System.String)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetConnection_m2892274677 (Connection_t4165129509 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection>::Remove(!0)
inline bool List_1_Remove_m1614517502 (List_1_t1342236955 * __this, Connection_t4165129509 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1342236955 *, Connection_t4165129509 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_OnInputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnInputRemoved_t4133684454 * Output_get_OnInputRemoved_m1249916090 (Output_t2166053520 * __this, const RuntimeMethod* method);
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::RemoveOutput(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_RemoveOutput_m3375657997 (Input_t789873443 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method);
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::AddOutput(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_AddOutput_m1670639108 (Input_t789873443 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method);
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_FullInputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_FullInputName_m3142238679 (Input_t789873443 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<IBM.Watson.DeveloperCloud.Widgets.Widget>()
inline WidgetU5BU5D_t425568944* GameObject_GetComponents_TisWidget_t1534328253_m1340924440 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  WidgetU5BU5D_t425568944* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1360663425_gshared)(__this, method);
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input[] IBM.Watson.DeveloperCloud.Widgets.Widget::get_Inputs()
extern "C" IL2CPP_METHOD_ATTR InputU5BU5D_t632706290* Widget_get_Inputs_m146930454 (Widget_t1534328253 * __this, const RuntimeMethod* method);
// System.Void FullSerializer.fsSerializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void fsSerializer__ctor_m4113650859 (fsSerializer_t4093814827 * __this, const RuntimeMethod* method);
// System.Void FullSerializer.fsConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void fsConverter__ctor_m2283017391 (fsConverter_t1940635020 * __this, const RuntimeMethod* method);
// System.Boolean FullSerializer.fsData::get_IsString()
extern "C" IL2CPP_METHOD_ATTR bool fsData_get_IsString_m1655683089 (fsData_t406773287 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsResult::Fail(System.String)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  fsResult_Fail_m3938983616 (RuntimeObject * __this /* static, unused */, String_t* ___warning0, const RuntimeMethod* method);
// System.String FullSerializer.fsData::get_AsString()
extern "C" IL2CPP_METHOD_ATTR String_t* fsData_get_AsString_m613206523 (fsData_t406773287 * __this, const RuntimeMethod* method);
// System.Type FullSerializer.Internal.fsTypeCache::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * fsTypeCache_GetType_m3390509253 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageInput__ctor_m2702628697 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m2889734923 (Dictionary_2_t192029586 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t192029586 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_MessageType()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t920590078  MessageInput_get_MessageType_m3165316421 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2116488300 (Nullable_1_t920590078 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t920590078 *, const RuntimeMethod*))Nullable_1_get_HasValue_m2116488300_gshared)(__this, method);
}
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671 (fsSerializer_t4093814827 * __this, Nullable_1_t920590078  ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, Nullable_1_t920590078 , fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671_gshared)(__this, ___instance0, ___data1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,FullSerializer.fsData>::Add(!0,!1)
inline void Dictionary_2_Add_m734428058 (Dictionary_2_t192029586 * __this, String_t* p0, fsData_t406773287 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t192029586 *, String_t*, fsData_t406773287 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageInput_get_Text_m2878263441 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.String>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisString_t_m1458439198 (fsSerializer_t4093814827 * __this, String_t* ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, String_t*, fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisRuntimeObject_m3789936598_gshared)(__this, ___instance0, ___data1, method);
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Options()
extern "C" IL2CPP_METHOD_ATTR MessageInputOptions_t321510208 * MessageInput_get_Options_m1692351277 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisMessageInputOptions_t321510208_m1229013631 (fsSerializer_t4093814827 * __this, MessageInputOptions_t321510208 * ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, MessageInputOptions_t321510208 *, fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisRuntimeObject_m3789936598_gshared)(__this, ___instance0, ___data1, method);
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Intents()
extern "C" IL2CPP_METHOD_ATTR List_1_t1777479234 * MessageInput_get_Intents_m3195318041 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent>>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisList_1_t1777479234_m568565007 (fsSerializer_t4093814827 * __this, List_1_t1777479234 * ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, List_1_t1777479234 *, fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisRuntimeObject_m3789936598_gshared)(__this, ___instance0, ___data1, method);
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Entities()
extern "C" IL2CPP_METHOD_ATTR List_1_t1723740391 * MessageInput_get_Entities_m2434285872 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity>>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisList_1_t1723740391_m2459794001 (fsSerializer_t4093814827 * __this, List_1_t1723740391 * ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, List_1_t1723740391 *, fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisRuntimeObject_m3789936598_gshared)(__this, ___instance0, ___data1, method);
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_SuggestionId()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageInput_get_SuggestionId_m470366355 (MessageInput_t1231455263 * __this, const RuntimeMethod* method);
// System.Void FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,FullSerializer.fsData>)
extern "C" IL2CPP_METHOD_ATTR void fsData__ctor_m3980153642 (fsData_t406773287 * __this, Dictionary_2_t192029586 * ___dict0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_Debug()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_Debug_m3783773037 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2952668986 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_HasValue_m2952668986_gshared)(__this, method);
}
// FullSerializer.fsResult FullSerializer.fsSerializer::TrySerialize<System.Nullable`1<System.Boolean>>(T,FullSerializer.fsData&)
inline fsResult_t591339677  fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407 (fsSerializer_t4093814827 * __this, Nullable_1_t1819850047  ___instance0, fsData_t406773287 ** ___data1, const RuntimeMethod* method)
{
	return ((  fsResult_t591339677  (*) (fsSerializer_t4093814827 *, Nullable_1_t1819850047 , fsData_t406773287 **, const RuntimeMethod*))fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_gshared)(__this, ___instance0, ___data1, method);
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_Restart()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_Restart_m726917812 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_AlternateIntents()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_AlternateIntents_m3257642583 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_ReturnContext()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_ReturnContext_m1466119081 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m3734145081 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method);
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3080445642 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m848019096 (Parser_t3021620180 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m37363117 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TextReader_Dispose_m4253712522 (TextReader_t283511965 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_m1476497131 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m3030552256 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::ParseString()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4025690792 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1535556385 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m2321703786 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m166062117 (Parser_t3021620180 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m3338814081 (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m358869732 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Parser_ParseObject_m1489219549 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Parser_ParseArray_m965643129 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m3496231823 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m391894676 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m3688284121 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m3021978240 (RuntimeObject * __this /* static, unused */, String_t* p0, double* p1, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m1673566566 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m16388875 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m2111473281 (Parser_t3021620180 * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m2316880293 (Serializer_t1539586466 * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m1193830714 (Serializer_t1539586466 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_m4051446155 (Serializer_t1539586466 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m12259788 (Serializer_t1539586466 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m1783201083 (Serializer_t1539586466 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m3630688433 (Serializer_t1539586466 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m896573572 (double* __this, String_t* p0, const RuntimeMethod* method);
// System.String[] System.Environment::GetCommandLineArgs()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Environment_GetCommandLineArgs_m2107420754 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// IBM.Watson.DeveloperCloud.Editor.UnitTestManager IBM.Watson.DeveloperCloud.Editor.UnitTestManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnitTestManager_t2624635688 * UnitTestManager_get_Instance_m3215588733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Editor.UnitTestManager::set_QuitOnTestsComplete(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnitTestManager_set_QuitOnTestsComplete_m1278829286 (UnitTestManager_t2624635688 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTestsComplete__ctor_m312814037 (OnTestsComplete_t1076207448 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Editor.UnitTestManager::set_OnTestCompleteCallback(IBM.Watson.DeveloperCloud.Editor.UnitTestManager/OnTestsComplete)
extern "C" IL2CPP_METHOD_ATTR void UnitTestManager_set_OnTestCompleteCallback_m1874614839 (UnitTestManager_t2624635688 * __this, OnTestsComplete_t1076207448 * ___value0, const RuntimeMethod* method);
// System.Type[] IBM.Watson.DeveloperCloud.Utilities.Utility::FindAllDerivedTypes(System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeU5BU5D_t3940880105* Utility_FindAllDerivedTypes_m2214751968 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Void IBM.Watson.DeveloperCloud.Editor.UnitTestManager::QueueTests(System.Type[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnitTestManager_QueueTests_m3094254415 (UnitTestManager_t2624635688 * __this, TypeU5BU5D_t3940880105* ___tests0, bool ___run1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GetWatsonTokenReq__ctor_m978110278 (GetWatsonTokenReq_t3567185861 * __this, const RuntimeMethod* method)
{
	{
		Request__ctor_m166190510(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::get_Data()
extern "C" IL2CPP_METHOD_ATTR String_t* GetWatsonTokenReq_get_Data_m2587082616 (GetWatsonTokenReq_t3567185861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDataU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::set_Data(System.String)
extern "C" IL2CPP_METHOD_ATTR void GetWatsonTokenReq_set_Data_m862581567 (GetWatsonTokenReq_t3567185861 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_14(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::get_Callback()
extern "C" IL2CPP_METHOD_ATTR OnGetWatsonToken_t1424218558 * GetWatsonTokenReq_get_Callback_m1253413746 (GetWatsonTokenReq_t3567185861 * __this, const RuntimeMethod* method)
{
	{
		OnGetWatsonToken_t1424218558 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::set_Callback(IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken)
extern "C" IL2CPP_METHOD_ATTR void GetWatsonTokenReq_set_Callback_m2485311494 (GetWatsonTokenReq_t3567185861 * __this, OnGetWatsonToken_t1424218558 * ___value0, const RuntimeMethod* method)
{
	{
		OnGetWatsonToken_t1424218558 * L_0 = ___value0;
		__this->set_U3CCallbackU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::get_TokenName()
extern "C" IL2CPP_METHOD_ATTR String_t* GetWatsonTokenReq_get_TokenName_m172987925 (GetWatsonTokenReq_t3567185861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTokenNameU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/GetWatsonTokenReq::set_TokenName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GetWatsonTokenReq_set_TokenName_m866837888 (GetWatsonTokenReq_t3567185861 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenNameU3Ek__BackingField_16(L_0);
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
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnGetWatsonToken__ctor_m1649635003 (OnGetWatsonToken_t1424218558 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken::Invoke(IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken,System.String)
extern "C" IL2CPP_METHOD_ATTR void OnGetWatsonToken_Invoke_m1695713753 (OnGetWatsonToken_t1424218558 * __this, AuthenticationToken_t2650554029 * ___authenticationToken0, String_t* ___data1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnGetWatsonToken_Invoke_m1695713753((OnGetWatsonToken_t1424218558 *)__this->get_prev_9(), ___authenticationToken0, ___data1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, AuthenticationToken_t2650554029 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___authenticationToken0, ___data1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, AuthenticationToken_t2650554029 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___authenticationToken0, ___data1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< AuthenticationToken_t2650554029 *, String_t* >::Invoke(targetMethod, targetThis, ___authenticationToken0, ___data1);
					else
						GenericVirtActionInvoker2< AuthenticationToken_t2650554029 *, String_t* >::Invoke(targetMethod, targetThis, ___authenticationToken0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< AuthenticationToken_t2650554029 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authenticationToken0, ___data1);
					else
						VirtActionInvoker2< AuthenticationToken_t2650554029 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authenticationToken0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, AuthenticationToken_t2650554029 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authenticationToken0, ___data1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___authenticationToken0, ___data1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___authenticationToken0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___authenticationToken0, ___data1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___authenticationToken0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AuthenticationToken_t2650554029 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authenticationToken0, ___data1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken::BeginInvoke(IBM.Watson.DeveloperCloud.Utilities.AuthenticationToken,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnGetWatsonToken_BeginInvoke_m3015639403 (OnGetWatsonToken_t1424218558 * __this, AuthenticationToken_t2650554029 * ___authenticationToken0, String_t* ___data1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___authenticationToken0;
	__d_args[1] = ___data1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.Utility/OnGetWatsonToken::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnGetWatsonToken_EndInvoke_m2241854927 (OnGetWatsonToken_t1424218558 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredential::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VcapCredential__ctor_m2087080905 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* VcapCredential_get_Name_m2612783563 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredential::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void VcapCredential_set_Name_m1303068005 (VcapCredential_t1342927885 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::get_Label()
extern "C" IL2CPP_METHOD_ATTR String_t* VcapCredential_get_Label_m2764862896 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CLabelU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredential::set_Label(System.String)
extern "C" IL2CPP_METHOD_ATTR void VcapCredential_set_Label_m4003482360 (VcapCredential_t1342927885 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.VcapCredential::get_Plan()
extern "C" IL2CPP_METHOD_ATTR String_t* VcapCredential_get_Plan_m3511055993 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPlanU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredential::set_Plan(System.String)
extern "C" IL2CPP_METHOD_ATTR void VcapCredential_set_Plan_m123050999 (VcapCredential_t1342927885 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPlanU3Ek__BackingField_2(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Utilities.Credential IBM.Watson.DeveloperCloud.Utilities.VcapCredential::get_Credentials()
extern "C" IL2CPP_METHOD_ATTR Credential_t1160400382 * VcapCredential_get_Credentials_m3546982594 (VcapCredential_t1342927885 * __this, const RuntimeMethod* method)
{
	{
		Credential_t1160400382 * L_0 = __this->get_U3CCredentialsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredential::set_Credentials(IBM.Watson.DeveloperCloud.Utilities.Credential)
extern "C" IL2CPP_METHOD_ATTR void VcapCredential_set_Credentials_m1957884680 (VcapCredential_t1342927885 * __this, Credential_t1160400382 * ___value0, const RuntimeMethod* method)
{
	{
		Credential_t1160400382 * L_0 = ___value0;
		__this->set_U3CCredentialsU3Ek__BackingField_3(L_0);
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
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VcapCredentials__ctor_m4257511713 (VcapCredentials_t1310294039 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>> IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::get_VCAP_SERVICES()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2600258926 * VcapCredentials_get_VCAP_SERVICES_m1778498019 (VcapCredentials_t1310294039 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2600258926 * L_0 = __this->get_U3CVCAP_SERVICESU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::set_VCAP_SERVICES(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential>>)
extern "C" IL2CPP_METHOD_ATTR void VcapCredentials_set_VCAP_SERVICES_m3457687633 (VcapCredentials_t1310294039 * __this, Dictionary_2_t2600258926 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2600258926 * L_0 = ___value0;
		__this->set_U3CVCAP_SERVICESU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.Watson.DeveloperCloud.Utilities.VcapCredential> IBM.Watson.DeveloperCloud.Utilities.VcapCredentials::GetCredentialByname(System.String)
extern "C" IL2CPP_METHOD_ATTR List_1_t2815002627 * VcapCredentials_GetCredentialByname_m4245962954 (VcapCredentials_t1310294039 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VcapCredentials_GetCredentialByname_m4245962954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2815002627 * V_0 = NULL;
	KeyValuePair_2_t702963797  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t259474405  V_2;
	memset(&V_2, 0, sizeof(V_2));
	VcapCredential_t1342927885 * V_3 = NULL;
	Enumerator_t409279208  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2815002627 * L_0 = (List_1_t2815002627 *)il2cpp_codegen_object_new(List_1_t2815002627_il2cpp_TypeInfo_var);
		List_1__ctor_m2049013512(L_0, /*hidden argument*/List_1__ctor_m2049013512_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t2600258926 * L_1 = VcapCredentials_get_VCAP_SERVICES_m1778498019(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t259474405  L_2 = Dictionary_2_GetEnumerator_m3121163555(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m3121163555_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0017:
		{
			KeyValuePair_2_t702963797  L_3 = Enumerator_get_Current_m2822380694((Enumerator_t259474405 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2822380694_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t2815002627 * L_4 = KeyValuePair_2_get_Value_m1664403995((KeyValuePair_2_t702963797 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1664403995_RuntimeMethod_var);
			NullCheck(L_4);
			Enumerator_t409279208  L_5 = List_1_GetEnumerator_m2309797786(L_4, /*hidden argument*/List_1_GetEnumerator_m2309797786_RuntimeMethod_var);
			V_4 = L_5;
		}

IL_002d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0052;
			}

IL_0032:
			{
				VcapCredential_t1342927885 * L_6 = Enumerator_get_Current_m3004613996((Enumerator_t409279208 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m3004613996_RuntimeMethod_var);
				V_3 = L_6;
				VcapCredential_t1342927885 * L_7 = V_3;
				NullCheck(L_7);
				String_t* L_8 = VcapCredential_get_Name_m2612783563(L_7, /*hidden argument*/NULL);
				String_t* L_9 = ___name0;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
				if (!L_10)
				{
					goto IL_0052;
				}
			}

IL_004b:
			{
				List_1_t2815002627 * L_11 = V_0;
				VcapCredential_t1342927885 * L_12 = V_3;
				NullCheck(L_11);
				List_1_Add_m982985126(L_11, L_12, /*hidden argument*/List_1_Add_m982985126_RuntimeMethod_var);
			}

IL_0052:
			{
				bool L_13 = Enumerator_MoveNext_m641151094((Enumerator_t409279208 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m641151094_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0032;
				}
			}

IL_005e:
			{
				IL2CPP_LEAVE(0x71, FINALLY_0063);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0063;
		}

FINALLY_0063:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1962014498((Enumerator_t409279208 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m1962014498_RuntimeMethod_var);
			IL2CPP_END_FINALLY(99)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(99)
		{
			IL2CPP_JUMP_TBL(0x71, IL_0071)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0071:
		{
			bool L_14 = Enumerator_MoveNext_m1935991257((Enumerator_t259474405 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1935991257_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3470494932((Enumerator_t259474405 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3470494932_RuntimeMethod_var);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		List_1_t2815002627 * L_15 = V_0;
		return L_15;
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
// System.Void IBM.Watson.DeveloperCloud.Utilities.WatsonException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WatsonException__ctor_m2351300910 (WatsonException_t4135824359 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatsonException__ctor_m2351300910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		Log_Critical_m785394361(NULL /*static, unused*/, _stringLiteral2618906327, _stringLiteral3392320156, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Utilities.WatsonException::.ctor(System.String,IBM.Watson.DeveloperCloud.Utilities.WatsonException)
extern "C" IL2CPP_METHOD_ATTR void WatsonException__ctor_m887462022 (WatsonException_t4135824359 * __this, String_t* ___message0, WatsonException_t4135824359 * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatsonException__ctor_m887462022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		WatsonException_t4135824359 * L_1 = ___innerException1;
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		Log_Critical_m785394361(NULL /*static, unused*/, _stringLiteral2618906327, _stringLiteral3392320156, L_3, /*hidden argument*/NULL);
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
// System.UInt32 IBM.Watson.DeveloperCloud.Utilities.WaveFile::MakeID(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t WaveFile_MakeID_m3070611325 (RuntimeObject * __this /* static, unused */, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFile_MakeID_m3070611325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint32_t L_4 = BitConverter_ToUInt32_m3737646381(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String IBM.Watson.DeveloperCloud.Utilities.WaveFile::GetID(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR String_t* WaveFile_GetID_m3113013044 (RuntimeObject * __this /* static, unused */, uint32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFile_GetID_m3113013044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		uint32_t L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = BitConverter_GetBytes_m2890086663(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CharU5BU5D_t3528271667* L_2 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t3528271667* L_3 = L_2;
		ByteU5BU5D_t4116647657* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)(((int32_t)((uint16_t)L_6))));
		CharU5BU5D_t3528271667* L_7 = L_3;
		ByteU5BU5D_t4116647657* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)(((int32_t)((uint16_t)L_10))));
		CharU5BU5D_t3528271667* L_11 = L_7;
		ByteU5BU5D_t4116647657* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)(((int32_t)((uint16_t)L_14))));
		CharU5BU5D_t3528271667* L_15 = L_11;
		ByteU5BU5D_t4116647657* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)(((int32_t)((uint16_t)L_18))));
		String_t* L_19 = String_CreateString_m2818852475(NULL, L_15, /*hidden argument*/NULL);
		return L_19;
	}
}
// UnityEngine.AudioClip IBM.Watson.DeveloperCloud.Utilities.WaveFile::ParseWAV(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * WaveFile_ParseWAV_m2910170970 (RuntimeObject * __this /* static, unused */, String_t* ___clipName0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFile_ParseWAV_m2910170970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	BinaryReader_t2428077293 * V_1 = NULL;
	IFF_FORM_CHUNK_t403332380  V_2;
	memset(&V_2, 0, sizeof(V_2));
	WAV_PCM_t124248382  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	IFF_CHUNK_t1040744086  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	SingleU5BU5D_t1444911251* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	AudioClip_t3680889665 * V_18 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___data1;
		MemoryStream_t94973147 * L_1 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3676565578(L_1, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t94973147 * L_2 = V_0;
		BinaryReader_t2428077293 * L_3 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m2602947653(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BinaryReader_t2428077293 * L_4 = V_1;
		IFF_FORM_CHUNK_t403332380  L_5 = WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469(NULL /*static, unused*/, L_4, /*hidden argument*/WaveFile_ReadType_TisIFF_FORM_CHUNK_t403332380_m2176333469_RuntimeMethod_var);
		V_2 = L_5;
		uint32_t L_6 = (&V_2)->get_form_id_0();
		String_t* L_7 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, _stringLiteral1209311930, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		uint32_t L_9 = (&V_2)->get_id_2();
		String_t* L_10 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_10, _stringLiteral2834979077, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}

IL_004c:
	{
		ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		uint32_t L_14 = (&V_2)->get_form_id_0();
		String_t* L_15 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_13;
		uint32_t L_17 = (&V_2)->get_id_2();
		String_t* L_18 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral3828196555, _stringLiteral2449238902, L_16, /*hidden argument*/NULL);
		return (AudioClip_t3680889665 *)NULL;
	}

IL_0081:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(WAV_PCM_t124248382 ));
		V_4 = (bool)0;
		goto IL_02cc;
	}

IL_0091:
	{
		BinaryReader_t2428077293 * L_19 = V_1;
		IFF_CHUNK_t1040744086  L_20 = WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240(NULL /*static, unused*/, L_19, /*hidden argument*/WaveFile_ReadType_TisIFF_CHUNK_t1040744086_m1810236240_RuntimeMethod_var);
		V_5 = L_20;
		uint32_t L_21 = (&V_5)->get_length_1();
		V_6 = L_21;
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		BinaryReader_t2428077293 * L_23 = V_1;
		NullCheck(L_23);
		Stream_t1273022909 * L_24 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_23);
		NullCheck(L_24);
		int64_t L_25 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_24);
		BinaryReader_t2428077293 * L_26 = V_1;
		NullCheck(L_26);
		Stream_t1273022909 * L_27 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_26);
		NullCheck(L_27);
		int64_t L_28 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_27);
		V_6 = (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_25, (int64_t)L_28)))));
	}

IL_00c4:
	{
		int32_t L_29 = V_6;
		if (!((int32_t)((int32_t)L_29&(int32_t)1)))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00d3:
	{
		BinaryReader_t2428077293 * L_31 = V_1;
		NullCheck(L_31);
		Stream_t1273022909 * L_32 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_31);
		NullCheck(L_32);
		int64_t L_33 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_32);
		int32_t L_34 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)(((int64_t)((int64_t)L_34)))));
		uint32_t L_35 = (&V_5)->get_id_0();
		String_t* L_36 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m920492651(NULL /*static, unused*/, L_36, _stringLiteral731316992, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_010e;
		}
	}
	{
		V_4 = (bool)1;
		BinaryReader_t2428077293 * L_38 = V_1;
		WAV_PCM_t124248382  L_39 = WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970(NULL /*static, unused*/, L_38, /*hidden argument*/WaveFile_ReadType_TisWAV_PCM_t124248382_m3205128970_RuntimeMethod_var);
		V_3 = L_39;
		goto IL_02bf;
	}

IL_010e:
	{
		uint32_t L_40 = (&V_5)->get_id_0();
		String_t* L_41 = WaveFile_GetID_m3113013044(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_42 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, _stringLiteral2037252866, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_02bf;
		}
	}
	{
		bool L_43 = V_4;
		if (L_43)
		{
			goto IL_0147;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_44 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral3828196555, _stringLiteral590273232, L_44, /*hidden argument*/NULL);
		return (AudioClip_t3680889665 *)NULL;
	}

IL_0147:
	{
		BinaryReader_t2428077293 * L_45 = V_1;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		ByteU5BU5D_t4116647657* L_47 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, int32_t >::Invoke(14 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_45, L_46);
		V_8 = L_47;
		uint16_t L_48 = (&V_3)->get_channels_1();
		V_9 = L_48;
		uint16_t L_49 = (&V_3)->get_bits_per_sample_5();
		V_10 = L_49;
		int32_t L_50 = V_10;
		V_11 = (((float)((float)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1))&(int32_t)((int32_t)31))))))));
		int32_t L_51 = V_10;
		V_12 = ((int32_t)((int32_t)L_51/(int32_t)8));
		ByteU5BU5D_t4116647657* L_52 = V_8;
		NullCheck(L_52);
		int32_t L_53 = V_12;
		V_13 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_52)->max_length))))/(int32_t)L_53));
		ObjectU5BU5D_t2843939325* L_54 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_55 = L_54;
		int32_t L_56 = V_9;
		int32_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_55;
		int32_t L_60 = V_10;
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_62);
		ObjectU5BU5D_t2843939325* L_63 = L_59;
		int32_t L_64 = V_13;
		int32_t L_65 = L_64;
		RuntimeObject * L_66 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_66);
		ObjectU5BU5D_t2843939325* L_67 = L_63;
		uint32_t L_68 = (&V_3)->get_sample_rate_2();
		uint32_t L_69 = L_68;
		RuntimeObject * L_70 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_70);
		Log_Debug_m3685190310(NULL /*static, unused*/, _stringLiteral3828196555, _stringLiteral2224792573, L_67, /*hidden argument*/NULL);
		int32_t L_71 = V_13;
		SingleU5BU5D_t1444911251* L_72 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_71);
		V_14 = L_72;
		int32_t L_73 = V_10;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0203;
		}
	}
	{
		V_15 = 0;
		goto IL_01f5;
	}

IL_01da:
	{
		SingleU5BU5D_t1444911251* L_74 = V_14;
		int32_t L_75 = V_15;
		ByteU5BU5D_t4116647657* L_76 = V_8;
		int32_t L_77 = V_15;
		int32_t L_78 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int16_t L_79 = BitConverter_ToInt16_m2376388426(NULL /*static, unused*/, L_76, ((int32_t)il2cpp_codegen_multiply((int32_t)L_77, (int32_t)L_78)), /*hidden argument*/NULL);
		float L_80 = V_11;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (float)((float)((float)(((float)((float)L_79)))/(float)L_80)));
		int32_t L_81 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_01f5:
	{
		int32_t L_82 = V_15;
		int32_t L_83 = V_13;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_01da;
		}
	}
	{
		goto IL_029d;
	}

IL_0203:
	{
		int32_t L_84 = V_10;
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_023d;
		}
	}
	{
		V_16 = 0;
		goto IL_022f;
	}

IL_0214:
	{
		SingleU5BU5D_t1444911251* L_85 = V_14;
		int32_t L_86 = V_16;
		ByteU5BU5D_t4116647657* L_87 = V_8;
		int32_t L_88 = V_16;
		int32_t L_89 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_90 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_87, ((int32_t)il2cpp_codegen_multiply((int32_t)L_88, (int32_t)L_89)), /*hidden argument*/NULL);
		float L_91 = V_11;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (float)((float)((float)(((float)((float)L_90)))/(float)L_91)));
		int32_t L_92 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
	}

IL_022f:
	{
		int32_t L_93 = V_16;
		int32_t L_94 = V_13;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_0214;
		}
	}
	{
		goto IL_029d;
	}

IL_023d:
	{
		int32_t L_95 = V_10;
		if ((!(((uint32_t)L_95) == ((uint32_t)8))))
		{
			goto IL_0276;
		}
	}
	{
		V_17 = 0;
		goto IL_0268;
	}

IL_024d:
	{
		SingleU5BU5D_t1444911251* L_96 = V_14;
		int32_t L_97 = V_17;
		ByteU5BU5D_t4116647657* L_98 = V_8;
		int32_t L_99 = V_17;
		int32_t L_100 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		Il2CppChar L_101 = BitConverter_ToChar_m1348346703(NULL /*static, unused*/, L_98, ((int32_t)il2cpp_codegen_multiply((int32_t)L_99, (int32_t)L_100)), /*hidden argument*/NULL);
		float L_102 = V_11;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (float)((float)((float)(((float)((float)L_101)))/(float)L_102)));
		int32_t L_103 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0268:
	{
		int32_t L_104 = V_17;
		int32_t L_105 = V_13;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_029d;
	}

IL_0276:
	{
		ObjectU5BU5D_t2843939325* L_106 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_107 = L_106;
		String_t* L_108 = Int32_ToString_m141394615((int32_t*)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_108);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_108);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral3828196555, _stringLiteral855515498, L_107, /*hidden argument*/NULL);
		return (AudioClip_t3680889665 *)NULL;
	}

IL_029d:
	{
		String_t* L_109 = ___clipName0;
		int32_t L_110 = V_13;
		int32_t L_111 = V_9;
		uint32_t L_112 = (&V_3)->get_sample_rate_2();
		AudioClip_t3680889665 * L_113 = AudioClip_Create_m255819841(NULL /*static, unused*/, L_109, L_110, L_111, L_112, (bool)0, /*hidden argument*/NULL);
		V_18 = L_113;
		AudioClip_t3680889665 * L_114 = V_18;
		SingleU5BU5D_t1444911251* L_115 = V_14;
		NullCheck(L_114);
		AudioClip_SetData_m313920037(L_114, L_115, 0, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_116 = V_18;
		return L_116;
	}

IL_02bf:
	{
		BinaryReader_t2428077293 * L_117 = V_1;
		NullCheck(L_117);
		Stream_t1273022909 * L_118 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_117);
		int64_t L_119 = V_7;
		NullCheck(L_118);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_118, L_119);
	}

IL_02cc:
	{
		BinaryReader_t2428077293 * L_120 = V_1;
		NullCheck(L_120);
		Stream_t1273022909 * L_121 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_120);
		NullCheck(L_121);
		int64_t L_122 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_121);
		BinaryReader_t2428077293 * L_123 = V_1;
		NullCheck(L_123);
		Stream_t1273022909 * L_124 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_123);
		NullCheck(L_124);
		int64_t L_125 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_124);
		if ((((int64_t)L_122) < ((int64_t)L_125)))
		{
			goto IL_0091;
		}
	}
	{
		return (AudioClip_t3680889665 *)NULL;
	}
}
// System.Byte[] IBM.Watson.DeveloperCloud.Utilities.WaveFile::CreateWAV(UnityEngine.AudioClip,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WaveFile_CreateWAV_m3752693229 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * ___clip0, int32_t ___bps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFile_CreateWAV_m3752693229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	BinaryWriter_t3992595042 * V_1 = NULL;
	IFF_FORM_CHUNK_t403332380  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	WAV_PCM_t124248382  V_5;
	memset(&V_5, 0, sizeof(V_5));
	IFF_CHUNK_t1040744086  V_6;
	memset(&V_6, 0, sizeof(V_6));
	IFF_CHUNK_t1040744086  V_7;
	memset(&V_7, 0, sizeof(V_7));
	SingleU5BU5D_t1444911251* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t94973147 * L_1 = V_0;
		BinaryWriter_t3992595042 * L_2 = (BinaryWriter_t3992595042 *)il2cpp_codegen_object_new(BinaryWriter_t3992595042_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m1874693998(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(IFF_FORM_CHUNK_t403332380 ));
		uint32_t L_3 = WaveFile_MakeID_m3070611325(NULL /*static, unused*/, _stringLiteral1209311930, /*hidden argument*/NULL);
		(&V_2)->set_form_id_0(L_3);
		(&V_2)->set_form_length_1((-1));
		uint32_t L_4 = WaveFile_MakeID_m3070611325(NULL /*static, unused*/, _stringLiteral2834979077, /*hidden argument*/NULL);
		(&V_2)->set_id_2(L_4);
		BinaryWriter_t3992595042 * L_5 = V_1;
		IFF_FORM_CHUNK_t403332380  L_6 = V_2;
		WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245_RuntimeMethod_var);
		BinaryWriter_t3992595042 * L_7 = V_1;
		NullCheck(L_7);
		Stream_t1273022909 * L_8 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_7);
		NullCheck(L_8);
		int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		V_3 = L_9;
		int32_t L_10 = ___bps1;
		V_4 = (((float)((float)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1))&(int32_t)((int32_t)31))))))));
		il2cpp_codegen_initobj((&V_5), sizeof(WAV_PCM_t124248382 ));
		(&V_5)->set_format_tag_0((uint16_t)1);
		(&V_5)->set_alignment_4((uint16_t)2);
		int32_t L_11 = ___bps1;
		(&V_5)->set_bits_per_sample_5((uint16_t)(((int32_t)((uint16_t)L_11))));
		AudioClip_t3680889665 * L_12 = ___clip0;
		NullCheck(L_12);
		int32_t L_13 = AudioClip_get_frequency_m3907759635(L_12, /*hidden argument*/NULL);
		(&V_5)->set_sample_rate_2(L_13);
		AudioClip_t3680889665 * L_14 = ___clip0;
		NullCheck(L_14);
		int32_t L_15 = AudioClip_get_channels_m2392813414(L_14, /*hidden argument*/NULL);
		(&V_5)->set_channels_1((uint16_t)(((int32_t)((uint16_t)L_15))));
		int32_t L_16 = ___bps1;
		AudioClip_t3680889665 * L_17 = ___clip0;
		NullCheck(L_17);
		int32_t L_18 = AudioClip_get_channels_m2392813414(L_17, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_19 = ___clip0;
		NullCheck(L_19);
		int32_t L_20 = AudioClip_get_frequency_m3907759635(L_19, /*hidden argument*/NULL);
		(&V_5)->set_average_data_rate_3(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_16/(int32_t)8)), (int32_t)L_18)), (int32_t)L_20)));
		il2cpp_codegen_initobj((&V_6), sizeof(IFF_CHUNK_t1040744086 ));
		uint32_t L_21 = WaveFile_MakeID_m3070611325(NULL /*static, unused*/, _stringLiteral731316992, /*hidden argument*/NULL);
		(&V_6)->set_id_0(L_21);
		WAV_PCM_t124248382  L_22 = V_5;
		WAV_PCM_t124248382  L_23 = L_22;
		RuntimeObject * L_24 = Box(WAV_PCM_t124248382_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_25 = Marshal_SizeOf_m973108693(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		(&V_6)->set_length_1(L_25);
		BinaryWriter_t3992595042 * L_26 = V_1;
		IFF_CHUNK_t1040744086  L_27 = V_6;
		WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165_RuntimeMethod_var);
		BinaryWriter_t3992595042 * L_28 = V_1;
		WAV_PCM_t124248382  L_29 = V_5;
		WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/WaveFile_WriteType_TisWAV_PCM_t124248382_m3855463198_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_7), sizeof(IFF_CHUNK_t1040744086 ));
		uint32_t L_30 = WaveFile_MakeID_m3070611325(NULL /*static, unused*/, _stringLiteral2037252866, /*hidden argument*/NULL);
		(&V_7)->set_id_0(L_30);
		int32_t L_31 = ___bps1;
		AudioClip_t3680889665 * L_32 = ___clip0;
		NullCheck(L_32);
		int32_t L_33 = AudioClip_get_samples_m1836473408(L_32, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_34 = ___clip0;
		NullCheck(L_34);
		int32_t L_35 = AudioClip_get_channels_m2392813414(L_34, /*hidden argument*/NULL);
		(&V_7)->set_length_1(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_31/(int32_t)8)), (int32_t)L_33)), (int32_t)L_35)));
		BinaryWriter_t3992595042 * L_36 = V_1;
		IFF_CHUNK_t1040744086  L_37 = V_7;
		WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/WaveFile_WriteType_TisIFF_CHUNK_t1040744086_m83508165_RuntimeMethod_var);
		AudioClip_t3680889665 * L_38 = ___clip0;
		NullCheck(L_38);
		int32_t L_39 = AudioClip_get_samples_m1836473408(L_38, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_40 = ___clip0;
		NullCheck(L_40);
		int32_t L_41 = AudioClip_get_channels_m2392813414(L_40, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_42 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)L_41)));
		V_8 = L_42;
		AudioClip_t3680889665 * L_43 = ___clip0;
		SingleU5BU5D_t1444911251* L_44 = V_8;
		NullCheck(L_43);
		AudioClip_GetData_m1251334845(L_43, L_44, 0, /*hidden argument*/NULL);
		int32_t L_45 = ___bps1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0179;
		}
	}
	{
		V_9 = 0;
		goto IL_0169;
	}

IL_0154:
	{
		BinaryWriter_t3992595042 * L_46 = V_1;
		SingleU5BU5D_t1444911251* L_47 = V_8;
		int32_t L_48 = V_9;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		float L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		float L_51 = V_4;
		NullCheck(L_46);
		VirtActionInvoker1< int16_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_46, (((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_50, (float)L_51))))));
		int32_t L_52 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0169:
	{
		int32_t L_53 = V_9;
		SingleU5BU5D_t1444911251* L_54 = V_8;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_0154;
		}
	}
	{
		goto IL_0209;
	}

IL_0179:
	{
		int32_t L_55 = ___bps1;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_01ae;
		}
	}
	{
		V_10 = 0;
		goto IL_019e;
	}

IL_0189:
	{
		BinaryWriter_t3992595042 * L_56 = V_1;
		SingleU5BU5D_t1444911251* L_57 = V_8;
		int32_t L_58 = V_10;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		float L_61 = V_4;
		NullCheck(L_56);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_56, (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_60, (float)L_61))))));
		int32_t L_62 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_019e:
	{
		int32_t L_63 = V_10;
		SingleU5BU5D_t1444911251* L_64 = V_8;
		NullCheck(L_64);
		if ((((int32_t)L_63) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_64)->max_length)))))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_0209;
	}

IL_01ae:
	{
		int32_t L_65 = ___bps1;
		if ((!(((uint32_t)L_65) == ((uint32_t)8))))
		{
			goto IL_01e2;
		}
	}
	{
		V_11 = 0;
		goto IL_01d2;
	}

IL_01bd:
	{
		BinaryWriter_t3992595042 * L_66 = V_1;
		SingleU5BU5D_t1444911251* L_67 = V_8;
		int32_t L_68 = V_11;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		float L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		float L_71 = V_4;
		NullCheck(L_66);
		VirtActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Char) */, L_66, (((int32_t)((uint16_t)((float)il2cpp_codegen_multiply((float)L_70, (float)L_71))))));
		int32_t L_72 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_01d2:
	{
		int32_t L_73 = V_11;
		SingleU5BU5D_t1444911251* L_74 = V_8;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_74)->max_length)))))))
		{
			goto IL_01bd;
		}
	}
	{
		goto IL_0209;
	}

IL_01e2:
	{
		ObjectU5BU5D_t2843939325* L_75 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_76 = L_75;
		String_t* L_77 = Int32_ToString_m141394615((int32_t*)(&___bps1), /*hidden argument*/NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_77);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_77);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral2111101917, _stringLiteral2250557825, L_76, /*hidden argument*/NULL);
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0209:
	{
		BinaryWriter_t3992595042 * L_78 = V_1;
		NullCheck(L_78);
		Stream_t1273022909 * L_79 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_78);
		NullCheck(L_79);
		int64_t L_80 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_79);
		int64_t L_81 = V_3;
		(&V_2)->set_form_length_1((((int32_t)((uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_80, (int64_t)L_81))))));
		BinaryWriter_t3992595042 * L_82 = V_1;
		NullCheck(L_82);
		VirtFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(8 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_82, 0, 0);
		BinaryWriter_t3992595042 * L_83 = V_1;
		IFF_FORM_CHUNK_t403332380  L_84 = V_2;
		WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245(NULL /*static, unused*/, L_83, L_84, /*hidden argument*/WaveFile_WriteType_TisIFF_FORM_CHUNK_t403332380_m3004821245_RuntimeMethod_var);
		MemoryStream_t94973147 * L_85 = V_0;
		NullCheck(L_85);
		ByteU5BU5D_t4116647657* L_86 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_85);
		return L_86;
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Widget__ctor_m163777879 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		__this->set__autoConnect_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget::get_WidgetName()
extern "C" IL2CPP_METHOD_ATTR String_t* Widget_get_WidgetName_m2107460511 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String IBM.Watson.DeveloperCloud.Widgets.Widget::GetName() */, __this);
		return L_0;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input[] IBM.Watson.DeveloperCloud.Widgets.Widget::get_Inputs()
extern "C" IL2CPP_METHOD_ATTR InputU5BU5D_t632706290* Widget_get_Inputs_m146930454 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__initialized_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Widget_InitializeIO_m829930977(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		InputU5BU5D_t632706290* L_1 = __this->get__inputs_6();
		return L_1;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[] IBM.Watson.DeveloperCloud.Widgets.Widget::get_Outputs()
extern "C" IL2CPP_METHOD_ATTR OutputU5BU5D_t4065696049* Widget_get_Outputs_m3428385191 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__initialized_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Widget_InitializeIO_m829930977(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		OutputU5BU5D_t4065696049* L_1 = __this->get__outputs_7();
		return L_1;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::ResolveConnections()
extern "C" IL2CPP_METHOD_ATTR void Widget_ResolveConnections_m407764373 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		Widget_InitializeIO_m829930977(__this, /*hidden argument*/NULL);
		Widget_InitializeConnections_m4256191606(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::InitializeIO()
extern "C" IL2CPP_METHOD_ATTR void Widget_InitializeIO_m829930977 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Widget_InitializeIO_m829930977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Output_t2166053520 * V_0 = NULL;
	OutputU5BU5D_t4065696049* V_1 = NULL;
	int32_t V_2 = 0;
	Input_t789873443 * V_3 = NULL;
	InputU5BU5D_t632706290* V_4 = NULL;
	int32_t V_5 = 0;
	{
		OutputU5BU5D_t4065696049* L_0 = Widget_GetMembersByType_TisOutput_t2166053520_m2036084381(__this, /*hidden argument*/Widget_GetMembersByType_TisOutput_t2166053520_m2036084381_RuntimeMethod_var);
		__this->set__outputs_7(L_0);
		OutputU5BU5D_t4065696049* L_1 = __this->get__outputs_7();
		V_1 = L_1;
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		OutputU5BU5D_t4065696049* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Output_t2166053520 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Output_t2166053520 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< Widget_t1534328253 * >::Invoke(4 /* System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::Start(IBM.Watson.DeveloperCloud.Widgets.Widget) */, L_6, __this);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		OutputU5BU5D_t4065696049* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		InputU5BU5D_t632706290* L_10 = Widget_GetMembersByType_TisInput_t789873443_m3125330832(__this, /*hidden argument*/Widget_GetMembersByType_TisInput_t789873443_m3125330832_RuntimeMethod_var);
		__this->set__inputs_6(L_10);
		InputU5BU5D_t632706290* L_11 = __this->get__inputs_6();
		V_4 = L_11;
		V_5 = 0;
		goto IL_0061;
	}

IL_004e:
	{
		InputU5BU5D_t632706290* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Input_t789873443 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		Input_t789873443 * L_16 = V_3;
		NullCheck(L_16);
		VirtActionInvoker1< Widget_t1534328253 * >::Invoke(4 /* System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::Start(IBM.Watson.DeveloperCloud.Widgets.Widget) */, L_16, __this);
		int32_t L_17 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_18 = V_5;
		InputU5BU5D_t632706290* L_19 = V_4;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_004e;
		}
	}
	{
		__this->set__initialized_5((bool)1);
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::InitializeConnections()
extern "C" IL2CPP_METHOD_ATTR void Widget_InitializeConnections_m4256191606 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Widget_InitializeConnections_m4256191606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WidgetU5BU5D_t425568944* V_0 = NULL;
	Widget_t1534328253 * V_1 = NULL;
	WidgetU5BU5D_t425568944* V_2 = NULL;
	int32_t V_3 = 0;
	Output_t2166053520 * V_4 = NULL;
	OutputU5BU5D_t4065696049* V_5 = NULL;
	int32_t V_6 = 0;
	Input_t789873443 * V_7 = NULL;
	InputU5BU5D_t632706290* V_8 = NULL;
	int32_t V_9 = 0;
	{
		bool L_0 = __this->get__autoConnect_4();
		if (!L_0)
		{
			goto IL_00ff;
		}
	}
	{
		__this->set__autoConnect_4((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		WidgetU5BU5D_t425568944* L_1 = Object_FindObjectsOfType_TisWidget_t1534328253_m1655898492(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisWidget_t1534328253_m1655898492_RuntimeMethod_var);
		V_0 = L_1;
		WidgetU5BU5D_t425568944* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_00f6;
	}

IL_0021:
	{
		WidgetU5BU5D_t425568944* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Widget_t1534328253 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		Widget_t1534328253 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		Widget_t1534328253 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_9, __this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}

IL_003d:
	{
		goto IL_00f2;
	}

IL_0042:
	{
		Widget_t1534328253 * L_11 = V_1;
		NullCheck(L_11);
		OutputU5BU5D_t4065696049* L_12 = Widget_get_Outputs_m3428385191(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00f2;
		}
	}
	{
		Widget_t1534328253 * L_13 = V_1;
		NullCheck(L_13);
		OutputU5BU5D_t4065696049* L_14 = Widget_get_Outputs_m3428385191(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		V_6 = 0;
		goto IL_00e7;
	}

IL_005d:
	{
		OutputU5BU5D_t4065696049* L_15 = V_5;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Output_t2166053520 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		InputU5BU5D_t632706290* L_19 = __this->get__inputs_6();
		if (!L_19)
		{
			goto IL_00e1;
		}
	}
	{
		InputU5BU5D_t632706290* L_20 = __this->get__inputs_6();
		V_8 = L_20;
		V_9 = 0;
		goto IL_00d6;
	}

IL_007f:
	{
		InputU5BU5D_t632706290* L_21 = V_8;
		int32_t L_22 = V_9;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Input_t789873443 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_7 = L_24;
		Input_t789873443 * L_25 = V_7;
		NullCheck(L_25);
		Type_t * L_26 = Input_get_DataType_m3427786224(L_25, /*hidden argument*/NULL);
		Output_t2166053520 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Output_get_DataType_m1419930338(L_27, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_26) == ((RuntimeObject*)(Type_t *)L_28))))
		{
			goto IL_00d0;
		}
	}
	{
		Output_t2166053520 * L_29 = V_4;
		Input_t789873443 * L_30 = V_7;
		NullCheck(L_29);
		bool L_31 = Output_AddConnection_m3549496410(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00d0;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_32 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		Output_t2166053520 * L_34 = V_4;
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_35);
		ObjectU5BU5D_t2843939325* L_36 = L_33;
		Input_t789873443 * L_37 = V_7;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_38);
		Log_Status_m910176486(NULL /*static, unused*/, _stringLiteral429001330, _stringLiteral4177267058, L_36, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		int32_t L_39 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00d6:
	{
		int32_t L_40 = V_9;
		InputU5BU5D_t632706290* L_41 = V_8;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_00e1:
	{
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00e7:
	{
		int32_t L_43 = V_6;
		OutputU5BU5D_t4065696049* L_44 = V_5;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))))))
		{
			goto IL_005d;
		}
	}

IL_00f2:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_46 = V_3;
		WidgetU5BU5D_t425568944* L_47 = V_2;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))))))
		{
			goto IL_0021;
		}
	}

IL_00ff:
	{
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::Start()
extern "C" IL2CPP_METHOD_ATTR void Widget_Start_m12890915 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		Widget_InitializeConnections_m4256191606(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget::Awake()
extern "C" IL2CPP_METHOD_ATTR void Widget_Awake_m2730829780 (Widget_t1534328253 * __this, const RuntimeMethod* method)
{
	{
		Widget_InitializeIO_m829930977(__this, /*hidden argument*/NULL);
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Data__ctor_m172305036 (Data_t4259022272 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Data::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Data_get_Name_m2175619905 (Data_t4259022272 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Data::GetName() */, __this);
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::.ctor(System.String,System.Type,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Input__ctor_m514936633 (Input_t789873443 * __this, String_t* ___name0, Type_t * ___dataType1, String_t* ___receiverFunction2, bool ___allowMany3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input__ctor_m514936633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3638128262 * L_0 = (List_1_t3638128262 *)il2cpp_codegen_object_new(List_1_t3638128262_il2cpp_TypeInfo_var);
		List_1__ctor_m1224377238(L_0, /*hidden argument*/List_1__ctor_m1224377238_RuntimeMethod_var);
		__this->set__connections_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		Input_set_InputName_m61770620(__this, L_1, /*hidden argument*/NULL);
		Type_t * L_2 = ___dataType1;
		Input_set_DataType_m1046321217(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___receiverFunction2;
		Input_set_ReceiverFunction_m647479957(__this, L_3, /*hidden argument*/NULL);
		bool L_4 = ___allowMany3;
		Input_set_AllowMany_m2209375957(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_ToString_m4184213043 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_ToString_m4184213043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Widget_t1534328253 * L_2 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0029;
		}
	}
	{
		Widget_t1534328253 * L_4 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = _stringLiteral1202628576;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3452614530);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614530);
		StringU5BU5D_t1281789340* L_7 = L_6;
		String_t* L_8 = Input_get_InputName_m3530248252(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
		StringU5BU5D_t1281789340* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3451041664);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451041664);
		StringU5BU5D_t1281789340* L_10 = L_9;
		Type_t * L_11 = Input_get_DataType_m3427786224(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		StringU5BU5D_t1281789340* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3452614535);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1809518182(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t1534328253 * Input_get_Owner_m2452489486 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		Widget_t1534328253 * L_0 = __this->get_U3COwnerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_Owner(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Input_set_Owner_m554388651 (Input_t789873443 * __this, Widget_t1534328253 * ___value0, const RuntimeMethod* method)
{
	{
		Widget_t1534328253 * L_0 = ___value0;
		__this->set_U3COwnerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OwnerName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_OwnerName_m1028539334 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		Widget_t1534328253 * L_0 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Widget_get_WidgetName_m2107460511(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_InputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_InputName_m3530248252 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CInputNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_InputName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Input_set_InputName_m61770620 (Input_t789873443 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CInputNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_FullInputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_FullInputName_m3142238679 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_get_FullInputName_m3142238679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Input_get_OwnerName_m1028539334(__this, /*hidden argument*/NULL);
		String_t* L_1 = Input_get_InputName_m3530248252(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, L_0, _stringLiteral3452614529, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Input_get_DataType_m3427786224 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CDataTypeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Input_set_DataType_m1046321217 (Input_t789873443 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDataTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Input_get_AllowMany_m4052470851 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowManyU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Input_set_AllowMany_m2209375957 (Input_t789873443 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowManyU3Ek__BackingField_4(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output[] IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_Connections()
extern "C" IL2CPP_METHOD_ATTR OutputU5BU5D_t4065696049* Input_get_Connections_m3464384795 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_get_Connections_m3464384795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3638128262 * L_0 = __this->get__connections_0();
		NullCheck(L_0);
		OutputU5BU5D_t4065696049* L_1 = List_1_ToArray_m1403542956(L_0, /*hidden argument*/List_1_ToArray_m1403542956_RuntimeMethod_var);
		return L_1;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_DataTypeName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_DataTypeName_m1158177053 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Input_get_DataType_m3427786224(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_ReceiverFunction()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_ReceiverFunction_m835436049 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CReceiverFunctionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_ReceiverFunction(System.String)
extern "C" IL2CPP_METHOD_ATTR void Input_set_ReceiverFunction_m647479957 (Input_t789873443 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CReceiverFunctionU3Ek__BackingField_5(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_DataReceiver()
extern "C" IL2CPP_METHOD_ATTR OnReceiveData_t3166915800 * Input_get_DataReceiver_m2450229106 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		OnReceiveData_t3166915800 * L_0 = __this->get_U3CDataReceiverU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_DataReceiver(IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData)
extern "C" IL2CPP_METHOD_ATTR void Input_set_DataReceiver_m893126737 (Input_t789873443 * __this, OnReceiveData_t3166915800 * ___value0, const RuntimeMethod* method)
{
	{
		OnReceiveData_t3166915800 * L_0 = ___value0;
		__this->set_U3CDataReceiverU3Ek__BackingField_6(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OnOutputAdded()
extern "C" IL2CPP_METHOD_ATTR OnOutputAdded_t1994924040 * Input_get_OnOutputAdded_m3153701904 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		OnOutputAdded_t1994924040 * L_0 = __this->get_U3COnOutputAddedU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_OnOutputAdded(IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded)
extern "C" IL2CPP_METHOD_ATTR void Input_set_OnOutputAdded_m3517844847 (Input_t789873443 * __this, OnOutputAdded_t1994924040 * ___value0, const RuntimeMethod* method)
{
	{
		OnOutputAdded_t1994924040 * L_0 = ___value0;
		__this->set_U3COnOutputAddedU3Ek__BackingField_7(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Input::get_OnOutputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnOutputRemoved_t2484111978 * Input_get_OnOutputRemoved_m1581741683 (Input_t789873443 * __this, const RuntimeMethod* method)
{
	{
		OnOutputRemoved_t2484111978 * L_0 = __this->get_U3COnOutputRemovedU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::set_OnOutputRemoved(IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved)
extern "C" IL2CPP_METHOD_ATTR void Input_set_OnOutputRemoved_m3248828933 (Input_t789873443 * __this, OnOutputRemoved_t2484111978 * ___value0, const RuntimeMethod* method)
{
	{
		OnOutputRemoved_t2484111978 * L_0 = ___value0;
		__this->set_U3COnOutputRemovedU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::AddOutput(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_AddOutput_m1670639108 (Input_t789873443 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_AddOutput_m1670639108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_get_AllowMany_m4052470851(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t3638128262 * L_1 = __this->get__connections_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1957816562(L_1, /*hidden argument*/List_1_get_Count_m1957816562_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		List_1_t3638128262 * L_3 = __this->get__connections_0();
		Output_t2166053520 * L_4 = ___output0;
		NullCheck(L_3);
		bool L_5 = List_1_Contains_m563392257(L_3, L_4, /*hidden argument*/List_1_Contains_m563392257_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		List_1_t3638128262 * L_6 = __this->get__connections_0();
		Output_t2166053520 * L_7 = ___output0;
		NullCheck(L_6);
		List_1_Add_m3934450950(L_6, L_7, /*hidden argument*/List_1_Add_m3934450950_RuntimeMethod_var);
		OnOutputAdded_t1994924040 * L_8 = Input_get_OnOutputAdded_m3153701904(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		OnOutputAdded_t1994924040 * L_9 = Input_get_OnOutputAdded_m3153701904(__this, /*hidden argument*/NULL);
		Output_t2166053520 * L_10 = ___output0;
		NullCheck(L_9);
		OnOutputAdded_Invoke_m501525943(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return (bool)1;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Input::RemoveOutput(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_RemoveOutput_m3375657997 (Input_t789873443 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_RemoveOutput_m3375657997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t3638128262 * L_0 = __this->get__connections_0();
		Output_t2166053520 * L_1 = ___output0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m4138914593(L_0, L_1, /*hidden argument*/List_1_Remove_m4138914593_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		OnOutputRemoved_t2484111978 * L_4 = Input_get_OnOutputRemoved_m1581741683(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		OnOutputRemoved_t2484111978 * L_5 = Input_get_OnOutputRemoved_m1581741683(__this, /*hidden argument*/NULL);
		Output_t2166053520 * L_6 = ___output0;
		NullCheck(L_5);
		OnOutputRemoved_Invoke_m884226655(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::Start(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Input_Start_m1538958278 (Input_t789873443 * __this, Widget_t1534328253 * ___owner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_Start_m1538958278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Widget_t1534328253 * L_0 = ___owner0;
		Input_set_Owner_m554388651(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = Input_get_ReceiverFunction_m835436049(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00b9;
		}
	}
	{
		Widget_t1534328253 * L_3 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		String_t* L_5 = Input_get_ReceiverFunction_m835436049(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		MethodInfo_t * L_6 = Type_GetMethod_m1197120913(L_4, L_5, ((int32_t)316), /*hidden argument*/NULL);
		V_0 = L_6;
		MethodInfo_t * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (OnReceiveData_t3166915800_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Widget_t1534328253 * L_10 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_11 = V_0;
		Delegate_t1188392813 * L_12 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		Input_set_DataReceiver_m893126737(__this, ((OnReceiveData_t3166915800 *)IsInstSealed((RuntimeObject*)L_12, OnReceiveData_t3166915800_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		OnReceiveData_t3166915800 * L_13 = Input_get_DataReceiver_m2450229106(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0083;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_14 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		String_t* L_16 = Input_get_ReceiverFunction_m835436049(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral2922058023, _stringLiteral837235735, L_15, /*hidden argument*/NULL);
	}

IL_0083:
	{
		goto IL_00b9;
	}

IL_0088:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		String_t* L_19 = Input_get_ReceiverFunction_m835436049(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_18;
		Widget_t1534328253 * L_21 = Input_get_Owner_m2452489486(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = Object_get_name_m4211327027(L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral2922058023, _stringLiteral3486416773, L_20, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::ReceiveData(IBM.Watson.DeveloperCloud.Widgets.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR void Input_ReceiveData_m4229075244 (Input_t789873443 * __this, Data_t4259022272 * ___data0, const RuntimeMethod* method)
{
	{
		OnReceiveData_t3166915800 * L_0 = Input_get_DataReceiver_m2450229106(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OnReceiveData_t3166915800 * L_1 = Input_get_DataReceiver_m2450229106(__this, /*hidden argument*/NULL);
		Data_t4259022272 * L_2 = ___data0;
		NullCheck(L_1);
		OnReceiveData_Invoke_m583478454(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded__ctor_m3703044254 (OnInputAdded_t3329887880 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_Invoke_m4000746063 (OnInputAdded_t3329887880 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnInputAdded_Invoke_m4000746063((OnInputAdded_t3329887880 *)__this->get_prev_9(), ___input0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___input0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___input0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Input_t789873443 * >::Invoke(targetMethod, targetThis, ___input0);
					else
						GenericVirtActionInvoker1< Input_t789873443 * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Input_t789873443 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						VirtActionInvoker1< Input_t789873443 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded::BeginInvoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnInputAdded_BeginInvoke_m1539892684 (OnInputAdded_t3329887880 * __this, Input_t789873443 * ___input0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_EndInvoke_m1591344846 (OnInputAdded_t3329887880 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved__ctor_m2695803257 (OnInputRemoved_t4133684454 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_Invoke_m2766180747 (OnInputRemoved_t4133684454 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnInputRemoved_Invoke_m2766180747((OnInputRemoved_t4133684454 *)__this->get_prev_9(), ___input0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___input0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___input0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Input_t789873443 * >::Invoke(targetMethod, targetThis, ___input0);
					else
						GenericVirtActionInvoker1< Input_t789873443 * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Input_t789873443 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						VirtActionInvoker1< Input_t789873443 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Input_t789873443 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved::BeginInvoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Input,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnInputRemoved_BeginInvoke_m3628065619 (OnInputRemoved_t4133684454 * __this, Input_t789873443 * ___input0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_EndInvoke_m3450102027 (OnInputRemoved_t4133684454 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded__ctor_m3974820767 (OnOutputAdded_t1994924040 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded_Invoke_m501525943 (OnOutputAdded_t1994924040 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnOutputAdded_Invoke_m501525943((OnOutputAdded_t1994924040 *)__this->get_prev_9(), ___output0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___output0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___output0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Output_t2166053520 * >::Invoke(targetMethod, targetThis, ___output0);
					else
						GenericVirtActionInvoker1< Output_t2166053520 * >::Invoke(targetMethod, targetThis, ___output0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Output_t2166053520 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
					else
						VirtActionInvoker1< Output_t2166053520 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded::BeginInvoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnOutputAdded_BeginInvoke_m4277975219 (OnOutputAdded_t1994924040 * __this, Output_t2166053520 * ___output0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___output0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded_EndInvoke_m2642300071 (OnOutputAdded_t1994924040 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved__ctor_m3521563143 (OnOutputRemoved_t2484111978 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved_Invoke_m884226655 (OnOutputRemoved_t2484111978 * __this, Output_t2166053520 * ___output0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnOutputRemoved_Invoke_m884226655((OnOutputRemoved_t2484111978 *)__this->get_prev_9(), ___output0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___output0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___output0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Output_t2166053520 * >::Invoke(targetMethod, targetThis, ___output0);
					else
						GenericVirtActionInvoker1< Output_t2166053520 * >::Invoke(targetMethod, targetThis, ___output0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Output_t2166053520 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
					else
						VirtActionInvoker1< Output_t2166053520 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Output_t2166053520 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved::BeginInvoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Output,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnOutputRemoved_BeginInvoke_m2466661398 (OnOutputRemoved_t2484111978 * __this, Output_t2166053520 * ___output0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___output0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnOutputRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved_EndInvoke_m2768864283 (OnOutputRemoved_t2484111978 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData__ctor_m3718431642 (OnReceiveData_t3166915800 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData::Invoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData_Invoke_m583478454 (OnReceiveData_t3166915800 * __this, Data_t4259022272 * ___data0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnReceiveData_Invoke_m583478454((OnReceiveData_t3166915800 *)__this->get_prev_9(), ___data0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Data_t4259022272 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Data_t4259022272 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___data0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Data_t4259022272 * >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< Data_t4259022272 * >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Data_t4259022272 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< Data_t4259022272 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Data_t4259022272 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Data_t4259022272 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData::BeginInvoke(IBM.Watson.DeveloperCloud.Widgets.Widget/Data,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnReceiveData_BeginInvoke_m3144399925 (OnReceiveData_t3166915800 * __this, Data_t4259022272 * ___data0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/OnReceiveData::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData_EndInvoke_m1075116091 (OnReceiveData_t3166915800 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::.ctor(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output__ctor_m1543475086 (Output_t2166053520 * __this, Type_t * ___dataType0, bool ___allowMany1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output__ctor_m1543475086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1342236955 * L_0 = (List_1_t1342236955 *)il2cpp_codegen_object_new(List_1_t1342236955_il2cpp_TypeInfo_var);
		List_1__ctor_m3564539098(L_0, /*hidden argument*/List_1__ctor_m3564539098_RuntimeMethod_var);
		__this->set__connections_5(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___dataType0;
		Output_set_DataType_m3682298338(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___allowMany1;
		Output_set_AllowMany_m1943411253(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Output::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Output_ToString_m3027564494 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_ToString_m3027564494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		Widget_t1534328253 * L_0 = Output_get_Owner_m2506546873(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Widget_t1534328253 * L_2 = Output_get_Owner_m2506546873(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0026;
	}

IL_0021:
	{
		G_B3_0 = _stringLiteral1202628576;
	}

IL_0026:
	{
		Type_t * L_4 = Output_get_DataType_m1419930338(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, G_B3_0, _stringLiteral3451041664, L_5, _stringLiteral3452614535, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_IsConnected()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_IsConnected_m831068958 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_get_IsConnected_m831068958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t4165129509 * V_0 = NULL;
	Enumerator_t3231480832  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1342236955 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		Enumerator_t3231480832  L_1 = List_1_GetEnumerator_m3809269953(L_0, /*hidden argument*/List_1_GetEnumerator_m3809269953_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0011:
		{
			Connection_t4165129509 * L_2 = Enumerator_get_Current_m355331424((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m355331424_RuntimeMethod_var);
			V_0 = L_2;
			Connection_t4165129509 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = Connection_ResolveTargetInput_m761714751(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_002b;
			}
		}

IL_0024:
		{
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x4C, FINALLY_003c);
		}

IL_002b:
		{
			bool L_5 = Enumerator_MoveNext_m2105435828((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2105435828_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m26165935((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m26165935_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection[] IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_Connections()
extern "C" IL2CPP_METHOD_ATTR ConnectionU5BU5D_t3727671464* Output_get_Connections_m3466450746 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_get_Connections_m3466450746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1342236955 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		ConnectionU5BU5D_t3727671464* L_1 = List_1_ToArray_m3631305337(L_0, /*hidden argument*/List_1_ToArray_m3631305337_RuntimeMethod_var);
		return L_1;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t1534328253 * Output_get_Owner_m2506546873 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	{
		Widget_t1534328253 * L_0 = __this->get_U3COwnerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_Owner(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_set_Owner_m2019747983 (Output_t2166053520 * __this, Widget_t1534328253 * ___value0, const RuntimeMethod* method)
{
	{
		Widget_t1534328253 * L_0 = ___value0;
		__this->set_U3COwnerU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Type IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Output_get_DataType_m1419930338 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CDataTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Output_set_DataType_m3682298338 (Output_t2166053520 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDataTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_AllowMany_m3875736062 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowManyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output_set_AllowMany_m1943411253 (Output_t2166053520 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowManyU3Ek__BackingField_2(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_OnInputAdded()
extern "C" IL2CPP_METHOD_ATTR OnInputAdded_t3329887880 * Output_get_OnInputAdded_m3929450682 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	{
		OnInputAdded_t3329887880 * L_0 = __this->get_U3COnInputAddedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_OnInputAdded(IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputAdded)
extern "C" IL2CPP_METHOD_ATTR void Output_set_OnInputAdded_m3135782318 (Output_t2166053520 * __this, OnInputAdded_t3329887880 * ___value0, const RuntimeMethod* method)
{
	{
		OnInputAdded_t3329887880 * L_0 = ___value0;
		__this->set_U3COnInputAddedU3Ek__BackingField_3(L_0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved IBM.Watson.DeveloperCloud.Widgets.Widget/Output::get_OnInputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnInputRemoved_t4133684454 * Output_get_OnInputRemoved_m1249916090 (Output_t2166053520 * __this, const RuntimeMethod* method)
{
	{
		OnInputRemoved_t4133684454 * L_0 = __this->get_U3COnInputRemovedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::set_OnInputRemoved(IBM.Watson.DeveloperCloud.Widgets.Widget/OnInputRemoved)
extern "C" IL2CPP_METHOD_ATTR void Output_set_OnInputRemoved_m3399083071 (Output_t2166053520 * __this, OnInputRemoved_t4133684454 * ___value0, const RuntimeMethod* method)
{
	{
		OnInputRemoved_t4133684454 * L_0 = ___value0;
		__this->set_U3COnInputRemovedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output::Start(IBM.Watson.DeveloperCloud.Widgets.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_Start_m1493241048 (Output_t2166053520 * __this, Widget_t1534328253 * ___owner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_Start_m1493241048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t4165129509 * V_0 = NULL;
	Enumerator_t3231480832  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Widget_t1534328253 * L_0 = ___owner0;
		Output_set_Owner_m2019747983(__this, L_0, /*hidden argument*/NULL);
		List_1_t1342236955 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		Enumerator_t3231480832  L_2 = List_1_GetEnumerator_m3809269953(L_1, /*hidden argument*/List_1_GetEnumerator_m3809269953_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0018:
		{
			Connection_t4165129509 * L_3 = Enumerator_get_Current_m355331424((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m355331424_RuntimeMethod_var);
			V_0 = L_3;
			Connection_t4165129509 * L_4 = V_0;
			NullCheck(L_4);
			Connection_Start_m2999172782(L_4, __this, /*hidden argument*/NULL);
		}

IL_0027:
		{
			bool L_5 = Enumerator_MoveNext_m2105435828((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2105435828_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0018;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m26165935((Enumerator_t3231480832 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m26165935_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::SendData(IBM.Watson.DeveloperCloud.Widgets.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR bool Output_SendData_m324321874 (Output_t2166053520 * __this, Data_t4259022272 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_SendData_m324321874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Connection_t4165129509 * V_1 = NULL;
	Enumerator_t3231480832  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		List_1_t1342236955 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		Enumerator_t3231480832  L_1 = List_1_GetEnumerator_m3809269953(L_0, /*hidden argument*/List_1_GetEnumerator_m3809269953_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0082;
		}

IL_0013:
		{
			Connection_t4165129509 * L_2 = Enumerator_get_Current_m355331424((Enumerator_t3231480832 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m355331424_RuntimeMethod_var);
			V_1 = L_2;
			Connection_t4165129509 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = Connection_ResolveTargetInput_m761714751(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0082;
			}
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			Connection_t4165129509 * L_5 = V_1;
			NullCheck(L_5);
			Input_t789873443 * L_6 = Connection_get_TargetInput_m2713917159(L_5, /*hidden argument*/NULL);
			Data_t4259022272 * L_7 = ___data0;
			NullCheck(L_6);
			VirtActionInvoker1< Data_t4259022272 * >::Invoke(5 /* System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Input::ReceiveData(IBM.Watson.DeveloperCloud.Widgets.Widget/Data) */, L_6, L_7);
			V_0 = (bool)1;
			goto IL_0082;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0039;
			throw e;
		}

CATCH_0039:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t *)__exception_local);
			ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t2843939325* L_9 = L_8;
			Data_t4259022272 * L_10 = ___data0;
			NullCheck(L_10);
			String_t* L_11 = Data_get_Name_m2175619905(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_t2843939325* L_12 = L_9;
			Connection_t4165129509 * L_13 = V_1;
			NullCheck(L_13);
			Input_t789873443 * L_14 = Connection_get_TargetInput_m2713917159(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			String_t* L_15 = Input_get_InputName_m3530248252(L_14, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_15);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			ObjectU5BU5D_t2843939325* L_16 = L_12;
			Connection_t4165129509 * L_17 = V_1;
			NullCheck(L_17);
			GameObject_t1113636619 * L_18 = Connection_get_TargetObject_m3467488831(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = Object_get_name_m4211327027(L_18, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_19);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
			ObjectU5BU5D_t2843939325* L_20 = L_16;
			Exception_t * L_21 = V_3;
			NullCheck(L_21);
			String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_22);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
			Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral648138441, _stringLiteral2361604584, L_20, /*hidden argument*/NULL);
			goto IL_0082;
		} // end catch (depth: 2)

IL_0082:
		{
			bool L_23 = Enumerator_MoveNext_m2105435828((Enumerator_t3231480832 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2105435828_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0013;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m26165935((Enumerator_t3231480832 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m26165935_RuntimeMethod_var);
		IL2CPP_END_FINALLY(147)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a1:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::AddConnection(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR bool Output_AddConnection_m3549496410 (Output_t2166053520 * __this, Input_t789873443 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_AddConnection_m3549496410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t4165129509 * V_0 = NULL;
	{
		bool L_0 = Output_get_AllowMany_m3875736062(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1342236955 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3534178295(L_1, /*hidden argument*/List_1_get_Count_m3534178295_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		Input_t789873443 * L_3 = ___input0;
		NullCheck(L_3);
		Type_t * L_4 = Input_get_DataType_m3427786224(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Output_get_DataType_m1419930338(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		Connection_t4165129509 * L_6 = (Connection_t4165129509 *)il2cpp_codegen_object_new(Connection_t4165129509_il2cpp_TypeInfo_var);
		Connection__ctor_m930138303(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		Connection_t4165129509 * L_7 = V_0;
		NullCheck(L_7);
		Connection_Start_m2999172782(L_7, __this, /*hidden argument*/NULL);
		Connection_t4165129509 * L_8 = V_0;
		Input_t789873443 * L_9 = ___input0;
		NullCheck(L_8);
		Connection_set_TargetInput_m1487836820(L_8, L_9, /*hidden argument*/NULL);
		List_1_t1342236955 * L_10 = __this->get__connections_5();
		Connection_t4165129509 * L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_m891841590(L_10, L_11, /*hidden argument*/List_1_Add_m891841590_RuntimeMethod_var);
		OnInputAdded_t3329887880 * L_12 = Output_get_OnInputAdded_m3929450682(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		OnInputAdded_t3329887880 * L_13 = Output_get_OnInputAdded_m3929450682(__this, /*hidden argument*/NULL);
		Input_t789873443 * L_14 = ___input0;
		NullCheck(L_13);
		OnInputAdded_Invoke_m4000746063(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return (bool)1;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::AddConnection(UnityEngine.GameObject,System.String)
extern "C" IL2CPP_METHOD_ATTR bool Output_AddConnection_m2129234292 (Output_t2166053520 * __this, GameObject_t1113636619 * ___targetObject0, String_t* ___targetConnection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_AddConnection_m2129234292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t4165129509 * V_0 = NULL;
	{
		bool L_0 = Output_get_AllowMany_m3875736062(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1342236955 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3534178295(L_1, /*hidden argument*/List_1_get_Count_m3534178295_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		Connection_t4165129509 * L_3 = (Connection_t4165129509 *)il2cpp_codegen_object_new(Connection_t4165129509_il2cpp_TypeInfo_var);
		Connection__ctor_m930138303(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		Connection_t4165129509 * L_4 = V_0;
		NullCheck(L_4);
		Connection_Start_m2999172782(L_4, __this, /*hidden argument*/NULL);
		Connection_t4165129509 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = ___targetObject0;
		NullCheck(L_5);
		Connection_set_TargetObject_m2216651879(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___targetConnection1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		Connection_t4165129509 * L_8 = V_0;
		String_t* L_9 = ___targetConnection1;
		NullCheck(L_8);
		Connection_set_TargetConnection_m2892274677(L_8, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		Connection_t4165129509 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = Connection_ResolveTargetInput_m761714751(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		List_1_t1342236955 * L_12 = __this->get__connections_5();
		Connection_t4165129509 * L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m891841590(L_12, L_13, /*hidden argument*/List_1_Add_m891841590_RuntimeMethod_var);
		OnInputAdded_t3329887880 * L_14 = Output_get_OnInputAdded_m3929450682(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		OnInputAdded_t3329887880 * L_15 = Output_get_OnInputAdded_m3929450682(__this, /*hidden argument*/NULL);
		Connection_t4165129509 * L_16 = V_0;
		NullCheck(L_16);
		Input_t789873443 * L_17 = Connection_get_TargetInput_m2713917159(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		OnInputAdded_Invoke_m4000746063(L_15, L_17, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return (bool)1;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output::RemoveConnection(IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection)
extern "C" IL2CPP_METHOD_ATTR bool Output_RemoveConnection_m2582312550 (Output_t2166053520 * __this, Connection_t4165129509 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_RemoveConnection_m2582312550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t1342236955 * L_0 = __this->get__connections_5();
		Connection_t4165129509 * L_1 = ___c0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m1614517502(L_0, L_1, /*hidden argument*/List_1_Remove_m1614517502_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		OnInputRemoved_t4133684454 * L_4 = Output_get_OnInputRemoved_m1249916090(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		OnInputRemoved_t4133684454 * L_5 = Output_get_OnInputRemoved_m1249916090(__this, /*hidden argument*/NULL);
		Connection_t4165129509 * L_6 = ___c0;
		NullCheck(L_6);
		Input_t789873443 * L_7 = Connection_get_TargetInput_m2713917159(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		OnInputRemoved_Invoke_m2766180747(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		bool L_8 = V_0;
		return L_8;
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
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Connection__ctor_m930138303 (Connection_t4165129509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::get_TargetObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Connection_get_TargetObject_m3467488831 (Connection_t4165129509 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get__targetObject_1();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetObject_m2216651879 (Connection_t4165129509 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set__targetObject_1(L_0);
		__this->set__targetInputResolved_3((bool)0);
		return;
	}
}
// System.String IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::get_TargetConnection()
extern "C" IL2CPP_METHOD_ATTR String_t* Connection_get_TargetConnection_m2111045484 (Connection_t4165129509 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__targetConnection_2();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetConnection(System.String)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetConnection_m2892274677 (Connection_t4165129509 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__targetConnection_2(L_0);
		__this->set__targetInputResolved_3((bool)0);
		return;
	}
}
// IBM.Watson.DeveloperCloud.Widgets.Widget/Input IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::get_TargetInput()
extern "C" IL2CPP_METHOD_ATTR Input_t789873443 * Connection_get_TargetInput_m2713917159 (Connection_t4165129509 * __this, const RuntimeMethod* method)
{
	{
		Input_t789873443 * L_0 = __this->get__targetInput_4();
		return L_0;
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::set_TargetInput(IBM.Watson.DeveloperCloud.Widgets.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetInput_m1487836820 (Connection_t4165129509 * __this, Input_t789873443 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Connection_set_TargetInput_m1487836820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Input_t789873443 * L_0 = __this->get__targetInput_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Input_t789873443 * L_1 = __this->get__targetInput_4();
		Output_t2166053520 * L_2 = __this->get__owner_0();
		NullCheck(L_1);
		Input_RemoveOutput_m3375657997(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		Input_t789873443 * L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		Input_t789873443 * L_4 = ___value0;
		Output_t2166053520 * L_5 = __this->get__owner_0();
		NullCheck(L_4);
		bool L_6 = Input_AddOutput_m1670639108(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		Input_t789873443 * L_7 = ___value0;
		__this->set__targetInput_4(L_7);
		Input_t789873443 * L_8 = __this->get__targetInput_4();
		NullCheck(L_8);
		Widget_t1534328253 * L_9 = Input_get_Owner_m2452489486(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		__this->set__targetObject_1(L_10);
		Input_t789873443 * L_11 = __this->get__targetInput_4();
		NullCheck(L_11);
		String_t* L_12 = Input_get_FullInputName_m3142238679(L_11, /*hidden argument*/NULL);
		__this->set__targetConnection_2(L_12);
		goto IL_0079;
	}

IL_0067:
	{
		__this->set__targetObject_1((GameObject_t1113636619 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set__targetConnection_2(L_13);
	}

IL_0079:
	{
		__this->set__targetInputResolved_3((bool)1);
		return;
	}
}
// System.Boolean IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::ResolveTargetInput()
extern "C" IL2CPP_METHOD_ATTR bool Connection_ResolveTargetInput_m761714751 (Connection_t4165129509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Connection_ResolveTargetInput_m761714751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	WidgetU5BU5D_t425568944* V_3 = NULL;
	Widget_t1534328253 * V_4 = NULL;
	WidgetU5BU5D_t425568944* V_5 = NULL;
	int32_t V_6 = 0;
	Input_t789873443 * V_7 = NULL;
	InputU5BU5D_t632706290* V_8 = NULL;
	int32_t V_9 = 0;
	{
		bool L_0 = __this->get__targetInputResolved_3();
		if (L_0)
		{
			goto IL_0163;
		}
	}
	{
		__this->set__targetInputResolved_3((bool)1);
		__this->set__targetInput_4((Input_t789873443 *)NULL);
		GameObject_t1113636619 * L_1 = __this->get__targetObject_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_002c:
	{
		String_t* L_3 = __this->get__targetConnection_2();
		V_0 = L_3;
		V_1 = (String_t*)NULL;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)47), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1610150815(L_7, 0, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0058:
	{
		GameObject_t1113636619 * L_13 = __this->get__targetObject_1();
		NullCheck(L_13);
		WidgetU5BU5D_t425568944* L_14 = GameObject_GetComponents_TisWidget_t1534328253_m1340924440(L_13, /*hidden argument*/GameObject_GetComponents_TisWidget_t1534328253_m1340924440_RuntimeMethod_var);
		V_3 = L_14;
		WidgetU5BU5D_t425568944* L_15 = V_3;
		V_5 = L_15;
		V_6 = 0;
		goto IL_012a;
	}

IL_006f:
	{
		WidgetU5BU5D_t425568944* L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Widget_t1534328253 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0098;
		}
	}
	{
		Widget_t1534328253 * L_22 = V_4;
		NullCheck(L_22);
		String_t* L_23 = Widget_get_WidgetName_m2107460511(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_0124;
	}

IL_0098:
	{
		Widget_t1534328253 * L_26 = V_4;
		NullCheck(L_26);
		InputU5BU5D_t632706290* L_27 = Widget_get_Inputs_m146930454(L_26, /*hidden argument*/NULL);
		V_8 = L_27;
		V_9 = 0;
		goto IL_0119;
	}

IL_00a9:
	{
		InputU5BU5D_t632706290* L_28 = V_8;
		int32_t L_29 = V_9;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Input_t789873443 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = L_31;
		String_t* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00d2;
		}
	}
	{
		Input_t789873443 * L_34 = V_7;
		NullCheck(L_34);
		String_t* L_35 = Input_get_InputName_m3530248252(L_34, /*hidden argument*/NULL);
		String_t* L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0113;
	}

IL_00d2:
	{
		Input_t789873443 * L_38 = V_7;
		NullCheck(L_38);
		Type_t * L_39 = Input_get_DataType_m3427786224(L_38, /*hidden argument*/NULL);
		Output_t2166053520 * L_40 = __this->get__owner_0();
		NullCheck(L_40);
		Type_t * L_41 = Output_get_DataType_m1419930338(L_40, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(Type_t *)L_41)))
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_0113;
	}

IL_00ee:
	{
		Input_t789873443 * L_42 = __this->get__targetInput_4();
		Output_t2166053520 * L_43 = __this->get__owner_0();
		NullCheck(L_42);
		bool L_44 = Input_AddOutput_m1670639108(L_42, L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0113;
	}

IL_0109:
	{
		Input_t789873443 * L_45 = V_7;
		__this->set__targetInput_4(L_45);
		return (bool)1;
	}

IL_0113:
	{
		int32_t L_46 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0119:
	{
		int32_t L_47 = V_9;
		InputU5BU5D_t632706290* L_48 = V_8;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_00a9;
		}
	}

IL_0124:
	{
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_012a:
	{
		int32_t L_50 = V_6;
		WidgetU5BU5D_t425568944* L_51 = V_5;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_51)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_52 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_53 = L_52;
		String_t* L_54 = __this->get__targetConnection_2();
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_54);
		ObjectU5BU5D_t2843939325* L_55 = L_53;
		GameObject_t1113636619 * L_56 = __this->get__targetObject_1();
		NullCheck(L_56);
		String_t* L_57 = Object_get_name_m4211327027(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_57);
		Log_Error_m2227311220(NULL /*static, unused*/, _stringLiteral1689800641, _stringLiteral2094178676, L_55, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0163:
	{
		Input_t789873443 * L_58 = __this->get__targetInput_4();
		return (bool)((((int32_t)((((RuntimeObject*)(Input_t789873443 *)L_58) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void IBM.Watson.DeveloperCloud.Widgets.Widget/Output/Connection::Start(IBM.Watson.DeveloperCloud.Widgets.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void Connection_Start_m2999172782 (Connection_t4165129509 * __this, Output_t2166053520 * ___owner0, const RuntimeMethod* method)
{
	{
		Output_t2166053520 * L_0 = ___owner0;
		__this->set__owner_0(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CaptureGroup__ctor_m1481716575 (CaptureGroup_t1549177136 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::get_Group()
extern "C" IL2CPP_METHOD_ATTR String_t* CaptureGroup_get_Group_m920478016 (CaptureGroup_t1549177136 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CGroupU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::set_Group(System.String)
extern "C" IL2CPP_METHOD_ATTR void CaptureGroup_set_Group_m809703123 (CaptureGroup_t1549177136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CGroupU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::get_Location()
extern "C" IL2CPP_METHOD_ATTR List_1_t913674750 * CaptureGroup_get_Location_m3472082311 (CaptureGroup_t1549177136 * __this, const RuntimeMethod* method)
{
	{
		List_1_t913674750 * L_0 = __this->get_U3CLocationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup::set_Location(System.Collections.Generic.List`1<System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void CaptureGroup_set_Location_m3132927193 (CaptureGroup_t1549177136 * __this, List_1_t913674750 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t913674750 * L_0 = ___value0;
		__this->set_U3CLocationU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogLogMessage__ctor_m4200536448 (DialogLogMessage_t3385623792 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::get_Level()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3915914482  DialogLogMessage_get_Level_m734263188 (DialogLogMessage_t3385623792 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t3915914482  L_0 = __this->get_U3CLevelU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::set_Level(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage/LevelEnum>)
extern "C" IL2CPP_METHOD_ATTR void DialogLogMessage_set_Level_m2245568716 (DialogLogMessage_t3385623792 * __this, Nullable_1_t3915914482  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t3915914482  L_0 = ___value0;
		__this->set_U3CLevelU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::get_Message()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogLogMessage_get_Message_m1669434264 (DialogLogMessage_t3385623792 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage::set_Message(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogLogMessage_set_Message_m1889606068 (DialogLogMessage_t3385623792 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction__ctor_m2195576381 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::get_ActionType()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2737346520  DialogNodeAction_get_ActionType_m392783909 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t2737346520  L_0 = __this->get_U3CActionTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::set_ActionType(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction/ActionTypeEnum>)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction_set_ActionType_m2680921027 (DialogNodeAction_t90292948 * __this, Nullable_1_t2737346520  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t2737346520  L_0 = ___value0;
		__this->set_U3CActionTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodeAction_get_Name_m1889317759 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction_set_Name_m2257393925 (DialogNodeAction_t90292948 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::get_Parameters()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DialogNodeAction_get_Parameters_m409402671 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CParametersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::set_Parameters(System.Object)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction_set_Parameters_m2487378777 (DialogNodeAction_t90292948 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::get_ResultVariable()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodeAction_get_ResultVariable_m3607869997 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResultVariableU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::set_ResultVariable(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction_set_ResultVariable_m590828924 (DialogNodeAction_t90292948 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CResultVariableU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::get_Credentials()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodeAction_get_Credentials_m2212328459 (DialogNodeAction_t90292948 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCredentialsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction::set_Credentials(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeAction_set_Credentials_m2942820559 (DialogNodeAction_t90292948 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCredentialsU3Ek__BackingField_4(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogNodeOutputOptionsElement__ctor_m170849826 (DialogNodeOutputOptionsElement_t1707701688 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::get_Label()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodeOutputOptionsElement_get_Label_m2534720966 (DialogNodeOutputOptionsElement_t1707701688 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CLabelU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::set_Label(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeOutputOptionsElement_set_Label_m3505468560 (DialogNodeOutputOptionsElement_t1707701688 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_0(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::get_Value()
extern "C" IL2CPP_METHOD_ATTR DialogNodeOutputOptionsElementValue_t720329632 * DialogNodeOutputOptionsElement_get_Value_m1238780191 (DialogNodeOutputOptionsElement_t1707701688 * __this, const RuntimeMethod* method)
{
	{
		DialogNodeOutputOptionsElementValue_t720329632 * L_0 = __this->get_U3CValueU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement::set_Value(IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeOutputOptionsElement_set_Value_m152971186 (DialogNodeOutputOptionsElement_t1707701688 * __this, DialogNodeOutputOptionsElementValue_t720329632 * ___value0, const RuntimeMethod* method)
{
	{
		DialogNodeOutputOptionsElementValue_t720329632 * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogNodeOutputOptionsElementValue__ctor_m2439836802 (DialogNodeOutputOptionsElementValue_t720329632 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue::get_Input()
extern "C" IL2CPP_METHOD_ATTR MessageInput_t1231455263 * DialogNodeOutputOptionsElementValue_get_Input_m3175542752 (DialogNodeOutputOptionsElementValue_t720329632 * __this, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = __this->get_U3CInputU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElementValue::set_Input(IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput)
extern "C" IL2CPP_METHOD_ATTR void DialogNodeOutputOptionsElementValue_set_Input_m1561385690 (DialogNodeOutputOptionsElementValue_t720329632 * __this, MessageInput_t1231455263 * ___value0, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = ___value0;
		__this->set_U3CInputU3Ek__BackingField_0(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogNodesVisited__ctor_m2202957719 (DialogNodesVisited_t3733264797 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::get_DialogNode()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodesVisited_get_DialogNode_m889156017 (DialogNodesVisited_t3733264797 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDialogNodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::set_DialogNode(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodesVisited_set_DialogNode_m1386542588 (DialogNodesVisited_t3733264797 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDialogNodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::get_Title()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodesVisited_get_Title_m2746630421 (DialogNodesVisited_t3733264797 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::set_Title(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodesVisited_set_Title_m3674907502 (DialogNodesVisited_t3733264797 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::get_Conditions()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogNodesVisited_get_Conditions_m177503966 (DialogNodesVisited_t3733264797 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConditionsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited::set_Conditions(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogNodesVisited_set_Conditions_m2056293378 (DialogNodesVisited_t3733264797 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConditionsU3Ek__BackingField_2(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric__ctor_m3263065001 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_ResponseType()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2565157246  DialogRuntimeResponseGeneric_get_ResponseType_m3024635434 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t2565157246  L_0 = __this->get_U3CResponseTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_ResponseType(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/ResponseTypeEnum>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_ResponseType_m3328360275 (DialogRuntimeResponseGeneric_t1865932536 * __this, Nullable_1_t2565157246  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t2565157246  L_0 = ___value0;
		__this->set_U3CResponseTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Preference()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3623602043  DialogRuntimeResponseGeneric_get_Preference_m3458132170 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t3623602043  L_0 = __this->get_U3CPreferenceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Preference(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric/PreferenceEnum>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Preference_m936843557 (DialogRuntimeResponseGeneric_t1865932536 * __this, Nullable_1_t3623602043  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t3623602043  L_0 = ___value0;
		__this->set_U3CPreferenceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_Text_m3098594281 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Text_m3763116116 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Nullable`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Time()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1164162090  DialogRuntimeResponseGeneric_get_Time_m2615944748 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1164162090  L_0 = __this->get_U3CTimeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Time(System.Nullable`1<System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Time_m4093162345 (DialogRuntimeResponseGeneric_t1865932536 * __this, Nullable_1_t1164162090  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1164162090  L_0 = ___value0;
		__this->set_U3CTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Typing()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  DialogRuntimeResponseGeneric_get_Typing_m601006762 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CTypingU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Typing(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Typing_m4049634815 (DialogRuntimeResponseGeneric_t1865932536 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CTypingU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Source()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_Source_m3825344636 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSourceU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Source(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Source_m337546724 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSourceU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Title()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_Title_m3710385361 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Title(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Title_m2142231724 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Description()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_Description_m349067218 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Description_m3644436912 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Options()
extern "C" IL2CPP_METHOD_ATTR List_1_t3179776430 * DialogRuntimeResponseGeneric_get_Options_m3661240739 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3179776430 * L_0 = __this->get_U3COptionsU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Options(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeOutputOptionsElement>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Options_m2277660202 (DialogRuntimeResponseGeneric_t1865932536 * __this, List_1_t3179776430 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3179776430 * L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_MessageToHumanAgent()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_MessageToHumanAgent_m3027362752 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageToHumanAgentU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_MessageToHumanAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_MessageToHumanAgent_m1407323482 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageToHumanAgentU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Topic()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogRuntimeResponseGeneric_get_Topic_m4259987611 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTopicU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Topic(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Topic_m4056805905 (DialogRuntimeResponseGeneric_t1865932536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTopicU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion> IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::get_Suggestions()
extern "C" IL2CPP_METHOD_ATTR List_1_t3863953916 * DialogRuntimeResponseGeneric_get_Suggestions_m3989142408 (DialogRuntimeResponseGeneric_t1865932536 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3863953916 * L_0 = __this->get_U3CSuggestionsU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric::set_Suggestions(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion>)
extern "C" IL2CPP_METHOD_ATTR void DialogRuntimeResponseGeneric_set_Suggestions_m2477350837 (DialogRuntimeResponseGeneric_t1865932536 * __this, List_1_t3863953916 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3863953916 * L_0 = ___value0;
		__this->set_U3CSuggestionsU3Ek__BackingField_11(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestion__ctor_m2799973652 (DialogSuggestion_t2391879174 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::get_Label()
extern "C" IL2CPP_METHOD_ATTR String_t* DialogSuggestion_get_Label_m1606536983 (DialogSuggestion_t2391879174 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CLabelU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::set_Label(System.String)
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestion_set_Label_m12196718 (DialogSuggestion_t2391879174 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_0(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::get_Value()
extern "C" IL2CPP_METHOD_ATTR DialogSuggestionValue_t3070474203 * DialogSuggestion_get_Value_m2068174953 (DialogSuggestion_t2391879174 * __this, const RuntimeMethod* method)
{
	{
		DialogSuggestionValue_t3070474203 * L_0 = __this->get_U3CValueU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::set_Value(IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue)
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestion_set_Value_m3566050206 (DialogSuggestion_t2391879174 * __this, DialogSuggestionValue_t3070474203 * ___value0, const RuntimeMethod* method)
{
	{
		DialogSuggestionValue_t3070474203 * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::get_Output()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DialogSuggestion_get_Output_m2260445066 (DialogSuggestion_t2391879174 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3COutputU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestion::set_Output(System.Object)
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestion_set_Output_m1020911541 (DialogSuggestion_t2391879174 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3COutputU3Ek__BackingField_2(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestionValue__ctor_m2076331145 (DialogSuggestionValue_t3070474203 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue::get_Input()
extern "C" IL2CPP_METHOD_ATTR MessageInput_t1231455263 * DialogSuggestionValue_get_Input_m2985363918 (DialogSuggestionValue_t3070474203 * __this, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = __this->get_U3CInputU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.DialogSuggestionValue::set_Input(IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput)
extern "C" IL2CPP_METHOD_ATTR void DialogSuggestionValue_set_Input_m2346152084 (DialogSuggestionValue_t3070474203 * __this, MessageInput_t1231455263 * ___value0, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = ___value0;
		__this->set_U3CInputU3Ek__BackingField_0(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageContext__ctor_m973187798 (MessageContext_t633623232 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::get_Global()
extern "C" IL2CPP_METHOD_ATTR MessageContextGlobal_t2065255329 * MessageContext_get_Global_m2804610122 (MessageContext_t633623232 * __this, const RuntimeMethod* method)
{
	{
		MessageContextGlobal_t2065255329 * L_0 = __this->get_U3CGlobalU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::set_Global(IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal)
extern "C" IL2CPP_METHOD_ATTR void MessageContext_set_Global_m3482454294 (MessageContext_t633623232 * __this, MessageContextGlobal_t2065255329 * ___value0, const RuntimeMethod* method)
{
	{
		MessageContextGlobal_t2065255329 * L_0 = ___value0;
		__this->set_U3CGlobalU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::get_Skills()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MessageContext_get_Skills_m4075530680 (MessageContext_t633623232 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CSkillsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext::set_Skills(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MessageContext_set_Skills_m3878225661 (MessageContext_t633623232 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CSkillsU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobal__ctor_m1300896230 (MessageContextGlobal_t2065255329 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal::get_System()
extern "C" IL2CPP_METHOD_ATTR MessageContextGlobalSystem_t3823677794 * MessageContextGlobal_get_System_m3118003893 (MessageContextGlobal_t2065255329 * __this, const RuntimeMethod* method)
{
	{
		MessageContextGlobalSystem_t3823677794 * L_0 = __this->get_U3CSystemU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobal::set_System(IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem)
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobal_set_System_m3816921129 (MessageContextGlobal_t2065255329 * __this, MessageContextGlobalSystem_t3823677794 * ___value0, const RuntimeMethod* method)
{
	{
		MessageContextGlobalSystem_t3823677794 * L_0 = ___value0;
		__this->set_U3CSystemU3Ek__BackingField_0(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobalSystem__ctor_m2487628955 (MessageContextGlobalSystem_t3823677794 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::get_Timezone()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageContextGlobalSystem_get_Timezone_m1812813944 (MessageContextGlobalSystem_t3823677794 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTimezoneU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::set_Timezone(System.String)
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobalSystem_set_Timezone_m2648916547 (MessageContextGlobalSystem_t3823677794 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTimezoneU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageContextGlobalSystem_get_UserId_m3488637091 (MessageContextGlobalSystem_t3823677794 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobalSystem_set_UserId_m2990018128 (MessageContextGlobalSystem_t3823677794 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Nullable`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::get_TurnCount()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1164162090  MessageContextGlobalSystem_get_TurnCount_m1264450753 (MessageContextGlobalSystem_t3823677794 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1164162090  L_0 = __this->get_U3CTurnCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextGlobalSystem::set_TurnCount(System.Nullable`1<System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void MessageContextGlobalSystem_set_TurnCount_m2102631337 (MessageContextGlobalSystem_t3823677794 * __this, Nullable_1_t1164162090  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1164162090  L_0 = ___value0;
		__this->set_U3CTurnCountU3Ek__BackingField_2(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageContextSkills::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageContextSkills__ctor_m3166418867 (MessageContextSkills_t562966926 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageInput__ctor_m2702628697 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_MessageType()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t920590078  MessageInput_get_MessageType_m3165316421 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t920590078  L_0 = __this->get_U3CMessageTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_MessageType(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput/MessageTypeEnum>)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_MessageType_m1383948225 (MessageInput_t1231455263 * __this, Nullable_1_t920590078  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t920590078  L_0 = ___value0;
		__this->set_U3CMessageTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageInput_get_Text_m2878263441 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_Text_m1556652261 (MessageInput_t1231455263 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_1(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Options()
extern "C" IL2CPP_METHOD_ATTR MessageInputOptions_t321510208 * MessageInput_get_Options_m1692351277 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		MessageInputOptions_t321510208 * L_0 = __this->get_U3COptionsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_Options(IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_Options_m64695095 (MessageInput_t1231455263 * __this, MessageInputOptions_t321510208 * ___value0, const RuntimeMethod* method)
{
	{
		MessageInputOptions_t321510208 * L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Intents()
extern "C" IL2CPP_METHOD_ATTR List_1_t1777479234 * MessageInput_get_Intents_m3195318041 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1777479234 * L_0 = __this->get_U3CIntentsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_Intents(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent>)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_Intents_m3888166801 (MessageInput_t1231455263 * __this, List_1_t1777479234 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1777479234 * L_0 = ___value0;
		__this->set_U3CIntentsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_Entities()
extern "C" IL2CPP_METHOD_ATTR List_1_t1723740391 * MessageInput_get_Entities_m2434285872 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1723740391 * L_0 = __this->get_U3CEntitiesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_Entities(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity>)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_Entities_m700386580 (MessageInput_t1231455263 * __this, List_1_t1723740391 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1723740391 * L_0 = ___value0;
		__this->set_U3CEntitiesU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::get_SuggestionId()
extern "C" IL2CPP_METHOD_ATTR String_t* MessageInput_get_SuggestionId_m470366355 (MessageInput_t1231455263 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSuggestionIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput::set_SuggestionId(System.String)
extern "C" IL2CPP_METHOD_ATTR void MessageInput_set_SuggestionId_m1196870157 (MessageInput_t1231455263 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSuggestionIdU3Ek__BackingField_5(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageInputConverter__ctor_m861489002 (MessageInputConverter_t1644137348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputConverter__ctor_m861489002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		fsSerializer_t4093814827 * L_0 = (fsSerializer_t4093814827 *)il2cpp_codegen_object_new(fsSerializer_t4093814827_il2cpp_TypeInfo_var);
		fsSerializer__ctor_m4113650859(L_0, /*hidden argument*/NULL);
		__this->set__serializer_2(L_0);
		fsConverter__ctor_m2283017391(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::CanProcess(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool MessageInputConverter_CanProcess_m1865841679 (MessageInputConverter_t1644137348 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputConverter_CanProcess_m1865841679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (MessageInput_t1231455263_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// FullSerializer.fsResult IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::TryDeserialize(FullSerializer.fsData,System.Object&,System.Type)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  MessageInputConverter_TryDeserialize_m255809569 (MessageInputConverter_t1644137348 * __this, fsData_t406773287 * ___data0, RuntimeObject ** ___instance1, Type_t * ___storageType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputConverter_TryDeserialize_m255809569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		fsData_t406773287 * L_0 = ___data0;
		NullCheck(L_0);
		bool L_1 = fsData_get_IsString_m1655683089(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(fsResult_t591339677_il2cpp_TypeInfo_var);
		fsResult_t591339677  L_2 = fsResult_Fail_m3938983616(NULL /*static, unused*/, _stringLiteral569419300, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___instance1;
		fsData_t406773287 * L_4 = ___data0;
		NullCheck(L_4);
		String_t* L_5 = fsData_get_AsString_m613206523(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(fsTypeCache_t3469578604_il2cpp_TypeInfo_var);
		Type_t * L_6 = fsTypeCache_GetType_m3390509253(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_3, (RuntimeObject *)L_6);
		RuntimeObject ** L_7 = ___instance1;
		RuntimeObject * L_8 = *((RuntimeObject **)L_7);
		if (L_8)
		{
			goto IL_0040;
		}
	}
	{
		fsData_t406773287 * L_9 = ___data0;
		NullCheck(L_9);
		String_t* L_10 = fsData_get_AsString_m613206523(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1566648052, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(fsResult_t591339677_il2cpp_TypeInfo_var);
		fsResult_t591339677  L_12 = fsResult_Fail_m3938983616(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(fsResult_t591339677_il2cpp_TypeInfo_var);
		fsResult_t591339677  L_13 = ((fsResult_t591339677_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_t591339677_il2cpp_TypeInfo_var))->get_Success_3();
		return L_13;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::CreateInstance(FullSerializer.fsData,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MessageInputConverter_CreateInstance_m2038806132 (MessageInputConverter_t1644137348 * __this, fsData_t406773287 * ___data0, Type_t * ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputConverter_CreateInstance_m2038806132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageInput_t1231455263 * L_0 = (MessageInput_t1231455263 *)il2cpp_codegen_object_new(MessageInput_t1231455263_il2cpp_TypeInfo_var);
		MessageInput__ctor_m2702628697(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// FullSerializer.fsResult IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputConverter::TrySerialize(System.Object,FullSerializer.fsData&,System.Type)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  MessageInputConverter_TrySerialize_m3827162831 (MessageInputConverter_t1644137348 * __this, RuntimeObject * ___instance0, fsData_t406773287 ** ___serialized1, Type_t * ___storageType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputConverter_TrySerialize_m3827162831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageInput_t1231455263 * V_0 = NULL;
	Dictionary_2_t192029586 * V_1 = NULL;
	fsData_t406773287 * V_2 = NULL;
	Nullable_1_t920590078  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RuntimeObject * L_0 = ___instance0;
		V_0 = ((MessageInput_t1231455263 *)CastclassClass((RuntimeObject*)L_0, MessageInput_t1231455263_il2cpp_TypeInfo_var));
		fsData_t406773287 ** L_1 = ___serialized1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		Dictionary_2_t192029586 * L_2 = (Dictionary_2_t192029586 *)il2cpp_codegen_object_new(Dictionary_2_t192029586_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2889734923(L_2, /*hidden argument*/Dictionary_2__ctor_m2889734923_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (fsData_t406773287 *)NULL;
		MessageInput_t1231455263 * L_3 = V_0;
		NullCheck(L_3);
		Nullable_1_t920590078  L_4 = MessageInput_get_MessageType_m3165316421(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		bool L_5 = Nullable_1_get_HasValue_m2116488300((Nullable_1_t920590078 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m2116488300_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		fsSerializer_t4093814827 * L_6 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t920590078  L_8 = MessageInput_get_MessageType_m3165316421(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671(L_6, L_8, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisNullable_1_t920590078_m3378703671_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_9 = V_1;
		fsData_t406773287 * L_10 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_m734428058(L_9, _stringLiteral1242317819, L_10, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_0045:
	{
		MessageInput_t1231455263 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = MessageInput_get_Text_m2878263441(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		fsSerializer_t4093814827 * L_13 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = MessageInput_get_Text_m2878263441(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		fsSerializer_TrySerialize_TisString_t_m1458439198(L_13, L_15, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisString_t_m1458439198_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_16 = V_1;
		fsData_t406773287 * L_17 = V_2;
		NullCheck(L_16);
		Dictionary_2_Add_m734428058(L_16, _stringLiteral3987835854, L_17, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_0070:
	{
		MessageInput_t1231455263 * L_18 = V_0;
		NullCheck(L_18);
		MessageInputOptions_t321510208 * L_19 = MessageInput_get_Options_m1692351277(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009b;
		}
	}
	{
		fsSerializer_t4093814827 * L_20 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_21 = V_0;
		NullCheck(L_21);
		MessageInputOptions_t321510208 * L_22 = MessageInput_get_Options_m1692351277(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		fsSerializer_TrySerialize_TisMessageInputOptions_t321510208_m1229013631(L_20, L_22, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisMessageInputOptions_t321510208_m1229013631_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_23 = V_1;
		fsData_t406773287 * L_24 = V_2;
		NullCheck(L_23);
		Dictionary_2_Add_m734428058(L_23, _stringLiteral2715197523, L_24, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_009b:
	{
		MessageInput_t1231455263 * L_25 = V_0;
		NullCheck(L_25);
		List_1_t1777479234 * L_26 = MessageInput_get_Intents_m3195318041(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		fsSerializer_t4093814827 * L_27 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_28 = V_0;
		NullCheck(L_28);
		List_1_t1777479234 * L_29 = MessageInput_get_Intents_m3195318041(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		fsSerializer_TrySerialize_TisList_1_t1777479234_m568565007(L_27, L_29, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisList_1_t1777479234_m568565007_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_30 = V_1;
		fsData_t406773287 * L_31 = V_2;
		NullCheck(L_30);
		Dictionary_2_Add_m734428058(L_30, _stringLiteral7250284, L_31, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_00c6:
	{
		MessageInput_t1231455263 * L_32 = V_0;
		NullCheck(L_32);
		List_1_t1723740391 * L_33 = MessageInput_get_Entities_m2434285872(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00f1;
		}
	}
	{
		fsSerializer_t4093814827 * L_34 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_35 = V_0;
		NullCheck(L_35);
		List_1_t1723740391 * L_36 = MessageInput_get_Entities_m2434285872(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		fsSerializer_TrySerialize_TisList_1_t1723740391_m2459794001(L_34, L_36, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisList_1_t1723740391_m2459794001_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_37 = V_1;
		fsData_t406773287 * L_38 = V_2;
		NullCheck(L_37);
		Dictionary_2_Add_m734428058(L_37, _stringLiteral874315656, L_38, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_00f1:
	{
		MessageInput_t1231455263 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = MessageInput_get_SuggestionId_m470366355(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_011c;
		}
	}
	{
		fsSerializer_t4093814827 * L_41 = __this->get__serializer_2();
		MessageInput_t1231455263 * L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43 = MessageInput_get_SuggestionId_m470366355(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		fsSerializer_TrySerialize_TisString_t_m1458439198(L_41, L_43, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisString_t_m1458439198_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_44 = V_1;
		fsData_t406773287 * L_45 = V_2;
		NullCheck(L_44);
		Dictionary_2_Add_m734428058(L_44, _stringLiteral2404045365, L_45, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_011c:
	{
		fsData_t406773287 ** L_46 = ___serialized1;
		Dictionary_2_t192029586 * L_47 = V_1;
		fsData_t406773287 * L_48 = (fsData_t406773287 *)il2cpp_codegen_object_new(fsData_t406773287_il2cpp_TypeInfo_var);
		fsData__ctor_m3980153642(L_48, L_47, /*hidden argument*/NULL);
		*((RuntimeObject **)L_46) = (RuntimeObject *)L_48;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_46, (RuntimeObject *)L_48);
		IL2CPP_RUNTIME_CLASS_INIT(fsResult_t591339677_il2cpp_TypeInfo_var);
		fsResult_t591339677  L_49 = ((fsResult_t591339677_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_t591339677_il2cpp_TypeInfo_var))->get_Success_3();
		return L_49;
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptions__ctor_m15833523 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_Debug()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_Debug_m3783773037 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CDebugU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::set_Debug(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptions_set_Debug_m2944167821 (MessageInputOptions_t321510208 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CDebugU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_Restart()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_Restart_m726917812 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CRestartU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::set_Restart(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptions_set_Restart_m1596776685 (MessageInputOptions_t321510208 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CRestartU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_AlternateIntents()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_AlternateIntents_m3257642583 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CAlternateIntentsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::set_AlternateIntents(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptions_set_AlternateIntents_m1539407184 (MessageInputOptions_t321510208 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CAlternateIntentsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::get_ReturnContext()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageInputOptions_get_ReturnContext_m1466119081 (MessageInputOptions_t321510208 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CReturnContextU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptions::set_ReturnContext(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptions_set_ReturnContext_m1165918135 (MessageInputOptions_t321510208 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CReturnContextU3Ek__BackingField_3(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageInputOptionsConverter__ctor_m4158977738 (MessageInputOptionsConverter_t740336248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputOptionsConverter__ctor_m4158977738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		fsSerializer_t4093814827 * L_0 = (fsSerializer_t4093814827 *)il2cpp_codegen_object_new(fsSerializer_t4093814827_il2cpp_TypeInfo_var);
		fsSerializer__ctor_m4113650859(L_0, /*hidden argument*/NULL);
		__this->set__serializer_2(L_0);
		fsConverter__ctor_m2283017391(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter::CanProcess(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool MessageInputOptionsConverter_CanProcess_m871601925 (MessageInputOptionsConverter_t740336248 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputOptionsConverter_CanProcess_m871601925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (MessageInputOptions_t321510208_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// FullSerializer.fsResult IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter::TryDeserialize(FullSerializer.fsData,System.Object&,System.Type)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  MessageInputOptionsConverter_TryDeserialize_m4051108094 (MessageInputOptionsConverter_t740336248 * __this, fsData_t406773287 * ___data0, RuntimeObject ** ___instance1, Type_t * ___storageType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputOptionsConverter_TryDeserialize_m4051108094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, MessageInputOptionsConverter_TryDeserialize_m4051108094_RuntimeMethod_var);
	}
}
// FullSerializer.fsResult IBM.WatsonDeveloperCloud.Assistant.v2.MessageInputOptionsConverter::TrySerialize(System.Object,FullSerializer.fsData&,System.Type)
extern "C" IL2CPP_METHOD_ATTR fsResult_t591339677  MessageInputOptionsConverter_TrySerialize_m3945099248 (MessageInputOptionsConverter_t740336248 * __this, RuntimeObject * ___instance0, fsData_t406773287 ** ___serialized1, Type_t * ___storageType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageInputOptionsConverter_TrySerialize_m3945099248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageInputOptions_t321510208 * V_0 = NULL;
	Dictionary_2_t192029586 * V_1 = NULL;
	fsData_t406773287 * V_2 = NULL;
	Nullable_1_t1819850047  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Nullable_1_t1819850047  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Nullable_1_t1819850047  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Nullable_1_t1819850047  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		RuntimeObject * L_0 = ___instance0;
		V_0 = ((MessageInputOptions_t321510208 *)CastclassClass((RuntimeObject*)L_0, MessageInputOptions_t321510208_il2cpp_TypeInfo_var));
		fsData_t406773287 ** L_1 = ___serialized1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		Dictionary_2_t192029586 * L_2 = (Dictionary_2_t192029586 *)il2cpp_codegen_object_new(Dictionary_2_t192029586_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2889734923(L_2, /*hidden argument*/Dictionary_2__ctor_m2889734923_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (fsData_t406773287 *)NULL;
		MessageInputOptions_t321510208 * L_3 = V_0;
		NullCheck(L_3);
		Nullable_1_t1819850047  L_4 = MessageInputOptions_get_Debug_m3783773037(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		bool L_5 = Nullable_1_get_HasValue_m2952668986((Nullable_1_t1819850047 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m2952668986_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		fsSerializer_t4093814827 * L_6 = __this->get__serializer_2();
		MessageInputOptions_t321510208 * L_7 = V_0;
		NullCheck(L_7);
		Nullable_1_t1819850047  L_8 = MessageInputOptions_get_Debug_m3783773037(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407(L_6, L_8, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_9 = V_1;
		fsData_t406773287 * L_10 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_m734428058(L_9, _stringLiteral2678398007, L_10, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_0045:
	{
		MessageInputOptions_t321510208 * L_11 = V_0;
		NullCheck(L_11);
		Nullable_1_t1819850047  L_12 = MessageInputOptions_get_Restart_m726917812(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = Nullable_1_get_HasValue_m2952668986((Nullable_1_t1819850047 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m2952668986_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		fsSerializer_t4093814827 * L_14 = __this->get__serializer_2();
		MessageInputOptions_t321510208 * L_15 = V_0;
		NullCheck(L_15);
		Nullable_1_t1819850047  L_16 = MessageInputOptions_get_Restart_m726917812(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407(L_14, L_16, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_17 = V_1;
		fsData_t406773287 * L_18 = V_2;
		NullCheck(L_17);
		Dictionary_2_Add_m734428058(L_17, _stringLiteral1108042368, L_18, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_0079:
	{
		MessageInputOptions_t321510208 * L_19 = V_0;
		NullCheck(L_19);
		Nullable_1_t1819850047  L_20 = MessageInputOptions_get_AlternateIntents_m3257642583(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		bool L_21 = Nullable_1_get_HasValue_m2952668986((Nullable_1_t1819850047 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m2952668986_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00ad;
		}
	}
	{
		fsSerializer_t4093814827 * L_22 = __this->get__serializer_2();
		MessageInputOptions_t321510208 * L_23 = V_0;
		NullCheck(L_23);
		Nullable_1_t1819850047  L_24 = MessageInputOptions_get_AlternateIntents_m3257642583(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407(L_22, L_24, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_25 = V_1;
		fsData_t406773287 * L_26 = V_2;
		NullCheck(L_25);
		Dictionary_2_Add_m734428058(L_25, _stringLiteral1110997578, L_26, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_00ad:
	{
		MessageInputOptions_t321510208 * L_27 = V_0;
		NullCheck(L_27);
		Nullable_1_t1819850047  L_28 = MessageInputOptions_get_ReturnContext_m1466119081(L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		bool L_29 = Nullable_1_get_HasValue_m2952668986((Nullable_1_t1819850047 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m2952668986_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		fsSerializer_t4093814827 * L_30 = __this->get__serializer_2();
		MessageInputOptions_t321510208 * L_31 = V_0;
		NullCheck(L_31);
		Nullable_1_t1819850047  L_32 = MessageInputOptions_get_ReturnContext_m1466119081(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407(L_30, L_32, (fsData_t406773287 **)(&V_2), /*hidden argument*/fsSerializer_TrySerialize_TisNullable_1_t1819850047_m3694250407_RuntimeMethod_var);
		Dictionary_2_t192029586 * L_33 = V_1;
		fsData_t406773287 * L_34 = V_2;
		NullCheck(L_33);
		Dictionary_2_Add_m734428058(L_33, _stringLiteral3416266264, L_34, /*hidden argument*/Dictionary_2_Add_m734428058_RuntimeMethod_var);
	}

IL_00e1:
	{
		fsData_t406773287 ** L_35 = ___serialized1;
		Dictionary_2_t192029586 * L_36 = V_1;
		fsData_t406773287 * L_37 = (fsData_t406773287 *)il2cpp_codegen_object_new(fsData_t406773287_il2cpp_TypeInfo_var);
		fsData__ctor_m3980153642(L_37, L_36, /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_37;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_35, (RuntimeObject *)L_37);
		IL2CPP_RUNTIME_CLASS_INIT(fsResult_t591339677_il2cpp_TypeInfo_var);
		fsResult_t591339677  L_38 = ((fsResult_t591339677_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_t591339677_il2cpp_TypeInfo_var))->get_Success_3();
		return L_38;
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageOutput__ctor_m939867383 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_Generic()
extern "C" IL2CPP_METHOD_ATTR List_1_t3338007278 * MessageOutput_get_Generic_m3159148692 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3338007278 * L_0 = __this->get_U3CGenericU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_Generic(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogRuntimeResponseGeneric>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_Generic_m2214483175 (MessageOutput_t3260606978 * __this, List_1_t3338007278 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3338007278 * L_0 = ___value0;
		__this->set_U3CGenericU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_Intents()
extern "C" IL2CPP_METHOD_ATTR List_1_t1777479234 * MessageOutput_get_Intents_m3331408528 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1777479234 * L_0 = __this->get_U3CIntentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_Intents(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_Intents_m3068884017 (MessageOutput_t3260606978 * __this, List_1_t1777479234 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1777479234 * L_0 = ___value0;
		__this->set_U3CIntentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_Entities()
extern "C" IL2CPP_METHOD_ATTR List_1_t1723740391 * MessageOutput_get_Entities_m2576389835 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1723740391 * L_0 = __this->get_U3CEntitiesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_Entities(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_Entities_m1105129576 (MessageOutput_t3260606978 * __this, List_1_t1723740391 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1723740391 * L_0 = ___value0;
		__this->set_U3CEntitiesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_Actions()
extern "C" IL2CPP_METHOD_ATTR List_1_t1562367690 * MessageOutput_get_Actions_m3461873701 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1562367690 * L_0 = __this->get_U3CActionsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_Actions(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodeAction>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_Actions_m1704688089 (MessageOutput_t3260606978 * __this, List_1_t1562367690 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1562367690 * L_0 = ___value0;
		__this->set_U3CActionsU3Ek__BackingField_3(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_Debug()
extern "C" IL2CPP_METHOD_ATTR MessageOutputDebug_t2595507150 * MessageOutput_get_Debug_m1641472509 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		MessageOutputDebug_t2595507150 * L_0 = __this->get_U3CDebugU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_Debug(IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_Debug_m523677736 (MessageOutput_t3260606978 * __this, MessageOutputDebug_t2595507150 * ___value0, const RuntimeMethod* method)
{
	{
		MessageOutputDebug_t2595507150 * L_0 = ___value0;
		__this->set_U3CDebugU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::get_UserDefined()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MessageOutput_get_UserDefined_m4113938479 (MessageOutput_t3260606978 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CUserDefinedU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput::set_UserDefined(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MessageOutput_set_UserDefined_m692669950 (MessageOutput_t3260606978 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CUserDefinedU3Ek__BackingField_5(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageOutputDebug__ctor_m1762371871 (MessageOutputDebug_t2595507150 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::get_BranchExitedReason()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2710669106  MessageOutputDebug_get_BranchExitedReason_m1653752893 (MessageOutputDebug_t2595507150 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t2710669106  L_0 = __this->get_U3CBranchExitedReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::set_BranchExitedReason(System.Nullable`1<IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug/BranchExitedReasonEnum>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutputDebug_set_BranchExitedReason_m2664790863 (MessageOutputDebug_t2595507150 * __this, Nullable_1_t2710669106  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t2710669106  L_0 = ___value0;
		__this->set_U3CBranchExitedReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::get_NodesVisited()
extern "C" IL2CPP_METHOD_ATTR List_1_t910372243 * MessageOutputDebug_get_NodesVisited_m3449299662 (MessageOutputDebug_t2595507150 * __this, const RuntimeMethod* method)
{
	{
		List_1_t910372243 * L_0 = __this->get_U3CNodesVisitedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::set_NodesVisited(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogNodesVisited>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutputDebug_set_NodesVisited_m2296185816 (MessageOutputDebug_t2595507150 * __this, List_1_t910372243 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t910372243 * L_0 = ___value0;
		__this->set_U3CNodesVisitedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::get_LogMessages()
extern "C" IL2CPP_METHOD_ATTR List_1_t562731238 * MessageOutputDebug_get_LogMessages_m1934579562 (MessageOutputDebug_t2595507150 * __this, const RuntimeMethod* method)
{
	{
		List_1_t562731238 * L_0 = __this->get_U3CLogMessagesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::set_LogMessages(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.DialogLogMessage>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutputDebug_set_LogMessages_m4115216419 (MessageOutputDebug_t2595507150 * __this, List_1_t562731238 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t562731238 * L_0 = ___value0;
		__this->set_U3CLogMessagesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::get_BranchExited()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  MessageOutputDebug_get_BranchExited_m1692771226 (MessageOutputDebug_t2595507150 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = __this->get_U3CBranchExitedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutputDebug::set_BranchExited(System.Nullable`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MessageOutputDebug_set_BranchExited_m183088532 (MessageOutputDebug_t2595507150 * __this, Nullable_1_t1819850047  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t1819850047  L_0 = ___value0;
		__this->set_U3CBranchExitedU3Ek__BackingField_3(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageRequest__ctor_m296621487 (MessageRequest_t177877626 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::get_Input()
extern "C" IL2CPP_METHOD_ATTR MessageInput_t1231455263 * MessageRequest_get_Input_m2361126886 (MessageRequest_t177877626 * __this, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = __this->get_U3CInputU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::set_Input(IBM.WatsonDeveloperCloud.Assistant.v2.MessageInput)
extern "C" IL2CPP_METHOD_ATTR void MessageRequest_set_Input_m3365320212 (MessageRequest_t177877626 * __this, MessageInput_t1231455263 * ___value0, const RuntimeMethod* method)
{
	{
		MessageInput_t1231455263 * L_0 = ___value0;
		__this->set_U3CInputU3Ek__BackingField_0(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::get_Context()
extern "C" IL2CPP_METHOD_ATTR MessageContext_t633623232 * MessageRequest_get_Context_m3458916264 (MessageRequest_t177877626 * __this, const RuntimeMethod* method)
{
	{
		MessageContext_t633623232 * L_0 = __this->get_U3CContextU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageRequest::set_Context(IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext)
extern "C" IL2CPP_METHOD_ATTR void MessageRequest_set_Context_m2275015489 (MessageRequest_t177877626 * __this, MessageContext_t633623232 * ___value0, const RuntimeMethod* method)
{
	{
		MessageContext_t633623232 * L_0 = ___value0;
		__this->set_U3CContextU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MessageResponse__ctor_m2165295679 (MessageResponse_t1912396260 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::get_Output()
extern "C" IL2CPP_METHOD_ATTR MessageOutput_t3260606978 * MessageResponse_get_Output_m3826288840 (MessageResponse_t1912396260 * __this, const RuntimeMethod* method)
{
	{
		MessageOutput_t3260606978 * L_0 = __this->get_U3COutputU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::set_Output(IBM.WatsonDeveloperCloud.Assistant.v2.MessageOutput)
extern "C" IL2CPP_METHOD_ATTR void MessageResponse_set_Output_m2106249993 (MessageResponse_t1912396260 * __this, MessageOutput_t3260606978 * ___value0, const RuntimeMethod* method)
{
	{
		MessageOutput_t3260606978 * L_0 = ___value0;
		__this->set_U3COutputU3Ek__BackingField_0(L_0);
		return;
	}
}
// IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::get_Context()
extern "C" IL2CPP_METHOD_ATTR MessageContext_t633623232 * MessageResponse_get_Context_m1682902323 (MessageResponse_t1912396260 * __this, const RuntimeMethod* method)
{
	{
		MessageContext_t633623232 * L_0 = __this->get_U3CContextU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.MessageResponse::set_Context(IBM.WatsonDeveloperCloud.Assistant.v2.MessageContext)
extern "C" IL2CPP_METHOD_ATTR void MessageResponse_set_Context_m717974947 (MessageResponse_t1912396260 * __this, MessageContext_t633623232 * ___value0, const RuntimeMethod* method)
{
	{
		MessageContext_t633623232 * L_0 = ___value0;
		__this->set_U3CContextU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity__ctor_m3002332542 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Entity()
extern "C" IL2CPP_METHOD_ATTR String_t* RuntimeEntity_get_Entity_m1813960301 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CEntityU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Entity(System.String)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Entity_m1799032574 (RuntimeEntity_t251665649 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CEntityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int64> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Location()
extern "C" IL2CPP_METHOD_ATTR List_1_t913674750 * RuntimeEntity_get_Location_m1248360296 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		List_1_t913674750 * L_0 = __this->get_U3CLocationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Location(System.Collections.Generic.List`1<System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Location_m2610171185 (RuntimeEntity_t251665649 * __this, List_1_t913674750 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t913674750 * L_0 = ___value0;
		__this->set_U3CLocationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* RuntimeEntity_get_Value_m246555688 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Value_m1611662664 (RuntimeEntity_t251665649 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Nullable`1<System.Single> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Confidence()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3119828856  RuntimeEntity_get_Confidence_m2873794010 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t3119828856  L_0 = __this->get_U3CConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Confidence(System.Nullable`1<System.Single>)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Confidence_m1944794158 (RuntimeEntity_t251665649 * __this, Nullable_1_t3119828856  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t3119828856  L_0 = ___value0;
		__this->set_U3CConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Object IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Metadata()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * RuntimeEntity_get_Metadata_m3592616515 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CMetadataU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Metadata(System.Object)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Metadata_m2120124664 (RuntimeEntity_t251665649 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CMetadataU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::get_Groups()
extern "C" IL2CPP_METHOD_ATTR List_1_t3021251878 * RuntimeEntity_get_Groups_m46334938 (RuntimeEntity_t251665649 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3021251878 * L_0 = __this->get_U3CGroupsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeEntity::set_Groups(System.Collections.Generic.List`1<IBM.WatsonDeveloperCloud.Assistant.v2.CaptureGroup>)
extern "C" IL2CPP_METHOD_ATTR void RuntimeEntity_set_Groups_m3729260516 (RuntimeEntity_t251665649 * __this, List_1_t3021251878 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3021251878 * L_0 = ___value0;
		__this->set_U3CGroupsU3Ek__BackingField_5(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RuntimeIntent__ctor_m2359579260 (RuntimeIntent_t305404492 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::get_Intent()
extern "C" IL2CPP_METHOD_ATTR String_t* RuntimeIntent_get_Intent_m3165114059 (RuntimeIntent_t305404492 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CIntentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::set_Intent(System.String)
extern "C" IL2CPP_METHOD_ATTR void RuntimeIntent_set_Intent_m1750916267 (RuntimeIntent_t305404492 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIntentU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Nullable`1<System.Double> IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::get_Confidence()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t2317227445  RuntimeIntent_get_Confidence_m1341608844 (RuntimeIntent_t305404492 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t2317227445  L_0 = __this->get_U3CConfidenceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.RuntimeIntent::set_Confidence(System.Nullable`1<System.Double>)
extern "C" IL2CPP_METHOD_ATTR void RuntimeIntent_set_Confidence_m233189003 (RuntimeIntent_t305404492 * __this, Nullable_1_t2317227445  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t2317227445  L_0 = ___value0;
		__this->set_U3CConfidenceU3Ek__BackingField_1(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SessionResponse__ctor_m3685498364 (SessionResponse_t4186475537 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse::get_SessionId()
extern "C" IL2CPP_METHOD_ATTR String_t* SessionResponse_get_SessionId_m3151927095 (SessionResponse_t4186475537 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.Assistant.v2.SessionResponse::set_SessionId(System.String)
extern "C" IL2CPP_METHOD_ATTR void SessionResponse_set_SessionId_m973578616 (SessionResponse_t4186475537 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSessionIdU3Ek__BackingField_0(L_0);
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
// System.Void IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CreateLanguageModel__ctor_m1721165538 (CreateLanguageModel_t1081996541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::get_BaseModelName()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateLanguageModel_get_BaseModelName_m73282329 (CreateLanguageModel_t1081996541 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBaseModelNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::set_BaseModelName(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateLanguageModel_set_BaseModelName_m4129101477 (CreateLanguageModel_t1081996541 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBaseModelNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateLanguageModel_get_Name_m992988004 (CreateLanguageModel_t1081996541 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateLanguageModel_set_Name_m38324162 (CreateLanguageModel_t1081996541 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::get_Dialect()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateLanguageModel_get_Dialect_m2551815572 (CreateLanguageModel_t1081996541 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDialectU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::set_Dialect(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateLanguageModel_set_Dialect_m2214574912 (CreateLanguageModel_t1081996541 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDialectU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.String IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::get_Description()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateLanguageModel_get_Description_m2576634630 (CreateLanguageModel_t1081996541 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void IBM.WatsonDeveloperCloud.SpeechToText.v1.Model.CreateLanguageModel::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateLanguageModel_set_Description_m3690741403 (CreateLanguageModel_t1081996541 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_20(L_0);
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
// System.Object MiniJSON.Json::Deserialize(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m2315230237 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_m3734145081(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Json_Serialize_m1078896335 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m3080445642(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m848019096 (Parser_t3021620180 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m848019096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t3465604688 * L_1 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		return;
	}
}
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m16388875 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m16388875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1482762766);
		int32_t L_3 = String_IndexOf_m363431711(_stringLiteral1482762766, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m3734145081 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m3734145081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t3021620180 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t3021620180 * L_1 = (Parser_t3021620180 *)il2cpp_codegen_object_new(Parser_t3021620180_il2cpp_TypeInfo_var);
		Parser__ctor_m848019096(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t3021620180 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m37363117(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			Parser_t3021620180 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			Parser_t3021620180 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Parser_Dispose_m1091231902 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_m4253712522(L_0, /*hidden argument*/NULL);
		__this->set_json_1((StringReader_t3465604688 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t2865362463 * Parser_ParseObject_m1489219549 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m1489219549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1476497131(L_0, /*hidden argument*/Dictionary_2__ctor_m1476497131_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m3030552256(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}

IL_002b:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t2865362463 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m4025690792(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m3030552256(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t2865362463 *)NULL;
	}

IL_005d:
	{
		StringReader_t3465604688 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		Dictionary_2_t2865362463 * L_10 = V_0;
		String_t* L_11 = V_2;
		RuntimeObject * L_12 = Parser_ParseValue_m37363117(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m1535556385(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m1535556385_RuntimeMethod_var);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Parser_ParseArray_m965643129 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m965643129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_0, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0061;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m3030552256(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}

IL_0034:
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_004d;
	}

IL_003f:
	{
		return (List_1_t257213610 *)NULL;
	}

IL_0041:
	{
		goto IL_0061;
	}

IL_0046:
	{
		V_1 = (bool)0;
		goto IL_0061;
	}

IL_004d:
	{
		int32_t L_5 = V_2;
		RuntimeObject * L_6 = Parser_ParseByToken_m166062117(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		List_1_t257213610 * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_m3338814081(L_7, L_8, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0061:
	{
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t257213610 * L_10 = V_0;
		return L_10;
	}
}
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m37363117 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Parser_get_NextToken_m3030552256(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m166062117(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m166062117 (Parser_t3021620180 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m166062117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)7)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		int32_t L_1 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0035:
	{
		String_t* L_2 = Parser_ParseString_m4025690792(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		RuntimeObject * L_3 = Parser_ParseNumber_m358869732(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0043:
	{
		Dictionary_2_t2865362463 * L_4 = Parser_ParseObject_m1489219549(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		List_1_t257213610 * L_5 = Parser_ParseArray_m965643129(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0051:
	{
		bool L_6 = ((bool)1);
		RuntimeObject * L_7 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0058:
	{
		bool L_8 = ((bool)0);
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_005f:
	{
		return NULL;
	}

IL_0061:
	{
		return NULL;
	}
}
// System.String MiniJSON.Json/Parser::ParseString()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4025690792 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m4025690792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t3528271667* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0166;
	}

IL_0019:
	{
		StringReader_t3465604688 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0031:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m3496231823(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0159;
	}

IL_004d:
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_0054:
	{
		StringReader_t3465604688 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_006c:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m3496231823(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00f7;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_0105;
			}
			case 3:
			{
				goto IL_0113;
			}
		}
	}

IL_008c:
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_00ce;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)102))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_0154;
	}

IL_00c1:
	{
		StringBuilder_t * L_17 = V_0;
		Il2CppChar L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m2383614642(L_17, L_18, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00ce:
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, 8, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00db:
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m2383614642(L_20, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00e9:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00f7:
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0105:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0113:
	{
		CharU5BU5D_t3528271667* L_24 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_24;
		V_4 = 0;
		goto IL_0132;
	}

IL_0122:
	{
		CharU5BU5D_t3528271667* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppChar L_27 = Parser_get_NextChar_m3496231823(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_27);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0132:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0122;
		}
	}
	{
		StringBuilder_t * L_30 = V_0;
		CharU5BU5D_t3528271667* L_31 = V_3;
		String_t* L_32 = String_CreateString_m2818852475(NULL, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m391894676(NULL /*static, unused*/, L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m2383614642(L_30, (((int32_t)((uint16_t)L_33))), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0154:
	{
		goto IL_0166;
	}

IL_0159:
	{
		StringBuilder_t * L_34 = V_0;
		Il2CppChar L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m2383614642(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0166:
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0019;
		}
	}

IL_016c:
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m358869732 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m358869732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	double V_2 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m3688284121(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m363431711(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_0;
		Int64_TryParse_m2208578514(NULL /*static, unused*/, L_3, (int64_t*)(&V_1), /*hidden argument*/NULL);
		int64_t L_4 = V_1;
		int64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0025:
	{
		String_t* L_7 = V_0;
		Double_TryParse_m3021978240(NULL /*static, unused*/, L_7, (double*)(&V_2), /*hidden argument*/NULL);
		double L_8 = V_2;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m2111473281 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m2111473281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t3465604688 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0027:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m1673566566(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m1673566566 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m1673566566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m3496231823 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m3496231823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m3688284121 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m3688284121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m3496231823(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2383614642(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003e;
	}

IL_002e:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m1673566566(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m16388875(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000b;
		}
	}

IL_003e:
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m3030552256 (Parser_t3021620180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m3030552256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_m2111473281(__this, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m1673566566(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_00ce;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00ce;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_00ce;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00ce;
			}
			case 12:
			{
				goto IL_00ce;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00cc;
			}
		}
	}

IL_0065:
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00ae;
			}
		}
	}

IL_007a:
	{
		Il2CppChar L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009e;
			}
		}
	}

IL_008f:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00d0;
	}

IL_009c:
	{
		return (int32_t)(1);
	}

IL_009e:
	{
		StringReader_t3465604688 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ac:
	{
		return (int32_t)(3);
	}

IL_00ae:
	{
		StringReader_t3465604688 * L_8 = __this->get_json_1();
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00bc:
	{
		StringReader_t3465604688 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ca:
	{
		return (int32_t)(7);
	}

IL_00cc:
	{
		return (int32_t)(5);
	}

IL_00ce:
	{
		return (int32_t)(8);
	}

IL_00d0:
	{
		String_t* L_10 = Parser_get_NextWord_m3688284121(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral3875954633, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral4002445229, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011b;
	}

IL_0112:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0115:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0118:
	{
		return (int32_t)(((int32_t)11));
	}

IL_011b:
	{
		return (int32_t)(0);
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
// System.Void MiniJSON.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m2316880293 (Serializer_t1539586466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m2316880293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3080445642 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m3080445642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t1539586466 * V_0 = NULL;
	{
		Serializer_t1539586466 * L_0 = (Serializer_t1539586466 *)il2cpp_codegen_object_new(Serializer_t1539586466_il2cpp_TypeInfo_var);
		Serializer__ctor_m2316880293(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t1539586466 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m1193830714(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t1539586466 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m1193830714 (Serializer_t1539586466 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m1193830714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m4051446155(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox(L_7, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteral4002445229;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral3875954633;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m1965104174(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_t2094931216_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m12259788(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m1783201083(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_t3634460470_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m1262864254(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_t3634460470_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m4051446155(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m3630688433(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m1783201083 (Serializer_t1539586466 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m1783201083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m2383614642(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			RuntimeObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m4051446155(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m2383614642(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_1;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m1193830714(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m12259788 (Serializer_t1539586466 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m12259788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m2383614642(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			RuntimeObject * L_7 = V_1;
			Serializer_SerializeValue_m1193830714(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0040:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0064:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_m4051446155 (Serializer_t1539586466 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m4051446155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t3528271667* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_014f;
	}

IL_001e:
	{
		CharU5BU5D_t3528271667* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_0099;
			}
			case 5:
			{
				goto IL_00c5;
			}
		}
	}

IL_0042:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00f1;
	}

IL_0057:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_006d:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0083:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0099:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00af:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00c5:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00db:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00f1:
	{
		Il2CppChar L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_011d;
		}
	}
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		Il2CppChar L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, L_23, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_011d:
	{
		StringBuilder_t * L_24 = __this->get_builder_0();
		NullCheck(L_24);
		StringBuilder_Append_m1965104174(L_24, _stringLiteral3455432692, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = __this->get_builder_0();
		String_t* L_26 = Int32_ToString_m372259452((int32_t*)(&V_4), _stringLiteral3451303896, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0146:
	{
		goto IL_014b;
	}

IL_014b:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_014f:
	{
		int32_t L_28 = V_3;
		CharU5BU5D_t3528271667* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_30 = __this->get_builder_0();
		NullCheck(L_30);
		StringBuilder_Append_m2383614642(L_30, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m3630688433 (Serializer_t1539586466 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m3630688433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_t1397266774_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m3489843083((float*)(&V_0), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_3, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_002f:
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}

IL_0087:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_12);
		StringBuilder_Append_m1640838743(L_12, L_13, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_0099:
	{
		RuntimeObject * L_14 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}

IL_00af:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m896573572((double*)(&V_1), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00d3:
	{
		RuntimeObject * L_20 = ___value0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_m4051446155(__this, L_21, /*hidden argument*/NULL);
	}

IL_00df:
	{
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
// System.Void RunUnitTest::All()
extern "C" IL2CPP_METHOD_ATTR void RunUnitTest_All_m2354428265 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUnitTest_All_m2354428265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	String_t* V_4 = NULL;
	StringU5BU5D_t1281789340* V_5 = NULL;
	int32_t V_6 = 0;
	StringU5BU5D_t1281789340* V_7 = NULL;
	UnitTestManager_t2624635688 * V_8 = NULL;
	String_t* G_B10_0 = NULL;
	UnitTestManager_t2624635688 * G_B17_0 = NULL;
	UnitTestManager_t2624635688 * G_B16_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		StringU5BU5D_t1281789340* L_1 = Environment_GetCommandLineArgs_m2107420754(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_00dc;
	}

IL_0013:
	{
		StringU5BU5D_t1281789340* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral2253887102, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t1281789340* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_00d8;
		}
	}
	{
		StringU5BU5D_t1281789340* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		CharU5BU5D_t3528271667* L_13 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_12);
		StringU5BU5D_t1281789340* L_15 = String_Split_m3646115398(L_12, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		StringU5BU5D_t1281789340* L_16 = V_3;
		V_5 = L_16;
		V_6 = 0;
		goto IL_00cd;
	}

IL_0051:
	{
		StringU5BU5D_t1281789340* L_17 = V_5;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		String_t* L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_00c7;
	}

IL_0069:
	{
		String_t* L_23 = V_4;
		CharU5BU5D_t3528271667* L_24 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)61));
		NullCheck(L_23);
		StringU5BU5D_t1281789340* L_26 = String_Split_m3646115398(L_23, L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		StringU5BU5D_t1281789340* L_27 = V_7;
		NullCheck(L_27);
		int32_t L_28 = 0;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m920492651(NULL /*static, unused*/, L_29, _stringLiteral2244838609, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00c7;
		}
	}
	{
		StringU5BU5D_t1281789340* L_31 = V_7;
		NullCheck(L_31);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_00a3;
		}
	}
	{
		StringU5BU5D_t1281789340* L_32 = V_7;
		NullCheck(L_32);
		int32_t L_33 = 1;
		String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		G_B10_0 = L_34;
		goto IL_00a8;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B10_0 = L_35;
	}

IL_00a8:
	{
		V_0 = G_B10_0;
		ObjectU5BU5D_t2843939325* L_36 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_37 = L_36;
		String_t* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_38);
		Log_Status_m910176486(NULL /*static, unused*/, _stringLiteral3554631648, _stringLiteral3951197682, L_37, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00c7:
	{
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00cd:
	{
		int32_t L_40 = V_6;
		StringU5BU5D_t1281789340* L_41 = V_5;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_0051;
		}
	}

IL_00d8:
	{
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_43 = V_2;
		StringU5BU5D_t1281789340* L_44 = V_1;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UnitTestManager_t2624635688_il2cpp_TypeInfo_var);
		((UnitTestManager_t2624635688_StaticFields*)il2cpp_codegen_static_fields_for(UnitTestManager_t2624635688_il2cpp_TypeInfo_var))->set_ProjectToTest_10(L_45);
		UnitTestManager_t2624635688 * L_46 = UnitTestManager_get_Instance_m3215588733(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_46;
		UnitTestManager_t2624635688 * L_47 = V_8;
		NullCheck(L_47);
		UnitTestManager_set_QuitOnTestsComplete_m1278829286(L_47, (bool)1, /*hidden argument*/NULL);
		UnitTestManager_t2624635688 * L_48 = V_8;
		OnTestsComplete_t1076207448 * L_49 = ((RunUnitTest_t4092700481_StaticFields*)il2cpp_codegen_static_fields_for(RunUnitTest_t4092700481_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B16_0 = L_48;
		if (L_49)
		{
			G_B17_0 = L_48;
			goto IL_0114;
		}
	}
	{
		intptr_t L_50 = (intptr_t)RunUnitTest_OnTestsComplete_m3943969815_RuntimeMethod_var;
		OnTestsComplete_t1076207448 * L_51 = (OnTestsComplete_t1076207448 *)il2cpp_codegen_object_new(OnTestsComplete_t1076207448_il2cpp_TypeInfo_var);
		OnTestsComplete__ctor_m312814037(L_51, NULL, (intptr_t)L_50, /*hidden argument*/NULL);
		((RunUnitTest_t4092700481_StaticFields*)il2cpp_codegen_static_fields_for(RunUnitTest_t4092700481_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_51);
		G_B17_0 = G_B16_0;
	}

IL_0114:
	{
		OnTestsComplete_t1076207448 * L_52 = ((RunUnitTest_t4092700481_StaticFields*)il2cpp_codegen_static_fields_for(RunUnitTest_t4092700481_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		NullCheck(G_B17_0);
		UnitTestManager_set_OnTestCompleteCallback_m1874614839(G_B17_0, L_52, /*hidden argument*/NULL);
		UnitTestManager_t2624635688 * L_53 = V_8;
		RuntimeTypeHandle_t3027515415  L_54 = { reinterpret_cast<intptr_t> (UnitTest_t4208175170_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t1391606413_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_56 = Utility_FindAllDerivedTypes_m2214751968(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		UnitTestManager_QueueTests_m3094254415(L_53, L_56, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUnitTest::OnTestsComplete()
extern "C" IL2CPP_METHOD_ATTR void RunUnitTest_OnTestsComplete_m3943969815 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// System.Void explode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void explode__ctor_m2809642011 (explode_t315222985 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void explode::Start()
extern "C" IL2CPP_METHOD_ATTR void explode_Start_m3854293677 (explode_t315222985 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void explode::Update()
extern "C" IL2CPP_METHOD_ATTR void explode_Update_m1091826942 (explode_t315222985 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void explode::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void explode_OnTriggerEnter_m2186697760 (explode_t315222985 * __this, Collider_t1773347010 * ___Cube0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (explode_OnTriggerEnter_m2186697760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Collider_t1773347010 * L_0 = ___Cube0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1957967226, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = GameObject_get_gameObject_m3693461266(L_3, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1240184648, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t1113636619 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = GameObject_get_gameObject_m3693461266(L_6, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
// System.Void explodeHouse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void explodeHouse__ctor_m1118685473 (explodeHouse_t2507012274 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void explodeHouse::Start()
extern "C" IL2CPP_METHOD_ATTR void explodeHouse_Start_m1690576511 (explodeHouse_t2507012274 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void explodeHouse::Update()
extern "C" IL2CPP_METHOD_ATTR void explodeHouse_Update_m1636208111 (explodeHouse_t2507012274 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void tracking::.ctor()
extern "C" IL2CPP_METHOD_ATTR void tracking__ctor_m2088010955 (tracking_t1519717030 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void tracking::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void tracking_OnTrackingFound_m2892839080 (tracking_t1519717030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (tracking_OnTrackingFound_m2892839080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	Renderer_t2627027031 * V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880_RuntimeMethod_var);
		V_0 = L_0;
		RendererU5BU5D_t3210418286* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		RendererU5BU5D_t3210418286* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Renderer_t2627027031 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Renderer_t2627027031 * L_6 = V_1;
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
