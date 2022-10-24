#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GeospatialManager
struct GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RingSpawner
struct RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreCounter
struct ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2;
// SimpleCollectibleScript
struct SimpleCollectibleScript_t5275AD9FFED23F5EDAFED48748D1A462E854198D;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RingSpawner/<ActivateRing>d__9
struct U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB6DC74E268F39B47DBF48F69A5DD032A17BA0D;
IL2CPP_EXTERN_C String_t* _stringLiteral238261761C7B1A1947034A2F03D730029D890B22;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8225C8D8CA99C64FAABA67FDF26C4C50143B28;
IL2CPP_EXTERN_C String_t* _stringLiteral55EAC204E6B3314540A7E2BE9FA0B9853C238D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3;
IL2CPP_EXTERN_C String_t* _stringLiteral95F70580D360781E181EE8753DC8B0C110327FD1;
IL2CPP_EXTERN_C String_t* _stringLiteralC2495507B4EEE81ECA02BBF41143FB059880940A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7447DB48DC70D93CF970F7E6A32FAA3E4246BF0;
IL2CPP_EXTERN_C String_t* _stringLiteralE61B55AE61E4BD3E58CA7ECC0B49F179887742D2;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActivateRingU3Ed__9_System_Collections_IEnumerator_Reset_m9FFD81EED9E50206069DF9DD134C62454FAD636B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// RingSpawner/<ActivateRing>d__9
struct U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E  : public RuntimeObject
{
	// System.Int32 RingSpawner/<ActivateRing>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RingSpawner/<ActivateRing>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.GameObject RingSpawner/<ActivateRing>d__9::anchoredAsset
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___anchoredAsset_2;
	// RingSpawner RingSpawner/<ActivateRing>d__9::<>4__this
	RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* ___U3CU3E4__this_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// GeospatialManager
struct GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent GeospatialManager::InitCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___InitCompleted_4;
	// System.Single GeospatialManager::_minimumHorizontalAccuracy
	float ____minimumHorizontalAccuracy_5;
	// System.Single GeospatialManager::_minimumHeadingAccuracy
	float ____minimumHeadingAccuracy_6;
	// System.Single GeospatialManager::_minimumVerticalAccuracy
	float ____minimumVerticalAccuracy_7;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin GeospatialManager::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_8;
	// UnityEngine.XR.ARFoundation.ARSession GeospatialManager::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_9;
	// UnityEngine.XR.ARFoundation.ARAnchorManager GeospatialManager::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_10;
	// Google.XR.ARCoreExtensions.AREarthManager GeospatialManager::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions GeospatialManager::ARCoreExtensions
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___ARCoreExtensions_12;
	// ErrorState GeospatialManager::_errorState
	int32_t ____errorState_13;
	// System.String GeospatialManager::_errorMessage
	String_t* ____errorMessage_14;
	// System.Boolean GeospatialManager::_trackingValid
	bool ____trackingValid_15;
	// System.Boolean GeospatialManager::_initComplete
	bool ____initComplete_16;
	// System.Boolean GeospatialManager::_requestCamPerm
	bool ____requestCamPerm_17;
	// System.Boolean GeospatialManager::_requestLocPerm
	bool ____requestLocPerm_18;
	// System.Boolean GeospatialManager::_startedAR
	bool ____startedAR_19;
};

// RingSpawner
struct RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.XR.ARCoreExtensions.AREarthManager RingSpawner::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_4;
	// UnityEngine.XR.ARFoundation.ARAnchorManager RingSpawner::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_5;
	// UnityEngine.GameObject RingSpawner::newPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newPrefab_6;
	// System.Boolean RingSpawner::isPlaced
	bool ___isPlaced_7;
	// System.Single RingSpawner::_minimumHorizontalAccuracy
	float ____minimumHorizontalAccuracy_8;
	// System.Single RingSpawner::_minimumHeadingAccuracy
	float ____minimumHeadingAccuracy_9;
	// System.Single RingSpawner::_minimumVerticalAccuracy
	float ____minimumVerticalAccuracy_10;
};

// ScoreCounter
struct ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreCounter::Score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Score_4;
};

// SimpleCollectibleScript
struct SimpleCollectibleScript_t5275AD9FFED23F5EDAFED48748D1A462E854198D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleCollectibleScript/CollectibleTypes SimpleCollectibleScript::CollectibleType
	int32_t ___CollectibleType_4;
	// System.Boolean SimpleCollectibleScript::rotate
	bool ___rotate_5;
	// System.Single SimpleCollectibleScript::rotationSpeed
	float ___rotationSpeed_6;
	// UnityEngine.AudioClip SimpleCollectibleScript::collectSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___collectSound_7;
	// UnityEngine.GameObject SimpleCollectibleScript::collectEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___collectEffect_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void GeospatialManager::SetErrorState(ErrorState,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, int32_t ___errorState0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean GeospatialManager::CheckCameraPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialManager_CheckCameraPermission_m5C96C4E8287580AF0A9280A50A7A497BF17DF74B (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) ;
// System.Boolean GeospatialManager::CheckLocationPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialManager_CheckLocationPermission_m13C27BAE57338A4B784B9679704937F535ACEFD9 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GeospatialManager::UpdateSessionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_UpdateSessionState_m64F88C63162A6392F6A4F17BEE7A692BFB858A97 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean RingSpawner::TrackingIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RingSpawner_TrackingIsValid_m61537DB6C488F1879E25629FE3B6B3B9889B6246 (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Collections.IEnumerator RingSpawner::ActivateRing(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___anchoredAsset0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void RingSpawner/<ActivateRing>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateRingU3Ed__9__ctor_m41DE1C2796B4D9DF53AC6E90EEE5397005432254 (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// ErrorState GeospatialManager::get_CurrentErrorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeospatialManager_get_CurrentErrorState_m0E4C659628119BDB7F709A06E2EEAEB2EE43AF22 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	{
		// public ErrorState CurrentErrorState { get => _errorState; }
		int32_t L_0 = __this->____errorState_13;
		return L_0;
	}
}
// System.Void GeospatialManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_Start_m4BB70C5AC8B1CD7FA2F9339CB7E132BECAFCAFA9 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	{
		// SetErrorState(ErrorState.NoError);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void GeospatialManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_Update_mE09C4AB4647885F230633DFE3F3EF601923678FE (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral238261761C7B1A1947034A2F03D730029D890B22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F70580D360781E181EE8753DC8B0C110327FD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2495507B4EEE81ECA02BBF41143FB059880940A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE61B55AE61E4BD3E58CA7ECC0B49F179887742D2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B9_0 = 0;
	{
		// if (!CheckCameraPermission())
		bool L_0;
		L_0 = GeospatialManager_CheckCameraPermission_m5C96C4E8287580AF0A9280A50A7A497BF17DF74B(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0189;
	}

IL_0013:
	{
		// if (!CheckLocationPermission())
		bool L_2;
		L_2 = GeospatialManager_CheckLocationPermission_m13C27BAE57338A4B784B9679704937F535ACEFD9(__this, NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		goto IL_0189;
	}

IL_0025:
	{
		// if (!_startedAR)
		bool L_4 = __this->____startedAR_19;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		// SessionOrigin.gameObject.SetActive(true);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = __this->___SessionOrigin_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// Session.gameObject.SetActive(true);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = __this->___Session_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// ARCoreExtensions.gameObject.SetActive(true);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10 = __this->___ARCoreExtensions_12;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// _startedAR = true;
		__this->____startedAR_19 = (bool)1;
	}

IL_0071:
	{
		// UpdateSessionState();
		GeospatialManager_UpdateSessionState_m64F88C63162A6392F6A4F17BEE7A692BFB858A97(__this, NULL);
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_12;
		L_12 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_12) == ((int32_t)6)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_13;
		L_13 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		G_B9_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B9_0 = 0;
	}

IL_008e:
	{
		V_4 = (bool)G_B9_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		// return;
		goto IL_0189;
	}

IL_009a:
	{
		// switch (EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled))
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_15 = __this->___EarthManager_11;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_15, 2, NULL);
		V_6 = L_16;
		int32_t L_17 = V_6;
		V_5 = L_17;
		int32_t L_18 = V_5;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00ed;
			}
			case 1:
			{
				goto IL_00c1;
			}
			case 2:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_0127;
	}

IL_00c1:
	{
		// SetErrorState(ErrorState.Message, "Geospatial API encountered an unknown error.");
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 4, _stringLiteral95F70580D360781E181EE8753DC8B0C110327FD1, NULL);
		// return;
		goto IL_0189;
	}

IL_00d3:
	{
		// SetErrorState(ErrorState.Message, "Geospatial API is not supported by this device.");
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 4, _stringLiteralE61B55AE61E4BD3E58CA7ECC0B49F179887742D2, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_0189;
	}

IL_00ed:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode == GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_19 = __this->___ARCoreExtensions_12;
		NullCheck(L_19);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_20 = L_19->___ARCoreExtensionsConfig_7;
		NullCheck(L_20);
		int32_t L_21 = L_20->___GeospatialMode_5;
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0125;
		}
	}
	{
		// Debug.Log("Enabling Geospatial Mode...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC2495507B4EEE81ECA02BBF41143FB059880940A, NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_23 = __this->___ARCoreExtensions_12;
		NullCheck(L_23);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_24 = L_23->___ARCoreExtensionsConfig_7;
		NullCheck(L_24);
		L_24->___GeospatialMode_5 = 2;
		// return;
		goto IL_0189;
	}

IL_0125:
	{
		// break;
		goto IL_0127;
	}

IL_0127:
	{
		// if (EarthManager.EarthState != EarthState.Enabled)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_25 = __this->___EarthManager_11;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_25, NULL);
		V_8 = (bool)((!(((uint32_t)L_26) <= ((uint32_t)0)))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0153;
		}
	}
	{
		// SetErrorState(ErrorState.Message, "Error: Unable to start Geospatial AR");
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 4, _stringLiteral238261761C7B1A1947034A2F03D730029D890B22, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_0189;
	}

IL_0153:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
		int32_t L_28;
		L_28 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_0 = (bool)((((int32_t)L_28) == ((int32_t)7))? 1 : 0);
		// if (!_initComplete)
		bool L_29 = __this->____initComplete_16;
		V_9 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_0189;
		}
	}
	{
		// InitCompleted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_31 = __this->___InitCompleted_4;
		NullCheck(L_31);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_31, NULL);
		// _initComplete = true;
		__this->____initComplete_16 = (bool)1;
		// SetErrorState(ErrorState.Tracking);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 2, (String_t*)NULL, NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Boolean GeospatialManager::CheckLocationPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialManager_CheckLocationPermission_m13C27BAE57338A4B784B9679704937F535ACEFD9 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// if (_errorState != ErrorState.Location)
		int32_t L_2 = __this->____errorState_13;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// SetErrorState(ErrorState.Location);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, ((int32_t)16), (String_t*)NULL, NULL);
	}

IL_002e:
	{
		// if (!_requestLocPerm) Permission.RequestUserPermission(Permission.FineLocation);
		bool L_4 = __this->____requestLocPerm_18;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// if (!_requestLocPerm) Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
	}

IL_0046:
	{
		// _requestLocPerm = true;
		__this->____requestLocPerm_18 = (bool)1;
		// return false;
		V_3 = (bool)0;
		goto IL_006e;
	}

IL_0051:
	{
		// if (_errorState == ErrorState.Location)
		int32_t L_6 = __this->____errorState_13;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// SetErrorState(ErrorState.NoError);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 1, (String_t*)NULL, NULL);
	}

IL_006a:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean GeospatialManager::CheckCameraPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialManager_CheckCameraPermission_m5C96C4E8287580AF0A9280A50A7A497BF17DF74B (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// if (_errorState != ErrorState.Camera)
		int32_t L_2 = __this->____errorState_13;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// SetErrorState(ErrorState.Camera);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 8, (String_t*)NULL, NULL);
	}

IL_002c:
	{
		// if (!_requestCamPerm) Permission.RequestUserPermission(Permission.Camera);
		bool L_4 = __this->____requestCamPerm_17;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// if (!_requestCamPerm) Permission.RequestUserPermission(Permission.Camera);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
	}

IL_0044:
	{
		// _requestCamPerm = true;
		__this->____requestCamPerm_17 = (bool)1;
		// return false;
		V_3 = (bool)0;
		goto IL_006b;
	}

IL_004f:
	{
		// if (_errorState == ErrorState.Camera)
		int32_t L_6 = __this->____errorState_13;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)8))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		// SetErrorState(ErrorState.NoError);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 1, (String_t*)NULL, NULL);
	}

IL_0067:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Void GeospatialManager::SetErrorState(ErrorState,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, int32_t ___errorState0, String_t* ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_errorState != errorState)
		int32_t L_0 = __this->____errorState_13;
		int32_t L_1 = ___errorState0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// _errorState = errorState;
		int32_t L_3 = ___errorState0;
		__this->____errorState_13 = L_3;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GeospatialManager::UpdateSessionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager_UpdateSessionState_m64F88C63162A6392F6A4F17BEE7A692BFB858A97 (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB6DC74E268F39B47DBF48F69A5DD032A17BA0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8225C8D8CA99C64FAABA67FDF26C4C50143B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55EAC204E6B3314540A7E2BE9FA0B9853C238D3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7447DB48DC70D93CF970F7E6A32FAA3E4246BF0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)27), NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0014:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_002a:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_4 = V_0;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A(L_4, NULL);
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		G_B9_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
	}

IL_0057:
	{
		V_3 = (bool)G_B9_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00b1;
		}
	}
	{
		// Debug.Log("ARSession error state: " + ARSession.state);
		int32_t L_10;
		L_10 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_4 = L_10;
		Il2CppFakeBox<int32_t> L_11(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0CB6DC74E268F39B47DBF48F69A5DD032A17BA0D, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// SetErrorState(ErrorState.Message, "AR Error Encountered: " + ARSession.state);
		int32_t L_14;
		L_14 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		V_4 = L_14;
		Il2CppFakeBox<int32_t> L_15(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral55EAC204E6B3314540A7E2BE9FA0B9853C238D3E, L_16, NULL);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 4, L_17, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		goto IL_00fd;
	}

IL_00b1:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_18 = __this->___SessionOrigin_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_19)
		{
			goto IL_00db;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_20 = __this->___Session_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_21)
		{
			goto IL_00db;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_22 = __this->___ARCoreExtensions_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B15_0 = ((int32_t)(L_23));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B15_0 = 1;
	}

IL_00dc:
	{
		V_5 = (bool)G_B15_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00fd;
		}
	}
	{
		// Debug.Log("Missing AR Components.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD7447DB48DC70D93CF970F7E6A32FAA3E4246BF0, NULL);
		// SetErrorState(ErrorState.Message, "Error: Something Went Wrong");
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(__this, 4, _stringLiteral3A8225C8D8CA99C64FAABA67FDF26C4C50143B28, NULL);
		// return;
		goto IL_00fd;
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Boolean GeospatialManager::TrackingIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialManager_TrackingIsValid_mE6B4C60386DAB6C6EEDA060FBDD897FFB023B65F (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* G_B12_0 = NULL;
	GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* G_B13_1 = NULL;
	{
		// bool valid = false;
		V_0 = (bool)0;
		// if (!valid && EarthManager.EarthTrackingState == TrackingState.Tracking)
		bool L_0 = V_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_1 = __this->___EarthManager_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006f;
		}
	}
	{
		// valid = EarthManager.CameraGeospatialPose.HeadingAccuracy <= _minimumHeadingAccuracy &&
		//         EarthManager.CameraGeospatialPose.VerticalAccuracy <= _minimumVerticalAccuracy &&
		//         EarthManager.CameraGeospatialPose.HorizontalAccuracy <= _minimumHorizontalAccuracy;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_11;
		NullCheck(L_4);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_5;
		L_5 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_4, NULL);
		double L_6 = L_5.___HeadingAccuracy_4;
		float L_7 = __this->____minimumHeadingAccuracy_6;
		if ((!(((double)L_6) <= ((double)((double)L_7)))))
		{
			goto IL_006c;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_8 = __this->___EarthManager_11;
		NullCheck(L_8);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_9;
		L_9 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_8, NULL);
		double L_10 = L_9.___VerticalAccuracy_6;
		float L_11 = __this->____minimumVerticalAccuracy_7;
		if ((!(((double)L_10) <= ((double)((double)L_11)))))
		{
			goto IL_006c;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_12 = __this->___EarthManager_11;
		NullCheck(L_12);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_13;
		L_13 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_12, NULL);
		double L_14 = L_13.___HorizontalAccuracy_5;
		float L_15 = __this->____minimumHorizontalAccuracy_5;
		G_B8_0 = ((((int32_t)((!(((double)L_14) <= ((double)((double)L_15))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B8_0 = 0;
	}

IL_006d:
	{
		V_0 = (bool)G_B8_0;
	}

IL_006f:
	{
		// if (valid != _trackingValid)
		bool L_16 = V_0;
		bool L_17 = __this->____trackingValid_15;
		V_2 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		// _trackingValid = valid;
		bool L_19 = V_0;
		__this->____trackingValid_15 = L_19;
		// SetErrorState(_trackingValid ? ErrorState.NoError : ErrorState.Tracking);
		bool L_20 = __this->____trackingValid_15;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 2;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		NullCheck(G_B13_1);
		GeospatialManager_SetErrorState_m1CE18C3E99A9387A390BB5ED36F244BEE0E6B37D(G_B13_1, G_B13_0, (String_t*)NULL, NULL);
	}

IL_009c:
	{
		// return valid;
		bool L_21 = V_0;
		V_3 = L_21;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		bool L_22 = V_3;
		return L_22;
	}
}
// System.Void GeospatialManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialManager__ctor_m5FB83520BB4D7FB366C8B1F130C3D4CE1626C41B (GeospatialManager_t7F4D2CF1212ED50CEA3C14CEC7F6B5BD881C609E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _minimumHorizontalAccuracy = 10;
		__this->____minimumHorizontalAccuracy_5 = (10.0f);
		// [SerializeField] private float _minimumHeadingAccuracy = 15;
		__this->____minimumHeadingAccuracy_6 = (15.0f);
		// [SerializeField] private float _minimumVerticalAccuracy = 1.5f;
		__this->____minimumVerticalAccuracy_7 = (1.5f);
		// private ErrorState _errorState = ErrorState.NoError;
		__this->____errorState_13 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean RingSpawner::TrackingIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RingSpawner_TrackingIsValid_m61537DB6C488F1879E25629FE3B6B3B9889B6246 (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// bool valid = false;
		V_0 = (bool)0;
		// if (!valid && EarthManager.EarthTrackingState == TrackingState.Tracking)
		bool L_0 = V_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_1 = __this->___EarthManager_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006f;
		}
	}
	{
		// valid = EarthManager.CameraGeospatialPose.HeadingAccuracy <= _minimumHeadingAccuracy &&
		//         EarthManager.CameraGeospatialPose.VerticalAccuracy <= _minimumVerticalAccuracy &&
		//         EarthManager.CameraGeospatialPose.HorizontalAccuracy <= _minimumHorizontalAccuracy;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_4;
		NullCheck(L_4);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_5;
		L_5 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_4, NULL);
		double L_6 = L_5.___HeadingAccuracy_4;
		float L_7 = __this->____minimumHeadingAccuracy_9;
		if ((!(((double)L_6) <= ((double)((double)L_7)))))
		{
			goto IL_006c;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_8 = __this->___EarthManager_4;
		NullCheck(L_8);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_9;
		L_9 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_8, NULL);
		double L_10 = L_9.___VerticalAccuracy_6;
		float L_11 = __this->____minimumVerticalAccuracy_10;
		if ((!(((double)L_10) <= ((double)((double)L_11)))))
		{
			goto IL_006c;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_12 = __this->___EarthManager_4;
		NullCheck(L_12);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_13;
		L_13 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_12, NULL);
		double L_14 = L_13.___HorizontalAccuracy_5;
		float L_15 = __this->____minimumHorizontalAccuracy_8;
		G_B8_0 = ((((int32_t)((!(((double)L_14) <= ((double)((double)L_15))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B8_0 = 0;
	}

IL_006d:
	{
		V_0 = (bool)G_B8_0;
	}

IL_006f:
	{
		// return valid;
		bool L_16 = V_0;
		V_2 = L_16;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Void RingSpawner::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingSpawner_LateUpdate_m5B32CA5EA7EDCEA7421E5678DCB7A5A84477CFCF (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_7 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_9 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_11 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_12 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!isPlaced && TrackingIsValid())
		bool L_0 = __this->___isPlaced_7;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = RingSpawner_TrackingIsValid_m61537DB6C488F1879E25629FE3B6B3B9889B6246(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_01c0;
		}
	}
	{
		// GeospatialPose pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_3 = __this->___EarthManager_4;
		NullCheck(L_3);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4;
		L_4 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_3, NULL);
		V_1 = L_4;
		// Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_5 = V_1;
		double L_6 = L_5.___Heading_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_subtract((180.0f), ((float)L_6))), L_7, NULL);
		V_2 = L_8;
		// var anchor1 =
		//         AnchorManager.AddAnchor(
		//            45.243478f,
		//            19.842043f,
		//            124.5f,
		//            quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_9 = __this->___AnchorManager_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_11;
		L_11 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_9, (45.243476867675781), (19.842042922973633), (124.5), L_10, NULL);
		V_3 = L_11;
		// var anchoredAsset1 = Instantiate(newPrefab, anchor1.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___newPrefab_6;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13 = V_3;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_4 = L_15;
		// var anchor2 =
		//         AnchorManager.AddAnchor(
		//            45.243533f,
		//            19.842017f,
		//            124.5f,
		//            quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___AnchorManager_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_2;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18;
		L_18 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_16, (45.243534088134766), (19.842016220092773), (124.5), L_17, NULL);
		V_5 = L_18;
		// var anchoredAsset2 = Instantiate(newPrefab, anchor2.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___newPrefab_6;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_20 = V_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_19, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_6 = L_22;
		// var anchor3 =
		//         AnchorManager.AddAnchor(
		//            45.243595f,
		//            19.841983f,
		//            124.5f,
		//            quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_23 = __this->___AnchorManager_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_2;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_25;
		L_25 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_23, (45.243595123291016), (19.841983795166016), (124.5), L_24, NULL);
		V_7 = L_25;
		// var anchoredAsset3 = Instantiate(newPrefab, anchor3.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___newPrefab_6;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_27 = V_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_26, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_8 = L_29;
		// var anchor4 =
		//         AnchorManager.AddAnchor(
		//            45.243640f,
		//            19.841926f,
		//            124.5f,
		//            quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_30 = __this->___AnchorManager_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_2;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_32;
		L_32 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_30, (45.243640899658203), (19.841926574707031), (124.5), L_31, NULL);
		V_9 = L_32;
		// var anchoredAsset4 = Instantiate(newPrefab, anchor4.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___newPrefab_6;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = V_9;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_33, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_10 = L_36;
		// var anchor5 =
		//         AnchorManager.AddAnchor(
		//            45.243706f,
		//            19.841921f,
		//            124.5f,
		//            quaternion);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_37 = __this->___AnchorManager_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_2;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_39;
		L_39 = ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174(L_37, (45.243705749511719), (19.841920852661133), (124.5), L_38, NULL);
		V_11 = L_39;
		// var anchoredAsset5 = Instantiate(newPrefab, anchor5.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___newPrefab_6;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_41 = V_11;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_40, L_42, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_12 = L_43;
		// StartCoroutine(ActivateRing(anchoredAsset1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_4;
		RuntimeObject* L_45;
		L_45 = RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE(__this, L_44, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_45, NULL);
		// StartCoroutine(ActivateRing(anchoredAsset2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_6;
		RuntimeObject* L_48;
		L_48 = RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE(__this, L_47, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_49;
		L_49 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_48, NULL);
		// StartCoroutine(ActivateRing(anchoredAsset3));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_8;
		RuntimeObject* L_51;
		L_51 = RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE(__this, L_50, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_52;
		L_52 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_51, NULL);
		// StartCoroutine(ActivateRing(anchoredAsset4));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = V_10;
		RuntimeObject* L_54;
		L_54 = RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE(__this, L_53, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_55;
		L_55 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_54, NULL);
		// StartCoroutine(ActivateRing(anchoredAsset5));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_12;
		RuntimeObject* L_57;
		L_57 = RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE(__this, L_56, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_58;
		L_58 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_57, NULL);
		// isPlaced = true;
		__this->___isPlaced_7 = (bool)1;
	}

IL_01c0:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator RingSpawner::ActivateRing(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RingSpawner_ActivateRing_m5F8CE30B8464749C7A710E737B5779C9D26987DE (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___anchoredAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* L_0 = (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E*)il2cpp_codegen_object_new(U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CActivateRingU3Ed__9__ctor_m41DE1C2796B4D9DF53AC6E90EEE5397005432254(L_0, 0, NULL);
		U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___anchoredAsset0;
		NullCheck(L_2);
		L_2->___anchoredAsset_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___anchoredAsset_2), (void*)L_3);
		return L_2;
	}
}
// System.Void RingSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingSpawner__ctor_m9F1DC567FA7CCFA5ADAC009C668927F8C465F25D (RingSpawner_t937220EFD5E8E7CBE460816EC5B8E0877C414D89* __this, const RuntimeMethod* method) 
{
	{
		// private bool isPlaced = false;
		__this->___isPlaced_7 = (bool)0;
		// [SerializeField] private float _minimumHorizontalAccuracy = 1;
		__this->____minimumHorizontalAccuracy_8 = (1.0f);
		// [SerializeField] private float _minimumHeadingAccuracy = 2;
		__this->____minimumHeadingAccuracy_9 = (2.0f);
		// [SerializeField] private float _minimumVerticalAccuracy = 0.5f;
		__this->____minimumVerticalAccuracy_10 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RingSpawner/<ActivateRing>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateRingU3Ed__9__ctor_m41DE1C2796B4D9DF53AC6E90EEE5397005432254 (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RingSpawner/<ActivateRing>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateRingU3Ed__9_System_IDisposable_Dispose_mA1A496EFF0A69F2ECED645C95D6AC23477D9A1E4 (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RingSpawner/<ActivateRing>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActivateRingU3Ed__9_MoveNext_m4DEB55852EA9059CE8002B0FCE6D44806F6FF416 (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anchoredAsset.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___anchoredAsset_2;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RingSpawner/<ActivateRing>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateRingU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m03C2224097572F1528EEA359D55B248BC5F62814 (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RingSpawner/<ActivateRing>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateRingU3Ed__9_System_Collections_IEnumerator_Reset_m9FFD81EED9E50206069DF9DD134C62454FAD636B (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActivateRingU3Ed__9_System_Collections_IEnumerator_Reset_m9FFD81EED9E50206069DF9DD134C62454FAD636B_RuntimeMethod_var)));
	}
}
// System.Object RingSpawner/<ActivateRing>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateRingU3Ed__9_System_Collections_IEnumerator_get_Current_m4BB25FA3CF3B41E114335658BAE3A49AC15EC6CC (U3CActivateRingU3Ed__9_t70077074F836212A563D29AE9D21EDB59400CB7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ScoreCounter::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCounter_OnTriggerEnter_mB6DE3D9210596233EEAA2CB8D41D6A42E8536F98 (ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (other.tag == "Ring")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// int newScore = Int32.Parse(Score.text) + 100;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Score_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		int32_t L_8;
		L_8 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_7, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)100)));
		// Score.text = newScore.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Score_4;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ScoreCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCounter__ctor_mD31BB3A21C7FDA565DBAA13439B05739F2AE109F (ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SimpleCollectibleScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCollectibleScript_Update_m8EE3FD9FB107EE15FF7303467080B33221D2B35E (SimpleCollectibleScript_t5275AD9FFED23F5EDAFED48748D1A462E854198D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (rotate)
		bool L_0 = __this->___rotate_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// transform.Rotate(Vector3.up * rotationSpeed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_4 = __this->___rotationSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_2, L_7, 0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void SimpleCollectibleScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCollectibleScript_OnTriggerEnter_m8C9065701BEAB54F42C8655C1292F7833423A909 (SimpleCollectibleScript_t5275AD9FFED23F5EDAFED48748D1A462E854198D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// if (collectSound)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___collectSound_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(collectSound, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->___collectSound_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC(L_7, L_9, NULL);
	}

IL_003c:
	{
		// if (collectEffect)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___collectEffect_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		// Instantiate(collectEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___collectEffect_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_0067:
	{
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void SimpleCollectibleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCollectibleScript__ctor_mE01D2A563BE6BDB0D6A71F7B92B2F1094BB24FCE (SimpleCollectibleScript_t5275AD9FFED23F5EDAFED48748D1A462E854198D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
