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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// DD_CalcRectTransformHelper
struct DD_CalcRectTransformHelper_t2146842496;
// DD_CoordinateAxis
struct DD_CoordinateAxis_t429882320;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// DD_DrawGraphic
struct DD_DrawGraphic_t171377864;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t1923634451;
// DD_CoordinateAxis/CoordinateRectChangeHandler
struct CoordinateRectChangeHandler_t1701308220;
// System.Delegate
struct Delegate_t1188392813;
// DD_CoordinateAxis/CoordinateScaleChangeHandler
struct CoordinateScaleChangeHandler_t4226256743;
// DD_CoordinateAxis/CoordinateZeroPointChangeHandler
struct CoordinateZeroPointChangeHandler_t1056737497;
// DD_DataDiagram
struct DD_DataDiagram_t1914326032;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// DD_DataDiagram/RectChangeHandler
struct RectChangeHandler_t1189589726;
// DD_DataDiagram/ZoomHandler
struct ZoomHandler_t2822810846;
// DD_DataDiagram/MoveHandler
struct MoveHandler_t3318770945;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// DD_CoordinateRectChangeEventArgs
struct DD_CoordinateRectChangeEventArgs_t641796680;
// DD_RectChangeEventArgs
struct DD_RectChangeEventArgs_t2247361209;
// DD_ZoomEventArgs
struct DD_ZoomEventArgs_t3840071228;
// DD_CoordinateScaleChangeEventArgs
struct DD_CoordinateScaleChangeEventArgs_t3003819413;
// DD_MoveEventArgs
struct DD_MoveEventArgs_t744120769;
// DD_CoordinateZeroPointChangeEventArgs
struct DD_CoordinateZeroPointChangeEventArgs_t1028912263;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t2869341516;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0
struct U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// DD_Lines
struct DD_Lines_t487279985;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.EventArgs
struct EventArgs_t3591816995;
// DD_DataDiagram/PreDestroyLineHandler
struct PreDestroyLineHandler_t3782553210;
// DD_LineButtonsContent
struct DD_LineButtonsContent_t4224093008;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// DD_LineButton
struct DD_LineButton_t3694160087;
// DD_PreDestroyLineEventArgs
struct DD_PreDestroyLineEventArgs_t3472178400;
// DD_DragBar
struct DD_DragBar_t348422191;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1785403678;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// DD_ZoomButton
struct DD_ZoomButton_t4256419273;
// DD_ZoomButton/ZoomButtonClickHandle
struct ZoomButtonClickHandle_t1498002863;
// ZoomButtonClickEventArgs
struct ZoomButtonClickEventArgs_t1487932623;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3839221559;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// LogSave
struct LogSave_t3250175913;
// System.IO.FileInfo
struct FileInfo_t1169991790;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// MovePointView
struct MovePointView_t4144359498;
// Sample
struct Sample_t1746682370;
// UIManager
struct UIManager_t1042050227;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityStandardAssets.Water.WaterBasic
struct WaterBasic_t418026961;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.IO.Stream
struct Stream_t1273022909;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// DD_ZoomButton/RTParam[]
struct RTParamU5BU5D_t1300874088;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcAnchorPosition_m3167313752_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcOffsetMin_m3557802424_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcOffsetMax_m1504452929_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcSizeDelta_m3831550858_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcRectSize_m1523090338_MetadataUsageId;
extern const uint32_t DD_CalcRectTransformHelper_CalcLocalRect_m3010352532_MetadataUsageId;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0_FieldInfo_var;
extern const uint32_t DD_CoordinateAxis__ctor_m3472608139_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern String_t* _stringLiteral3787497674;
extern const uint32_t DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_get_m_CoordinateAxisViewSizeX_m99901340_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_get_coordinateRectT_m313053459_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const uint32_t DD_CoordinateAxis_get_lineNum_m2664137645_MetadataUsageId;
extern RuntimeClass* CoordinateRectChangeHandler_t1701308220_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_add_CoordinateRectChangeEvent_m1520371892_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_remove_CoordinateRectChangeEvent_m3613566325_MetadataUsageId;
extern RuntimeClass* CoordinateScaleChangeHandler_t4226256743_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_add_CoordinateScaleChangeEvent_m3318966535_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_remove_CoordinateScaleChangeEvent_m4245992316_MetadataUsageId;
extern RuntimeClass* CoordinateZeroPointChangeHandler_t1056737497_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_add_CoordinateeZeroPointChangeEvent_m666871371_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_remove_CoordinateeZeroPointChangeEvent_m1754232721_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var;
extern RuntimeClass* RectChangeHandler_t1189589726_il2cpp_TypeInfo_var;
extern RuntimeClass* ZoomHandler_t2822810846_il2cpp_TypeInfo_var;
extern RuntimeClass* MoveHandler_t3318770945_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* DD_CoordinateAxis_OnRectChange_m171157958_RuntimeMethod_var;
extern const RuntimeMethod* DD_CoordinateAxis_OnZoom_m221497421_RuntimeMethod_var;
extern const RuntimeMethod* DD_CoordinateAxis_OnMove_m3651124455_RuntimeMethod_var;
extern String_t* _stringLiteral1929951271;
extern String_t* _stringLiteral1655495810;
extern String_t* _stringLiteral1943368577;
extern String_t* _stringLiteral4255140175;
extern String_t* _stringLiteral3235001041;
extern String_t* _stringLiteral2574166323;
extern String_t* _stringLiteral3452614532;
extern const uint32_t DD_CoordinateAxis_Awake_m2726755315_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_FindInChild_m3863140474_MetadataUsageId;
extern RuntimeClass* DD_CoordinateRectChangeEventArgs_t641796680_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_ChangeRect_m3879668204_MetadataUsageId;
extern RuntimeClass* DD_CoordinateScaleChangeEventArgs_t3003819413_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_OnZoom_m221497421_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* DD_CoordinateZeroPointChangeEventArgs_t1028912263_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_OnMove_m3651124455_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_CalcMarkNum_m3463377333_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_CalcMarkLevel_m756508287_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_CeilingFormat_m1213804367_MetadataUsageId;
extern RuntimeClass* List_1_t2869341516_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3152364487_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2024781851_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4125879936_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m3400312413_RuntimeMethod_var;
extern const uint32_t DD_CoordinateAxis_CalcMarkVals_m2490842168_MetadataUsageId;
extern const uint32_t DD_CoordinateAxis_MarkValsToPixel_m38343516_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern String_t* _stringLiteral3128452393;
extern String_t* _stringLiteral441292621;
extern String_t* _stringLiteral4112085541;
extern const uint32_t DD_CoordinateAxis_SetMarkText_m2026952380_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1750140655_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4179928398_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4286844348_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1341201278_RuntimeMethod_var;
extern String_t* _stringLiteral2468995601;
extern const uint32_t DD_CoordinateAxis_ResetAllMarkText_m1261228444_MetadataUsageId;
extern RuntimeClass* U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateAxis_DrawHorizontalTextMark_m743347802_MetadataUsageId;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern String_t* _stringLiteral3031731813;
extern const uint32_t DD_CoordinateAxis_FindExistMarkText_m3497577672_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var;
extern const uint32_t DD_CoordinateAxis_InputPoint_m2834643303_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t DD_CoordinateAxis_AddLine_m1965996467_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m4063777476_RuntimeMethod_var;
extern const uint32_t DD_CoordinateAxis_RemoveLine_m544503346_MetadataUsageId;
extern String_t* _stringLiteral1788476403;
extern String_t* _stringLiteral2792132920;
extern String_t* _stringLiteral1245949248;
extern const uint32_t DD_CoordinateAxis__cctor_m1652641895_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CDrawHorizontalTextMarkU3Ec__Iterator0_MoveNext_m1719159683_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CDrawHorizontalTextMarkU3Ec__Iterator0_Reset_m438578605_RuntimeMethod_var;
extern const uint32_t U3CDrawHorizontalTextMarkU3Ec__Iterator0_Reset_m438578605_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t DD_CoordinateRectChangeEventArgs__ctor_m1632708520_MetadataUsageId;
extern const uint32_t DD_CoordinateScaleChangeEventArgs__ctor_m1213094976_MetadataUsageId;
extern const uint32_t DD_CoordinateZeroPointChangeEventArgs__ctor_m3958412451_MetadataUsageId;
extern const uint32_t DD_DataDiagram_add_RectChangeEvent_m1945500573_MetadataUsageId;
extern const uint32_t DD_DataDiagram_remove_RectChangeEvent_m1832674967_MetadataUsageId;
extern const uint32_t DD_DataDiagram_add_ZoomEvent_m4269353983_MetadataUsageId;
extern const uint32_t DD_DataDiagram_remove_ZoomEvent_m1488667568_MetadataUsageId;
extern const uint32_t DD_DataDiagram_add_MoveEvent_m2980893282_MetadataUsageId;
extern const uint32_t DD_DataDiagram_remove_MoveEvent_m2684636257_MetadataUsageId;
extern RuntimeClass* PreDestroyLineHandler_t3782553210_il2cpp_TypeInfo_var;
extern const uint32_t DD_DataDiagram_add_PreDestroyLineEvent_m3212590009_MetadataUsageId;
extern const uint32_t DD_DataDiagram_remove_PreDestroyLineEvent_m2154887576_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m3860665987_RuntimeMethod_var;
extern const uint32_t DD_DataDiagram_get_rect_m2617655701_MetadataUsageId;
extern RuntimeClass* DD_RectChangeEventArgs_t2247361209_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1_get_Value_m904006957_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526_RuntimeMethod_var;
extern const uint32_t DD_DataDiagram_set_rect_m224390537_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisDD_CoordinateAxis_t429882320_m2661381029_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisDD_LineButtonsContent_t4224093008_m919528838_RuntimeMethod_var;
extern String_t* _stringLiteral4046463555;
extern String_t* _stringLiteral2217477577;
extern String_t* _stringLiteral3349126870;
extern const uint32_t DD_DataDiagram_Awake_m481705388_MetadataUsageId;
extern const uint32_t DD_DataDiagram_Start_m3564126061_MetadataUsageId;
extern RuntimeClass* DD_MoveEventArgs_t744120769_il2cpp_TypeInfo_var;
extern const uint32_t DD_DataDiagram_OnDrag_m4148333113_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* DD_ZoomEventArgs_t3840071228_il2cpp_TypeInfo_var;
extern const uint32_t DD_DataDiagram_OnScroll_m932639022_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var;
extern const uint32_t DD_DataDiagram_SetLineButtonColor_m3856283616_MetadataUsageId;
extern String_t* _stringLiteral227628940;
extern const uint32_t DD_DataDiagram_SetLineColor_m1551687332_MetadataUsageId;
extern String_t* _stringLiteral3749277472;
extern String_t* _stringLiteral1979641446;
extern String_t* _stringLiteral1692657584;
extern String_t* _stringLiteral3381932808;
extern String_t* _stringLiteral1126391900;
extern const uint32_t DD_DataDiagram_AddLineButton_m1110170240_MetadataUsageId;
extern const uint32_t DD_DataDiagram_DestroyLineButton_m2656807380_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727_RuntimeMethod_var;
extern const uint32_t DD_DataDiagram_InputPoint_m1918161065_MetadataUsageId;
extern String_t* _stringLiteral814603002;
extern String_t* _stringLiteral789587920;
extern String_t* _stringLiteral3884113879;
extern const uint32_t DD_DataDiagram_AddLine_m1232943402_MetadataUsageId;
extern RuntimeClass* DD_PreDestroyLineEventArgs_t3472178400_il2cpp_TypeInfo_var;
extern const uint32_t DD_DataDiagram_DestroyLine_m627531740_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisLayoutElement_t1785403678_m847584320_RuntimeMethod_var;
extern String_t* _stringLiteral3138619933;
extern const uint32_t DD_DragBar_set_canDrag_m2377542068_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisCanvas_t3310196443_m1808013672_RuntimeMethod_var;
extern String_t* _stringLiteral2266489269;
extern String_t* _stringLiteral4144371746;
extern const uint32_t DD_DragBar_Start_m1232799281_MetadataUsageId;
extern RuntimeClass* ZoomButtonClickHandle_t1498002863_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponentInParent_TisDD_DataDiagram_t1914326032_m2168817592_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDD_ZoomButton_t4256419273_m417231604_RuntimeMethod_var;
extern const RuntimeMethod* DD_DragBar_OnCtrlButtonClick_m622583422_RuntimeMethod_var;
extern String_t* _stringLiteral182686531;
extern String_t* _stringLiteral113163412;
extern String_t* _stringLiteral75001033;
extern String_t* _stringLiteral436299043;
extern const uint32_t DD_DragBar_GetZoomButton_m2620346376_MetadataUsageId;
extern const uint32_t DD_DragBar_OnDrag_m3495462451_MetadataUsageId;
extern String_t* _stringLiteral1261950427;
extern const uint32_t DD_DragBar_OnCtrlButtonClick_m622583422_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m680077965_RuntimeMethod_var;
extern const uint32_t DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1378751541_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1317965445_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m963759207_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m78231532_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1202123918_RuntimeMethod_var;
extern const uint32_t DD_DrawGraphic_AddHorizontalCutPoints_m3228128323_MetadataUsageId;
extern const uint32_t DD_DrawGraphic_HorizontalCut_m1261275112_MetadataUsageId;
extern RuntimeClass* UIVertexU5BU5D_t1981460040_il2cpp_TypeInfo_var;
extern const uint32_t DD_DrawGraphic_DrawRectang_m3222529442_MetadataUsageId;
extern const uint32_t DD_DrawGraphic_DrawHorizontalLine_m2876544230_MetadataUsageId;
extern const RuntimeMethod* List_1_RemoveAt_m1260051643_RuntimeMethod_var;
extern const uint32_t DD_DrawGraphic_DrawHorizontalLine_m3341806192_MetadataUsageId;
extern const uint32_t DD_DrawGraphic_DrawTriangle_m1635085260_MetadataUsageId;
extern String_t* _stringLiteral712896730;
extern const uint32_t DD_LineButton_set_line_m227509176_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisDD_Lines_t487279985_m1227823878_RuntimeMethod_var;
extern const uint32_t DD_LineButton_SetLabel_m1088355368_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern String_t* _stringLiteral3132132153;
extern const uint32_t DD_LineButton_SetLineButton_m253669163_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t DD_LineButton_OnPointerEnter_m2681574627_MetadataUsageId;
extern const uint32_t DD_LineButton_OnPointerExit_m3419846658_MetadataUsageId;
extern String_t* _stringLiteral1069508859;
extern String_t* _stringLiteral2714217928;
extern const uint32_t DD_LineButton_OnButtonClick_m2421686483_MetadataUsageId;
extern String_t* _stringLiteral2066833209;
extern const uint32_t DD_LineButton_OnButtonClickWithCtrl_m1370327621_MetadataUsageId;
extern const uint32_t DD_LineButton_DestroyLineButton_m767131855_MetadataUsageId;
extern RuntimeClass* List_1_t3628304265_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1536470898_RuntimeMethod_var;
extern const uint32_t DD_Lines__ctor_m1789042529_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInParent_TisDD_CoordinateAxis_t429882320_m2971502623_RuntimeMethod_var;
extern const RuntimeMethod* DD_Lines_OnCoordinateRectChange_m1992004014_RuntimeMethod_var;
extern const RuntimeMethod* DD_Lines_OnCoordinateScaleChange_m2587648133_RuntimeMethod_var;
extern const RuntimeMethod* DD_Lines_OnCoordinateZeroPointChange_m3969185588_RuntimeMethod_var;
extern String_t* _stringLiteral895737547;
extern String_t* _stringLiteral3411623376;
extern String_t* _stringLiteral3838294924;
extern String_t* _stringLiteral711880226;
extern const uint32_t DD_Lines_Awake_m2825272864_MetadataUsageId;
extern const uint32_t DD_Lines_ScaleX_m932027563_MetadataUsageId;
extern const uint32_t DD_Lines_ScaleY_m386833625_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m809843680_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2598000980_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m698163972_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4079852040_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2367629053_RuntimeMethod_var;
extern const uint32_t DD_Lines_GetStartPointSN_m1766374616_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2298161512_RuntimeMethod_var;
extern const uint32_t DD_Lines_OnPopulateMesh_m612044765_MetadataUsageId;
extern const uint32_t DD_Lines_AddPoint_m4130288851_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m2188935509_RuntimeMethod_var;
extern const uint32_t DD_Lines_Clear_m3572606507_MetadataUsageId;
extern const uint32_t DD_MoveEventArgs__ctor_m1350353200_MetadataUsageId;
extern const uint32_t DD_PreDestroyLineEventArgs__ctor_m3223243980_MetadataUsageId;
extern const uint32_t DD_RectChangeEventArgs__ctor_m3288943631_MetadataUsageId;
extern RuntimeClass* RTParamU5BU5D_t1300874088_il2cpp_TypeInfo_var;
extern const uint32_t DD_ZoomButton__ctor_m3417381862_MetadataUsageId;
extern const uint32_t DD_ZoomButton_Awake_m1711532910_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724_RuntimeMethod_var;
extern const uint32_t DD_ZoomButton_Start_m3655777122_MetadataUsageId;
extern RuntimeClass* ZoomButtonClickEventArgs_t1487932623_il2cpp_TypeInfo_var;
extern const uint32_t DD_ZoomButton_OnZoomButton_m2037742700_MetadataUsageId;
extern const uint32_t DD_ZoomEventArgs__ctor_m1841169722_MetadataUsageId;
extern RuntimeClass* FileInfo_t1169991790_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral138558762;
extern const uint32_t LogSave_logSave_m305054840_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t MovePointView_Update_m2700285760_MetadataUsageId;
extern const uint32_t Sample__ctor_m2935122145_MetadataUsageId;
extern const uint32_t Sample_AddALine_m3083246443_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDD_DataDiagram_t1914326032_m3066308452_RuntimeMethod_var;
extern const RuntimeMethod* Sample_U3CStartU3Em__0_m2968397177_RuntimeMethod_var;
extern String_t* _stringLiteral2374827376;
extern String_t* _stringLiteral1980666589;
extern const uint32_t Sample_Start_m1088282559_MetadataUsageId;
extern const uint32_t Sample_ContinueInput_m3298532680_MetadataUsageId;
extern const uint32_t Sample_onButton_m4054621970_MetadataUsageId;
extern const uint32_t Sample_OnRectChange_m2691573620_MetadataUsageId;
extern const uint32_t Sample_U3CStartU3Em__0_m2968397177_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614566;
extern const uint32_t UIManager_Update_m1085197836_MetadataUsageId;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern String_t* _stringLiteral49249872;
extern String_t* _stringLiteral3029421264;
extern String_t* _stringLiteral2268830102;
extern const uint32_t WaterBasic_Update_m4213962468_MetadataUsageId;
extern const uint32_t ZoomButtonClickEventArgs__ctor_m3986513944_MetadataUsageId;

struct SingleU5BU5D_t1444911251;
struct UIVertexU5BU5D_t1981460040;
struct RTParamU5BU5D_t1300874088;
struct StringU5BU5D_t1281789340;


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
#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
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
#ifndef LIST_1_T2869341516_H
#define LIST_1_T2869341516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct  List_1_t2869341516  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t1444911251* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____items_1)); }
	inline SingleU5BU5D_t1444911251* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t1444911251** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t1444911251* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2869341516_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SingleU5BU5D_t1444911251* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2869341516_StaticFields, ___EmptyArray_4)); }
	inline SingleU5BU5D_t1444911251* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SingleU5BU5D_t1444911251* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2869341516_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DD_CALCRECTTRANSFORMHELPER_T2146842496_H
#define DD_CALCRECTTRANSFORMHELPER_T2146842496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CalcRectTransformHelper
struct  DD_CalcRectTransformHelper_t2146842496  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_CALCRECTTRANSFORMHELPER_T2146842496_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef DD_COORDINATESCALECHANGEEVENTARGS_T3003819413_H
#define DD_COORDINATESCALECHANGEEVENTARGS_T3003819413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateScaleChangeEventArgs
struct  DD_CoordinateScaleChangeEventArgs_t3003819413  : public EventArgs_t3591816995
{
public:
	// System.Single DD_CoordinateScaleChangeEventArgs::scaleX
	float ___scaleX_1;
	// System.Single DD_CoordinateScaleChangeEventArgs::scaleY
	float ___scaleY_2;

public:
	inline static int32_t get_offset_of_scaleX_1() { return static_cast<int32_t>(offsetof(DD_CoordinateScaleChangeEventArgs_t3003819413, ___scaleX_1)); }
	inline float get_scaleX_1() const { return ___scaleX_1; }
	inline float* get_address_of_scaleX_1() { return &___scaleX_1; }
	inline void set_scaleX_1(float value)
	{
		___scaleX_1 = value;
	}

	inline static int32_t get_offset_of_scaleY_2() { return static_cast<int32_t>(offsetof(DD_CoordinateScaleChangeEventArgs_t3003819413, ___scaleY_2)); }
	inline float get_scaleY_2() const { return ___scaleY_2; }
	inline float* get_address_of_scaleY_2() { return &___scaleY_2; }
	inline void set_scaleY_2(float value)
	{
		___scaleY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_COORDINATESCALECHANGEEVENTARGS_T3003819413_H
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
#ifndef DD_MOVEEVENTARGS_T744120769_H
#define DD_MOVEEVENTARGS_T744120769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_MoveEventArgs
struct  DD_MoveEventArgs_t744120769  : public EventArgs_t3591816995
{
public:
	// System.Single DD_MoveEventArgs::_moveX
	float ____moveX_1;
	// System.Single DD_MoveEventArgs::_moveY
	float ____moveY_2;

public:
	inline static int32_t get_offset_of__moveX_1() { return static_cast<int32_t>(offsetof(DD_MoveEventArgs_t744120769, ____moveX_1)); }
	inline float get__moveX_1() const { return ____moveX_1; }
	inline float* get_address_of__moveX_1() { return &____moveX_1; }
	inline void set__moveX_1(float value)
	{
		____moveX_1 = value;
	}

	inline static int32_t get_offset_of__moveY_2() { return static_cast<int32_t>(offsetof(DD_MoveEventArgs_t744120769, ____moveY_2)); }
	inline float get__moveY_2() const { return ____moveY_2; }
	inline float* get_address_of__moveY_2() { return &____moveY_2; }
	inline void set__moveY_2(float value)
	{
		____moveY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_MOVEEVENTARGS_T744120769_H
#ifndef DD_ZOOMEVENTARGS_T3840071228_H
#define DD_ZOOMEVENTARGS_T3840071228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_ZoomEventArgs
struct  DD_ZoomEventArgs_t3840071228  : public EventArgs_t3591816995
{
public:
	// System.Single DD_ZoomEventArgs::_zoomX
	float ____zoomX_1;
	// System.Single DD_ZoomEventArgs::_zoomY
	float ____zoomY_2;

public:
	inline static int32_t get_offset_of__zoomX_1() { return static_cast<int32_t>(offsetof(DD_ZoomEventArgs_t3840071228, ____zoomX_1)); }
	inline float get__zoomX_1() const { return ____zoomX_1; }
	inline float* get_address_of__zoomX_1() { return &____zoomX_1; }
	inline void set__zoomX_1(float value)
	{
		____zoomX_1 = value;
	}

	inline static int32_t get_offset_of__zoomY_2() { return static_cast<int32_t>(offsetof(DD_ZoomEventArgs_t3840071228, ____zoomY_2)); }
	inline float get__zoomY_2() const { return ____zoomY_2; }
	inline float* get_address_of__zoomY_2() { return &____zoomY_2; }
	inline void set__zoomY_2(float value)
	{
		____zoomY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_ZOOMEVENTARGS_T3840071228_H
#ifndef ZOOMBUTTONCLICKEVENTARGS_T1487932623_H
#define ZOOMBUTTONCLICKEVENTARGS_T1487932623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZoomButtonClickEventArgs
struct  ZoomButtonClickEventArgs_t1487932623  : public EventArgs_t3591816995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOOMBUTTONCLICKEVENTARGS_T1487932623_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;

public:
	inline static int32_t get_offset_of_internalEncoding_2() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_2)); }
	inline Encoding_t1523322056 * get_internalEncoding_2() const { return ___internalEncoding_2; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_2() { return &___internalEncoding_2; }
	inline void set_internalEncoding_2(Encoding_t1523322056 * value)
	{
		___internalEncoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_2), value);
	}

	inline static int32_t get_offset_of_internalStream_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_3)); }
	inline Stream_t1273022909 * get_internalStream_3() const { return ___internalStream_3; }
	inline Stream_t1273022909 ** get_address_of_internalStream_3() { return &___internalStream_3; }
	inline void set_internalStream_3(Stream_t1273022909 * value)
	{
		___internalStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_3), value);
	}

	inline static int32_t get_offset_of_iflush_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_4)); }
	inline bool get_iflush_4() const { return ___iflush_4; }
	inline bool* get_address_of_iflush_4() { return &___iflush_4; }
	inline void set_iflush_4(bool value)
	{
		___iflush_4 = value;
	}

	inline static int32_t get_offset_of_byte_buf_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_5)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_5() const { return ___byte_buf_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_5() { return &___byte_buf_5; }
	inline void set_byte_buf_5(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_5 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_5), value);
	}

	inline static int32_t get_offset_of_byte_pos_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_6)); }
	inline int32_t get_byte_pos_6() const { return ___byte_pos_6; }
	inline int32_t* get_address_of_byte_pos_6() { return &___byte_pos_6; }
	inline void set_byte_pos_6(int32_t value)
	{
		___byte_pos_6 = value;
	}

	inline static int32_t get_offset_of_decode_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_7)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_7() const { return ___decode_buf_7; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_7() { return &___decode_buf_7; }
	inline void set_decode_buf_7(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_7), value);
	}

	inline static int32_t get_offset_of_decode_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_8)); }
	inline int32_t get_decode_pos_8() const { return ___decode_pos_8; }
	inline int32_t* get_address_of_decode_pos_8() { return &___decode_pos_8; }
	inline void set_decode_pos_8(int32_t value)
	{
		___decode_pos_8 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_9)); }
	inline bool get_DisposedAlready_9() const { return ___DisposedAlready_9; }
	inline bool* get_address_of_DisposedAlready_9() { return &___DisposedAlready_9; }
	inline void set_DisposedAlready_9(bool value)
	{
		___DisposedAlready_9 = value;
	}

	inline static int32_t get_offset_of_preamble_done_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_10)); }
	inline bool get_preamble_done_10() const { return ___preamble_done_10; }
	inline bool* get_address_of_preamble_done_10() { return &___preamble_done_10; }
	inline void set_preamble_done_10(bool value)
	{
		___preamble_done_10 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_11;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_11)); }
	inline StreamWriter_t1266378904 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t1266378904 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((&___Null_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef ENUMERATOR_T179987942_H
#define ENUMERATOR_T179987942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t179987942 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2585711361 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_t1113636619 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___l_0)); }
	inline List_1_t2585711361 * get_l_0() const { return ___l_0; }
	inline List_1_t2585711361 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2585711361 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___current_3)); }
	inline GameObject_t1113636619 * get_current_3() const { return ___current_3; }
	inline GameObject_t1113636619 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_t1113636619 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T179987942_H
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
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
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
#ifndef DD_PREDESTROYLINEEVENTARGS_T3472178400_H
#define DD_PREDESTROYLINEEVENTARGS_T3472178400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_PreDestroyLineEventArgs
struct  DD_PreDestroyLineEventArgs_t3472178400  : public EventArgs_t3591816995
{
public:
	// UnityEngine.GameObject DD_PreDestroyLineEventArgs::m_Line
	GameObject_t1113636619 * ___m_Line_1;

public:
	inline static int32_t get_offset_of_m_Line_1() { return static_cast<int32_t>(offsetof(DD_PreDestroyLineEventArgs_t3472178400, ___m_Line_1)); }
	inline GameObject_t1113636619 * get_m_Line_1() const { return ___m_Line_1; }
	inline GameObject_t1113636619 ** get_address_of_m_Line_1() { return &___m_Line_1; }
	inline void set_m_Line_1(GameObject_t1113636619 * value)
	{
		___m_Line_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Line_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_PREDESTROYLINEEVENTARGS_T3472178400_H
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
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
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
#endif // LINETYPE_T4214648469_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef UIVERTEX_T4057497605_H
#define UIVERTEX_T4057497605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t4057497605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3722313464  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2600501292  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2156229523  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2156229523  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2156229523  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2156229523  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3319028937  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___normal_1)); }
	inline Vector3_t3722313464  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3722313464 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3722313464  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___color_2)); }
	inline Color32_t2600501292  get_color_2() const { return ___color_2; }
	inline Color32_t2600501292 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2600501292  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv0_3)); }
	inline Vector2_t2156229523  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t2156229523 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t2156229523  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv1_4)); }
	inline Vector2_t2156229523  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t2156229523 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t2156229523  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv2_5)); }
	inline Vector2_t2156229523  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2156229523 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2156229523  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv3_6)); }
	inline Vector2_t2156229523  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t2156229523 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t2156229523  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___tangent_7)); }
	inline Vector4_t3319028937  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t3319028937 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t3319028937  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t4057497605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2600501292  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t4057497605  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2600501292  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2600501292 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2600501292  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t4057497605  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t4057497605 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t4057497605  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T4057497605_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef NULLABLE_1_T3878791605_H
#define NULLABLE_1_T3878791605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Vector2>
struct  Nullable_1_t3878791605 
{
public:
	// T System.Nullable`1::value
	Vector2_t2156229523  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3878791605, ___value_0)); }
	inline Vector2_t2156229523  get_value_0() const { return ___value_0; }
	inline Vector2_t2156229523 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector2_t2156229523  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3878791605, ___has_value_1)); }
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
#endif // NULLABLE_1_T3878791605_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
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
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
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
#endif // INPUTTYPE_T1770400679_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
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
#endif // CONTENTTYPE_T1787303396_H
#ifndef RTPARAM_T3144317285_H
#define RTPARAM_T3144317285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_ZoomButton/RTParam
struct  RTParam_t3144317285 
{
public:
	// UnityEngine.Transform DD_ZoomButton/RTParam::parent
	Transform_t3600365921 * ___parent_0;
	// UnityEngine.Rect DD_ZoomButton/RTParam::rect
	Rect_t2360479859  ___rect_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(RTParam_t3144317285, ___parent_0)); }
	inline Transform_t3600365921 * get_parent_0() const { return ___parent_0; }
	inline Transform_t3600365921 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Transform_t3600365921 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_rect_1() { return static_cast<int32_t>(offsetof(RTParam_t3144317285, ___rect_1)); }
	inline Rect_t2360479859  get_rect_1() const { return ___rect_1; }
	inline Rect_t2360479859 * get_address_of_rect_1() { return &___rect_1; }
	inline void set_rect_1(Rect_t2360479859  value)
	{
		___rect_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of DD_ZoomButton/RTParam
struct RTParam_t3144317285_marshaled_pinvoke
{
	Transform_t3600365921 * ___parent_0;
	Rect_t2360479859  ___rect_1;
};
// Native definition for COM marshalling of DD_ZoomButton/RTParam
struct RTParam_t3144317285_marshaled_com
{
	Transform_t3600365921 * ___parent_0;
	Rect_t2360479859  ___rect_1;
};
#endif // RTPARAM_T3144317285_H
#ifndef ENUMERATOR_T1222580846_H
#define ENUMERATOR_T1222580846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
struct  Enumerator_t1222580846 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3628304265 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2_t2156229523  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___l_0)); }
	inline List_1_t3628304265 * get_l_0() const { return ___l_0; }
	inline List_1_t3628304265 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3628304265 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___current_3)); }
	inline Vector2_t2156229523  get_current_3() const { return ___current_3; }
	inline Vector2_t2156229523 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2_t2156229523  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1222580846_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef U3CDRAWHORIZONTALTEXTMARKU3EC__ITERATOR0_T2314951697_H
#define U3CDRAWHORIZONTALTEXTMARKU3EC__ITERATOR0_T2314951697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0
struct  U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697  : public RuntimeObject
{
public:
	// System.Single[] DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::marksPixel
	SingleU5BU5D_t1444911251* ___marksPixel_0;
	// System.Single[] DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::marksVals
	SingleU5BU5D_t1444911251* ___marksVals_1;
	// UnityEngine.Rect DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::coordinateRect
	Rect_t2360479859  ___coordinateRect_2;
	// DD_CoordinateAxis DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::$this
	DD_CoordinateAxis_t429882320 * ___U24this_3;
	// System.Object DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_marksPixel_0() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___marksPixel_0)); }
	inline SingleU5BU5D_t1444911251* get_marksPixel_0() const { return ___marksPixel_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_marksPixel_0() { return &___marksPixel_0; }
	inline void set_marksPixel_0(SingleU5BU5D_t1444911251* value)
	{
		___marksPixel_0 = value;
		Il2CppCodeGenWriteBarrier((&___marksPixel_0), value);
	}

	inline static int32_t get_offset_of_marksVals_1() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___marksVals_1)); }
	inline SingleU5BU5D_t1444911251* get_marksVals_1() const { return ___marksVals_1; }
	inline SingleU5BU5D_t1444911251** get_address_of_marksVals_1() { return &___marksVals_1; }
	inline void set_marksVals_1(SingleU5BU5D_t1444911251* value)
	{
		___marksVals_1 = value;
		Il2CppCodeGenWriteBarrier((&___marksVals_1), value);
	}

	inline static int32_t get_offset_of_coordinateRect_2() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___coordinateRect_2)); }
	inline Rect_t2360479859  get_coordinateRect_2() const { return ___coordinateRect_2; }
	inline Rect_t2360479859 * get_address_of_coordinateRect_2() { return &___coordinateRect_2; }
	inline void set_coordinateRect_2(Rect_t2360479859  value)
	{
		___coordinateRect_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___U24this_3)); }
	inline DD_CoordinateAxis_t429882320 * get_U24this_3() const { return ___U24this_3; }
	inline DD_CoordinateAxis_t429882320 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(DD_CoordinateAxis_t429882320 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDRAWHORIZONTALTEXTMARKU3EC__ITERATOR0_T2314951697_H
#ifndef DD_COORDINATEZEROPOINTCHANGEEVENTARGS_T1028912263_H
#define DD_COORDINATEZEROPOINTCHANGEEVENTARGS_T1028912263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateZeroPointChangeEventArgs
struct  DD_CoordinateZeroPointChangeEventArgs_t1028912263  : public EventArgs_t3591816995
{
public:
	// UnityEngine.Vector2 DD_CoordinateZeroPointChangeEventArgs::zeroPoint
	Vector2_t2156229523  ___zeroPoint_1;

public:
	inline static int32_t get_offset_of_zeroPoint_1() { return static_cast<int32_t>(offsetof(DD_CoordinateZeroPointChangeEventArgs_t1028912263, ___zeroPoint_1)); }
	inline Vector2_t2156229523  get_zeroPoint_1() const { return ___zeroPoint_1; }
	inline Vector2_t2156229523 * get_address_of_zeroPoint_1() { return &___zeroPoint_1; }
	inline void set_zeroPoint_1(Vector2_t2156229523  value)
	{
		___zeroPoint_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_COORDINATEZEROPOINTCHANGEEVENTARGS_T1028912263_H
#ifndef DD_COORDINATERECTCHANGEEVENTARGS_T641796680_H
#define DD_COORDINATERECTCHANGEEVENTARGS_T641796680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateRectChangeEventArgs
struct  DD_CoordinateRectChangeEventArgs_t641796680  : public EventArgs_t3591816995
{
public:
	// UnityEngine.Rect DD_CoordinateRectChangeEventArgs::viewRectInPixel
	Rect_t2360479859  ___viewRectInPixel_1;

public:
	inline static int32_t get_offset_of_viewRectInPixel_1() { return static_cast<int32_t>(offsetof(DD_CoordinateRectChangeEventArgs_t641796680, ___viewRectInPixel_1)); }
	inline Rect_t2360479859  get_viewRectInPixel_1() const { return ___viewRectInPixel_1; }
	inline Rect_t2360479859 * get_address_of_viewRectInPixel_1() { return &___viewRectInPixel_1; }
	inline void set_viewRectInPixel_1(Rect_t2360479859  value)
	{
		___viewRectInPixel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_COORDINATERECTCHANGEEVENTARGS_T641796680_H
#ifndef DD_RECTCHANGEEVENTARGS_T2247361209_H
#define DD_RECTCHANGEEVENTARGS_T2247361209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_RectChangeEventArgs
struct  DD_RectChangeEventArgs_t2247361209  : public EventArgs_t3591816995
{
public:
	// UnityEngine.Vector2 DD_RectChangeEventArgs::m_Size
	Vector2_t2156229523  ___m_Size_1;

public:
	inline static int32_t get_offset_of_m_Size_1() { return static_cast<int32_t>(offsetof(DD_RectChangeEventArgs_t2247361209, ___m_Size_1)); }
	inline Vector2_t2156229523  get_m_Size_1() const { return ___m_Size_1; }
	inline Vector2_t2156229523 * get_address_of_m_Size_1() { return &___m_Size_1; }
	inline void set_m_Size_1(Vector2_t2156229523  value)
	{
		___m_Size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_RECTCHANGEEVENTARGS_T2247361209_H
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
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-3715DA7BEFC1FACE566A532498E3466BC35A5FE8
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0() const { return ___U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0() { return &___U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0; }
	inline void set_U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef NULLABLE_1_T4083041941_H
#define NULLABLE_1_T4083041941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Rect>
struct  Nullable_1_t4083041941 
{
public:
	// T System.Nullable`1::value
	Rect_t2360479859  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4083041941, ___value_0)); }
	inline Rect_t2360479859  get_value_0() const { return ___value_0; }
	inline Rect_t2360479859 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Rect_t2360479859  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4083041941, ___has_value_1)); }
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
#endif // NULLABLE_1_T4083041941_H
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
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
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
#ifndef ZOOMBUTTONCLICKHANDLE_T1498002863_H
#define ZOOMBUTTONCLICKHANDLE_T1498002863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_ZoomButton/ZoomButtonClickHandle
struct  ZoomButtonClickHandle_t1498002863  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOOMBUTTONCLICKHANDLE_T1498002863_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef MOVEHANDLER_T3318770945_H
#define MOVEHANDLER_T3318770945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DataDiagram/MoveHandler
struct  MoveHandler_t3318770945  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEHANDLER_T3318770945_H
#ifndef ZOOMHANDLER_T2822810846_H
#define ZOOMHANDLER_T2822810846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DataDiagram/ZoomHandler
struct  ZoomHandler_t2822810846  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOOMHANDLER_T2822810846_H
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
#ifndef COORDINATEZEROPOINTCHANGEHANDLER_T1056737497_H
#define COORDINATEZEROPOINTCHANGEHANDLER_T1056737497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateAxis/CoordinateZeroPointChangeHandler
struct  CoordinateZeroPointChangeHandler_t1056737497  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEZEROPOINTCHANGEHANDLER_T1056737497_H
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
#ifndef PREDESTROYLINEHANDLER_T3782553210_H
#define PREDESTROYLINEHANDLER_T3782553210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DataDiagram/PreDestroyLineHandler
struct  PreDestroyLineHandler_t3782553210  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDESTROYLINEHANDLER_T3782553210_H
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
#ifndef RECTCHANGEHANDLER_T1189589726_H
#define RECTCHANGEHANDLER_T1189589726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DataDiagram/RectChangeHandler
struct  RectChangeHandler_t1189589726  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTCHANGEHANDLER_T1189589726_H
#ifndef COORDINATERECTCHANGEHANDLER_T1701308220_H
#define COORDINATERECTCHANGEHANDLER_T1701308220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateAxis/CoordinateRectChangeHandler
struct  CoordinateRectChangeHandler_t1701308220  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATERECTCHANGEHANDLER_T1701308220_H
#ifndef COORDINATESCALECHANGEHANDLER_T4226256743_H
#define COORDINATESCALECHANGEHANDLER_T4226256743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateAxis/CoordinateScaleChangeHandler
struct  CoordinateScaleChangeHandler_t4226256743  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATESCALECHANGEHANDLER_T4226256743_H
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
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef FILEINFO_T1169991790_H
#define FILEINFO_T1169991790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileInfo
struct  FileInfo_t1169991790  : public FileSystemInfo_t3745885336
{
public:
	// System.Boolean System.IO.FileInfo::exists
	bool ___exists_5;

public:
	inline static int32_t get_offset_of_exists_5() { return static_cast<int32_t>(offsetof(FileInfo_t1169991790, ___exists_5)); }
	inline bool get_exists_5() const { return ___exists_5; }
	inline bool* get_address_of_exists_5() { return &___exists_5; }
	inline void set_exists_5(bool value)
	{
		___exists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEINFO_T1169991790_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef DD_DRAGBAR_T348422191_H
#define DD_DRAGBAR_T348422191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DragBar
struct  DD_DragBar_t348422191  : public MonoBehaviour_t3962482529
{
public:
	// DD_ZoomButton DD_DragBar::m_ZoomButton
	DD_ZoomButton_t4256419273 * ___m_ZoomButton_2;
	// UnityEngine.GameObject DD_DragBar::m_DataDiagram
	GameObject_t1113636619 * ___m_DataDiagram_3;
	// UnityEngine.GameObject DD_DragBar::m_Parent
	GameObject_t1113636619 * ___m_Parent_4;
	// UnityEngine.RectTransform DD_DragBar::m_DataDiagramRT
	RectTransform_t3704657025 * ___m_DataDiagramRT_5;

public:
	inline static int32_t get_offset_of_m_ZoomButton_2() { return static_cast<int32_t>(offsetof(DD_DragBar_t348422191, ___m_ZoomButton_2)); }
	inline DD_ZoomButton_t4256419273 * get_m_ZoomButton_2() const { return ___m_ZoomButton_2; }
	inline DD_ZoomButton_t4256419273 ** get_address_of_m_ZoomButton_2() { return &___m_ZoomButton_2; }
	inline void set_m_ZoomButton_2(DD_ZoomButton_t4256419273 * value)
	{
		___m_ZoomButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ZoomButton_2), value);
	}

	inline static int32_t get_offset_of_m_DataDiagram_3() { return static_cast<int32_t>(offsetof(DD_DragBar_t348422191, ___m_DataDiagram_3)); }
	inline GameObject_t1113636619 * get_m_DataDiagram_3() const { return ___m_DataDiagram_3; }
	inline GameObject_t1113636619 ** get_address_of_m_DataDiagram_3() { return &___m_DataDiagram_3; }
	inline void set_m_DataDiagram_3(GameObject_t1113636619 * value)
	{
		___m_DataDiagram_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagram_3), value);
	}

	inline static int32_t get_offset_of_m_Parent_4() { return static_cast<int32_t>(offsetof(DD_DragBar_t348422191, ___m_Parent_4)); }
	inline GameObject_t1113636619 * get_m_Parent_4() const { return ___m_Parent_4; }
	inline GameObject_t1113636619 ** get_address_of_m_Parent_4() { return &___m_Parent_4; }
	inline void set_m_Parent_4(GameObject_t1113636619 * value)
	{
		___m_Parent_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_4), value);
	}

	inline static int32_t get_offset_of_m_DataDiagramRT_5() { return static_cast<int32_t>(offsetof(DD_DragBar_t348422191, ___m_DataDiagramRT_5)); }
	inline RectTransform_t3704657025 * get_m_DataDiagramRT_5() const { return ___m_DataDiagramRT_5; }
	inline RectTransform_t3704657025 ** get_address_of_m_DataDiagramRT_5() { return &___m_DataDiagramRT_5; }
	inline void set_m_DataDiagramRT_5(RectTransform_t3704657025 * value)
	{
		___m_DataDiagramRT_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagramRT_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_DRAGBAR_T348422191_H
#ifndef DD_ZOOMBUTTON_T4256419273_H
#define DD_ZOOMBUTTON_T4256419273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_ZoomButton
struct  DD_ZoomButton_t4256419273  : public MonoBehaviour_t3962482529
{
public:
	// DD_DataDiagram DD_ZoomButton::m_DataDiagram
	DD_DataDiagram_t1914326032 * ___m_DataDiagram_2;
	// DD_ZoomButton/RTParam[] DD_ZoomButton::RTparams
	RTParamU5BU5D_t1300874088* ___RTparams_3;
	// System.Int32 DD_ZoomButton::paramSN
	int32_t ___paramSN_4;
	// DD_ZoomButton/ZoomButtonClickHandle DD_ZoomButton::ZoomButtonClickEvent
	ZoomButtonClickHandle_t1498002863 * ___ZoomButtonClickEvent_5;

public:
	inline static int32_t get_offset_of_m_DataDiagram_2() { return static_cast<int32_t>(offsetof(DD_ZoomButton_t4256419273, ___m_DataDiagram_2)); }
	inline DD_DataDiagram_t1914326032 * get_m_DataDiagram_2() const { return ___m_DataDiagram_2; }
	inline DD_DataDiagram_t1914326032 ** get_address_of_m_DataDiagram_2() { return &___m_DataDiagram_2; }
	inline void set_m_DataDiagram_2(DD_DataDiagram_t1914326032 * value)
	{
		___m_DataDiagram_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagram_2), value);
	}

	inline static int32_t get_offset_of_RTparams_3() { return static_cast<int32_t>(offsetof(DD_ZoomButton_t4256419273, ___RTparams_3)); }
	inline RTParamU5BU5D_t1300874088* get_RTparams_3() const { return ___RTparams_3; }
	inline RTParamU5BU5D_t1300874088** get_address_of_RTparams_3() { return &___RTparams_3; }
	inline void set_RTparams_3(RTParamU5BU5D_t1300874088* value)
	{
		___RTparams_3 = value;
		Il2CppCodeGenWriteBarrier((&___RTparams_3), value);
	}

	inline static int32_t get_offset_of_paramSN_4() { return static_cast<int32_t>(offsetof(DD_ZoomButton_t4256419273, ___paramSN_4)); }
	inline int32_t get_paramSN_4() const { return ___paramSN_4; }
	inline int32_t* get_address_of_paramSN_4() { return &___paramSN_4; }
	inline void set_paramSN_4(int32_t value)
	{
		___paramSN_4 = value;
	}

	inline static int32_t get_offset_of_ZoomButtonClickEvent_5() { return static_cast<int32_t>(offsetof(DD_ZoomButton_t4256419273, ___ZoomButtonClickEvent_5)); }
	inline ZoomButtonClickHandle_t1498002863 * get_ZoomButtonClickEvent_5() const { return ___ZoomButtonClickEvent_5; }
	inline ZoomButtonClickHandle_t1498002863 ** get_address_of_ZoomButtonClickEvent_5() { return &___ZoomButtonClickEvent_5; }
	inline void set_ZoomButtonClickEvent_5(ZoomButtonClickHandle_t1498002863 * value)
	{
		___ZoomButtonClickEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ZoomButtonClickEvent_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_ZOOMBUTTON_T4256419273_H
#ifndef DD_DATADIAGRAM_T1914326032_H
#define DD_DATADIAGRAM_T1914326032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DataDiagram
struct  DD_DataDiagram_t1914326032  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 DD_DataDiagram::MinRectSize
	Vector2_t2156229523  ___MinRectSize_2;
	// UnityEngine.GameObject DD_DataDiagram::m_CoordinateAxis
	GameObject_t1113636619 * ___m_CoordinateAxis_3;
	// UnityEngine.GameObject DD_DataDiagram::lineButtonsContent
	GameObject_t1113636619 * ___lineButtonsContent_4;
	// DD_DataDiagram/RectChangeHandler DD_DataDiagram::RectChangeEvent
	RectChangeHandler_t1189589726 * ___RectChangeEvent_5;
	// DD_DataDiagram/ZoomHandler DD_DataDiagram::ZoomEvent
	ZoomHandler_t2822810846 * ___ZoomEvent_6;
	// DD_DataDiagram/MoveHandler DD_DataDiagram::MoveEvent
	MoveHandler_t3318770945 * ___MoveEvent_7;
	// DD_DataDiagram/PreDestroyLineHandler DD_DataDiagram::PreDestroyLineEvent
	PreDestroyLineHandler_t3782553210 * ___PreDestroyLineEvent_8;
	// System.Int32 DD_DataDiagram::maxLineNum
	int32_t ___maxLineNum_9;
	// System.Int32 DD_DataDiagram::m_MaxPointNum
	int32_t ___m_MaxPointNum_10;
	// System.Single DD_DataDiagram::m_CentimeterPerMark
	float ___m_CentimeterPerMark_11;
	// System.Single DD_DataDiagram::m_CentimeterPerCoordUnitX
	float ___m_CentimeterPerCoordUnitX_12;
	// System.Single DD_DataDiagram::m_CentimeterPerCoordUnitY
	float ___m_CentimeterPerCoordUnitY_13;

public:
	inline static int32_t get_offset_of_MinRectSize_2() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___MinRectSize_2)); }
	inline Vector2_t2156229523  get_MinRectSize_2() const { return ___MinRectSize_2; }
	inline Vector2_t2156229523 * get_address_of_MinRectSize_2() { return &___MinRectSize_2; }
	inline void set_MinRectSize_2(Vector2_t2156229523  value)
	{
		___MinRectSize_2 = value;
	}

	inline static int32_t get_offset_of_m_CoordinateAxis_3() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___m_CoordinateAxis_3)); }
	inline GameObject_t1113636619 * get_m_CoordinateAxis_3() const { return ___m_CoordinateAxis_3; }
	inline GameObject_t1113636619 ** get_address_of_m_CoordinateAxis_3() { return &___m_CoordinateAxis_3; }
	inline void set_m_CoordinateAxis_3(GameObject_t1113636619 * value)
	{
		___m_CoordinateAxis_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoordinateAxis_3), value);
	}

	inline static int32_t get_offset_of_lineButtonsContent_4() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___lineButtonsContent_4)); }
	inline GameObject_t1113636619 * get_lineButtonsContent_4() const { return ___lineButtonsContent_4; }
	inline GameObject_t1113636619 ** get_address_of_lineButtonsContent_4() { return &___lineButtonsContent_4; }
	inline void set_lineButtonsContent_4(GameObject_t1113636619 * value)
	{
		___lineButtonsContent_4 = value;
		Il2CppCodeGenWriteBarrier((&___lineButtonsContent_4), value);
	}

	inline static int32_t get_offset_of_RectChangeEvent_5() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___RectChangeEvent_5)); }
	inline RectChangeHandler_t1189589726 * get_RectChangeEvent_5() const { return ___RectChangeEvent_5; }
	inline RectChangeHandler_t1189589726 ** get_address_of_RectChangeEvent_5() { return &___RectChangeEvent_5; }
	inline void set_RectChangeEvent_5(RectChangeHandler_t1189589726 * value)
	{
		___RectChangeEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___RectChangeEvent_5), value);
	}

	inline static int32_t get_offset_of_ZoomEvent_6() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___ZoomEvent_6)); }
	inline ZoomHandler_t2822810846 * get_ZoomEvent_6() const { return ___ZoomEvent_6; }
	inline ZoomHandler_t2822810846 ** get_address_of_ZoomEvent_6() { return &___ZoomEvent_6; }
	inline void set_ZoomEvent_6(ZoomHandler_t2822810846 * value)
	{
		___ZoomEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ZoomEvent_6), value);
	}

	inline static int32_t get_offset_of_MoveEvent_7() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___MoveEvent_7)); }
	inline MoveHandler_t3318770945 * get_MoveEvent_7() const { return ___MoveEvent_7; }
	inline MoveHandler_t3318770945 ** get_address_of_MoveEvent_7() { return &___MoveEvent_7; }
	inline void set_MoveEvent_7(MoveHandler_t3318770945 * value)
	{
		___MoveEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___MoveEvent_7), value);
	}

	inline static int32_t get_offset_of_PreDestroyLineEvent_8() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___PreDestroyLineEvent_8)); }
	inline PreDestroyLineHandler_t3782553210 * get_PreDestroyLineEvent_8() const { return ___PreDestroyLineEvent_8; }
	inline PreDestroyLineHandler_t3782553210 ** get_address_of_PreDestroyLineEvent_8() { return &___PreDestroyLineEvent_8; }
	inline void set_PreDestroyLineEvent_8(PreDestroyLineHandler_t3782553210 * value)
	{
		___PreDestroyLineEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___PreDestroyLineEvent_8), value);
	}

	inline static int32_t get_offset_of_maxLineNum_9() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___maxLineNum_9)); }
	inline int32_t get_maxLineNum_9() const { return ___maxLineNum_9; }
	inline int32_t* get_address_of_maxLineNum_9() { return &___maxLineNum_9; }
	inline void set_maxLineNum_9(int32_t value)
	{
		___maxLineNum_9 = value;
	}

	inline static int32_t get_offset_of_m_MaxPointNum_10() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___m_MaxPointNum_10)); }
	inline int32_t get_m_MaxPointNum_10() const { return ___m_MaxPointNum_10; }
	inline int32_t* get_address_of_m_MaxPointNum_10() { return &___m_MaxPointNum_10; }
	inline void set_m_MaxPointNum_10(int32_t value)
	{
		___m_MaxPointNum_10 = value;
	}

	inline static int32_t get_offset_of_m_CentimeterPerMark_11() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___m_CentimeterPerMark_11)); }
	inline float get_m_CentimeterPerMark_11() const { return ___m_CentimeterPerMark_11; }
	inline float* get_address_of_m_CentimeterPerMark_11() { return &___m_CentimeterPerMark_11; }
	inline void set_m_CentimeterPerMark_11(float value)
	{
		___m_CentimeterPerMark_11 = value;
	}

	inline static int32_t get_offset_of_m_CentimeterPerCoordUnitX_12() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___m_CentimeterPerCoordUnitX_12)); }
	inline float get_m_CentimeterPerCoordUnitX_12() const { return ___m_CentimeterPerCoordUnitX_12; }
	inline float* get_address_of_m_CentimeterPerCoordUnitX_12() { return &___m_CentimeterPerCoordUnitX_12; }
	inline void set_m_CentimeterPerCoordUnitX_12(float value)
	{
		___m_CentimeterPerCoordUnitX_12 = value;
	}

	inline static int32_t get_offset_of_m_CentimeterPerCoordUnitY_13() { return static_cast<int32_t>(offsetof(DD_DataDiagram_t1914326032, ___m_CentimeterPerCoordUnitY_13)); }
	inline float get_m_CentimeterPerCoordUnitY_13() const { return ___m_CentimeterPerCoordUnitY_13; }
	inline float* get_address_of_m_CentimeterPerCoordUnitY_13() { return &___m_CentimeterPerCoordUnitY_13; }
	inline void set_m_CentimeterPerCoordUnitY_13(float value)
	{
		___m_CentimeterPerCoordUnitY_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_DATADIAGRAM_T1914326032_H
#ifndef LOGSAVE_T3250175913_H
#define LOGSAVE_T3250175913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogSave
struct  LogSave_t3250175913  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGSAVE_T3250175913_H
#ifndef DD_LINEBUTTONSCONTENT_T4224093008_H
#define DD_LINEBUTTONSCONTENT_T4224093008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_LineButtonsContent
struct  DD_LineButtonsContent_t4224093008  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_LINEBUTTONSCONTENT_T4224093008_H
#ifndef MOVEPOINTVIEW_T4144359498_H
#define MOVEPOINTVIEW_T4144359498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovePointView
struct  MovePointView_t4144359498  : public MonoBehaviour_t3962482529
{
public:
	// System.Single MovePointView::RotSpeed
	float ___RotSpeed_2;

public:
	inline static int32_t get_offset_of_RotSpeed_2() { return static_cast<int32_t>(offsetof(MovePointView_t4144359498, ___RotSpeed_2)); }
	inline float get_RotSpeed_2() const { return ___RotSpeed_2; }
	inline float* get_address_of_RotSpeed_2() { return &___RotSpeed_2; }
	inline void set_RotSpeed_2(float value)
	{
		___RotSpeed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEPOINTVIEW_T4144359498_H
#ifndef DD_LINEBUTTON_T3694160087_H
#define DD_LINEBUTTON_T3694160087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_LineButton
struct  DD_LineButton_t3694160087  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject DD_LineButton::m_Line
	GameObject_t1113636619 * ___m_Line_2;
	// UnityEngine.GameObject DD_LineButton::m_Label
	GameObject_t1113636619 * ___m_Label_3;

public:
	inline static int32_t get_offset_of_m_Line_2() { return static_cast<int32_t>(offsetof(DD_LineButton_t3694160087, ___m_Line_2)); }
	inline GameObject_t1113636619 * get_m_Line_2() const { return ___m_Line_2; }
	inline GameObject_t1113636619 ** get_address_of_m_Line_2() { return &___m_Line_2; }
	inline void set_m_Line_2(GameObject_t1113636619 * value)
	{
		___m_Line_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Line_2), value);
	}

	inline static int32_t get_offset_of_m_Label_3() { return static_cast<int32_t>(offsetof(DD_LineButton_t3694160087, ___m_Label_3)); }
	inline GameObject_t1113636619 * get_m_Label_3() const { return ___m_Label_3; }
	inline GameObject_t1113636619 ** get_address_of_m_Label_3() { return &___m_Label_3; }
	inline void set_m_Label_3(GameObject_t1113636619 * value)
	{
		___m_Label_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Label_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_LINEBUTTON_T3694160087_H
#ifndef SAMPLE_T1746682370_H
#define SAMPLE_T1746682370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sample
struct  Sample_t1746682370  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Sample::lineList
	List_1_t2585711361 * ___lineList_2;
	// DD_DataDiagram Sample::m_DataDiagram
	DD_DataDiagram_t1914326032 * ___m_DataDiagram_3;
	// System.Boolean Sample::m_IsContinueInput
	bool ___m_IsContinueInput_4;
	// System.Single Sample::m_Input
	float ___m_Input_5;
	// System.Single Sample::h
	float ___h_6;

public:
	inline static int32_t get_offset_of_lineList_2() { return static_cast<int32_t>(offsetof(Sample_t1746682370, ___lineList_2)); }
	inline List_1_t2585711361 * get_lineList_2() const { return ___lineList_2; }
	inline List_1_t2585711361 ** get_address_of_lineList_2() { return &___lineList_2; }
	inline void set_lineList_2(List_1_t2585711361 * value)
	{
		___lineList_2 = value;
		Il2CppCodeGenWriteBarrier((&___lineList_2), value);
	}

	inline static int32_t get_offset_of_m_DataDiagram_3() { return static_cast<int32_t>(offsetof(Sample_t1746682370, ___m_DataDiagram_3)); }
	inline DD_DataDiagram_t1914326032 * get_m_DataDiagram_3() const { return ___m_DataDiagram_3; }
	inline DD_DataDiagram_t1914326032 ** get_address_of_m_DataDiagram_3() { return &___m_DataDiagram_3; }
	inline void set_m_DataDiagram_3(DD_DataDiagram_t1914326032 * value)
	{
		___m_DataDiagram_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagram_3), value);
	}

	inline static int32_t get_offset_of_m_IsContinueInput_4() { return static_cast<int32_t>(offsetof(Sample_t1746682370, ___m_IsContinueInput_4)); }
	inline bool get_m_IsContinueInput_4() const { return ___m_IsContinueInput_4; }
	inline bool* get_address_of_m_IsContinueInput_4() { return &___m_IsContinueInput_4; }
	inline void set_m_IsContinueInput_4(bool value)
	{
		___m_IsContinueInput_4 = value;
	}

	inline static int32_t get_offset_of_m_Input_5() { return static_cast<int32_t>(offsetof(Sample_t1746682370, ___m_Input_5)); }
	inline float get_m_Input_5() const { return ___m_Input_5; }
	inline float* get_address_of_m_Input_5() { return &___m_Input_5; }
	inline void set_m_Input_5(float value)
	{
		___m_Input_5 = value;
	}

	inline static int32_t get_offset_of_h_6() { return static_cast<int32_t>(offsetof(Sample_t1746682370, ___h_6)); }
	inline float get_h_6() const { return ___h_6; }
	inline float* get_address_of_h_6() { return &___h_6; }
	inline void set_h_6(float value)
	{
		___h_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLE_T1746682370_H
#ifndef UIMANAGER_T1042050227_H
#define UIMANAGER_T1042050227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1042050227  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text UIManager::txtX
	Text_t1901882714 * ___txtX_2;
	// UnityEngine.UI.Text UIManager::txtY
	Text_t1901882714 * ___txtY_3;
	// UnityEngine.UI.Text UIManager::txtZ
	Text_t1901882714 * ___txtZ_4;
	// LogSave UIManager::log
	LogSave_t3250175913 * ___log_5;
	// System.String UIManager::txtLog
	String_t* ___txtLog_6;
	// System.Int32 UIManager::updateCount
	int32_t ___updateCount_7;
	// UnityEngine.UI.InputField UIManager::txtAll
	InputField_t3762917431 * ___txtAll_8;

public:
	inline static int32_t get_offset_of_txtX_2() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___txtX_2)); }
	inline Text_t1901882714 * get_txtX_2() const { return ___txtX_2; }
	inline Text_t1901882714 ** get_address_of_txtX_2() { return &___txtX_2; }
	inline void set_txtX_2(Text_t1901882714 * value)
	{
		___txtX_2 = value;
		Il2CppCodeGenWriteBarrier((&___txtX_2), value);
	}

	inline static int32_t get_offset_of_txtY_3() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___txtY_3)); }
	inline Text_t1901882714 * get_txtY_3() const { return ___txtY_3; }
	inline Text_t1901882714 ** get_address_of_txtY_3() { return &___txtY_3; }
	inline void set_txtY_3(Text_t1901882714 * value)
	{
		___txtY_3 = value;
		Il2CppCodeGenWriteBarrier((&___txtY_3), value);
	}

	inline static int32_t get_offset_of_txtZ_4() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___txtZ_4)); }
	inline Text_t1901882714 * get_txtZ_4() const { return ___txtZ_4; }
	inline Text_t1901882714 ** get_address_of_txtZ_4() { return &___txtZ_4; }
	inline void set_txtZ_4(Text_t1901882714 * value)
	{
		___txtZ_4 = value;
		Il2CppCodeGenWriteBarrier((&___txtZ_4), value);
	}

	inline static int32_t get_offset_of_log_5() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___log_5)); }
	inline LogSave_t3250175913 * get_log_5() const { return ___log_5; }
	inline LogSave_t3250175913 ** get_address_of_log_5() { return &___log_5; }
	inline void set_log_5(LogSave_t3250175913 * value)
	{
		___log_5 = value;
		Il2CppCodeGenWriteBarrier((&___log_5), value);
	}

	inline static int32_t get_offset_of_txtLog_6() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___txtLog_6)); }
	inline String_t* get_txtLog_6() const { return ___txtLog_6; }
	inline String_t** get_address_of_txtLog_6() { return &___txtLog_6; }
	inline void set_txtLog_6(String_t* value)
	{
		___txtLog_6 = value;
		Il2CppCodeGenWriteBarrier((&___txtLog_6), value);
	}

	inline static int32_t get_offset_of_updateCount_7() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___updateCount_7)); }
	inline int32_t get_updateCount_7() const { return ___updateCount_7; }
	inline int32_t* get_address_of_updateCount_7() { return &___updateCount_7; }
	inline void set_updateCount_7(int32_t value)
	{
		___updateCount_7 = value;
	}

	inline static int32_t get_offset_of_txtAll_8() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___txtAll_8)); }
	inline InputField_t3762917431 * get_txtAll_8() const { return ___txtAll_8; }
	inline InputField_t3762917431 ** get_address_of_txtAll_8() { return &___txtAll_8; }
	inline void set_txtAll_8(InputField_t3762917431 * value)
	{
		___txtAll_8 = value;
		Il2CppCodeGenWriteBarrier((&___txtAll_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMANAGER_T1042050227_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef WATERBASIC_T418026961_H
#define WATERBASIC_T418026961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.WaterBasic
struct  WaterBasic_t418026961  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERBASIC_T418026961_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef LAYOUTELEMENT_T1785403678_H
#define LAYOUTELEMENT_T1785403678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutElement
struct  LayoutElement_t1785403678  : public UIBehaviour_t3495933518
{
public:
	// System.Boolean UnityEngine.UI.LayoutElement::m_IgnoreLayout
	bool ___m_IgnoreLayout_2;
	// System.Single UnityEngine.UI.LayoutElement::m_MinWidth
	float ___m_MinWidth_3;
	// System.Single UnityEngine.UI.LayoutElement::m_MinHeight
	float ___m_MinHeight_4;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredWidth
	float ___m_PreferredWidth_5;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredHeight
	float ___m_PreferredHeight_6;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleWidth
	float ___m_FlexibleWidth_7;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleHeight
	float ___m_FlexibleHeight_8;
	// System.Int32 UnityEngine.UI.LayoutElement::m_LayoutPriority
	int32_t ___m_LayoutPriority_9;

public:
	inline static int32_t get_offset_of_m_IgnoreLayout_2() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_IgnoreLayout_2)); }
	inline bool get_m_IgnoreLayout_2() const { return ___m_IgnoreLayout_2; }
	inline bool* get_address_of_m_IgnoreLayout_2() { return &___m_IgnoreLayout_2; }
	inline void set_m_IgnoreLayout_2(bool value)
	{
		___m_IgnoreLayout_2 = value;
	}

	inline static int32_t get_offset_of_m_MinWidth_3() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_MinWidth_3)); }
	inline float get_m_MinWidth_3() const { return ___m_MinWidth_3; }
	inline float* get_address_of_m_MinWidth_3() { return &___m_MinWidth_3; }
	inline void set_m_MinWidth_3(float value)
	{
		___m_MinWidth_3 = value;
	}

	inline static int32_t get_offset_of_m_MinHeight_4() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_MinHeight_4)); }
	inline float get_m_MinHeight_4() const { return ___m_MinHeight_4; }
	inline float* get_address_of_m_MinHeight_4() { return &___m_MinHeight_4; }
	inline void set_m_MinHeight_4(float value)
	{
		___m_MinHeight_4 = value;
	}

	inline static int32_t get_offset_of_m_PreferredWidth_5() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_PreferredWidth_5)); }
	inline float get_m_PreferredWidth_5() const { return ___m_PreferredWidth_5; }
	inline float* get_address_of_m_PreferredWidth_5() { return &___m_PreferredWidth_5; }
	inline void set_m_PreferredWidth_5(float value)
	{
		___m_PreferredWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_PreferredHeight_6() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_PreferredHeight_6)); }
	inline float get_m_PreferredHeight_6() const { return ___m_PreferredHeight_6; }
	inline float* get_address_of_m_PreferredHeight_6() { return &___m_PreferredHeight_6; }
	inline void set_m_PreferredHeight_6(float value)
	{
		___m_PreferredHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleWidth_7() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_FlexibleWidth_7)); }
	inline float get_m_FlexibleWidth_7() const { return ___m_FlexibleWidth_7; }
	inline float* get_address_of_m_FlexibleWidth_7() { return &___m_FlexibleWidth_7; }
	inline void set_m_FlexibleWidth_7(float value)
	{
		___m_FlexibleWidth_7 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleHeight_8() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_FlexibleHeight_8)); }
	inline float get_m_FlexibleHeight_8() const { return ___m_FlexibleHeight_8; }
	inline float* get_address_of_m_FlexibleHeight_8() { return &___m_FlexibleHeight_8; }
	inline void set_m_FlexibleHeight_8(float value)
	{
		___m_FlexibleHeight_8 = value;
	}

	inline static int32_t get_offset_of_m_LayoutPriority_9() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_LayoutPriority_9)); }
	inline int32_t get_m_LayoutPriority_9() const { return ___m_LayoutPriority_9; }
	inline int32_t* get_address_of_m_LayoutPriority_9() { return &___m_LayoutPriority_9; }
	inline void set_m_LayoutPriority_9(int32_t value)
	{
		___m_LayoutPriority_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTELEMENT_T1785403678_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef DD_DRAWGRAPHIC_T171377864_H
#define DD_DRAWGRAPHIC_T171377864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_DrawGraphic
struct  DD_DrawGraphic_t171377864  : public MaskableGraphic_t3839221559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_DRAWGRAPHIC_T171377864_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef DD_LINES_T487279985_H
#define DD_LINES_T487279985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_Lines
struct  DD_Lines_t487279985  : public DD_DrawGraphic_t171377864
{
public:
	// System.Single DD_Lines::m_Thickness
	float ___m_Thickness_28;
	// System.Boolean DD_Lines::m_IsShow
	bool ___m_IsShow_29;
	// System.Boolean DD_Lines::m_CurIsShow
	bool ___m_CurIsShow_30;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> DD_Lines::PointList
	List_1_t3628304265 * ___PointList_31;
	// System.Int32 DD_Lines::CurStartPointSN
	int32_t ___CurStartPointSN_32;
	// DD_DataDiagram DD_Lines::m_DataDiagram
	DD_DataDiagram_t1914326032 * ___m_DataDiagram_33;
	// DD_CoordinateAxis DD_Lines::m_Coordinate
	DD_CoordinateAxis_t429882320 * ___m_Coordinate_34;
	// System.String DD_Lines::lineName
	String_t* ___lineName_35;

public:
	inline static int32_t get_offset_of_m_Thickness_28() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___m_Thickness_28)); }
	inline float get_m_Thickness_28() const { return ___m_Thickness_28; }
	inline float* get_address_of_m_Thickness_28() { return &___m_Thickness_28; }
	inline void set_m_Thickness_28(float value)
	{
		___m_Thickness_28 = value;
	}

	inline static int32_t get_offset_of_m_IsShow_29() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___m_IsShow_29)); }
	inline bool get_m_IsShow_29() const { return ___m_IsShow_29; }
	inline bool* get_address_of_m_IsShow_29() { return &___m_IsShow_29; }
	inline void set_m_IsShow_29(bool value)
	{
		___m_IsShow_29 = value;
	}

	inline static int32_t get_offset_of_m_CurIsShow_30() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___m_CurIsShow_30)); }
	inline bool get_m_CurIsShow_30() const { return ___m_CurIsShow_30; }
	inline bool* get_address_of_m_CurIsShow_30() { return &___m_CurIsShow_30; }
	inline void set_m_CurIsShow_30(bool value)
	{
		___m_CurIsShow_30 = value;
	}

	inline static int32_t get_offset_of_PointList_31() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___PointList_31)); }
	inline List_1_t3628304265 * get_PointList_31() const { return ___PointList_31; }
	inline List_1_t3628304265 ** get_address_of_PointList_31() { return &___PointList_31; }
	inline void set_PointList_31(List_1_t3628304265 * value)
	{
		___PointList_31 = value;
		Il2CppCodeGenWriteBarrier((&___PointList_31), value);
	}

	inline static int32_t get_offset_of_CurStartPointSN_32() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___CurStartPointSN_32)); }
	inline int32_t get_CurStartPointSN_32() const { return ___CurStartPointSN_32; }
	inline int32_t* get_address_of_CurStartPointSN_32() { return &___CurStartPointSN_32; }
	inline void set_CurStartPointSN_32(int32_t value)
	{
		___CurStartPointSN_32 = value;
	}

	inline static int32_t get_offset_of_m_DataDiagram_33() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___m_DataDiagram_33)); }
	inline DD_DataDiagram_t1914326032 * get_m_DataDiagram_33() const { return ___m_DataDiagram_33; }
	inline DD_DataDiagram_t1914326032 ** get_address_of_m_DataDiagram_33() { return &___m_DataDiagram_33; }
	inline void set_m_DataDiagram_33(DD_DataDiagram_t1914326032 * value)
	{
		___m_DataDiagram_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagram_33), value);
	}

	inline static int32_t get_offset_of_m_Coordinate_34() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___m_Coordinate_34)); }
	inline DD_CoordinateAxis_t429882320 * get_m_Coordinate_34() const { return ___m_Coordinate_34; }
	inline DD_CoordinateAxis_t429882320 ** get_address_of_m_Coordinate_34() { return &___m_Coordinate_34; }
	inline void set_m_Coordinate_34(DD_CoordinateAxis_t429882320 * value)
	{
		___m_Coordinate_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Coordinate_34), value);
	}

	inline static int32_t get_offset_of_lineName_35() { return static_cast<int32_t>(offsetof(DD_Lines_t487279985, ___lineName_35)); }
	inline String_t* get_lineName_35() const { return ___lineName_35; }
	inline String_t** get_address_of_lineName_35() { return &___lineName_35; }
	inline void set_lineName_35(String_t* value)
	{
		___lineName_35 = value;
		Il2CppCodeGenWriteBarrier((&___lineName_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_LINES_T487279985_H
#ifndef DD_COORDINATEAXIS_T429882320_H
#define DD_COORDINATEAXIS_T429882320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DD_CoordinateAxis
struct  DD_CoordinateAxis_t429882320  : public DD_DrawGraphic_t171377864
{
public:
	// System.Single[] DD_CoordinateAxis::MarkIntervalTab
	SingleU5BU5D_t1444911251* ___MarkIntervalTab_32;
	// DD_DataDiagram DD_CoordinateAxis::m_DataDiagram
	DD_DataDiagram_t1914326032 * ___m_DataDiagram_33;
	// UnityEngine.RectTransform DD_CoordinateAxis::m_CoordinateRectT
	RectTransform_t3704657025 * ___m_CoordinateRectT_34;
	// UnityEngine.GameObject DD_CoordinateAxis::m_LinesPreb
	GameObject_t1113636619 * ___m_LinesPreb_35;
	// UnityEngine.GameObject DD_CoordinateAxis::m_MarkTextPreb
	GameObject_t1113636619 * ___m_MarkTextPreb_36;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DD_CoordinateAxis::m_LineList
	List_1_t2585711361 * ___m_LineList_37;
	// UnityEngine.Vector2 DD_CoordinateAxis::m_ZoomSpeed
	Vector2_t2156229523  ___m_ZoomSpeed_38;
	// UnityEngine.Vector2 DD_CoordinateAxis::m_MoveSpeed
	Vector2_t2156229523  ___m_MoveSpeed_39;
	// System.Single DD_CoordinateAxis::m_CoordinateAxisMaxWidth
	float ___m_CoordinateAxisMaxWidth_40;
	// System.Single DD_CoordinateAxis::m_CoordinateAxisMinWidth
	float ___m_CoordinateAxisMinWidth_41;
	// System.Single DD_CoordinateAxis::m_RectThickness
	float ___m_RectThickness_42;
	// UnityEngine.Color DD_CoordinateAxis::m_BackgroundColor
	Color_t2555686324  ___m_BackgroundColor_43;
	// UnityEngine.Color DD_CoordinateAxis::m_MarkColor
	Color_t2555686324  ___m_MarkColor_44;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DD_CoordinateAxis::m_MarkHorizontalTexts
	List_1_t2585711361 * ___m_MarkHorizontalTexts_45;
	// System.Single DD_CoordinateAxis::m_MinMarkTextHeight
	float ___m_MinMarkTextHeight_46;
	// UnityEngine.Rect DD_CoordinateAxis::m_CoordinateAxisViewRange
	Rect_t2360479859  ___m_CoordinateAxisViewRange_47;
	// DD_CoordinateAxis/CoordinateRectChangeHandler DD_CoordinateAxis::CoordinateRectChangeEvent
	CoordinateRectChangeHandler_t1701308220 * ___CoordinateRectChangeEvent_48;
	// DD_CoordinateAxis/CoordinateScaleChangeHandler DD_CoordinateAxis::CoordinateScaleChangeEvent
	CoordinateScaleChangeHandler_t4226256743 * ___CoordinateScaleChangeEvent_49;
	// DD_CoordinateAxis/CoordinateZeroPointChangeHandler DD_CoordinateAxis::CoordinateeZeroPointChangeEvent
	CoordinateZeroPointChangeHandler_t1056737497 * ___CoordinateeZeroPointChangeEvent_50;

public:
	inline static int32_t get_offset_of_MarkIntervalTab_32() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___MarkIntervalTab_32)); }
	inline SingleU5BU5D_t1444911251* get_MarkIntervalTab_32() const { return ___MarkIntervalTab_32; }
	inline SingleU5BU5D_t1444911251** get_address_of_MarkIntervalTab_32() { return &___MarkIntervalTab_32; }
	inline void set_MarkIntervalTab_32(SingleU5BU5D_t1444911251* value)
	{
		___MarkIntervalTab_32 = value;
		Il2CppCodeGenWriteBarrier((&___MarkIntervalTab_32), value);
	}

	inline static int32_t get_offset_of_m_DataDiagram_33() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_DataDiagram_33)); }
	inline DD_DataDiagram_t1914326032 * get_m_DataDiagram_33() const { return ___m_DataDiagram_33; }
	inline DD_DataDiagram_t1914326032 ** get_address_of_m_DataDiagram_33() { return &___m_DataDiagram_33; }
	inline void set_m_DataDiagram_33(DD_DataDiagram_t1914326032 * value)
	{
		___m_DataDiagram_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataDiagram_33), value);
	}

	inline static int32_t get_offset_of_m_CoordinateRectT_34() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_CoordinateRectT_34)); }
	inline RectTransform_t3704657025 * get_m_CoordinateRectT_34() const { return ___m_CoordinateRectT_34; }
	inline RectTransform_t3704657025 ** get_address_of_m_CoordinateRectT_34() { return &___m_CoordinateRectT_34; }
	inline void set_m_CoordinateRectT_34(RectTransform_t3704657025 * value)
	{
		___m_CoordinateRectT_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoordinateRectT_34), value);
	}

	inline static int32_t get_offset_of_m_LinesPreb_35() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_LinesPreb_35)); }
	inline GameObject_t1113636619 * get_m_LinesPreb_35() const { return ___m_LinesPreb_35; }
	inline GameObject_t1113636619 ** get_address_of_m_LinesPreb_35() { return &___m_LinesPreb_35; }
	inline void set_m_LinesPreb_35(GameObject_t1113636619 * value)
	{
		___m_LinesPreb_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_LinesPreb_35), value);
	}

	inline static int32_t get_offset_of_m_MarkTextPreb_36() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_MarkTextPreb_36)); }
	inline GameObject_t1113636619 * get_m_MarkTextPreb_36() const { return ___m_MarkTextPreb_36; }
	inline GameObject_t1113636619 ** get_address_of_m_MarkTextPreb_36() { return &___m_MarkTextPreb_36; }
	inline void set_m_MarkTextPreb_36(GameObject_t1113636619 * value)
	{
		___m_MarkTextPreb_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_MarkTextPreb_36), value);
	}

	inline static int32_t get_offset_of_m_LineList_37() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_LineList_37)); }
	inline List_1_t2585711361 * get_m_LineList_37() const { return ___m_LineList_37; }
	inline List_1_t2585711361 ** get_address_of_m_LineList_37() { return &___m_LineList_37; }
	inline void set_m_LineList_37(List_1_t2585711361 * value)
	{
		___m_LineList_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_LineList_37), value);
	}

	inline static int32_t get_offset_of_m_ZoomSpeed_38() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_ZoomSpeed_38)); }
	inline Vector2_t2156229523  get_m_ZoomSpeed_38() const { return ___m_ZoomSpeed_38; }
	inline Vector2_t2156229523 * get_address_of_m_ZoomSpeed_38() { return &___m_ZoomSpeed_38; }
	inline void set_m_ZoomSpeed_38(Vector2_t2156229523  value)
	{
		___m_ZoomSpeed_38 = value;
	}

	inline static int32_t get_offset_of_m_MoveSpeed_39() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_MoveSpeed_39)); }
	inline Vector2_t2156229523  get_m_MoveSpeed_39() const { return ___m_MoveSpeed_39; }
	inline Vector2_t2156229523 * get_address_of_m_MoveSpeed_39() { return &___m_MoveSpeed_39; }
	inline void set_m_MoveSpeed_39(Vector2_t2156229523  value)
	{
		___m_MoveSpeed_39 = value;
	}

	inline static int32_t get_offset_of_m_CoordinateAxisMaxWidth_40() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_CoordinateAxisMaxWidth_40)); }
	inline float get_m_CoordinateAxisMaxWidth_40() const { return ___m_CoordinateAxisMaxWidth_40; }
	inline float* get_address_of_m_CoordinateAxisMaxWidth_40() { return &___m_CoordinateAxisMaxWidth_40; }
	inline void set_m_CoordinateAxisMaxWidth_40(float value)
	{
		___m_CoordinateAxisMaxWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_CoordinateAxisMinWidth_41() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_CoordinateAxisMinWidth_41)); }
	inline float get_m_CoordinateAxisMinWidth_41() const { return ___m_CoordinateAxisMinWidth_41; }
	inline float* get_address_of_m_CoordinateAxisMinWidth_41() { return &___m_CoordinateAxisMinWidth_41; }
	inline void set_m_CoordinateAxisMinWidth_41(float value)
	{
		___m_CoordinateAxisMinWidth_41 = value;
	}

	inline static int32_t get_offset_of_m_RectThickness_42() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_RectThickness_42)); }
	inline float get_m_RectThickness_42() const { return ___m_RectThickness_42; }
	inline float* get_address_of_m_RectThickness_42() { return &___m_RectThickness_42; }
	inline void set_m_RectThickness_42(float value)
	{
		___m_RectThickness_42 = value;
	}

	inline static int32_t get_offset_of_m_BackgroundColor_43() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_BackgroundColor_43)); }
	inline Color_t2555686324  get_m_BackgroundColor_43() const { return ___m_BackgroundColor_43; }
	inline Color_t2555686324 * get_address_of_m_BackgroundColor_43() { return &___m_BackgroundColor_43; }
	inline void set_m_BackgroundColor_43(Color_t2555686324  value)
	{
		___m_BackgroundColor_43 = value;
	}

	inline static int32_t get_offset_of_m_MarkColor_44() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_MarkColor_44)); }
	inline Color_t2555686324  get_m_MarkColor_44() const { return ___m_MarkColor_44; }
	inline Color_t2555686324 * get_address_of_m_MarkColor_44() { return &___m_MarkColor_44; }
	inline void set_m_MarkColor_44(Color_t2555686324  value)
	{
		___m_MarkColor_44 = value;
	}

	inline static int32_t get_offset_of_m_MarkHorizontalTexts_45() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_MarkHorizontalTexts_45)); }
	inline List_1_t2585711361 * get_m_MarkHorizontalTexts_45() const { return ___m_MarkHorizontalTexts_45; }
	inline List_1_t2585711361 ** get_address_of_m_MarkHorizontalTexts_45() { return &___m_MarkHorizontalTexts_45; }
	inline void set_m_MarkHorizontalTexts_45(List_1_t2585711361 * value)
	{
		___m_MarkHorizontalTexts_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_MarkHorizontalTexts_45), value);
	}

	inline static int32_t get_offset_of_m_MinMarkTextHeight_46() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_MinMarkTextHeight_46)); }
	inline float get_m_MinMarkTextHeight_46() const { return ___m_MinMarkTextHeight_46; }
	inline float* get_address_of_m_MinMarkTextHeight_46() { return &___m_MinMarkTextHeight_46; }
	inline void set_m_MinMarkTextHeight_46(float value)
	{
		___m_MinMarkTextHeight_46 = value;
	}

	inline static int32_t get_offset_of_m_CoordinateAxisViewRange_47() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___m_CoordinateAxisViewRange_47)); }
	inline Rect_t2360479859  get_m_CoordinateAxisViewRange_47() const { return ___m_CoordinateAxisViewRange_47; }
	inline Rect_t2360479859 * get_address_of_m_CoordinateAxisViewRange_47() { return &___m_CoordinateAxisViewRange_47; }
	inline void set_m_CoordinateAxisViewRange_47(Rect_t2360479859  value)
	{
		___m_CoordinateAxisViewRange_47 = value;
	}

	inline static int32_t get_offset_of_CoordinateRectChangeEvent_48() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___CoordinateRectChangeEvent_48)); }
	inline CoordinateRectChangeHandler_t1701308220 * get_CoordinateRectChangeEvent_48() const { return ___CoordinateRectChangeEvent_48; }
	inline CoordinateRectChangeHandler_t1701308220 ** get_address_of_CoordinateRectChangeEvent_48() { return &___CoordinateRectChangeEvent_48; }
	inline void set_CoordinateRectChangeEvent_48(CoordinateRectChangeHandler_t1701308220 * value)
	{
		___CoordinateRectChangeEvent_48 = value;
		Il2CppCodeGenWriteBarrier((&___CoordinateRectChangeEvent_48), value);
	}

	inline static int32_t get_offset_of_CoordinateScaleChangeEvent_49() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___CoordinateScaleChangeEvent_49)); }
	inline CoordinateScaleChangeHandler_t4226256743 * get_CoordinateScaleChangeEvent_49() const { return ___CoordinateScaleChangeEvent_49; }
	inline CoordinateScaleChangeHandler_t4226256743 ** get_address_of_CoordinateScaleChangeEvent_49() { return &___CoordinateScaleChangeEvent_49; }
	inline void set_CoordinateScaleChangeEvent_49(CoordinateScaleChangeHandler_t4226256743 * value)
	{
		___CoordinateScaleChangeEvent_49 = value;
		Il2CppCodeGenWriteBarrier((&___CoordinateScaleChangeEvent_49), value);
	}

	inline static int32_t get_offset_of_CoordinateeZeroPointChangeEvent_50() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320, ___CoordinateeZeroPointChangeEvent_50)); }
	inline CoordinateZeroPointChangeHandler_t1056737497 * get_CoordinateeZeroPointChangeEvent_50() const { return ___CoordinateeZeroPointChangeEvent_50; }
	inline CoordinateZeroPointChangeHandler_t1056737497 ** get_address_of_CoordinateeZeroPointChangeEvent_50() { return &___CoordinateeZeroPointChangeEvent_50; }
	inline void set_CoordinateeZeroPointChangeEvent_50(CoordinateZeroPointChangeHandler_t1056737497 * value)
	{
		___CoordinateeZeroPointChangeEvent_50 = value;
		Il2CppCodeGenWriteBarrier((&___CoordinateeZeroPointChangeEvent_50), value);
	}
};

struct DD_CoordinateAxis_t429882320_StaticFields
{
public:
	// System.String DD_CoordinateAxis::MARK_TEXT_BASE_NAME
	String_t* ___MARK_TEXT_BASE_NAME_28;
	// System.String DD_CoordinateAxis::LINES_BASE_NAME
	String_t* ___LINES_BASE_NAME_29;
	// System.String DD_CoordinateAxis::COORDINATE_RECT
	String_t* ___COORDINATE_RECT_30;

public:
	inline static int32_t get_offset_of_MARK_TEXT_BASE_NAME_28() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320_StaticFields, ___MARK_TEXT_BASE_NAME_28)); }
	inline String_t* get_MARK_TEXT_BASE_NAME_28() const { return ___MARK_TEXT_BASE_NAME_28; }
	inline String_t** get_address_of_MARK_TEXT_BASE_NAME_28() { return &___MARK_TEXT_BASE_NAME_28; }
	inline void set_MARK_TEXT_BASE_NAME_28(String_t* value)
	{
		___MARK_TEXT_BASE_NAME_28 = value;
		Il2CppCodeGenWriteBarrier((&___MARK_TEXT_BASE_NAME_28), value);
	}

	inline static int32_t get_offset_of_LINES_BASE_NAME_29() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320_StaticFields, ___LINES_BASE_NAME_29)); }
	inline String_t* get_LINES_BASE_NAME_29() const { return ___LINES_BASE_NAME_29; }
	inline String_t** get_address_of_LINES_BASE_NAME_29() { return &___LINES_BASE_NAME_29; }
	inline void set_LINES_BASE_NAME_29(String_t* value)
	{
		___LINES_BASE_NAME_29 = value;
		Il2CppCodeGenWriteBarrier((&___LINES_BASE_NAME_29), value);
	}

	inline static int32_t get_offset_of_COORDINATE_RECT_30() { return static_cast<int32_t>(offsetof(DD_CoordinateAxis_t429882320_StaticFields, ___COORDINATE_RECT_30)); }
	inline String_t* get_COORDINATE_RECT_30() const { return ___COORDINATE_RECT_30; }
	inline String_t** get_address_of_COORDINATE_RECT_30() { return &___COORDINATE_RECT_30; }
	inline void set_COORDINATE_RECT_30(String_t* value)
	{
		___COORDINATE_RECT_30 = value;
		Il2CppCodeGenWriteBarrier((&___COORDINATE_RECT_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DD_COORDINATEAXIS_T429882320_H
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
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_t4057497605  m_Items[1];

public:
	inline UIVertex_t4057497605  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_t4057497605  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		m_Items[index] = value;
	}
};
// DD_ZoomButton/RTParam[]
struct RTParamU5BU5D_t1300874088  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RTParam_t3144317285  m_Items[1];

public:
	inline RTParam_t3144317285  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RTParam_t3144317285 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RTParam_t3144317285  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RTParam_t3144317285  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RTParam_t3144317285 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RTParam_t3144317285  value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C"  void List_1__ctor_m3152364487_gshared (List_1_t2869341516 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
extern "C"  void List_1_Add_m2024781851_gshared (List_1_t2869341516 * __this, float p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C"  int32_t List_1_get_Count_m4125879936_gshared (List_1_t2869341516 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(!0[])
extern "C"  void List_1_CopyTo_m3400312413_gshared (List_1_t2869341516 * __this, SingleU5BU5D_t1444911251* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Rect>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3860665987_gshared (Nullable_1_t4083041941 * __this, Rect_t2360479859  p0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Rect>::get_Value()
extern "C"  Rect_t2360479859  Nullable_1_get_Value_m904006957_gshared (Nullable_1_t4083041941 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_m1039067679_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m680077965_gshared (Nullable_1_t3878791605 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C"  Vector2_t2156229523  List_1_get_Item_m1378751541_gshared (List_1_t3628304265 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1317965445_gshared (Nullable_1_t3878791605 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
extern "C"  Vector2_t2156229523  Nullable_1_get_Value_m963759207_gshared (Nullable_1_t3878791605 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,!0)
extern "C"  void List_1_Insert_m78231532_gshared (List_1_t3628304265 * __this, int32_t p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C"  int32_t List_1_get_Count_m1202123918_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m1260051643_gshared (List_1_t3628304265 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C"  void List_1__ctor_m1536470898_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C"  Enumerator_t1222580846  List_1_GetEnumerator_m809843680_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
extern "C"  Vector2_t2156229523  Enumerator_get_Current_m2598000980_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(!0)
extern "C"  int32_t List_1_IndexOf_m698163972_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m4079852040_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
extern "C"  void Enumerator_Dispose_m2367629053_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
extern "C"  void List_1_Add_m2298161512_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C"  void List_1_Clear_m2188935509_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcAnchorPointPosition(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___anchorMin0, Vector2_t2156229523  ___anchorMax1, Vector2_t2156229523  ___parentSize2, Vector2_t2156229523  ___pivot3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcOffsetMax(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcOffsetMax_m1504452929 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcOffsetMin(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcOffsetMin_m3557802424 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C"  Vector2_t2156229523  Rect_get_position_m2115952571 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C"  Vector2_t2156229523  Rect_get_size_m477575021 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Rect__ctor_m1342368573 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DrawGraphic::.ctor()
extern "C"  void DD_DrawGraphic__ctor_m3591345486 (DD_DrawGraphic_t171377864 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Rect DD_CoordinateAxis::get_m_CoordinateAxisRange()
extern "C"  Rect_t2360479859  DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CoordinateAxis::CoordinateToPixel(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CoordinateAxis_CoordinateToPixel_m2523793977 (DD_CoordinateAxis_t429882320 * __this, Vector2_t2156229523  ___coordPoint0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2812834599(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInParent<DD_DataDiagram>()
#define Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, method) ((  DD_DataDiagram_t1914326032 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DD_CoordinateAxis::FindInChild(System.String)
extern "C"  GameObject_t1113636619 * DD_CoordinateAxis_FindInChild_m3863140474 (DD_CoordinateAxis_t429882320 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_CoordinateAxis::FindExistMarkText(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void DD_CoordinateAxis_FindExistMarkText_m3497577672 (DD_CoordinateAxis_t429882320 * __this, List_1_t2585711361 * ___markTexts0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
extern "C"  void Rect_set_position_m2358650747 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_size(UnityEngine.Vector2)
extern "C"  void Rect_set_size_m3071953310 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/RectChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RectChangeHandler__ctor_m2479521780 (RectChangeHandler_t1189589726 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::add_RectChangeEvent(DD_DataDiagram/RectChangeHandler)
extern "C"  void DD_DataDiagram_add_RectChangeEvent_m1945500573 (DD_DataDiagram_t1914326032 * __this, RectChangeHandler_t1189589726 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/ZoomHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ZoomHandler__ctor_m421747723 (ZoomHandler_t2822810846 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::add_ZoomEvent(DD_DataDiagram/ZoomHandler)
extern "C"  void DD_DataDiagram_add_ZoomEvent_m4269353983 (DD_DataDiagram_t1914326032 * __this, ZoomHandler_t2822810846 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/MoveHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MoveHandler__ctor_m801656797 (MoveHandler_t3318770945 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::add_MoveEvent(DD_DataDiagram/MoveHandler)
extern "C"  void DD_DataDiagram_add_MoveEvent_m2980893282 (DD_DataDiagram_t1914326032 * __this, MoveHandler_t3318770945 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateRectChangeEventArgs::.ctor(UnityEngine.Rect)
extern "C"  void DD_CoordinateRectChangeEventArgs__ctor_m1632708520 (DD_CoordinateRectChangeEventArgs_t641796680 * __this, Rect_t2360479859  ___newRect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/CoordinateRectChangeHandler::Invoke(System.Object,DD_CoordinateRectChangeEventArgs)
extern "C"  void CoordinateRectChangeHandler_Invoke_m4285264990 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject * ___sender0, DD_CoordinateRectChangeEventArgs_t641796680 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C"  void Rect_set_width_m2963421158 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C"  void Rect_set_height_m1625569324 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::ChangeRect(UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_ChangeRect_m3879668204 (DD_CoordinateAxis_t429882320 * __this, Rect_t2360479859  ___newRect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateScaleChangeEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_CoordinateScaleChangeEventArgs__ctor_m1213094976 (DD_CoordinateScaleChangeEventArgs_t3003819413 * __this, float ___scaleX0, float ___scaleY1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/CoordinateScaleChangeHandler::Invoke(System.Object,DD_CoordinateScaleChangeEventArgs)
extern "C"  void CoordinateScaleChangeHandler_Invoke_m1072061776 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject * ___sender0, DD_CoordinateScaleChangeEventArgs_t3003819413 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_ZoomEventArgs::get_ZoomX()
extern "C"  float DD_ZoomEventArgs_get_ZoomX_m973257817 (DD_ZoomEventArgs_t3840071228 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_ZoomEventArgs::get_ZoomY()
extern "C"  float DD_ZoomEventArgs_get_ZoomY_m973257818 (DD_ZoomEventArgs_t3840071228 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::ChangeScale(System.Single,System.Single)
extern "C"  void DD_CoordinateAxis_ChangeScale_m4288399850 (DD_CoordinateAxis_t429882320 * __this, float ___ZoomX0, float ___ZoomY1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_MoveEventArgs::get_MoveX()
extern "C"  float DD_MoveEventArgs_get_MoveX_m565828357 (DD_MoveEventArgs_t744120769 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_MoveEventArgs::get_MoveY()
extern "C"  float DD_MoveEventArgs_get_MoveY_m565828356 (DD_MoveEventArgs_t744120769 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_CoordinateAxis::get_m_CoordinateAxisViewSizeX()
extern "C"  float DD_CoordinateAxis_get_m_CoordinateAxisViewSizeX_m99901340 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_CoordinateAxis::get_m_CoordinateAxisViewSizeY()
extern "C"  float DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C"  void Rect_set_x_m2352063068 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateZeroPointChangeEventArgs::.ctor(UnityEngine.Vector2)
extern "C"  void DD_CoordinateZeroPointChangeEventArgs__ctor_m3958412451 (DD_CoordinateZeroPointChangeEventArgs_t1028912263 * __this, Vector2_t2156229523  ___zeroPoint0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/CoordinateZeroPointChangeHandler::Invoke(System.Object,DD_CoordinateZeroPointChangeEventArgs)
extern "C"  void CoordinateZeroPointChangeHandler_Invoke_m158111206 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject * ___sender0, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C"  int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
#define List_1__ctor_m3152364487(__this, method) ((  void (*) (List_1_t2869341516 *, const RuntimeMethod*))List_1__ctor_m3152364487_gshared)(__this, method)
// System.Single DD_CoordinateAxis::CeilingFormat(System.Single,System.Single)
extern "C"  float DD_CoordinateAxis_CeilingFormat_m1213804367 (DD_CoordinateAxis_t429882320 * __this, float ___markLevel0, float ___Val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
#define List_1_Add_m2024781851(__this, p0, method) ((  void (*) (List_1_t2869341516 *, float, const RuntimeMethod*))List_1_Add_m2024781851_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
#define List_1_get_Count_m4125879936(__this, method) ((  int32_t (*) (List_1_t2869341516 *, const RuntimeMethod*))List_1_get_Count_m4125879936_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(!0[])
#define List_1_CopyTo_m3400312413(__this, p0, method) ((  void (*) (List_1_t2869341516 *, SingleU5BU5D_t1444911251*, const RuntimeMethod*))List_1_CopyTo_m3400312413_gshared)(__this, p0, method)
// System.Single DD_CoordinateAxis::MarkValToPixel(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float DD_CoordinateAxis_MarkValToPixel_m4045507908 (DD_CoordinateAxis_t429882320 * __this, float ___markVal0, float ___startViewMarkVal1, float ___endViewMarkVal2, float ___stratCoordPixelVal3, float ___endCoordPixelVal4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchorMin_m4230103102 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchorMax_m2998668828 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C"  void RectTransform_set_pivot_m909387058 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C"  void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::SetMarkText(UnityEngine.GameObject,UnityEngine.Rect,System.String,System.Boolean)
extern "C"  void DD_CoordinateAxis_SetMarkText_m2026952380 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, Rect_t2360479859  ___rect1, String_t* ___str2, bool ___isEnable3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m1750140655(__this, method) ((  Enumerator_t179987942  (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
#define Enumerator_get_Current_m4179928398(__this, method) ((  GameObject_t1113636619 * (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void DD_CoordinateAxis::ResetMarkText(UnityEngine.GameObject)
extern "C"  void DD_CoordinateAxis_ResetMarkText_m584850801 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
#define Enumerator_MoveNext_m4286844348(__this, method) ((  bool (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
#define Enumerator_Dispose_m1341201278(__this, method) ((  void (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::.ctor()
extern "C"  void U3CDrawHorizontalTextMarkU3Ec__Iterator0__ctor_m2660273726 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DrawGraphic::DrawHorizontalSegmet(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawHorizontalSegmet_m2379301707 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___startPoint1, Vector2_t2156229523  ___endPoint2, Color_t2555686324  ___color3, float ___thickness4, float ___scaleX5, float ___scaleY6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_CoordinateAxis::get_m_PixelPerMark()
extern "C"  float DD_CoordinateAxis_get_m_PixelPerMark_m2062035123 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 DD_CoordinateAxis::CalcMarkNum(System.Single,System.Single)
extern "C"  int32_t DD_CoordinateAxis_CalcMarkNum_m3463377333 (DD_CoordinateAxis_t429882320 * __this, float ___pixelPerMark0, float ___totalPixel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_CoordinateAxis::CalcMarkLevel(System.Single[],System.Int32,System.Single)
extern "C"  float DD_CoordinateAxis_CalcMarkLevel_m756508287 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___makeTab0, int32_t ___markNum1, float ___viewMarkRange2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single[] DD_CoordinateAxis::CalcMarkVals(System.Single,System.Single,System.Single)
extern "C"  SingleU5BU5D_t1444911251* DD_CoordinateAxis_CalcMarkVals_m2490842168 (DD_CoordinateAxis_t429882320 * __this, float ___markLevel0, float ___startViewMarkVal1, float ___endViewMarkVal2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single[] DD_CoordinateAxis::MarkValsToPixel(System.Single[],System.Single,System.Single,System.Single,System.Single)
extern "C"  SingleU5BU5D_t1444911251* DD_CoordinateAxis_MarkValsToPixel_m38343516 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___markVals0, float ___startViewMarkVal1, float ___endViewMarkVal2, float ___stratCoordPixelVal3, float ___endCoordPixelVal4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::DrawOneHorizontalMark(UnityEngine.UI.VertexHelper,System.Single,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawOneHorizontalMark_m4062962160 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, float ___pixelY1, Rect_t2360479859  ___coordinateRect2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DD_CoordinateAxis::DrawHorizontalTextMark(System.Single[],System.Single[],UnityEngine.Rect)
extern "C"  RuntimeObject* DD_CoordinateAxis_DrawHorizontalTextMark_m743347802 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___marksVals0, SingleU5BU5D_t1444911251* ___marksPixel1, Rect_t2360479859  ___coordinateRect2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DrawGraphic::DrawRectang(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
extern "C"  void DD_DrawGraphic_DrawRectang_m3222529442 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___point1st1, Vector2_t2156229523  ___point2nd2, Vector2_t2156229523  ___point3rd3, Vector2_t2156229523  ___point4th4, Color_t2555686324  ___color5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMin()
extern "C"  Vector2_t2156229523  RectTransform_get_offsetMin_m30225325 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
extern "C"  void Rect__ctor_m499992824 (Rect_t2360479859 * __this, Rect_t2360479859  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::DrawRect(UnityEngine.UI.VertexHelper,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawRect_m297250249 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, Rect_t2360479859  ___rect1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::DrawHorizontalMark(UnityEngine.UI.VertexHelper,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawHorizontalMark_m4224214791 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, Rect_t2360479859  ___coordinateRect1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern "C"  bool Regex_IsMatch_m3266004395 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m627349662 (VertexHelper_t2453304189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::DrawRectCoordinate(UnityEngine.UI.VertexHelper)
extern "C"  void DD_CoordinateAxis_DrawRectCoordinate_m180977402 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DD_Lines>()
#define GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(__this, method) ((  DD_Lines_t487279985 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_Lines::AddPoint(UnityEngine.Vector2)
extern "C"  void DD_Lines_AddPoint_m4130288851 (DD_Lines_t487279985 * __this, Vector2_t2156229523  ___point0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
#define List_1_Remove_m4063777476(__this, p0, method) ((  bool (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Boolean DD_Lines::Clear()
extern "C"  bool DD_Lines_Clear_m3572606507 (DD_Lines_t487279985 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::ResetAllMarkText(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void DD_CoordinateAxis_ResetAllMarkText_m1261228444 (DD_CoordinateAxis_t429882320 * __this, List_1_t2585711361 * ___markTexts0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::DrawOneHorizontalMarkText(UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawOneHorizontalMarkText_m601722741 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, float ___markValY1, float ___pixelY2, Rect_t2360479859  ___coordinateRect3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<UnityEngine.Rect>::.ctor(!0)
#define Nullable_1__ctor_m3860665987(__this, p0, method) ((  void (*) (Nullable_1_t4083041941 *, Rect_t2360479859 , const RuntimeMethod*))Nullable_1__ctor_m3860665987_gshared)(__this, p0, method)
// !0 System.Nullable`1<UnityEngine.Rect>::get_Value()
#define Nullable_1_get_Value_m904006957(__this, method) ((  Rect_t2360479859  (*) (Nullable_1_t4083041941 *, const RuntimeMethod*))Nullable_1_get_Value_m904006957_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C"  Vector2_t2156229523  RectTransform_get_anchorMin_m2928307238 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C"  Vector2_t2156229523  RectTransform_get_anchorMax_m2495270048 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.RectTransform>()
#define Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C"  Vector2_t2156229523  RectTransform_get_pivot_m3425744470 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcAnchorPosition(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcAnchorPosition_m3167313752 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, Vector2_t2156229523  ___pivot4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcSizeDelta(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcSizeDelta_m3831550858 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_RectChangeEventArgs::.ctor(UnityEngine.Vector2)
extern "C"  void DD_RectChangeEventArgs__ctor_m3288943631 (DD_RectChangeEventArgs_t2247361209 * __this, Vector2_t2156229523  ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/RectChangeHandler::Invoke(System.Object,DD_RectChangeEventArgs)
extern "C"  void RectChangeHandler_Invoke_m2451727713 (RectChangeHandler_t1189589726 * __this, RuntimeObject * ___sender0, DD_RectChangeEventArgs_t2247361209 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<DD_CoordinateAxis>()
#define Component_GetComponentInChildren_TisDD_CoordinateAxis_t429882320_m2661381029(__this, method) ((  DD_CoordinateAxis_t429882320 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<DD_LineButtonsContent>()
#define Component_GetComponentInChildren_TisDD_LineButtonsContent_t4224093008_m919528838(__this, method) ((  DD_LineButtonsContent_t4224093008 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C"  Vector2_t2156229523  PointerEventData_get_delta_m1062010255 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_MoveEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_MoveEventArgs__ctor_m1350353200 (DD_MoveEventArgs_t744120769 * __this, float ___dx0, float ___dy1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/MoveHandler::Invoke(System.Object,DD_MoveEventArgs)
extern "C"  void MoveHandler_Invoke_m385278750 (MoveHandler_t3318770945 * __this, RuntimeObject * ___sender0, DD_MoveEventArgs_t744120769 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C"  Vector2_t2156229523  PointerEventData_get_scrollDelta_m230480732 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_ZoomEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_ZoomEventArgs__ctor_m1841169722 (DD_ZoomEventArgs_t3840071228 * __this, float ___valX0, float ___valY1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/ZoomHandler::Invoke(System.Object,DD_ZoomEventArgs)
extern "C"  void ZoomHandler_Invoke_m2574382048 (ZoomHandler_t2822810846 * __this, RuntimeObject * ___sender0, DD_ZoomEventArgs_t3840071228 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DD_LineButton>()
#define GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(__this, method) ((  DD_LineButton_t3694160087 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.GameObject DD_LineButton::get_line()
extern "C"  GameObject_t1113636619 * DD_LineButton_get_line_m714361528 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_LineButton::set_line(UnityEngine.GameObject)
extern "C"  void DD_LineButton_set_line_m227509176 (DD_LineButton_t3694160087 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::SetLineButtonColor(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void DD_DataDiagram_SetLineButtonColor_m3856283616 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Color_t2555686324  ___color1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_LineButton::DestroyLineButton()
extern "C"  void DD_LineButton_DestroyLineButton_m767131855 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DD_CoordinateAxis>()
#define GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727(__this, method) ((  DD_CoordinateAxis_t429882320 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_CoordinateAxis::InputPoint(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void DD_CoordinateAxis_InputPoint_m2834643303 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___line0, Vector2_t2156229523  ___point1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 DD_CoordinateAxis::get_lineNum()
extern "C"  int32_t DD_CoordinateAxis_get_lineNum_m2664137645 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DD_CoordinateAxis::AddLine(System.String)
extern "C"  GameObject_t1113636619 * DD_CoordinateAxis_AddLine_m1965996467 (DD_CoordinateAxis_t429882320 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_DataDiagram::AddLineButton(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_AddLineButton_m1110170240 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_CoordinateAxis::RemoveLine(UnityEngine.GameObject)
extern "C"  bool DD_CoordinateAxis_RemoveLine_m544503346 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DD_DataDiagram::AddLine(System.String)
extern "C"  GameObject_t1113636619 * DD_DataDiagram_AddLine_m1232943402 (DD_DataDiagram_t1914326032 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::SetLineColor(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void DD_DataDiagram_SetLineColor_m1551687332 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Color_t2555686324  ___color1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_PreDestroyLineEventArgs::.ctor(UnityEngine.GameObject)
extern "C"  void DD_PreDestroyLineEventArgs__ctor_m3223243980 (DD_PreDestroyLineEventArgs_t3472178400 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram/PreDestroyLineHandler::Invoke(System.Object,DD_PreDestroyLineEventArgs)
extern "C"  void PreDestroyLineHandler_Invoke_m4216586513 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject * ___sender0, DD_PreDestroyLineEventArgs_t3472178400 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_DataDiagram::DestroyLineButton(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_DestroyLineButton_m2656807380 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.LayoutElement>()
#define Component_GetComponent_TisLayoutElement_t1785403678_m847584320(__this, method) ((  LayoutElement_t1785403678 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DragBar::GetZoomButton()
extern "C"  void DD_DragBar_GetZoomButton_m2620346376 (DD_DragBar_t348422191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t3310196443_m1808013672(__this, method) ((  Canvas_t3310196443 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_DragBar::set_canDrag(System.Boolean)
extern "C"  void DD_DragBar_set_canDrag_m2377542068 (DD_DragBar_t348422191 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponentInParent<DD_DataDiagram>()
#define GameObject_GetComponentInParent_TisDD_DataDiagram_t1914326032_m2168817592(__this, method) ((  DD_DataDiagram_t1914326032 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_m1039067679_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<DD_ZoomButton>()
#define GameObject_GetComponent_TisDD_ZoomButton_t4256419273_m417231604(__this, method) ((  DD_ZoomButton_t4256419273 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_ZoomButton/ZoomButtonClickHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void ZoomButtonClickHandle__ctor_m651100456 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C"  Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C"  void MaskableGraphic__ctor_m3705055375 (MaskableGraphic_t3839221559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
#define Nullable_1__ctor_m680077965(__this, p0, method) ((  void (*) (Nullable_1_t3878791605 *, Vector2_t2156229523 , const RuntimeMethod*))Nullable_1__ctor_m680077965_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
#define List_1_get_Item_m1378751541(__this, p0, method) ((  Vector2_t2156229523  (*) (List_1_t3628304265 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1378751541_gshared)(__this, p0, method)
// System.Nullable`1<UnityEngine.Vector2> DD_DrawGraphic::CalcHorizontalCutPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Nullable_1_t3878791605  DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p10, Vector2_t2156229523  ___p21, float ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
#define Nullable_1_get_HasValue_m1317965445(__this, method) ((  bool (*) (Nullable_1_t3878791605 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1317965445_gshared)(__this, method)
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
#define Nullable_1_get_Value_m963759207(__this, method) ((  Vector2_t2156229523  (*) (Nullable_1_t3878791605 *, const RuntimeMethod*))Nullable_1_get_Value_m963759207_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,!0)
#define List_1_Insert_m78231532(__this, p0, p1, method) ((  void (*) (List_1_t3628304265 *, int32_t, Vector2_t2156229523 , const RuntimeMethod*))List_1_Insert_m78231532_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
#define List_1_get_Count_m1202123918(__this, method) ((  int32_t (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_get_Count_m1202123918_gshared)(__this, method)
// System.Int32 DD_DrawGraphic::IsPointVerticalityInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  int32_t DD_DrawGraphic_IsPointVerticalityInRect_m7006515 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 DD_DrawGraphic::AddHorizontalCutPoints(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32,System.Single)
extern "C"  int32_t DD_DrawGraphic_AddHorizontalCutPoints_m3228128323 (DD_DrawGraphic_t171377864 * __this, List_1_t3628304265 * ___points0, int32_t ___sn1, float ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 DD_DrawGraphic::IsPointHorizontalInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  int32_t DD_DrawGraphic_IsPointHorizontalInRect_m514319264 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C"  Color32_t2600501292  Color32_op_Implicit_m2658259763 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m4228725261 (VertexHelper_t2453304189 * __this, UIVertexU5BU5D_t1981460040* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DrawGraphic::HorizontalCut(System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Rect)
extern "C"  void DD_DrawGraphic_HorizontalCut_m1261275112 (DD_DrawGraphic_t171377864 * __this, List_1_t3628304265 * ___points0, Rect_t2360479859  ___range1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_DrawGraphic::IsPointInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  bool DD_DrawGraphic_IsPointInRect_m49578682 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1260051643(__this, p0, method) ((  void (*) (List_1_t3628304265 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1260051643_gshared)(__this, p0, method)
// System.Void DD_DrawGraphic::DrawVerticalitySegmet(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawVerticalitySegmet_m676743645 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___startPoint1, Vector2_t2156229523  ___endPoint2, Color_t2555686324  ___color3, float ___thickness4, float ___scaleX5, float ___scaleY6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_LineButton::SetLineButton(DD_Lines)
extern "C"  void DD_LineButton_SetLineButton_m253669163 (DD_LineButton_t3694160087 * __this, DD_Lines_t487279985 * ___lines0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<DD_Lines>()
#define Component_GetComponent_TisDD_Lines_t487279985_m1227823878(__this, method) ((  DD_Lines_t487279985 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void DD_LineButton::SetLabel(DD_Lines)
extern "C"  void DD_LineButton_SetLabel_m1088355368 (DD_LineButton_t3694160087 * __this, DD_Lines_t487279985 * ___lines0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C"  RaycastResult_t3360306849  PointerEventData_get_pointerCurrentRaycast_m2627585223 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C"  GameObject_t1113636619 * RaycastResult_get_gameObject_m2570051527 (RaycastResult_t3360306849 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_Lines::get_IsShow()
extern "C"  bool DD_Lines_get_IsShow_m2025742090 (DD_Lines_t487279985 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_Lines::set_IsShow(System.Boolean)
extern "C"  void DD_Lines_set_IsShow_m1100533921 (DD_Lines_t487279985 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DD_DataDiagram::DestroyLine(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_DestroyLine_m627531740 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
#define List_1__ctor_m1536470898(__this, method) ((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1__ctor_m1536470898_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInParent<DD_CoordinateAxis>()
#define Component_GetComponentInParent_TisDD_CoordinateAxis_t429882320_m2971502623(__this, method) ((  DD_CoordinateAxis_t429882320 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method)
// System.Void DD_CoordinateAxis/CoordinateRectChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateRectChangeHandler__ctor_m1256279052 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::add_CoordinateRectChangeEvent(DD_CoordinateAxis/CoordinateRectChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateRectChangeEvent_m1520371892 (DD_CoordinateAxis_t429882320 * __this, CoordinateRectChangeHandler_t1701308220 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/CoordinateScaleChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateScaleChangeHandler__ctor_m730809343 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::add_CoordinateScaleChangeEvent(DD_CoordinateAxis/CoordinateScaleChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateScaleChangeEvent_m3318966535 (DD_CoordinateAxis_t429882320 * __this, CoordinateScaleChangeHandler_t4226256743 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis/CoordinateZeroPointChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateZeroPointChangeHandler__ctor_m2983226949 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::add_CoordinateeZeroPointChangeEvent(DD_CoordinateAxis/CoordinateZeroPointChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateeZeroPointChangeEvent_m666871371 (DD_CoordinateAxis_t429882320 * __this, CoordinateZeroPointChangeHandler_t1056737497 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect DD_CoordinateAxis::get_coordinateAxisViewRangeInPixel()
extern "C"  Rect_t2360479859  DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
#define List_1_GetEnumerator_m809843680(__this, method) ((  Enumerator_t1222580846  (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_GetEnumerator_m809843680_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
#define Enumerator_get_Current_m2598000980(__this, method) ((  Vector2_t2156229523  (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_get_Current_m2598000980_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(!0)
#define List_1_IndexOf_m698163972(__this, p0, method) ((  int32_t (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_IndexOf_m698163972_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
#define Enumerator_MoveNext_m4079852040(__this, method) ((  bool (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_MoveNext_m4079852040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
#define Enumerator_Dispose_m2367629053(__this, method) ((  void (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_Dispose_m2367629053_gshared)(__this, method)
// System.Int32 DD_Lines::GetStartPointSN(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Single)
extern "C"  int32_t DD_Lines_GetStartPointSN_m1766374616 (DD_Lines_t487279985 * __this, List_1_t3628304265 * ___points0, float ___startX1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_Lines::ScaleX(System.Single)
extern "C"  float DD_Lines_ScaleX_m932027563 (DD_Lines_t487279985 * __this, float ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single DD_Lines::ScaleY(System.Single)
extern "C"  float DD_Lines_ScaleY_m386833625 (DD_Lines_t487279985 * __this, float ___y0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
#define List_1_Add_m2298161512(__this, p0, method) ((  void (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_Add_m2298161512_gshared)(__this, p0, method)
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DrawGraphic::DrawHorizontalLine(UnityEngine.UI.VertexHelper,System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Color,System.Single,UnityEngine.Rect)
extern "C"  void DD_DrawGraphic_DrawHorizontalLine_m3341806192 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, List_1_t3628304265 * ___points1, Color_t2555686324  ___color2, float ___thickness3, Rect_t2360479859  ___range4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::remove_CoordinateRectChangeEvent(DD_CoordinateAxis/CoordinateRectChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateRectChangeEvent_m3613566325 (DD_CoordinateAxis_t429882320 * __this, CoordinateRectChangeHandler_t1701308220 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::remove_CoordinateScaleChangeEvent(DD_CoordinateAxis/CoordinateScaleChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateScaleChangeEvent_m4245992316 (DD_CoordinateAxis_t429882320 * __this, CoordinateScaleChangeHandler_t4226256743 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_CoordinateAxis::remove_CoordinateeZeroPointChangeEvent(DD_CoordinateAxis/CoordinateZeroPointChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateeZeroPointChangeEvent_m1754232721 (DD_CoordinateAxis_t429882320 * __this, CoordinateZeroPointChangeHandler_t1056737497 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
#define List_1_Clear_m2188935509(__this, method) ((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_Clear_m2188935509_gshared)(__this, method)
// UnityEngine.Rect DD_CalcRectTransformHelper::CalcLocalRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Rect_t2360479859  DD_CalcRectTransformHelper_CalcLocalRect_m3010352532 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___anchorMin0, Vector2_t2156229523  ___anchorMax1, Vector2_t2156229523  ___parentSize2, Vector2_t2156229523  ___pivot3, Vector2_t2156229523  ___anchorPosition4, Rect_t2360479859  ___rectInRT5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
#define Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724(__this, method) ((  Canvas_t3310196443 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared)(__this, method)
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::set_rect(System.Nullable`1<UnityEngine.Rect>)
extern "C"  void DD_DataDiagram_set_rect_m224390537 (DD_DataDiagram_t1914326032 * __this, Nullable_1_t4083041941  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ZoomButtonClickEventArgs::.ctor()
extern "C"  void ZoomButtonClickEventArgs__ctor_m3986513944 (ZoomButtonClickEventArgs_t1487932623 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_ZoomButton/ZoomButtonClickHandle::Invoke(System.Object,ZoomButtonClickEventArgs)
extern "C"  void ZoomButtonClickHandle_Invoke_m916977965 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject * ___sender0, ZoomButtonClickEventArgs_t1487932623 * ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m3289795077 (FileInfo_t1169991790 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::AppendText()
extern "C"  StreamWriter_t1266378904 * FileInfo_AppendText_m2582519636 (FileInfo_t1169991790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
extern "C"  Color_t2555686324  Color_HSVToRGB_m2420768060 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C"  String_t* Color_ToString_m671005850 (Color_t2555686324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DD_DataDiagram::AddLine(System.String,UnityEngine.Color)
extern "C"  GameObject_t1113636619 * DD_DataDiagram_AddLine_m2558080196 (DD_DataDiagram_t1914326032 * __this, String_t* ___name0, Color_t2555686324  ___color1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DD_DataDiagram>()
#define GameObject_GetComponent_TisDD_DataDiagram_t1914326032_m3066308452(__this, method) ((  DD_DataDiagram_t1914326032 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void DD_DataDiagram/PreDestroyLineHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PreDestroyLineHandler__ctor_m3458885197 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::add_PreDestroyLineEvent(DD_DataDiagram/PreDestroyLineHandler)
extern "C"  void DD_DataDiagram_add_PreDestroyLineEvent_m3212590009 (DD_DataDiagram_t1914326032 * __this, PreDestroyLineHandler_t3782553210 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Sample::AddALine()
extern "C"  void Sample_AddALine_m3083246443 (Sample_t1746682370 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Sample::ContinueInput(System.Single)
extern "C"  void Sample_ContinueInput_m3298532680 (Sample_t1746682370 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DD_DataDiagram::InputPoint(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void DD_DataDiagram_InputPoint_m1918161065 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Vector2_t2156229523  ___point1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DD_PreDestroyLineEventArgs::get_line()
extern "C"  GameObject_t1113636619 * DD_PreDestroyLineEventArgs_get_line_m204555127 (DD_PreDestroyLineEventArgs_t3472178400 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C"  Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C"  void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t340375123 * Renderer_get_sharedMaterial_m1936632411 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern "C"  Vector4_t3319028937  Material_GetVector_m806950826 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
extern "C"  float Material_GetFloat_m2210875428 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3319028937  Vector4_op_Multiply_m213790997 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C"  float Mathf_Repeat_m1502810009 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m4214217286 (Material_t340375123 * __this, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void DD_CalcRectTransformHelper::.ctor()
extern "C"  void DD_CalcRectTransformHelper__ctor_m2577650657 (DD_CalcRectTransformHelper_t2146842496 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcAnchorPointPosition(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___anchorMin0, Vector2_t2156229523  ___anchorMax1, Vector2_t2156229523  ___parentSize2, Vector2_t2156229523  ___pivot3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = (&___parentSize2)->get_x_0();
		float L_1 = (&___anchorMin0)->get_x_0();
		float L_2 = (&___parentSize2)->get_y_1();
		float L_3 = (&___anchorMin0)->get_y_1();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		float L_4 = (&___parentSize2)->get_x_0();
		float L_5 = (&___anchorMax1)->get_x_0();
		float L_6 = (&V_0)->get_x_0();
		float L_7 = (&___parentSize2)->get_y_1();
		float L_8 = (&___anchorMax1)->get_y_1();
		float L_9 = (&V_0)->get_y_1();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)L_6)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_10 = V_0;
		float L_11 = (&V_1)->get_x_0();
		float L_12 = (&___pivot3)->get_x_0();
		float L_13 = (&V_1)->get_y_1();
		float L_14 = (&___pivot3)->get_y_1();
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_10, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcAnchorPosition(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcAnchorPosition_m3167313752 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, Vector2_t2156229523  ___pivot4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcAnchorPosition_m3167313752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector2_t2156229523  L_0 = ___anchorMin1;
		Vector2_t2156229523  L_1 = ___anchorMax2;
		Vector2_t2156229523  L_2 = ___parentSize3;
		Vector2_t2156229523  L_3 = ___pivot4;
		Vector2_t2156229523  L_4 = DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Rect_get_x_m3839990490((&___rect0), /*hidden argument*/NULL);
		float L_6 = Rect_get_width_m3421484486((&___rect0), /*hidden argument*/NULL);
		float L_7 = (&___pivot4)->get_x_0();
		float L_8 = Rect_get_y_m1501338330((&___rect0), /*hidden argument*/NULL);
		float L_9 = Rect_get_height_m1358425599((&___rect0), /*hidden argument*/NULL);
		float L_10 = (&___pivot4)->get_y_1();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_11 = V_1;
		Vector2_t2156229523  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcOffsetMin(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcOffsetMin_m3557802424 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcOffsetMin_m3557802424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = (&___parentSize3)->get_x_0();
		float L_1 = (&___anchorMin1)->get_x_0();
		float L_2 = (&___parentSize3)->get_y_1();
		float L_3 = (&___anchorMin1)->get_y_1();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		float L_4 = Rect_get_x_m3839990490((&___rect0), /*hidden argument*/NULL);
		float L_5 = Rect_get_y_m1501338330((&___rect0), /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_1), L_4, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = V_1;
		Vector2_t2156229523  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcOffsetMax(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcOffsetMax_m1504452929 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcOffsetMax_m1504452929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = (&___parentSize3)->get_x_0();
		float L_1 = (&___anchorMax2)->get_x_0();
		float L_2 = (&___parentSize3)->get_y_1();
		float L_3 = (&___anchorMax2)->get_y_1();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		float L_4 = Rect_get_x_m3839990490((&___rect0), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m3421484486((&___rect0), /*hidden argument*/NULL);
		float L_6 = Rect_get_y_m1501338330((&___rect0), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1358425599((&___rect0), /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_add((float)L_4, (float)L_5)), ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = V_1;
		Vector2_t2156229523  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcSizeDelta(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcSizeDelta_m3831550858 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcSizeDelta_m3831550858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t2360479859  L_0 = ___rect0;
		Vector2_t2156229523  L_1 = ___anchorMin1;
		Vector2_t2156229523  L_2 = ___anchorMax2;
		Vector2_t2156229523  L_3 = ___parentSize3;
		Vector2_t2156229523  L_4 = DD_CalcRectTransformHelper_CalcOffsetMax_m1504452929(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		Rect_t2360479859  L_5 = ___rect0;
		Vector2_t2156229523  L_6 = ___anchorMin1;
		Vector2_t2156229523  L_7 = ___anchorMax2;
		Vector2_t2156229523  L_8 = ___parentSize3;
		Vector2_t2156229523  L_9 = DD_CalcRectTransformHelper_CalcOffsetMin_m3557802424(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 DD_CalcRectTransformHelper::CalcRectSize(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CalcRectTransformHelper_CalcRectSize_m1523090338 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___sizeDelta0, Vector2_t2156229523  ___anchorMin1, Vector2_t2156229523  ___anchorMax2, Vector2_t2156229523  ___parentSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcRectSize_m1523090338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = (&___parentSize3)->get_x_0();
		float L_1 = (&___anchorMin1)->get_x_0();
		float L_2 = (&___parentSize3)->get_y_1();
		float L_3 = (&___anchorMin1)->get_y_1();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		float L_4 = (&___parentSize3)->get_x_0();
		float L_5 = (&___anchorMax2)->get_x_0();
		float L_6 = (&___parentSize3)->get_y_1();
		float L_7 = (&___anchorMax2)->get_y_1();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = V_1;
		Vector2_t2156229523  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector2_t2156229523  L_11 = ___sizeDelta0;
		Vector2_t2156229523  L_12 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Rect DD_CalcRectTransformHelper::CalcLocalRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Rect_t2360479859  DD_CalcRectTransformHelper_CalcLocalRect_m3010352532 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___anchorMin0, Vector2_t2156229523  ___anchorMax1, Vector2_t2156229523  ___parentSize2, Vector2_t2156229523  ___pivot3, Vector2_t2156229523  ___anchorPosition4, Rect_t2360479859  ___rectInRT5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CalcRectTransformHelper_CalcLocalRect_m3010352532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector2_t2156229523  L_0 = ___anchorMin0;
		Vector2_t2156229523  L_1 = ___anchorMax1;
		Vector2_t2156229523  L_2 = ___parentSize2;
		Vector2_t2156229523  L_3 = ___pivot3;
		Vector2_t2156229523  L_4 = DD_CalcRectTransformHelper_CalcAnchorPointPosition_m4178187438(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_t2156229523  L_5 = V_0;
		Vector2_t2156229523  L_6 = ___anchorPosition4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector2_t2156229523  L_8 = V_1;
		Vector2_t2156229523  L_9 = Rect_get_position_m2115952571((&___rectInRT5), /*hidden argument*/NULL);
		Vector2_t2156229523  L_10 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector2_t2156229523  L_11 = Rect_get_size_m477575021((&___rectInRT5), /*hidden argument*/NULL);
		Rect_t2360479859  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Rect__ctor_m1342368573((&L_12), L_10, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void DD_CoordinateAxis::.ctor()
extern "C"  void DD_CoordinateAxis__ctor_m3472608139 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis__ctor_m3472608139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t1444911251* L_0 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D3715DA7BEFC1FACE566A532498E3466BC35A5FE8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		__this->set_MarkIntervalTab_32(L_0);
		List_1_t2585711361 * L_2 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_2, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_m_LineList_37(L_2);
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_ZoomSpeed_38(L_3);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_MoveSpeed_39(L_4);
		__this->set_m_CoordinateAxisMaxWidth_40((100.0f));
		__this->set_m_CoordinateAxisMinWidth_41((0.1f));
		__this->set_m_RectThickness_42((2.0f));
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->set_m_BackgroundColor_43(L_5);
		Color_t2555686324  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Color__ctor_m2943235014((&L_6), (0.8f), (0.8f), (0.8f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_MarkColor_44(L_6);
		List_1_t2585711361 * L_7 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_7, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_m_MarkHorizontalTexts_45(L_7);
		__this->set_m_MinMarkTextHeight_46((20.0f));
		Rect_t2360479859  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m2614021312((&L_8), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_CoordinateAxisViewRange_47(L_8);
		DD_DrawGraphic__ctor_m3591345486(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DD_CoordinateAxis::get_m_PixelPerMark()
extern "C"  float DD_CoordinateAxis_get_m_PixelPerMark_m2062035123 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_33();
		NullCheck(L_0);
		float L_1 = L_0->get_m_CentimeterPerMark_11();
		float L_2 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.3937008f), (float)L_1)), (float)L_2));
	}
}
// UnityEngine.Rect DD_CoordinateAxis::get_m_CoordinateAxisRange()
extern "C"  Rect_t2360479859  DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	NullReferenceException_t1023182353 * V_3 = NULL;
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RectTransform_t3704657025 * L_0 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_0);
		Rect_t2360479859  L_1 = RectTransform_get_rect_m574169965(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector2_t2156229523  L_2 = Rect_get_size_m477575021((&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_0();
		DD_DataDiagram_t1914326032 * L_4 = __this->get_m_DataDiagram_33();
		NullCheck(L_4);
		float L_5 = L_4->get_m_CentimeterPerCoordUnitX_12();
		float L_6 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (&V_0)->get_y_1();
		DD_DataDiagram_t1914326032 * L_8 = __this->get_m_DataDiagram_33();
		NullCheck(L_8);
		float L_9 = L_8->get_m_CentimeterPerCoordUnitY_13();
		float L_10 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Rect__ctor_m2614021312((&L_11), (0.0f), (0.0f), ((float)((float)L_3/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)(0.3937008f))), (float)L_6)))), ((float)((float)L_7/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(0.3937008f))), (float)L_10)))), /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_009d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0067;
		throw e;
	}

CATCH_0067:
	{ // begin catch(System.NullReferenceException)
		V_3 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_12 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3787497674, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_007e;
	} // end catch (depth: 1)

IL_007e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_15 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_15);
		Rect_t2360479859  L_16 = RectTransform_get_rect_m574169965(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		Vector2_t2156229523  L_17 = Rect_get_size_m477575021((&V_4), /*hidden argument*/NULL);
		Rect_t2360479859  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Rect__ctor_m1342368573((&L_18), L_14, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_009d:
	{
		Rect_t2360479859  L_19 = V_2;
		return L_19;
	}
}
// System.Single DD_CoordinateAxis::get_m_CoordinateAxisViewSizeX()
extern "C"  float DD_CoordinateAxis_get_m_CoordinateAxisViewSizeX_m99901340 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_m_CoordinateAxisViewSizeX_m99901340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	NullReferenceException_t1023182353 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Rect_t2360479859  L_0 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		Rect_t2360479859 * L_2 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_3 = Rect_get_width_m3421484486(L_2, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3));
		goto IL_0046;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0020;
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.NullReferenceException)
		V_2 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3787497674, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		Rect_t2360479859  L_6 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = Rect_get_width_m3421484486((&V_3), /*hidden argument*/NULL);
		return L_7;
	}

IL_0046:
	{
		float L_8 = V_1;
		return L_8;
	}
}
// System.Single DD_CoordinateAxis::get_m_CoordinateAxisViewSizeY()
extern "C"  float DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	NullReferenceException_t1023182353 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Rect_t2360479859  L_0 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		Rect_t2360479859 * L_2 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_3 = Rect_get_height_m1358425599(L_2, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3));
		goto IL_0046;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0020;
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.NullReferenceException)
		V_2 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3787497674, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		Rect_t2360479859  L_6 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = Rect_get_width_m3421484486((&V_3), /*hidden argument*/NULL);
		return L_7;
	}

IL_0046:
	{
		float L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Rect DD_CoordinateAxis::get_coordinateAxisViewRangeInPixel()
extern "C"  Rect_t2360479859  DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NullReferenceException_t1023182353 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Rect_t2360479859 * L_0 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Vector2_t2156229523  L_1 = Rect_get_position_m2115952571(L_0, /*hidden argument*/NULL);
		Rect_t2360479859  L_2 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t2156229523  L_3 = Rect_get_position_m2115952571((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = DD_CoordinateAxis_CoordinateToPixel_m2523793977(__this, L_4, /*hidden argument*/NULL);
		Rect_t2360479859 * L_6 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Vector2_t2156229523  L_7 = Rect_get_size_m477575021(L_6, /*hidden argument*/NULL);
		Rect_t2360479859  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m1342368573((&L_8), L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0076;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003a;
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.NullReferenceException)
		V_2 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3787497674, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		goto IL_0051;
	} // end catch (depth: 1)

IL_0051:
	{
		Rect_t2360479859  L_11 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_3 = L_11;
		Vector2_t2156229523  L_12 = Rect_get_position_m2115952571((&V_3), /*hidden argument*/NULL);
		Vector2_t2156229523  L_13 = DD_CoordinateAxis_CoordinateToPixel_m2523793977(__this, L_12, /*hidden argument*/NULL);
		Rect_t2360479859 * L_14 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Vector2_t2156229523  L_15 = Rect_get_size_m477575021(L_14, /*hidden argument*/NULL);
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m1342368573((&L_16), L_13, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0076:
	{
		Rect_t2360479859  L_17 = V_1;
		return L_17;
	}
}
// UnityEngine.RectTransform DD_CoordinateAxis::get_coordinateRectT()
extern "C"  RectTransform_t3704657025 * DD_CoordinateAxis_get_coordinateRectT_m313053459 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_coordinateRectT_m313053459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RectTransform_t3704657025 * L_0 = __this->get_m_CoordinateRectT_34();
		V_0 = L_0;
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Object)
		RectTransform_t3704657025 * L_1 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		RectTransform_t3704657025 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 DD_CoordinateAxis::get_lineNum()
extern "C"  int32_t DD_CoordinateAxis_get_lineNum_m2664137645 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_get_lineNum_m2664137645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = __this->get_m_LineList_37();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2812834599(L_0, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DD_CoordinateAxis::add_CoordinateRectChangeEvent(DD_CoordinateAxis/CoordinateRectChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateRectChangeEvent_m1520371892 (DD_CoordinateAxis_t429882320 * __this, CoordinateRectChangeHandler_t1701308220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_add_CoordinateRectChangeEvent_m1520371892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateRectChangeHandler_t1701308220 * V_0 = NULL;
	CoordinateRectChangeHandler_t1701308220 * V_1 = NULL;
	{
		CoordinateRectChangeHandler_t1701308220 * L_0 = __this->get_CoordinateRectChangeEvent_48();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateRectChangeHandler_t1701308220 * L_1 = V_0;
		V_1 = L_1;
		CoordinateRectChangeHandler_t1701308220 ** L_2 = __this->get_address_of_CoordinateRectChangeEvent_48();
		CoordinateRectChangeHandler_t1701308220 * L_3 = V_1;
		CoordinateRectChangeHandler_t1701308220 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateRectChangeHandler_t1701308220 * L_6 = V_0;
		CoordinateRectChangeHandler_t1701308220 * L_7 = InterlockedCompareExchangeImpl<CoordinateRectChangeHandler_t1701308220 *>(L_2, ((CoordinateRectChangeHandler_t1701308220 *)CastclassSealed((RuntimeObject*)L_5, CoordinateRectChangeHandler_t1701308220_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateRectChangeHandler_t1701308220 * L_8 = V_0;
		CoordinateRectChangeHandler_t1701308220 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateRectChangeHandler_t1701308220 *)L_8) == ((RuntimeObject*)(CoordinateRectChangeHandler_t1701308220 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::remove_CoordinateRectChangeEvent(DD_CoordinateAxis/CoordinateRectChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateRectChangeEvent_m3613566325 (DD_CoordinateAxis_t429882320 * __this, CoordinateRectChangeHandler_t1701308220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_remove_CoordinateRectChangeEvent_m3613566325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateRectChangeHandler_t1701308220 * V_0 = NULL;
	CoordinateRectChangeHandler_t1701308220 * V_1 = NULL;
	{
		CoordinateRectChangeHandler_t1701308220 * L_0 = __this->get_CoordinateRectChangeEvent_48();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateRectChangeHandler_t1701308220 * L_1 = V_0;
		V_1 = L_1;
		CoordinateRectChangeHandler_t1701308220 ** L_2 = __this->get_address_of_CoordinateRectChangeEvent_48();
		CoordinateRectChangeHandler_t1701308220 * L_3 = V_1;
		CoordinateRectChangeHandler_t1701308220 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateRectChangeHandler_t1701308220 * L_6 = V_0;
		CoordinateRectChangeHandler_t1701308220 * L_7 = InterlockedCompareExchangeImpl<CoordinateRectChangeHandler_t1701308220 *>(L_2, ((CoordinateRectChangeHandler_t1701308220 *)CastclassSealed((RuntimeObject*)L_5, CoordinateRectChangeHandler_t1701308220_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateRectChangeHandler_t1701308220 * L_8 = V_0;
		CoordinateRectChangeHandler_t1701308220 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateRectChangeHandler_t1701308220 *)L_8) == ((RuntimeObject*)(CoordinateRectChangeHandler_t1701308220 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::add_CoordinateScaleChangeEvent(DD_CoordinateAxis/CoordinateScaleChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateScaleChangeEvent_m3318966535 (DD_CoordinateAxis_t429882320 * __this, CoordinateScaleChangeHandler_t4226256743 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_add_CoordinateScaleChangeEvent_m3318966535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateScaleChangeHandler_t4226256743 * V_0 = NULL;
	CoordinateScaleChangeHandler_t4226256743 * V_1 = NULL;
	{
		CoordinateScaleChangeHandler_t4226256743 * L_0 = __this->get_CoordinateScaleChangeEvent_49();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateScaleChangeHandler_t4226256743 * L_1 = V_0;
		V_1 = L_1;
		CoordinateScaleChangeHandler_t4226256743 ** L_2 = __this->get_address_of_CoordinateScaleChangeEvent_49();
		CoordinateScaleChangeHandler_t4226256743 * L_3 = V_1;
		CoordinateScaleChangeHandler_t4226256743 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateScaleChangeHandler_t4226256743 * L_6 = V_0;
		CoordinateScaleChangeHandler_t4226256743 * L_7 = InterlockedCompareExchangeImpl<CoordinateScaleChangeHandler_t4226256743 *>(L_2, ((CoordinateScaleChangeHandler_t4226256743 *)CastclassSealed((RuntimeObject*)L_5, CoordinateScaleChangeHandler_t4226256743_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateScaleChangeHandler_t4226256743 * L_8 = V_0;
		CoordinateScaleChangeHandler_t4226256743 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateScaleChangeHandler_t4226256743 *)L_8) == ((RuntimeObject*)(CoordinateScaleChangeHandler_t4226256743 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::remove_CoordinateScaleChangeEvent(DD_CoordinateAxis/CoordinateScaleChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateScaleChangeEvent_m4245992316 (DD_CoordinateAxis_t429882320 * __this, CoordinateScaleChangeHandler_t4226256743 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_remove_CoordinateScaleChangeEvent_m4245992316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateScaleChangeHandler_t4226256743 * V_0 = NULL;
	CoordinateScaleChangeHandler_t4226256743 * V_1 = NULL;
	{
		CoordinateScaleChangeHandler_t4226256743 * L_0 = __this->get_CoordinateScaleChangeEvent_49();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateScaleChangeHandler_t4226256743 * L_1 = V_0;
		V_1 = L_1;
		CoordinateScaleChangeHandler_t4226256743 ** L_2 = __this->get_address_of_CoordinateScaleChangeEvent_49();
		CoordinateScaleChangeHandler_t4226256743 * L_3 = V_1;
		CoordinateScaleChangeHandler_t4226256743 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateScaleChangeHandler_t4226256743 * L_6 = V_0;
		CoordinateScaleChangeHandler_t4226256743 * L_7 = InterlockedCompareExchangeImpl<CoordinateScaleChangeHandler_t4226256743 *>(L_2, ((CoordinateScaleChangeHandler_t4226256743 *)CastclassSealed((RuntimeObject*)L_5, CoordinateScaleChangeHandler_t4226256743_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateScaleChangeHandler_t4226256743 * L_8 = V_0;
		CoordinateScaleChangeHandler_t4226256743 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateScaleChangeHandler_t4226256743 *)L_8) == ((RuntimeObject*)(CoordinateScaleChangeHandler_t4226256743 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::add_CoordinateeZeroPointChangeEvent(DD_CoordinateAxis/CoordinateZeroPointChangeHandler)
extern "C"  void DD_CoordinateAxis_add_CoordinateeZeroPointChangeEvent_m666871371 (DD_CoordinateAxis_t429882320 * __this, CoordinateZeroPointChangeHandler_t1056737497 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_add_CoordinateeZeroPointChangeEvent_m666871371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateZeroPointChangeHandler_t1056737497 * V_0 = NULL;
	CoordinateZeroPointChangeHandler_t1056737497 * V_1 = NULL;
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_0 = __this->get_CoordinateeZeroPointChangeEvent_50();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_1 = V_0;
		V_1 = L_1;
		CoordinateZeroPointChangeHandler_t1056737497 ** L_2 = __this->get_address_of_CoordinateeZeroPointChangeEvent_50();
		CoordinateZeroPointChangeHandler_t1056737497 * L_3 = V_1;
		CoordinateZeroPointChangeHandler_t1056737497 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateZeroPointChangeHandler_t1056737497 * L_6 = V_0;
		CoordinateZeroPointChangeHandler_t1056737497 * L_7 = InterlockedCompareExchangeImpl<CoordinateZeroPointChangeHandler_t1056737497 *>(L_2, ((CoordinateZeroPointChangeHandler_t1056737497 *)CastclassSealed((RuntimeObject*)L_5, CoordinateZeroPointChangeHandler_t1056737497_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateZeroPointChangeHandler_t1056737497 * L_8 = V_0;
		CoordinateZeroPointChangeHandler_t1056737497 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateZeroPointChangeHandler_t1056737497 *)L_8) == ((RuntimeObject*)(CoordinateZeroPointChangeHandler_t1056737497 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::remove_CoordinateeZeroPointChangeEvent(DD_CoordinateAxis/CoordinateZeroPointChangeHandler)
extern "C"  void DD_CoordinateAxis_remove_CoordinateeZeroPointChangeEvent_m1754232721 (DD_CoordinateAxis_t429882320 * __this, CoordinateZeroPointChangeHandler_t1056737497 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_remove_CoordinateeZeroPointChangeEvent_m1754232721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CoordinateZeroPointChangeHandler_t1056737497 * V_0 = NULL;
	CoordinateZeroPointChangeHandler_t1056737497 * V_1 = NULL;
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_0 = __this->get_CoordinateeZeroPointChangeEvent_50();
		V_0 = L_0;
	}

IL_0007:
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_1 = V_0;
		V_1 = L_1;
		CoordinateZeroPointChangeHandler_t1056737497 ** L_2 = __this->get_address_of_CoordinateeZeroPointChangeEvent_50();
		CoordinateZeroPointChangeHandler_t1056737497 * L_3 = V_1;
		CoordinateZeroPointChangeHandler_t1056737497 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		CoordinateZeroPointChangeHandler_t1056737497 * L_6 = V_0;
		CoordinateZeroPointChangeHandler_t1056737497 * L_7 = InterlockedCompareExchangeImpl<CoordinateZeroPointChangeHandler_t1056737497 *>(L_2, ((CoordinateZeroPointChangeHandler_t1056737497 *)CastclassSealed((RuntimeObject*)L_5, CoordinateZeroPointChangeHandler_t1056737497_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		CoordinateZeroPointChangeHandler_t1056737497 * L_8 = V_0;
		CoordinateZeroPointChangeHandler_t1056737497 * L_9 = V_1;
		if ((!(((RuntimeObject*)(CoordinateZeroPointChangeHandler_t1056737497 *)L_8) == ((RuntimeObject*)(CoordinateZeroPointChangeHandler_t1056737497 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::Awake()
extern "C"  void DD_CoordinateAxis_Awake_m2726755315 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_Awake_m2726755315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_DataDiagram_t1914326032 * V_0 = NULL;
	NullReferenceException_t1023182353 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DD_DataDiagram_t1914326032 * L_0 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		DD_DataDiagram_t1914326032 * L_1 = L_0;
		V_0 = L_1;
		__this->set_m_DataDiagram_33(L_1);
		DD_DataDiagram_t1914326032 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1929951271, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		Object_t631007953 * L_5 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1655495810, /*hidden argument*/NULL);
		__this->set_m_LinesPreb_35(((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_5, GameObject_t1113636619_il2cpp_TypeInfo_var)));
		GameObject_t1113636619 * L_6 = __this->get_m_LinesPreb_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1943368577, /*hidden argument*/NULL);
	}

IL_005b:
	{
		Object_t631007953 * L_8 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral4255140175, /*hidden argument*/NULL);
		__this->set_m_MarkTextPreb_36(((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_8, GameObject_t1113636619_il2cpp_TypeInfo_var)));
		GameObject_t1113636619 * L_9 = __this->get_m_MarkTextPreb_36();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3235001041, /*hidden argument*/NULL);
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var);
			String_t* L_11 = ((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->get_COORDINATE_RECT_30();
			GameObject_t1113636619 * L_12 = DD_CoordinateAxis_FindInChild_m3863140474(__this, L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			RectTransform_t3704657025 * L_13 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_12, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
			__this->set_m_CoordinateRectT_34(L_13);
			RectTransform_t3704657025 * L_14 = __this->get_m_CoordinateRectT_34();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_15 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00c1;
			}
		}

IL_00b2:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2574166323, /*hidden argument*/NULL);
			goto IL_0184;
		}

IL_00c1:
		{
			goto IL_00dd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c6;
		throw e;
	}

CATCH_00c6:
	{ // begin catch(System.NullReferenceException)
		V_1 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3452614532, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		goto IL_00dd;
	} // end catch (depth: 1)

IL_00dd:
	{
		List_1_t2585711361 * L_18 = __this->get_m_MarkHorizontalTexts_45();
		DD_CoordinateAxis_FindExistMarkText_m3497577672(__this, L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = Transform_get_parent_m835071599(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		GameObject_t1113636619 * L_23 = V_2;
		NullCheck(L_23);
		RectTransform_t3704657025 * L_24 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_23, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_24);
		Rect_t2360479859  L_25 = RectTransform_get_rect_m574169965(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		Rect_t2360479859 * L_26 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Rect_t2360479859  L_27 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_4 = L_27;
		Vector2_t2156229523  L_28 = Rect_get_position_m2115952571((&V_4), /*hidden argument*/NULL);
		Rect_set_position_m2358650747(L_26, L_28, /*hidden argument*/NULL);
		Rect_t2360479859 * L_29 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Vector2_t2156229523  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2__ctor_m3970636864((&L_30), (1.0f), (1.0f), /*hidden argument*/NULL);
		Rect_set_size_m3071953310(L_29, L_30, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_31 = __this->get_m_DataDiagram_33();
		intptr_t L_32 = (intptr_t)DD_CoordinateAxis_OnRectChange_m171157958_RuntimeMethod_var;
		RectChangeHandler_t1189589726 * L_33 = (RectChangeHandler_t1189589726 *)il2cpp_codegen_object_new(RectChangeHandler_t1189589726_il2cpp_TypeInfo_var);
		RectChangeHandler__ctor_m2479521780(L_33, __this, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		DD_DataDiagram_add_RectChangeEvent_m1945500573(L_31, L_33, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_34 = __this->get_m_DataDiagram_33();
		intptr_t L_35 = (intptr_t)DD_CoordinateAxis_OnZoom_m221497421_RuntimeMethod_var;
		ZoomHandler_t2822810846 * L_36 = (ZoomHandler_t2822810846 *)il2cpp_codegen_object_new(ZoomHandler_t2822810846_il2cpp_TypeInfo_var);
		ZoomHandler__ctor_m421747723(L_36, __this, L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		DD_DataDiagram_add_ZoomEvent_m4269353983(L_34, L_36, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_37 = __this->get_m_DataDiagram_33();
		intptr_t L_38 = (intptr_t)DD_CoordinateAxis_OnMove_m3651124455_RuntimeMethod_var;
		MoveHandler_t3318770945 * L_39 = (MoveHandler_t3318770945 *)il2cpp_codegen_object_new(MoveHandler_t3318770945_il2cpp_TypeInfo_var);
		MoveHandler__ctor_m801656797(L_39, __this, L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		DD_DataDiagram_add_MoveEvent_m2980893282(L_37, L_39, /*hidden argument*/NULL);
	}

IL_0184:
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::Update()
extern "C"  void DD_CoordinateAxis_Update_m3037676162 (DD_CoordinateAxis_t429882320 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.GameObject DD_CoordinateAxis::FindInChild(System.String)
extern "C"  GameObject_t1113636619 * DD_CoordinateAxis_FindInChild_m3863140474 (DD_CoordinateAxis_t429882320 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_FindInChild_m3863140474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			String_t* L_4 = ___name0;
			Transform_t3600365921 * L_5 = V_0;
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7 = Object_get_name_m4211327027(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0033:
		{
			Transform_t3600365921 * L_9 = V_0;
			NullCheck(L_9);
			GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			IL2CPP_LEAVE(0x65, FINALLY_004f);
		}

IL_003f:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x63, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_1;
			RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_14;
			if (!L_14)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			RuntimeObject* L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_0065:
	{
		GameObject_t1113636619 * L_16 = V_2;
		return L_16;
	}
}
// System.Void DD_CoordinateAxis::ChangeRect(UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_ChangeRect_m3879668204 (DD_CoordinateAxis_t429882320 * __this, Rect_t2360479859  ___newRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_ChangeRect_m3879668204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CoordinateRectChangeHandler_t1701308220 * L_0 = __this->get_CoordinateRectChangeEvent_48();
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		CoordinateRectChangeHandler_t1701308220 * L_1 = __this->get_CoordinateRectChangeEvent_48();
		Rect_t2360479859  L_2 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t2156229523  L_3 = Rect_get_position_m2115952571((&V_0), /*hidden argument*/NULL);
		Rect_t2360479859 * L_4 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Vector2_t2156229523  L_5 = Rect_get_position_m2115952571(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = DD_CoordinateAxis_CoordinateToPixel_m2523793977(__this, L_6, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = Rect_get_size_m477575021((&___newRect0), /*hidden argument*/NULL);
		Rect_t2360479859  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m1342368573((&L_9), L_7, L_8, /*hidden argument*/NULL);
		DD_CoordinateRectChangeEventArgs_t641796680 * L_10 = (DD_CoordinateRectChangeEventArgs_t641796680 *)il2cpp_codegen_object_new(DD_CoordinateRectChangeEventArgs_t641796680_il2cpp_TypeInfo_var);
		DD_CoordinateRectChangeEventArgs__ctor_m1632708520(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		CoordinateRectChangeHandler_Invoke_m4285264990(L_1, __this, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::ChangeScale(System.Single,System.Single)
extern "C"  void DD_CoordinateAxis_ChangeScale_m4288399850 (DD_CoordinateAxis_t429882320 * __this, float ___ZoomX0, float ___ZoomY1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Rect_t2360479859  L_0 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Vector2_t2156229523  L_1 = Rect_get_size_m477575021((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t2360479859 * L_2 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_3 = Rect_get_width_m3421484486(L_2, /*hidden argument*/NULL);
		float L_4 = (&V_0)->get_x_0();
		Rect_t2360479859 * L_5 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_6 = Rect_get_height_m1358425599(L_5, /*hidden argument*/NULL);
		float L_7 = (&V_0)->get_y_1();
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_1();
		float L_9 = (&V_0)->get_x_0();
		V_3 = ((float)((float)L_8/(float)L_9));
		float L_10 = ___ZoomX0;
		Vector2_t2156229523 * L_11 = __this->get_address_of_m_ZoomSpeed_38();
		float L_12 = L_11->get_x_0();
		V_4 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12));
		float L_13 = ___ZoomY1;
		Vector2_t2156229523 * L_14 = __this->get_address_of_m_ZoomSpeed_38();
		float L_15 = L_14->get_y_1();
		float L_16 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15)), (float)L_16));
		Vector2_t2156229523 * L_17 = (&V_2);
		float L_18 = L_17->get_x_0();
		float L_19 = V_4;
		L_17->set_x_0(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
		Vector2_t2156229523 * L_20 = (&V_2);
		float L_21 = L_20->get_y_1();
		float L_22 = V_5;
		L_20->set_y_1(((float)il2cpp_codegen_add((float)L_21, (float)L_22)));
		float L_23 = (&V_2)->get_x_0();
		float L_24 = __this->get_m_CoordinateAxisMaxWidth_40();
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_25 = __this->get_m_CoordinateAxisMaxWidth_40();
		(&V_2)->set_x_0(L_25);
	}

IL_00ab:
	{
		float L_26 = (&V_2)->get_x_0();
		float L_27 = __this->get_m_CoordinateAxisMinWidth_41();
		if ((!(((float)L_26) < ((float)L_27))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_28 = __this->get_m_CoordinateAxisMinWidth_41();
		(&V_2)->set_x_0(L_28);
	}

IL_00ca:
	{
		float L_29 = (&V_2)->get_y_1();
		float L_30 = __this->get_m_CoordinateAxisMaxWidth_40();
		float L_31 = V_3;
		if ((!(((float)L_29) > ((float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31))))))
		{
			goto IL_00ed;
		}
	}
	{
		float L_32 = __this->get_m_CoordinateAxisMaxWidth_40();
		float L_33 = V_3;
		(&V_2)->set_y_1(((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)));
	}

IL_00ed:
	{
		float L_34 = (&V_2)->get_y_1();
		float L_35 = __this->get_m_CoordinateAxisMinWidth_41();
		float L_36 = V_3;
		if ((!(((float)L_34) < ((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36))))))
		{
			goto IL_0110;
		}
	}
	{
		float L_37 = __this->get_m_CoordinateAxisMinWidth_41();
		float L_38 = V_3;
		(&V_2)->set_y_1(((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)));
	}

IL_0110:
	{
		Rect_t2360479859 * L_39 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_40 = (&V_2)->get_x_0();
		float L_41 = (&V_0)->get_x_0();
		Rect_set_width_m2963421158(L_39, ((float)((float)L_40/(float)L_41)), /*hidden argument*/NULL);
		Rect_t2360479859 * L_42 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_43 = (&V_2)->get_y_1();
		float L_44 = (&V_0)->get_y_1();
		Rect_set_height_m1625569324(L_42, ((float)((float)L_43/(float)L_44)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::OnRectChange(System.Object,DD_RectChangeEventArgs)
extern "C"  void DD_CoordinateAxis_OnRectChange_m171157958 (DD_CoordinateAxis_t429882320 * __this, RuntimeObject * ___sender0, DD_RectChangeEventArgs_t2247361209 * ___e1, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_0);
		Rect_t2360479859  L_1 = RectTransform_get_rect_m574169965(L_0, /*hidden argument*/NULL);
		DD_CoordinateAxis_ChangeRect_m3879668204(__this, L_1, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Void DD_CoordinateAxis::OnZoom(System.Object,DD_ZoomEventArgs)
extern "C"  void DD_CoordinateAxis_OnZoom_m221497421 (DD_CoordinateAxis_t429882320 * __this, RuntimeObject * ___sender0, DD_ZoomEventArgs_t3840071228 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_OnZoom_m221497421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CoordinateScaleChangeHandler_t4226256743 * L_0 = __this->get_CoordinateScaleChangeEvent_49();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		CoordinateScaleChangeHandler_t4226256743 * L_1 = __this->get_CoordinateScaleChangeEvent_49();
		Rect_t2360479859 * L_2 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_3 = Rect_get_width_m3421484486(L_2, /*hidden argument*/NULL);
		Rect_t2360479859 * L_4 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_5 = Rect_get_height_m1358425599(L_4, /*hidden argument*/NULL);
		DD_CoordinateScaleChangeEventArgs_t3003819413 * L_6 = (DD_CoordinateScaleChangeEventArgs_t3003819413 *)il2cpp_codegen_object_new(DD_CoordinateScaleChangeEventArgs_t3003819413_il2cpp_TypeInfo_var);
		DD_CoordinateScaleChangeEventArgs__ctor_m1213094976(L_6, L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		CoordinateScaleChangeHandler_Invoke_m1072061776(L_1, __this, L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		DD_ZoomEventArgs_t3840071228 * L_7 = ___e1;
		NullCheck(L_7);
		float L_8 = DD_ZoomEventArgs_get_ZoomX_m973257817(L_7, /*hidden argument*/NULL);
		DD_ZoomEventArgs_t3840071228 * L_9 = ___e1;
		NullCheck(L_9);
		float L_10 = DD_ZoomEventArgs_get_ZoomY_m973257818(L_9, /*hidden argument*/NULL);
		DD_CoordinateAxis_ChangeScale_m4288399850(__this, L_8, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Void DD_CoordinateAxis::OnMove(System.Object,DD_MoveEventArgs)
extern "C"  void DD_CoordinateAxis_OnMove_m3651124455 (DD_CoordinateAxis_t429882320 * __this, RuntimeObject * ___sender0, DD_MoveEventArgs_t744120769 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_OnMove_m3651124455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		DD_MoveEventArgs_t744120769 * L_0 = ___e1;
		NullCheck(L_0);
		float L_1 = DD_MoveEventArgs_get_MoveX_m565828357(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		if ((!(((float)(1.0f)) > ((float)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		DD_MoveEventArgs_t744120769 * L_3 = ___e1;
		NullCheck(L_3);
		float L_4 = DD_MoveEventArgs_get_MoveY_m565828356(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = fabsf(L_4);
		if ((!(((float)(1.0f)) > ((float)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		DD_MoveEventArgs_t744120769 * L_6 = ___e1;
		NullCheck(L_6);
		float L_7 = DD_MoveEventArgs_get_MoveX_m565828357(L_6, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_8 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_8);
		Rect_t2360479859  L_9 = RectTransform_get_rect_m574169965(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = Rect_get_width_m3421484486((&V_1), /*hidden argument*/NULL);
		float L_11 = DD_CoordinateAxis_get_m_CoordinateAxisViewSizeX_m99901340(__this, /*hidden argument*/NULL);
		DD_MoveEventArgs_t744120769 * L_12 = ___e1;
		NullCheck(L_12);
		float L_13 = DD_MoveEventArgs_get_MoveY_m565828356(L_12, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_14);
		Rect_t2360479859  L_15 = RectTransform_get_rect_m574169965(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = Rect_get_height_m1358425599((&V_2), /*hidden argument*/NULL);
		float L_17 = DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804(__this, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)((float)((float)L_7/(float)L_10)), (float)L_11)), ((float)il2cpp_codegen_multiply((float)((float)((float)L_13/(float)L_16)), (float)L_17)), /*hidden argument*/NULL);
		float L_18 = (&V_0)->get_x_0();
		Vector2_t2156229523 * L_19 = __this->get_address_of_m_MoveSpeed_39();
		float L_20 = L_19->get_x_0();
		float L_21 = (&V_0)->get_y_1();
		Vector2_t2156229523 * L_22 = __this->get_address_of_m_MoveSpeed_39();
		float L_23 = L_22->get_y_1();
		Vector2__ctor_m3970636864((&V_3), ((float)il2cpp_codegen_multiply((float)((-L_18)), (float)L_20)), ((float)il2cpp_codegen_multiply((float)((-L_21)), (float)L_23)), /*hidden argument*/NULL);
		Rect_t2360479859 * L_24 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Rect_t2360479859 * L_25 = L_24;
		Vector2_t2156229523  L_26 = Rect_get_position_m2115952571(L_25, /*hidden argument*/NULL);
		Vector2_t2156229523  L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_28 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		Rect_set_position_m2358650747(L_25, L_28, /*hidden argument*/NULL);
		Rect_t2360479859 * L_29 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_30 = Rect_get_x_m3839990490(L_29, /*hidden argument*/NULL);
		if ((!(((float)(0.0f)) > ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		Rect_t2360479859 * L_31 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		Rect_set_x_m2352063068(L_31, (0.0f), /*hidden argument*/NULL);
	}

IL_00df:
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_32 = __this->get_CoordinateeZeroPointChangeEvent_50();
		if (!L_32)
		{
			goto IL_0102;
		}
	}
	{
		CoordinateZeroPointChangeHandler_t1056737497 * L_33 = __this->get_CoordinateeZeroPointChangeEvent_50();
		Vector2_t2156229523  L_34 = V_3;
		Vector2_t2156229523  L_35 = DD_CoordinateAxis_CoordinateToPixel_m2523793977(__this, L_34, /*hidden argument*/NULL);
		DD_CoordinateZeroPointChangeEventArgs_t1028912263 * L_36 = (DD_CoordinateZeroPointChangeEventArgs_t1028912263 *)il2cpp_codegen_object_new(DD_CoordinateZeroPointChangeEventArgs_t1028912263_il2cpp_TypeInfo_var);
		DD_CoordinateZeroPointChangeEventArgs__ctor_m3958412451(L_36, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		CoordinateZeroPointChangeHandler_Invoke_m158111206(L_33, __this, L_36, /*hidden argument*/NULL);
	}

IL_0102:
	{
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// UnityEngine.Vector2 DD_CoordinateAxis::CoordinateToPixel(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  DD_CoordinateAxis_CoordinateToPixel_m2523793977 (DD_CoordinateAxis_t429882320 * __this, Vector2_t2156229523  ___coordPoint0, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = (&___coordPoint0)->get_x_0();
		Rect_t2360479859  L_1 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Rect_get_width_m3421484486((&V_1), /*hidden argument*/NULL);
		float L_6 = (&___coordPoint0)->get_y_1();
		Rect_t2360479859  L_7 = DD_CoordinateAxis_get_m_CoordinateAxisRange_m2253008660(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Rect_get_height_m1358425599((&V_2), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_9 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_9);
		Rect_t2360479859  L_10 = RectTransform_get_rect_m574169965(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = Rect_get_height_m1358425599((&V_3), /*hidden argument*/NULL);
		Vector2_t2156229523  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m3970636864((&L_12), ((float)il2cpp_codegen_multiply((float)((float)((float)L_0/(float)L_2)), (float)L_5)), ((float)il2cpp_codegen_multiply((float)((float)((float)L_6/(float)L_8)), (float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 DD_CoordinateAxis::CalcMarkNum(System.Single,System.Single)
extern "C"  int32_t DD_CoordinateAxis_CalcMarkNum_m3463377333 (DD_CoordinateAxis_t429882320 * __this, float ___pixelPerMark0, float ___totalPixel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_CalcMarkNum_m3463377333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	{
		float L_0 = ___totalPixel1;
		float L_1 = ___pixelPerMark0;
		G_B1_0 = L_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		float L_2 = ___pixelPerMark0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)G_B3_1/(float)G_B3_0)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single DD_CoordinateAxis::CalcMarkLevel(System.Single[],System.Int32,System.Single)
extern "C"  float DD_CoordinateAxis_CalcMarkLevel_m756508287 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___makeTab0, int32_t ___markNum1, float ___viewMarkRange2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_CalcMarkLevel_m756508287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	{
		float L_0 = ___viewMarkRange2;
		int32_t L_1 = ___markNum1;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			G_B2_0 = L_0;
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = ___markNum1;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		V_0 = ((float)((float)G_B3_1/(float)(((float)((float)G_B3_0)))));
		V_1 = (1.0f);
		SingleU5BU5D_t1444911251* L_3 = ___makeTab0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		goto IL_0058;
	}

IL_0021:
	{
		float L_6 = V_0;
		float L_7 = V_2;
		float L_8 = V_1;
		if ((!(((float)L_6) < ((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8))))))
		{
			goto IL_0037;
		}
	}
	{
		float L_9 = V_1;
		V_1 = ((float)((float)L_9/(float)(10.0f)));
		goto IL_0058;
	}

IL_0037:
	{
		float L_10 = V_0;
		float L_11 = V_2;
		float L_12 = V_1;
		if ((!(((float)L_10) >= ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)(10.0f)))))))
		{
			goto IL_0053;
		}
	}
	{
		float L_13 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(10.0f)));
		goto IL_0058;
	}

IL_0053:
	{
		goto IL_0070;
	}

IL_0058:
	{
		float L_14 = V_0;
		float L_15 = V_2;
		float L_16 = V_1;
		if ((((float)L_14) < ((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))))
		{
			goto IL_0021;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = V_2;
		float L_19 = V_1;
		if ((((float)L_17) >= ((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), (float)(10.0f))))))
		{
			goto IL_0021;
		}
	}

IL_0070:
	{
		float L_20 = V_0;
		float L_21 = V_1;
		V_0 = ((float)((float)L_20/(float)L_21));
		V_3 = 1;
		goto IL_009a;
	}

IL_007b:
	{
		float L_22 = V_2;
		float L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_24 = fabsf(((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)));
		SingleU5BU5D_t1444911251* L_25 = ___makeTab0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = V_0;
		float L_30 = fabsf(((float)il2cpp_codegen_subtract((float)L_28, (float)L_29)));
		if ((!(((float)L_24) > ((float)L_30))))
		{
			goto IL_0096;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_31 = ___makeTab0;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_2 = L_34;
	}

IL_0096:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_36 = V_3;
		SingleU5BU5D_t1444911251* L_37 = ___makeTab0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_007b;
		}
	}
	{
		float L_38 = V_2;
		float L_39 = V_1;
		return ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39));
	}
}
// System.Single DD_CoordinateAxis::CeilingFormat(System.Single,System.Single)
extern "C"  float DD_CoordinateAxis_CeilingFormat_m1213804367 (DD_CoordinateAxis_t429882320 * __this, float ___markLevel0, float ___Val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_CeilingFormat_m1213804367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___Val1;
		float L_1 = ___markLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)L_0/(float)L_1)), /*hidden argument*/NULL);
		float L_3 = ___markLevel0;
		return ((float)il2cpp_codegen_multiply((float)(((float)((float)L_2))), (float)L_3));
	}
}
// System.Single[] DD_CoordinateAxis::CalcMarkVals(System.Single,System.Single,System.Single)
extern "C"  SingleU5BU5D_t1444911251* DD_CoordinateAxis_CalcMarkVals_m2490842168 (DD_CoordinateAxis_t429882320 * __this, float ___markLevel0, float ___startViewMarkVal1, float ___endViewMarkVal2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_CalcMarkVals_m2490842168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t1444911251* V_0 = NULL;
	List_1_t2869341516 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		List_1_t2869341516 * L_0 = (List_1_t2869341516 *)il2cpp_codegen_object_new(List_1_t2869341516_il2cpp_TypeInfo_var);
		List_1__ctor_m3152364487(L_0, /*hidden argument*/List_1__ctor_m3152364487_RuntimeMethod_var);
		V_1 = L_0;
		float L_1 = ___markLevel0;
		float L_2 = ___startViewMarkVal1;
		float L_3 = DD_CoordinateAxis_CeilingFormat_m1213804367(__this, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_001f;
	}

IL_0014:
	{
		List_1_t2869341516 * L_4 = V_1;
		float L_5 = V_2;
		NullCheck(L_4);
		List_1_Add_m2024781851(L_4, L_5, /*hidden argument*/List_1_Add_m2024781851_RuntimeMethod_var);
		float L_6 = V_2;
		float L_7 = ___markLevel0;
		V_2 = ((float)il2cpp_codegen_add((float)L_6, (float)L_7));
	}

IL_001f:
	{
		float L_8 = V_2;
		float L_9 = ___endViewMarkVal2;
		if ((((float)L_8) < ((float)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t2869341516 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m4125879936(L_10, /*hidden argument*/List_1_get_Count_m4125879936_RuntimeMethod_var);
		V_0 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_11));
		List_1_t2869341516 * L_12 = V_1;
		SingleU5BU5D_t1444911251* L_13 = V_0;
		NullCheck(L_12);
		List_1_CopyTo_m3400312413(L_12, L_13, /*hidden argument*/List_1_CopyTo_m3400312413_RuntimeMethod_var);
		SingleU5BU5D_t1444911251* L_14 = V_0;
		return L_14;
	}
}
// System.Single DD_CoordinateAxis::MarkValToPixel(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float DD_CoordinateAxis_MarkValToPixel_m4045507908 (DD_CoordinateAxis_t429882320 * __this, float ___markVal0, float ___startViewMarkVal1, float ___endViewMarkVal2, float ___stratCoordPixelVal3, float ___endCoordPixelVal4, const RuntimeMethod* method)
{
	{
		float L_0 = ___endViewMarkVal2;
		float L_1 = ___startViewMarkVal1;
		if ((((float)L_0) <= ((float)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___markVal0;
		float L_3 = ___startViewMarkVal1;
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0011;
		}
	}

IL_000e:
	{
		float L_4 = ___stratCoordPixelVal3;
		return L_4;
	}

IL_0011:
	{
		float L_5 = ___stratCoordPixelVal3;
		float L_6 = ___endCoordPixelVal4;
		float L_7 = ___stratCoordPixelVal3;
		float L_8 = ___markVal0;
		float L_9 = ___startViewMarkVal1;
		float L_10 = ___endViewMarkVal2;
		float L_11 = ___startViewMarkVal1;
		return ((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)), (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))/(float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_11))))))));
	}
}
// System.Single[] DD_CoordinateAxis::MarkValsToPixel(System.Single[],System.Single,System.Single,System.Single,System.Single)
extern "C"  SingleU5BU5D_t1444911251* DD_CoordinateAxis_MarkValsToPixel_m38343516 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___markVals0, float ___startViewMarkVal1, float ___endViewMarkVal2, float ___stratCoordPixelVal3, float ___endCoordPixelVal4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_MarkValsToPixel_m38343516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t1444911251* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_t1444911251* L_0 = ___markVals0;
		NullCheck(L_0);
		V_0 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_0026;
	}

IL_0010:
	{
		SingleU5BU5D_t1444911251* L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_t1444911251* L_3 = ___markVals0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = ___startViewMarkVal1;
		float L_8 = ___endViewMarkVal2;
		float L_9 = ___stratCoordPixelVal3;
		float L_10 = ___endCoordPixelVal4;
		float L_11 = DD_CoordinateAxis_MarkValToPixel_m4045507908(__this, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_13 = V_1;
		SingleU5BU5D_t1444911251* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_15 = V_0;
		return L_15;
	}
}
// System.Void DD_CoordinateAxis::SetMarkText(UnityEngine.GameObject,UnityEngine.Rect,System.String,System.Boolean)
extern "C"  void DD_CoordinateAxis_SetMarkText_m2026952380 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, Rect_t2360479859  ___rect1, String_t* ___str2, bool ___isEnable3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_SetMarkText_m2026952380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	Text_t1901882714 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___markText0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3128452393, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		GameObject_t1113636619 * L_2 = ___markText0;
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_0 = L_3;
		RectTransform_t3704657025 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral441292621, /*hidden argument*/NULL);
		return;
	}

IL_0035:
	{
		GameObject_t1113636619 * L_6 = ___markText0;
		NullCheck(L_6);
		Text_t1901882714 * L_7 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_6, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		V_1 = L_7;
		Text_t1901882714 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4112085541, /*hidden argument*/NULL);
		return;
	}

IL_0053:
	{
		RectTransform_t3704657025 * L_10 = V_0;
		Vector2_t2156229523  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3970636864((&L_11), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchorMin_m4230103102(L_10, L_11, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_12 = V_0;
		Vector2_t2156229523  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3970636864((&L_13), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMax_m2998668828(L_12, L_13, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = V_0;
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_pivot_m909387058(L_14, L_15, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_16 = V_0;
		Vector2_t2156229523  L_17 = Rect_get_position_m2115952571((&___rect1), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_anchoredPosition_m4126691837(L_16, L_17, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_18 = V_0;
		Vector2_t2156229523  L_19 = Rect_get_size_m477575021((&___rect1), /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_sizeDelta_m3462269772(L_18, L_19, /*hidden argument*/NULL);
		Text_t1901882714 * L_20 = V_1;
		String_t* L_21 = ___str2;
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_21);
		Text_t1901882714 * L_22 = V_1;
		bool L_23 = ___isEnable3;
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::ResetMarkText(UnityEngine.GameObject)
extern "C"  void DD_CoordinateAxis_ResetMarkText_m584850801 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___markText0;
		RectTransform_t3704657025 * L_1 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_1);
		Rect_t2360479859  L_2 = RectTransform_get_rect_m574169965(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_y_m1501338330((&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (0.0f), L_3, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_5 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_5);
		Rect_t2360479859  L_6 = RectTransform_get_rect_m574169965(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = Rect_get_x_m3839990490((&V_1), /*hidden argument*/NULL);
		float L_8 = __this->get_m_MinMarkTextHeight_46();
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), L_7, L_8, /*hidden argument*/NULL);
		Rect_t2360479859  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Rect__ctor_m1342368573((&L_10), L_4, L_9, /*hidden argument*/NULL);
		DD_CoordinateAxis_SetMarkText_m2026952380(__this, L_0, L_10, (String_t*)NULL, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::ResetAllMarkText(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void DD_CoordinateAxis_ResetAllMarkText_m1261228444 (DD_CoordinateAxis_t429882320 * __this, List_1_t2585711361 * ___markTexts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_ResetAllMarkText_m1261228444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t179987942  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2585711361 * L_0 = ___markTexts0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2468995601, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		List_1_t2585711361 * L_1 = ___markTexts0;
		NullCheck(L_1);
		Enumerator_t179987942  L_2 = List_1_GetEnumerator_m1750140655(L_1, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_001d:
		{
			GameObject_t1113636619 * L_3 = Enumerator_get_Current_m4179928398((&V_1), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_0 = L_3;
			GameObject_t1113636619 * L_4 = V_0;
			DD_CoordinateAxis_ResetMarkText_m584850801(__this, L_4, /*hidden argument*/NULL);
		}

IL_002c:
		{
			bool L_5 = Enumerator_MoveNext_m4286844348((&V_1), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_001d;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_1), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::DrawOneHorizontalMarkText(UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawOneHorizontalMarkText_m601722741 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___markText0, float ___markValY1, float ___pixelY2, Rect_t2360479859  ___coordinateRect3, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___markText0;
		float L_1 = ___pixelY2;
		float L_2 = __this->get_m_MinMarkTextHeight_46();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.0f), ((float)il2cpp_codegen_subtract((float)L_1, (float)((float)((float)L_2/(float)(2.0f))))), /*hidden argument*/NULL);
		float L_4 = Rect_get_x_m3839990490((&___coordinateRect3), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MinMarkTextHeight_46();
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), ((float)il2cpp_codegen_subtract((float)L_4, (float)(2.0f))), L_5, /*hidden argument*/NULL);
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m1342368573((&L_7), L_3, L_6, /*hidden argument*/NULL);
		String_t* L_8 = Single_ToString_m3947131094((&___markValY1), /*hidden argument*/NULL);
		DD_CoordinateAxis_SetMarkText_m2026952380(__this, L_0, L_7, L_8, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DD_CoordinateAxis::DrawHorizontalTextMark(System.Single[],System.Single[],UnityEngine.Rect)
extern "C"  RuntimeObject* DD_CoordinateAxis_DrawHorizontalTextMark_m743347802 (DD_CoordinateAxis_t429882320 * __this, SingleU5BU5D_t1444911251* ___marksVals0, SingleU5BU5D_t1444911251* ___marksPixel1, Rect_t2360479859  ___coordinateRect2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_DrawHorizontalTextMark_m743347802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * V_0 = NULL;
	{
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_0 = (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 *)il2cpp_codegen_object_new(U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697_il2cpp_TypeInfo_var);
		U3CDrawHorizontalTextMarkU3Ec__Iterator0__ctor_m2660273726(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_1 = V_0;
		SingleU5BU5D_t1444911251* L_2 = ___marksPixel1;
		NullCheck(L_1);
		L_1->set_marksPixel_0(L_2);
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_3 = V_0;
		SingleU5BU5D_t1444911251* L_4 = ___marksVals0;
		NullCheck(L_3);
		L_3->set_marksVals_1(L_4);
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_5 = V_0;
		Rect_t2360479859  L_6 = ___coordinateRect2;
		NullCheck(L_5);
		L_5->set_coordinateRect_2(L_6);
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_3(__this);
		U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * L_8 = V_0;
		return L_8;
	}
}
// System.Void DD_CoordinateAxis::DrawOneHorizontalMark(UnityEngine.UI.VertexHelper,System.Single,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawOneHorizontalMark_m4062962160 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, float ___pixelY1, Rect_t2360479859  ___coordinateRect2, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = Rect_get_x_m3839990490((&___coordinateRect2), /*hidden argument*/NULL);
		float L_1 = ___pixelY1;
		Vector2__ctor_m3970636864((&V_0), L_0, L_1, /*hidden argument*/NULL);
		float L_2 = Rect_get_x_m3839990490((&___coordinateRect2), /*hidden argument*/NULL);
		float L_3 = Rect_get_width_m3421484486((&___coordinateRect2), /*hidden argument*/NULL);
		float L_4 = ___pixelY1;
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), L_4, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_5 = ___vh0;
		Vector2_t2156229523  L_6 = V_0;
		Vector2_t2156229523  L_7 = V_1;
		Color_t2555686324  L_8 = __this->get_m_MarkColor_44();
		float L_9 = __this->get_m_RectThickness_42();
		DD_DrawGraphic_DrawHorizontalSegmet_m2379301707(__this, L_5, L_6, L_7, L_8, ((float)((float)L_9/(float)(2.0f))), (1.0f), (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::DrawHorizontalMark(UnityEngine.UI.VertexHelper,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawHorizontalMark_m4224214791 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, Rect_t2360479859  ___coordinateRect1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	SingleU5BU5D_t1444911251* V_2 = NULL;
	SingleU5BU5D_t1444911251* V_3 = NULL;
	int32_t V_4 = 0;
	{
		float L_0 = DD_CoordinateAxis_get_m_PixelPerMark_m2062035123(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_height_m1358425599((&___coordinateRect1), /*hidden argument*/NULL);
		int32_t L_2 = DD_CoordinateAxis_CalcMarkNum_m3463377333(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SingleU5BU5D_t1444911251* L_3 = __this->get_MarkIntervalTab_32();
		int32_t L_4 = V_0;
		float L_5 = DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804(__this, /*hidden argument*/NULL);
		float L_6 = DD_CoordinateAxis_CalcMarkLevel_m756508287(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = V_1;
		Rect_t2360479859 * L_8 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_9 = Rect_get_y_m1501338330(L_8, /*hidden argument*/NULL);
		Rect_t2360479859 * L_10 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_11 = Rect_get_y_m1501338330(L_10, /*hidden argument*/NULL);
		float L_12 = DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_13 = DD_CoordinateAxis_CalcMarkVals_m2490842168(__this, L_7, L_9, ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		V_2 = L_13;
		SingleU5BU5D_t1444911251* L_14 = V_2;
		Rect_t2360479859 * L_15 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_16 = Rect_get_y_m1501338330(L_15, /*hidden argument*/NULL);
		Rect_t2360479859 * L_17 = __this->get_address_of_m_CoordinateAxisViewRange_47();
		float L_18 = Rect_get_y_m1501338330(L_17, /*hidden argument*/NULL);
		float L_19 = DD_CoordinateAxis_get_m_CoordinateAxisViewSizeY_m99835804(__this, /*hidden argument*/NULL);
		float L_20 = Rect_get_y_m1501338330((&___coordinateRect1), /*hidden argument*/NULL);
		float L_21 = Rect_get_y_m1501338330((&___coordinateRect1), /*hidden argument*/NULL);
		float L_22 = Rect_get_height_m1358425599((&___coordinateRect1), /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_23 = DD_CoordinateAxis_MarkValsToPixel_m38343516(__this, L_14, L_16, ((float)il2cpp_codegen_add((float)L_18, (float)L_19)), L_20, ((float)il2cpp_codegen_add((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0090:
	{
		VertexHelper_t2453304189 * L_24 = ___vh0;
		SingleU5BU5D_t1444911251* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Rect_t2360479859  L_29 = ___coordinateRect1;
		DD_CoordinateAxis_DrawOneHorizontalMark_m4062962160(__this, L_24, L_28, L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_31 = V_4;
		SingleU5BU5D_t1444911251* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0090;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_33 = V_2;
		SingleU5BU5D_t1444911251* L_34 = V_3;
		Rect_t2360479859  L_35 = ___coordinateRect1;
		RuntimeObject* L_36 = DD_CoordinateAxis_DrawHorizontalTextMark_m743347802(__this, L_33, L_34, L_35, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::DrawRect(UnityEngine.UI.VertexHelper,UnityEngine.Rect)
extern "C"  void DD_CoordinateAxis_DrawRect_m297250249 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, Rect_t2360479859  ___rect1, const RuntimeMethod* method)
{
	{
		VertexHelper_t2453304189 * L_0 = ___vh0;
		Vector2_t2156229523  L_1 = Rect_get_position_m2115952571((&___rect1), /*hidden argument*/NULL);
		float L_2 = Rect_get_x_m3839990490((&___rect1), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1501338330((&___rect1), /*hidden argument*/NULL);
		float L_4 = Rect_get_height_m1358425599((&___rect1), /*hidden argument*/NULL);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), L_2, ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		float L_6 = Rect_get_x_m3839990490((&___rect1), /*hidden argument*/NULL);
		float L_7 = Rect_get_width_m3421484486((&___rect1), /*hidden argument*/NULL);
		float L_8 = Rect_get_y_m1501338330((&___rect1), /*hidden argument*/NULL);
		float L_9 = Rect_get_height_m1358425599((&___rect1), /*hidden argument*/NULL);
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), ((float)il2cpp_codegen_add((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		float L_11 = Rect_get_x_m3839990490((&___rect1), /*hidden argument*/NULL);
		float L_12 = Rect_get_width_m3421484486((&___rect1), /*hidden argument*/NULL);
		float L_13 = Rect_get_y_m1501338330((&___rect1), /*hidden argument*/NULL);
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), L_13, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = __this->get_m_BackgroundColor_43();
		DD_DrawGraphic_DrawRectang_m3222529442(__this, L_0, L_1, L_5, L_10, L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::DrawRectCoordinate(UnityEngine.UI.VertexHelper)
extern "C"  void DD_CoordinateAxis_DrawRectCoordinate_m180977402 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RectTransform_t3704657025 * L_0 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = RectTransform_get_offsetMin_m30225325(L_0, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = __this->get_m_CoordinateRectT_34();
		NullCheck(L_2);
		Rect_t2360479859  L_3 = RectTransform_get_rect_m574169965(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector2_t2156229523  L_4 = Rect_get_size_m477575021((&V_1), /*hidden argument*/NULL);
		Rect__ctor_m1342368573((&V_0), L_1, L_4, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_5 = ___vh0;
		Rect_t2360479859  L_6 = V_0;
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m499992824((&L_7), L_6, /*hidden argument*/NULL);
		DD_CoordinateAxis_DrawRect_m297250249(__this, L_5, L_7, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_8 = ___vh0;
		Rect_t2360479859  L_9 = V_0;
		DD_CoordinateAxis_DrawHorizontalMark_m4224214791(__this, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::FindExistMarkText(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void DD_CoordinateAxis_FindExistMarkText_m3497577672 (DD_CoordinateAxis_t429882320 * __this, List_1_t2585711361 * ___markTexts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_FindExistMarkText_m3497577672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006d;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var);
			String_t* L_7 = ((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->get_MARK_TEXT_BASE_NAME_28();
			IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
			bool L_8 = Regex_IsMatch_m3266004395(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_006d;
			}
		}

IL_0037:
		{
			Transform_t3600365921 * L_9 = V_0;
			NullCheck(L_9);
			GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var);
			String_t* L_11 = ((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->get_MARK_TEXT_BASE_NAME_28();
			List_1_t2585711361 * L_12 = __this->get_m_MarkHorizontalTexts_45();
			NullCheck(L_12);
			int32_t L_13 = List_1_get_Count_m2812834599(L_12, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
			int32_t L_14 = L_13;
			RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_16 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3031731813, L_11, L_15, /*hidden argument*/NULL);
			NullCheck(L_10);
			Object_set_name_m291480324(L_10, L_16, /*hidden argument*/NULL);
			List_1_t2585711361 * L_17 = ___markTexts0;
			Transform_t3600365921 * L_18 = V_0;
			NullCheck(L_18);
			GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			List_1_Add_m2765963565(L_17, L_19, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		}

IL_006d:
		{
			RuntimeObject* L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0011;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_1;
			RuntimeObject* L_23 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_23;
			if (!L_23)
			{
				goto IL_0090;
			}
		}

IL_008a:
		{
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		return;
	}
}
// System.Void DD_CoordinateAxis::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void DD_CoordinateAxis_OnPopulateMesh_m1094342533 (DD_CoordinateAxis_t429882320 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method)
{
	{
		VertexHelper_t2453304189 * L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_m627349662(L_0, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_1 = ___vh0;
		DD_CoordinateAxis_DrawRectCoordinate_m180977402(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_CoordinateAxis::InputPoint(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void DD_CoordinateAxis_InputPoint_m2834643303 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___line0, Vector2_t2156229523  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_InputPoint_m2834643303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___line0;
		NullCheck(L_0);
		DD_Lines_t487279985 * L_1 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_0, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		Vector2_t2156229523  L_2 = ___point1;
		Vector2_t2156229523  L_3 = DD_CoordinateAxis_CoordinateToPixel_m2523793977(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DD_Lines_AddPoint_m4130288851(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject DD_CoordinateAxis::AddLine(System.String)
extern "C"  GameObject_t1113636619 * DD_CoordinateAxis_AddLine_m1965996467 (DD_CoordinateAxis_t429882320 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_AddLine_m1965996467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NullReferenceException_t1023182353 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_m_LinesPreb_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Object_t631007953 * L_2 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1655495810, /*hidden argument*/NULL);
		__this->set_m_LinesPreb_35(((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_2, GameObject_t1113636619_il2cpp_TypeInfo_var)));
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		List_1_t2585711361 * L_3 = __this->get_m_LineList_37();
		GameObject_t1113636619 * L_4 = __this->get_m_LinesPreb_35();
		RectTransform_t3704657025 * L_5 = __this->get_m_CoordinateRectT_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m2765963565(L_3, L_6, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		goto IL_0060;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0047;
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.NullReferenceException)
		V_0 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3452614532, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = (GameObject_t1113636619 *)NULL;
		goto IL_0111;
	} // end catch (depth: 1)

IL_0060:
	{
		List_1_t2585711361 * L_9 = __this->get_m_LineList_37();
		List_1_t2585711361 * L_10 = __this->get_m_LineList_37();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m2812834599(L_10, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_t1113636619 * L_12 = List_1_get_Item_m3743125852(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_12);
		DD_Lines_t487279985 * L_13 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_12, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		L_13->set_lineName_35(L_14);
		List_1_t2585711361 * L_15 = __this->get_m_LineList_37();
		List_1_t2585711361 * L_16 = __this->get_m_LineList_37();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2812834599(L_16, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_t1113636619 * L_18 = List_1_get_Item_m3743125852(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_18);
		DD_Lines_t487279985 * L_19 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_18, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		Color_t2555686324  L_20 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		List_1_t2585711361 * L_21 = __this->get_m_LineList_37();
		List_1_t2585711361 * L_22 = __this->get_m_LineList_37();
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m2812834599(L_22, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		NullCheck(L_21);
		GameObject_t1113636619 * L_24 = List_1_get_Item_m3743125852(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var);
		String_t* L_25 = ((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->get_LINES_BASE_NAME_29();
		List_1_t2585711361 * L_26 = __this->get_m_LineList_37();
		List_1_t2585711361 * L_27 = __this->get_m_LineList_37();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m2812834599(L_27, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		NullCheck(L_26);
		GameObject_t1113636619 * L_29 = List_1_get_Item_m3743125852(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_29);
		DD_Lines_t487279985 * L_30 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_29, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		NullCheck(L_30);
		String_t* L_31 = L_30->get_lineName_35();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3031731813, L_25, L_31, /*hidden argument*/NULL);
		NullCheck(L_24);
		Object_set_name_m291480324(L_24, L_32, /*hidden argument*/NULL);
		List_1_t2585711361 * L_33 = __this->get_m_LineList_37();
		List_1_t2585711361 * L_34 = __this->get_m_LineList_37();
		NullCheck(L_34);
		int32_t L_35 = List_1_get_Count_m2812834599(L_34, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		NullCheck(L_33);
		GameObject_t1113636619 * L_36 = List_1_get_Item_m3743125852(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		return L_36;
	}

IL_0111:
	{
		GameObject_t1113636619 * L_37 = V_1;
		return L_37;
	}
}
// System.Boolean DD_CoordinateAxis::RemoveLine(UnityEngine.GameObject)
extern "C"  bool DD_CoordinateAxis_RemoveLine_m544503346 (DD_CoordinateAxis_t429882320 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis_RemoveLine_m544503346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = ___line0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		List_1_t2585711361 * L_2 = __this->get_m_LineList_37();
		GameObject_t1113636619 * L_3 = ___line0;
		NullCheck(L_2);
		bool L_4 = List_1_Remove_m4063777476(L_2, L_3, /*hidden argument*/List_1_Remove_m4063777476_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		GameObject_t1113636619 * L_5 = ___line0;
		NullCheck(L_5);
		DD_Lines_t487279985 * L_6 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_5, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		NullCheck(L_6);
		DD_Lines_Clear_m3572606507(L_6, /*hidden argument*/NULL);
		goto IL_0038;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.NullReferenceException)
		goto IL_0038;
	} // end catch (depth: 1)

IL_0038:
	{
		GameObject_t1113636619 * L_7 = ___line0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void DD_CoordinateAxis::.cctor()
extern "C"  void DD_CoordinateAxis__cctor_m1652641895 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateAxis__cctor_m1652641895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->set_MARK_TEXT_BASE_NAME_28(_stringLiteral1788476403);
		((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->set_LINES_BASE_NAME_29(_stringLiteral2792132920);
		((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->set_COORDINATE_RECT_30(_stringLiteral1245949248);
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
// System.Void DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::.ctor()
extern "C"  void U3CDrawHorizontalTextMarkU3Ec__Iterator0__ctor_m2660273726 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::MoveNext()
extern "C"  bool U3CDrawHorizontalTextMarkU3Ec__Iterator0_MoveNext_m1719159683 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDrawHorizontalTextMarkU3Ec__Iterator0_MoveNext_m1719159683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0143;
			}
		}
	}
	{
		goto IL_014a;
	}

IL_0025:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_2);
		bool L_3 = __this->get_U24disposing_5();
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0044:
	{
		goto IL_014c;
	}

IL_0049:
	{
		goto IL_00a5;
	}

IL_004e:
	{
		DD_CoordinateAxis_t429882320 * L_4 = __this->get_U24this_3();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = L_4->get_m_MarkTextPreb_36();
		DD_CoordinateAxis_t429882320 * L_6 = __this->get_U24this_3();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_1 = L_8;
		GameObject_t1113636619 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var);
		String_t* L_10 = ((DD_CoordinateAxis_t429882320_StaticFields*)il2cpp_codegen_static_fields_for(DD_CoordinateAxis_t429882320_il2cpp_TypeInfo_var))->get_MARK_TEXT_BASE_NAME_28();
		DD_CoordinateAxis_t429882320 * L_11 = __this->get_U24this_3();
		NullCheck(L_11);
		List_1_t2585711361 * L_12 = L_11->get_m_MarkHorizontalTexts_45();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m2812834599(L_12, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3031731813, L_10, L_15, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_set_name_m291480324(L_9, L_16, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_17 = __this->get_U24this_3();
		NullCheck(L_17);
		List_1_t2585711361 * L_18 = L_17->get_m_MarkHorizontalTexts_45();
		GameObject_t1113636619 * L_19 = V_1;
		NullCheck(L_18);
		List_1_Add_m2765963565(L_18, L_19, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_00a5:
	{
		SingleU5BU5D_t1444911251* L_20 = __this->get_marksPixel_0();
		NullCheck(L_20);
		DD_CoordinateAxis_t429882320 * L_21 = __this->get_U24this_3();
		NullCheck(L_21);
		List_1_t2585711361 * L_22 = L_21->get_m_MarkHorizontalTexts_45();
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m2812834599(L_22, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))))) > ((int32_t)L_23)))
		{
			goto IL_004e;
		}
	}
	{
		DD_CoordinateAxis_t429882320 * L_24 = __this->get_U24this_3();
		DD_CoordinateAxis_t429882320 * L_25 = __this->get_U24this_3();
		NullCheck(L_25);
		List_1_t2585711361 * L_26 = L_25->get_m_MarkHorizontalTexts_45();
		NullCheck(L_24);
		DD_CoordinateAxis_ResetAllMarkText_m1261228444(L_24, L_26, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0115;
	}

IL_00df:
	{
		DD_CoordinateAxis_t429882320 * L_27 = __this->get_U24this_3();
		DD_CoordinateAxis_t429882320 * L_28 = __this->get_U24this_3();
		NullCheck(L_28);
		List_1_t2585711361 * L_29 = L_28->get_m_MarkHorizontalTexts_45();
		int32_t L_30 = V_2;
		NullCheck(L_29);
		GameObject_t1113636619 * L_31 = List_1_get_Item_m3743125852(L_29, L_30, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		SingleU5BU5D_t1444911251* L_32 = __this->get_marksVals_1();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		SingleU5BU5D_t1444911251* L_36 = __this->get_marksPixel_0();
		int32_t L_37 = V_2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Rect_t2360479859  L_40 = __this->get_coordinateRect_2();
		NullCheck(L_27);
		DD_CoordinateAxis_DrawOneHorizontalMarkText_m601722741(L_27, L_31, L_35, L_39, L_40, /*hidden argument*/NULL);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_42 = V_2;
		SingleU5BU5D_t1444911251* L_43 = __this->get_marksPixel_0();
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_44 = 0;
		RuntimeObject * L_45 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_44);
		__this->set_U24current_4(L_45);
		bool L_46 = __this->get_U24disposing_5();
		if (L_46)
		{
			goto IL_013e;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_013e:
	{
		goto IL_014c;
	}

IL_0143:
	{
		__this->set_U24PC_6((-1));
	}

IL_014a:
	{
		return (bool)0;
	}

IL_014c:
	{
		return (bool)1;
	}
}
// System.Object DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDrawHorizontalTextMarkU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2933401659 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDrawHorizontalTextMarkU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2330549917 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::Dispose()
extern "C"  void U3CDrawHorizontalTextMarkU3Ec__Iterator0_Dispose_m826922893 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void DD_CoordinateAxis/<DrawHorizontalTextMark>c__Iterator0::Reset()
extern "C"  void U3CDrawHorizontalTextMarkU3Ec__Iterator0_Reset_m438578605 (U3CDrawHorizontalTextMarkU3Ec__Iterator0_t2314951697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDrawHorizontalTextMarkU3Ec__Iterator0_Reset_m438578605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CDrawHorizontalTextMarkU3Ec__Iterator0_Reset_m438578605_RuntimeMethod_var);
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
// System.Void DD_CoordinateAxis/CoordinateRectChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateRectChangeHandler__ctor_m1256279052 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_CoordinateAxis/CoordinateRectChangeHandler::Invoke(System.Object,DD_CoordinateRectChangeEventArgs)
extern "C"  void CoordinateRectChangeHandler_Invoke_m4285264990 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject * ___sender0, DD_CoordinateRectChangeEventArgs_t641796680 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CoordinateRectChangeHandler_Invoke_m4285264990((CoordinateRectChangeHandler_t1701308220 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_CoordinateRectChangeEventArgs_t641796680 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_CoordinateRectChangeEventArgs_t641796680 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_CoordinateAxis/CoordinateRectChangeHandler::BeginInvoke(System.Object,DD_CoordinateRectChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CoordinateRectChangeHandler_BeginInvoke_m3782746184 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject * ___sender0, DD_CoordinateRectChangeEventArgs_t641796680 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_CoordinateAxis/CoordinateRectChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CoordinateRectChangeHandler_EndInvoke_m3020274570 (CoordinateRectChangeHandler_t1701308220 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_CoordinateAxis/CoordinateScaleChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateScaleChangeHandler__ctor_m730809343 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_CoordinateAxis/CoordinateScaleChangeHandler::Invoke(System.Object,DD_CoordinateScaleChangeEventArgs)
extern "C"  void CoordinateScaleChangeHandler_Invoke_m1072061776 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject * ___sender0, DD_CoordinateScaleChangeEventArgs_t3003819413 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CoordinateScaleChangeHandler_Invoke_m1072061776((CoordinateScaleChangeHandler_t4226256743 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_CoordinateScaleChangeEventArgs_t3003819413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_CoordinateScaleChangeEventArgs_t3003819413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_CoordinateAxis/CoordinateScaleChangeHandler::BeginInvoke(System.Object,DD_CoordinateScaleChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CoordinateScaleChangeHandler_BeginInvoke_m3923403277 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject * ___sender0, DD_CoordinateScaleChangeEventArgs_t3003819413 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_CoordinateAxis/CoordinateScaleChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CoordinateScaleChangeHandler_EndInvoke_m1773206910 (CoordinateScaleChangeHandler_t4226256743 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_CoordinateAxis/CoordinateZeroPointChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CoordinateZeroPointChangeHandler__ctor_m2983226949 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_CoordinateAxis/CoordinateZeroPointChangeHandler::Invoke(System.Object,DD_CoordinateZeroPointChangeEventArgs)
extern "C"  void CoordinateZeroPointChangeHandler_Invoke_m158111206 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject * ___sender0, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CoordinateZeroPointChangeHandler_Invoke_m158111206((CoordinateZeroPointChangeHandler_t1056737497 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_CoordinateZeroPointChangeEventArgs_t1028912263 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_CoordinateZeroPointChangeEventArgs_t1028912263 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_CoordinateAxis/CoordinateZeroPointChangeHandler::BeginInvoke(System.Object,DD_CoordinateZeroPointChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CoordinateZeroPointChangeHandler_BeginInvoke_m1566858707 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject * ___sender0, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_CoordinateAxis/CoordinateZeroPointChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CoordinateZeroPointChangeHandler_EndInvoke_m889417134 (CoordinateZeroPointChangeHandler_t1056737497 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_CoordinateRectChangeEventArgs::.ctor(UnityEngine.Rect)
extern "C"  void DD_CoordinateRectChangeEventArgs__ctor_m1632708520 (DD_CoordinateRectChangeEventArgs_t641796680 * __this, Rect_t2360479859  ___newRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateRectChangeEventArgs__ctor_m1632708520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		Rect_t2360479859  L_0 = ___newRect0;
		__this->set_viewRectInPixel_1(L_0);
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
// System.Void DD_CoordinateScaleChangeEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_CoordinateScaleChangeEventArgs__ctor_m1213094976 (DD_CoordinateScaleChangeEventArgs_t3003819413 * __this, float ___scaleX0, float ___scaleY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateScaleChangeEventArgs__ctor_m1213094976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		float L_0 = ___scaleX0;
		__this->set_scaleX_1(L_0);
		float L_1 = ___scaleY1;
		__this->set_scaleY_2(L_1);
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
// System.Void DD_CoordinateZeroPointChangeEventArgs::.ctor(UnityEngine.Vector2)
extern "C"  void DD_CoordinateZeroPointChangeEventArgs__ctor_m3958412451 (DD_CoordinateZeroPointChangeEventArgs_t1028912263 * __this, Vector2_t2156229523  ___zeroPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_CoordinateZeroPointChangeEventArgs__ctor_m3958412451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_0 = ___zeroPoint0;
		__this->set_zeroPoint_1(L_0);
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
// System.Void DD_DataDiagram::.ctor()
extern "C"  void DD_DataDiagram__ctor_m2746729603 (DD_DataDiagram_t1914326032 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (100.0f), (80.0f), /*hidden argument*/NULL);
		__this->set_MinRectSize_2(L_0);
		__this->set_maxLineNum_9(5);
		__this->set_m_MaxPointNum_10(((int32_t)65535));
		__this->set_m_CentimeterPerMark_11((1.0f));
		__this->set_m_CentimeterPerCoordUnitX_12((1.0f));
		__this->set_m_CentimeterPerCoordUnitY_13((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DataDiagram::add_RectChangeEvent(DD_DataDiagram/RectChangeHandler)
extern "C"  void DD_DataDiagram_add_RectChangeEvent_m1945500573 (DD_DataDiagram_t1914326032 * __this, RectChangeHandler_t1189589726 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_add_RectChangeEvent_m1945500573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectChangeHandler_t1189589726 * V_0 = NULL;
	RectChangeHandler_t1189589726 * V_1 = NULL;
	{
		RectChangeHandler_t1189589726 * L_0 = __this->get_RectChangeEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		RectChangeHandler_t1189589726 * L_1 = V_0;
		V_1 = L_1;
		RectChangeHandler_t1189589726 ** L_2 = __this->get_address_of_RectChangeEvent_5();
		RectChangeHandler_t1189589726 * L_3 = V_1;
		RectChangeHandler_t1189589726 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		RectChangeHandler_t1189589726 * L_6 = V_0;
		RectChangeHandler_t1189589726 * L_7 = InterlockedCompareExchangeImpl<RectChangeHandler_t1189589726 *>(L_2, ((RectChangeHandler_t1189589726 *)CastclassSealed((RuntimeObject*)L_5, RectChangeHandler_t1189589726_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		RectChangeHandler_t1189589726 * L_8 = V_0;
		RectChangeHandler_t1189589726 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RectChangeHandler_t1189589726 *)L_8) == ((RuntimeObject*)(RectChangeHandler_t1189589726 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::remove_RectChangeEvent(DD_DataDiagram/RectChangeHandler)
extern "C"  void DD_DataDiagram_remove_RectChangeEvent_m1832674967 (DD_DataDiagram_t1914326032 * __this, RectChangeHandler_t1189589726 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_remove_RectChangeEvent_m1832674967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectChangeHandler_t1189589726 * V_0 = NULL;
	RectChangeHandler_t1189589726 * V_1 = NULL;
	{
		RectChangeHandler_t1189589726 * L_0 = __this->get_RectChangeEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		RectChangeHandler_t1189589726 * L_1 = V_0;
		V_1 = L_1;
		RectChangeHandler_t1189589726 ** L_2 = __this->get_address_of_RectChangeEvent_5();
		RectChangeHandler_t1189589726 * L_3 = V_1;
		RectChangeHandler_t1189589726 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		RectChangeHandler_t1189589726 * L_6 = V_0;
		RectChangeHandler_t1189589726 * L_7 = InterlockedCompareExchangeImpl<RectChangeHandler_t1189589726 *>(L_2, ((RectChangeHandler_t1189589726 *)CastclassSealed((RuntimeObject*)L_5, RectChangeHandler_t1189589726_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		RectChangeHandler_t1189589726 * L_8 = V_0;
		RectChangeHandler_t1189589726 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RectChangeHandler_t1189589726 *)L_8) == ((RuntimeObject*)(RectChangeHandler_t1189589726 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::add_ZoomEvent(DD_DataDiagram/ZoomHandler)
extern "C"  void DD_DataDiagram_add_ZoomEvent_m4269353983 (DD_DataDiagram_t1914326032 * __this, ZoomHandler_t2822810846 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_add_ZoomEvent_m4269353983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ZoomHandler_t2822810846 * V_0 = NULL;
	ZoomHandler_t2822810846 * V_1 = NULL;
	{
		ZoomHandler_t2822810846 * L_0 = __this->get_ZoomEvent_6();
		V_0 = L_0;
	}

IL_0007:
	{
		ZoomHandler_t2822810846 * L_1 = V_0;
		V_1 = L_1;
		ZoomHandler_t2822810846 ** L_2 = __this->get_address_of_ZoomEvent_6();
		ZoomHandler_t2822810846 * L_3 = V_1;
		ZoomHandler_t2822810846 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		ZoomHandler_t2822810846 * L_6 = V_0;
		ZoomHandler_t2822810846 * L_7 = InterlockedCompareExchangeImpl<ZoomHandler_t2822810846 *>(L_2, ((ZoomHandler_t2822810846 *)CastclassSealed((RuntimeObject*)L_5, ZoomHandler_t2822810846_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ZoomHandler_t2822810846 * L_8 = V_0;
		ZoomHandler_t2822810846 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ZoomHandler_t2822810846 *)L_8) == ((RuntimeObject*)(ZoomHandler_t2822810846 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::remove_ZoomEvent(DD_DataDiagram/ZoomHandler)
extern "C"  void DD_DataDiagram_remove_ZoomEvent_m1488667568 (DD_DataDiagram_t1914326032 * __this, ZoomHandler_t2822810846 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_remove_ZoomEvent_m1488667568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ZoomHandler_t2822810846 * V_0 = NULL;
	ZoomHandler_t2822810846 * V_1 = NULL;
	{
		ZoomHandler_t2822810846 * L_0 = __this->get_ZoomEvent_6();
		V_0 = L_0;
	}

IL_0007:
	{
		ZoomHandler_t2822810846 * L_1 = V_0;
		V_1 = L_1;
		ZoomHandler_t2822810846 ** L_2 = __this->get_address_of_ZoomEvent_6();
		ZoomHandler_t2822810846 * L_3 = V_1;
		ZoomHandler_t2822810846 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		ZoomHandler_t2822810846 * L_6 = V_0;
		ZoomHandler_t2822810846 * L_7 = InterlockedCompareExchangeImpl<ZoomHandler_t2822810846 *>(L_2, ((ZoomHandler_t2822810846 *)CastclassSealed((RuntimeObject*)L_5, ZoomHandler_t2822810846_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ZoomHandler_t2822810846 * L_8 = V_0;
		ZoomHandler_t2822810846 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ZoomHandler_t2822810846 *)L_8) == ((RuntimeObject*)(ZoomHandler_t2822810846 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::add_MoveEvent(DD_DataDiagram/MoveHandler)
extern "C"  void DD_DataDiagram_add_MoveEvent_m2980893282 (DD_DataDiagram_t1914326032 * __this, MoveHandler_t3318770945 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_add_MoveEvent_m2980893282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveHandler_t3318770945 * V_0 = NULL;
	MoveHandler_t3318770945 * V_1 = NULL;
	{
		MoveHandler_t3318770945 * L_0 = __this->get_MoveEvent_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MoveHandler_t3318770945 * L_1 = V_0;
		V_1 = L_1;
		MoveHandler_t3318770945 ** L_2 = __this->get_address_of_MoveEvent_7();
		MoveHandler_t3318770945 * L_3 = V_1;
		MoveHandler_t3318770945 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MoveHandler_t3318770945 * L_6 = V_0;
		MoveHandler_t3318770945 * L_7 = InterlockedCompareExchangeImpl<MoveHandler_t3318770945 *>(L_2, ((MoveHandler_t3318770945 *)CastclassSealed((RuntimeObject*)L_5, MoveHandler_t3318770945_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MoveHandler_t3318770945 * L_8 = V_0;
		MoveHandler_t3318770945 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MoveHandler_t3318770945 *)L_8) == ((RuntimeObject*)(MoveHandler_t3318770945 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::remove_MoveEvent(DD_DataDiagram/MoveHandler)
extern "C"  void DD_DataDiagram_remove_MoveEvent_m2684636257 (DD_DataDiagram_t1914326032 * __this, MoveHandler_t3318770945 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_remove_MoveEvent_m2684636257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveHandler_t3318770945 * V_0 = NULL;
	MoveHandler_t3318770945 * V_1 = NULL;
	{
		MoveHandler_t3318770945 * L_0 = __this->get_MoveEvent_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MoveHandler_t3318770945 * L_1 = V_0;
		V_1 = L_1;
		MoveHandler_t3318770945 ** L_2 = __this->get_address_of_MoveEvent_7();
		MoveHandler_t3318770945 * L_3 = V_1;
		MoveHandler_t3318770945 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MoveHandler_t3318770945 * L_6 = V_0;
		MoveHandler_t3318770945 * L_7 = InterlockedCompareExchangeImpl<MoveHandler_t3318770945 *>(L_2, ((MoveHandler_t3318770945 *)CastclassSealed((RuntimeObject*)L_5, MoveHandler_t3318770945_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MoveHandler_t3318770945 * L_8 = V_0;
		MoveHandler_t3318770945 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MoveHandler_t3318770945 *)L_8) == ((RuntimeObject*)(MoveHandler_t3318770945 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::add_PreDestroyLineEvent(DD_DataDiagram/PreDestroyLineHandler)
extern "C"  void DD_DataDiagram_add_PreDestroyLineEvent_m3212590009 (DD_DataDiagram_t1914326032 * __this, PreDestroyLineHandler_t3782553210 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_add_PreDestroyLineEvent_m3212590009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PreDestroyLineHandler_t3782553210 * V_0 = NULL;
	PreDestroyLineHandler_t3782553210 * V_1 = NULL;
	{
		PreDestroyLineHandler_t3782553210 * L_0 = __this->get_PreDestroyLineEvent_8();
		V_0 = L_0;
	}

IL_0007:
	{
		PreDestroyLineHandler_t3782553210 * L_1 = V_0;
		V_1 = L_1;
		PreDestroyLineHandler_t3782553210 ** L_2 = __this->get_address_of_PreDestroyLineEvent_8();
		PreDestroyLineHandler_t3782553210 * L_3 = V_1;
		PreDestroyLineHandler_t3782553210 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PreDestroyLineHandler_t3782553210 * L_6 = V_0;
		PreDestroyLineHandler_t3782553210 * L_7 = InterlockedCompareExchangeImpl<PreDestroyLineHandler_t3782553210 *>(L_2, ((PreDestroyLineHandler_t3782553210 *)CastclassSealed((RuntimeObject*)L_5, PreDestroyLineHandler_t3782553210_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PreDestroyLineHandler_t3782553210 * L_8 = V_0;
		PreDestroyLineHandler_t3782553210 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PreDestroyLineHandler_t3782553210 *)L_8) == ((RuntimeObject*)(PreDestroyLineHandler_t3782553210 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DD_DataDiagram::remove_PreDestroyLineEvent(DD_DataDiagram/PreDestroyLineHandler)
extern "C"  void DD_DataDiagram_remove_PreDestroyLineEvent_m2154887576 (DD_DataDiagram_t1914326032 * __this, PreDestroyLineHandler_t3782553210 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_remove_PreDestroyLineEvent_m2154887576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PreDestroyLineHandler_t3782553210 * V_0 = NULL;
	PreDestroyLineHandler_t3782553210 * V_1 = NULL;
	{
		PreDestroyLineHandler_t3782553210 * L_0 = __this->get_PreDestroyLineEvent_8();
		V_0 = L_0;
	}

IL_0007:
	{
		PreDestroyLineHandler_t3782553210 * L_1 = V_0;
		V_1 = L_1;
		PreDestroyLineHandler_t3782553210 ** L_2 = __this->get_address_of_PreDestroyLineEvent_8();
		PreDestroyLineHandler_t3782553210 * L_3 = V_1;
		PreDestroyLineHandler_t3782553210 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PreDestroyLineHandler_t3782553210 * L_6 = V_0;
		PreDestroyLineHandler_t3782553210 * L_7 = InterlockedCompareExchangeImpl<PreDestroyLineHandler_t3782553210 *>(L_2, ((PreDestroyLineHandler_t3782553210 *)CastclassSealed((RuntimeObject*)L_5, PreDestroyLineHandler_t3782553210_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PreDestroyLineHandler_t3782553210 * L_8 = V_0;
		PreDestroyLineHandler_t3782553210 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PreDestroyLineHandler_t3782553210 *)L_8) == ((RuntimeObject*)(PreDestroyLineHandler_t3782553210 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Nullable`1<UnityEngine.Rect> DD_DataDiagram::get_rect()
extern "C"  Nullable_1_t4083041941  DD_DataDiagram_get_rect_m2617655701 (DD_DataDiagram_t1914326032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_get_rect_m2617655701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	Nullable_1_t4083041941  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_0 = L_1;
		RectTransform_t3704657025 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t4083041941 ));
		Nullable_1_t4083041941  L_4 = V_1;
		return L_4;
	}

IL_0022:
	{
		RectTransform_t3704657025 * L_5 = V_0;
		NullCheck(L_5);
		Rect_t2360479859  L_6 = RectTransform_get_rect_m574169965(L_5, /*hidden argument*/NULL);
		Nullable_1_t4083041941  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Nullable_1__ctor_m3860665987((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m3860665987_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void DD_DataDiagram::set_rect(System.Nullable`1<UnityEngine.Rect>)
extern "C"  void DD_DataDiagram_set_rect_m224390537 (DD_DataDiagram_t1914326032 * __this, Nullable_1_t4083041941  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_set_rect_m224390537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RectTransform_t3704657025 * V_5 = NULL;
	Rect_t2360479859  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Rect_t2360479859  L_0 = Nullable_1_get_Value_m904006957((&___value0), /*hidden argument*/Nullable_1_get_Value_m904006957_RuntimeMethod_var);
		V_0 = L_0;
		Vector2_t2156229523  L_1 = __this->get_MinRectSize_2();
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_0();
		float L_3 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		Vector2_t2156229523  L_4 = __this->get_MinRectSize_2();
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_0();
		Rect_set_width_m2963421158((&V_0), L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		Vector2_t2156229523  L_6 = __this->get_MinRectSize_2();
		V_3 = L_6;
		float L_7 = (&V_3)->get_y_1();
		float L_8 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0067;
		}
	}
	{
		Vector2_t2156229523  L_9 = __this->get_MinRectSize_2();
		V_4 = L_9;
		float L_10 = (&V_4)->get_y_1();
		Rect_set_height_m1625569324((&V_0), L_10, /*hidden argument*/NULL);
	}

IL_0067:
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_5 = L_12;
		RectTransform_t3704657025 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		RectTransform_t3704657025 * L_15 = V_5;
		Rect_t2360479859  L_16 = V_0;
		RectTransform_t3704657025 * L_17 = V_5;
		NullCheck(L_17);
		Vector2_t2156229523  L_18 = RectTransform_get_anchorMin_m2928307238(L_17, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_19 = V_5;
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = RectTransform_get_anchorMax_m2495270048(L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Transform_get_parent_m835071599(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_t3704657025 * L_23 = Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526(L_22, /*hidden argument*/Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526_RuntimeMethod_var);
		NullCheck(L_23);
		Rect_t2360479859  L_24 = RectTransform_get_rect_m574169965(L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		Vector2_t2156229523  L_25 = Rect_get_size_m477575021((&V_6), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_26 = V_5;
		NullCheck(L_26);
		Vector2_t2156229523  L_27 = RectTransform_get_pivot_m3425744470(L_26, /*hidden argument*/NULL);
		Vector2_t2156229523  L_28 = DD_CalcRectTransformHelper_CalcAnchorPosition_m3167313752(NULL /*static, unused*/, L_16, L_18, L_20, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_m4126691837(L_15, L_28, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_29 = V_5;
		Rect_t2360479859  L_30 = V_0;
		RectTransform_t3704657025 * L_31 = V_5;
		NullCheck(L_31);
		Vector2_t2156229523  L_32 = RectTransform_get_anchorMin_m2928307238(L_31, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_33 = V_5;
		NullCheck(L_33);
		Vector2_t2156229523  L_34 = RectTransform_get_anchorMax_m2495270048(L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_t3600365921 * L_36 = Transform_get_parent_m835071599(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		RectTransform_t3704657025 * L_37 = Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526(L_36, /*hidden argument*/Component_GetComponentInParent_TisRectTransform_t3704657025_m2685517526_RuntimeMethod_var);
		NullCheck(L_37);
		Rect_t2360479859  L_38 = RectTransform_get_rect_m574169965(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		Vector2_t2156229523  L_39 = Rect_get_size_m477575021((&V_7), /*hidden argument*/NULL);
		Vector2_t2156229523  L_40 = DD_CalcRectTransformHelper_CalcSizeDelta_m3831550858(NULL /*static, unused*/, L_30, L_32, L_34, L_39, /*hidden argument*/NULL);
		NullCheck(L_29);
		RectTransform_set_sizeDelta_m3462269772(L_29, L_40, /*hidden argument*/NULL);
		RectChangeHandler_t1189589726 * L_41 = __this->get_RectChangeEvent_5();
		if (!L_41)
		{
			goto IL_011e;
		}
	}
	{
		RectChangeHandler_t1189589726 * L_42 = __this->get_RectChangeEvent_5();
		Vector2_t2156229523  L_43 = Rect_get_size_m477575021((&V_0), /*hidden argument*/NULL);
		DD_RectChangeEventArgs_t2247361209 * L_44 = (DD_RectChangeEventArgs_t2247361209 *)il2cpp_codegen_object_new(DD_RectChangeEventArgs_t2247361209_il2cpp_TypeInfo_var);
		DD_RectChangeEventArgs__ctor_m3288943631(L_44, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		RectChangeHandler_Invoke_m2451727713(L_42, __this, L_44, /*hidden argument*/NULL);
	}

IL_011e:
	{
		return;
	}
}
// System.Void DD_DataDiagram::Awake()
extern "C"  void DD_DataDiagram_Awake_m481705388 (DD_DataDiagram_t1914326032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_Awake_m481705388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_CoordinateAxis_t429882320 * V_0 = NULL;
	DD_LineButtonsContent_t4224093008 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DD_CoordinateAxis_t429882320 * L_1 = Component_GetComponentInChildren_TisDD_CoordinateAxis_t429882320_m2661381029(L_0, /*hidden argument*/Component_GetComponentInChildren_TisDD_CoordinateAxis_t429882320_m2661381029_RuntimeMethod_var);
		V_0 = L_1;
		DD_CoordinateAxis_t429882320 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Object_t631007953 * L_4 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral4046463555, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_4, GameObject_t1113636619_il2cpp_TypeInfo_var)), L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		__this->set_m_CoordinateAxis_3(L_7);
		GameObject_t1113636619 * L_8 = __this->get_m_CoordinateAxis_3();
		NullCheck(L_8);
		Object_set_name_m291480324(L_8, _stringLiteral2217477577, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0052:
	{
		DD_CoordinateAxis_t429882320 * L_9 = V_0;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		__this->set_m_CoordinateAxis_3(L_10);
	}

IL_005e:
	{
		DD_LineButtonsContent_t4224093008 * L_11 = Component_GetComponentInChildren_TisDD_LineButtonsContent_t4224093008_m919528838(__this, /*hidden argument*/Component_GetComponentInChildren_TisDD_LineButtonsContent_t4224093008_m919528838_RuntimeMethod_var);
		V_1 = L_11;
		DD_LineButtonsContent_t4224093008 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3349126870, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		DD_LineButtonsContent_t4224093008 * L_15 = V_1;
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = L_16;
		V_2 = L_17;
		__this->set_lineButtonsContent_4(L_17);
		GameObject_t1113636619 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3349126870, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		return;
	}

IL_00ad:
	{
		return;
	}
}
// System.Void DD_DataDiagram::Start()
extern "C"  void DD_DataDiagram_Start_m3564126061 (DD_DataDiagram_t1914326032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_Start_m3564126061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NullReferenceException_t1023182353 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RectChangeHandler_t1189589726 * L_0 = __this->get_RectChangeEvent_5();
		if (!L_0)
		{
			goto IL_0045;
		}
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		RectChangeHandler_t1189589726 * L_1 = __this->get_RectChangeEvent_5();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_t2156229523  L_5 = Rect_get_size_m477575021((&V_0), /*hidden argument*/NULL);
		DD_RectChangeEventArgs_t2247361209 * L_6 = (DD_RectChangeEventArgs_t2247361209 *)il2cpp_codegen_object_new(DD_RectChangeEventArgs_t2247361209_il2cpp_TypeInfo_var);
		DD_RectChangeEventArgs__ctor_m3288943631(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectChangeHandler_Invoke_m2451727713(L_1, __this, L_6, /*hidden argument*/NULL);
		goto IL_0045;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.NullReferenceException)
		V_1 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		goto IL_0045;
	} // end catch (depth: 1)

IL_0045:
	{
		return;
	}
}
// System.Void DD_DataDiagram::Update()
extern "C"  void DD_DataDiagram_Update_m3138777955 (DD_DataDiagram_t1914326032 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DD_DataDiagram::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DD_DataDiagram_OnDrag_m4148333113 (DD_DataDiagram_t1914326032 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_OnDrag_m4148333113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		MoveHandler_t3318770945 * L_0 = __this->get_MoveEvent_7();
		PointerEventData_t3807901092 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = PointerEventData_get_delta_m1062010255(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_0();
		PointerEventData_t3807901092 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = PointerEventData_get_delta_m1062010255(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_y_1();
		DD_MoveEventArgs_t744120769 * L_7 = (DD_MoveEventArgs_t744120769 *)il2cpp_codegen_object_new(DD_MoveEventArgs_t744120769_il2cpp_TypeInfo_var);
		DD_MoveEventArgs__ctor_m1350353200(L_7, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		MoveHandler_Invoke_m385278750(L_0, __this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DataDiagram::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DD_DataDiagram_OnScroll_m932639022 (DD_DataDiagram_t1914326032 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_OnScroll_m932639022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		ZoomHandler_t2822810846 * L_1 = __this->get_ZoomEvent_6();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_scrollDelta_m230480732(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_1();
		DD_ZoomEventArgs_t3840071228 * L_5 = (DD_ZoomEventArgs_t3840071228 *)il2cpp_codegen_object_new(DD_ZoomEventArgs_t3840071228_il2cpp_TypeInfo_var);
		DD_ZoomEventArgs__ctor_m1841169722(L_5, ((-L_4)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		ZoomHandler_Invoke_m2574382048(L_1, __this, L_5, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		ZoomHandler_t2822810846 * L_7 = __this->get_ZoomEvent_6();
		PointerEventData_t3807901092 * L_8 = ___eventData0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = PointerEventData_get_scrollDelta_m230480732(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_y_1();
		DD_ZoomEventArgs_t3840071228 * L_11 = (DD_ZoomEventArgs_t3840071228 *)il2cpp_codegen_object_new(DD_ZoomEventArgs_t3840071228_il2cpp_TypeInfo_var);
		DD_ZoomEventArgs__ctor_m1841169722(L_11, (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		ZoomHandler_Invoke_m2574382048(L_7, __this, L_11, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0069:
	{
		ZoomHandler_t2822810846 * L_12 = __this->get_ZoomEvent_6();
		PointerEventData_t3807901092 * L_13 = ___eventData0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = PointerEventData_get_scrollDelta_m230480732(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_2)->get_y_1();
		PointerEventData_t3807901092 * L_16 = ___eventData0;
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = PointerEventData_get_scrollDelta_m230480732(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_y_1();
		DD_ZoomEventArgs_t3840071228 * L_19 = (DD_ZoomEventArgs_t3840071228 *)il2cpp_codegen_object_new(DD_ZoomEventArgs_t3840071228_il2cpp_TypeInfo_var);
		DD_ZoomEventArgs__ctor_m1841169722(L_19, ((-L_15)), ((-L_18)), /*hidden argument*/NULL);
		NullCheck(L_12);
		ZoomHandler_Invoke_m2574382048(L_12, __this, L_19, /*hidden argument*/NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Void DD_DataDiagram::SetLineButtonColor(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void DD_DataDiagram_SetLineButtonColor_m3856283616 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Color_t2555686324  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_SetLineButtonColor_m3856283616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_lineButtonsContent_4();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = Transform_GetEnumerator_m2717073726(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_4, Transform_t3600365921_il2cpp_TypeInfo_var));
			GameObject_t1113636619 * L_5 = ___line0;
			Transform_t3600365921 * L_6 = V_0;
			NullCheck(L_6);
			GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			DD_LineButton_t3694160087 * L_8 = GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(L_7, /*hidden argument*/GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var);
			NullCheck(L_8);
			GameObject_t1113636619 * L_9 = DD_LineButton_get_line_m714361528(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0053;
			}
		}

IL_003d:
		{
			Transform_t3600365921 * L_11 = V_0;
			NullCheck(L_11);
			GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			DD_LineButton_t3694160087 * L_13 = GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(L_12, /*hidden argument*/GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var);
			GameObject_t1113636619 * L_14 = ___line0;
			NullCheck(L_13);
			DD_LineButton_set_line_m227509176(L_13, L_14, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0063);
		}

IL_0053:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0016;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x77, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_1;
			RuntimeObject* L_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_18;
			if (!L_18)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		return;
	}
}
// System.Void DD_DataDiagram::SetLineColor(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void DD_DataDiagram_SetLineColor_m1551687332 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Color_t2555686324  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_SetLineColor_m1551687332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_Lines_t487279985 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___line0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		GameObject_t1113636619 * L_2 = ___line0;
		NullCheck(L_2);
		DD_Lines_t487279985 * L_3 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_2, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		V_0 = L_3;
		DD_Lines_t487279985 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_6 = ___line0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, L_7, _stringLiteral227628940, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		DD_Lines_t487279985 * L_9 = V_0;
		Color_t2555686324  L_10 = ___color1;
		NullCheck(L_9);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		GameObject_t1113636619 * L_11 = ___line0;
		Color_t2555686324  L_12 = ___color1;
		DD_DataDiagram_SetLineButtonColor_m3856283616(__this, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DD_DataDiagram::AddLineButton(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_AddLineButton_m1110170240 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_AddLineButton_m1110170240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_Lines_t487279985 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_lineButtonsContent_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3749277472, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0023:
	{
		GameObject_t1113636619 * L_3 = __this->get_lineButtonsContent_4();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Transform_get_childCount_m3145433196(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_maxLineNum_9();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		GameObject_t1113636619 * L_7 = ___line0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1979641446, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_005e:
	{
		GameObject_t1113636619 * L_10 = ___line0;
		NullCheck(L_10);
		DD_Lines_t487279985 * L_11 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_10, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		V_0 = L_11;
		DD_Lines_t487279985 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1692657584, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0083:
	{
		Object_t631007953 * L_15 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3381932808, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_lineButtonsContent_4();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_18 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_15, GameObject_t1113636619_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_1 = L_18;
		GameObject_t1113636619 * L_19 = V_1;
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1126391900, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_00c1:
	{
		GameObject_t1113636619 * L_22 = V_1;
		NullCheck(L_22);
		DD_LineButton_t3694160087 * L_23 = GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(L_22, /*hidden argument*/GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var);
		GameObject_t1113636619 * L_24 = ___line0;
		NullCheck(L_23);
		DD_LineButton_set_line_m227509176(L_23, L_24, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean DD_DataDiagram::DestroyLineButton(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_DestroyLineButton_m2656807380 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_DestroyLineButton_m2656807380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_lineButtonsContent_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3749277472, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0023:
	{
		GameObject_t1113636619 * L_3 = __this->get_lineButtonsContent_4();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = Transform_GetEnumerator_m2717073726(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008f;
		}

IL_0039:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_7, Transform_t3600365921_il2cpp_TypeInfo_var));
		}

IL_0045:
		try
		{ // begin try (depth: 2)
			{
				GameObject_t1113636619 * L_8 = ___line0;
				Transform_t3600365921 * L_9 = V_0;
				NullCheck(L_9);
				GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
				NullCheck(L_10);
				DD_LineButton_t3694160087 * L_11 = GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(L_10, /*hidden argument*/GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var);
				NullCheck(L_11);
				GameObject_t1113636619 * L_12 = DD_LineButton_get_line_m714361528(L_11, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
				bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
				if (!L_13)
				{
					goto IL_0082;
				}
			}

IL_0060:
			{
				Transform_t3600365921 * L_14 = V_0;
				NullCheck(L_14);
				GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
				NullCheck(L_15);
				DD_LineButton_t3694160087 * L_16 = GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882(L_15, /*hidden argument*/GameObject_GetComponent_TisDD_LineButton_t3694160087_m215492882_RuntimeMethod_var);
				NullCheck(L_16);
				DD_LineButton_DestroyLineButton_m767131855(L_16, /*hidden argument*/NULL);
				Transform_t3600365921 * L_17 = V_0;
				NullCheck(L_17);
				GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(L_17, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
				Object_Destroy_m565254235(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
				V_2 = (bool)1;
				IL2CPP_LEAVE(0xB5, FINALLY_009f);
			}

IL_0082:
			{
				goto IL_008f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0087;
			throw e;
		}

CATCH_0087:
		{ // begin catch(System.NullReferenceException)
			V_2 = (bool)0;
			IL2CPP_LEAVE(0xB5, FINALLY_009f);
		} // end catch (depth: 2)

IL_008f:
		{
			RuntimeObject* L_19 = V_1;
			NullCheck(L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0039;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_1;
			RuntimeObject* L_22 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_22;
			if (!L_22)
			{
				goto IL_00b2;
			}
		}

IL_00ac:
		{
			RuntimeObject* L_23 = V_3;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(159)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		return (bool)0;
	}

IL_00b5:
	{
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Void DD_DataDiagram::InputPoint(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void DD_DataDiagram_InputPoint_m1918161065 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, Vector2_t2156229523  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_InputPoint_m1918161065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_CoordinateAxis_t429882320 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_m_CoordinateAxis_3();
		NullCheck(L_0);
		DD_CoordinateAxis_t429882320 * L_1 = GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727(L_0, /*hidden argument*/GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727_RuntimeMethod_var);
		V_0 = L_1;
		DD_CoordinateAxis_t429882320 * L_2 = V_0;
		GameObject_t1113636619 * L_3 = ___line0;
		Vector2_t2156229523  L_4 = ___point1;
		NullCheck(L_2);
		DD_CoordinateAxis_InputPoint_m2834643303(L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject DD_DataDiagram::AddLine(System.String)
extern "C"  GameObject_t1113636619 * DD_DataDiagram_AddLine_m1232943402 (DD_DataDiagram_t1914326032 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_AddLine_m1232943402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_CoordinateAxis_t429882320 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_m_CoordinateAxis_3();
		NullCheck(L_0);
		DD_CoordinateAxis_t429882320 * L_1 = GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727(L_0, /*hidden argument*/GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727_RuntimeMethod_var);
		V_0 = L_1;
		DD_CoordinateAxis_t429882320 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = DD_CoordinateAxis_get_lineNum_m2664137645(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_maxLineNum_9();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0029;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral814603002, /*hidden argument*/NULL);
		return (GameObject_t1113636619 *)NULL;
	}

IL_0029:
	{
		DD_CoordinateAxis_t429882320 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = DD_CoordinateAxis_get_lineNum_m2664137645(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_lineButtonsContent_4();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = Transform_get_childCount_m3145433196(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_9)))
		{
			goto IL_004e;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral789587920, /*hidden argument*/NULL);
	}

IL_004e:
	{
		DD_CoordinateAxis_t429882320 * L_10 = V_0;
		String_t* L_11 = ___name0;
		NullCheck(L_10);
		GameObject_t1113636619 * L_12 = DD_CoordinateAxis_AddLine_m1965996467(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		GameObject_t1113636619 * L_13 = V_1;
		bool L_14 = DD_DataDiagram_AddLineButton_m1110170240(__this, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		DD_CoordinateAxis_t429882320 * L_15 = V_0;
		GameObject_t1113636619 * L_16 = V_1;
		NullCheck(L_15);
		bool L_17 = DD_CoordinateAxis_RemoveLine_m544503346(L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, L_18, _stringLiteral3884113879, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_0083:
	{
		V_1 = (GameObject_t1113636619 *)NULL;
	}

IL_0085:
	{
		GameObject_t1113636619 * L_20 = V_1;
		return L_20;
	}
}
// UnityEngine.GameObject DD_DataDiagram::AddLine(System.String,UnityEngine.Color)
extern "C"  GameObject_t1113636619 * DD_DataDiagram_AddLine_m2558080196 (DD_DataDiagram_t1914326032 * __this, String_t* ___name0, Color_t2555686324  ___color1, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		GameObject_t1113636619 * L_1 = DD_DataDiagram_AddLine_m1232943402(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		Color_t2555686324  L_3 = ___color1;
		DD_DataDiagram_SetLineColor_m1551687332(__this, L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean DD_DataDiagram::DestroyLine(UnityEngine.GameObject)
extern "C"  bool DD_DataDiagram_DestroyLine_m627531740 (DD_DataDiagram_t1914326032 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DataDiagram_DestroyLine_m627531740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PreDestroyLineHandler_t3782553210 * L_0 = __this->get_PreDestroyLineEvent_8();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		PreDestroyLineHandler_t3782553210 * L_1 = __this->get_PreDestroyLineEvent_8();
		GameObject_t1113636619 * L_2 = ___line0;
		DD_PreDestroyLineEventArgs_t3472178400 * L_3 = (DD_PreDestroyLineEventArgs_t3472178400 *)il2cpp_codegen_object_new(DD_PreDestroyLineEventArgs_t3472178400_il2cpp_TypeInfo_var);
		DD_PreDestroyLineEventArgs__ctor_m3223243980(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PreDestroyLineHandler_Invoke_m4216586513(L_1, __this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		GameObject_t1113636619 * L_4 = ___line0;
		bool L_5 = DD_DataDiagram_DestroyLineButton_m2656807380(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			GameObject_t1113636619 * L_6 = __this->get_m_CoordinateAxis_3();
			NullCheck(L_6);
			DD_CoordinateAxis_t429882320 * L_7 = GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727(L_6, /*hidden argument*/GameObject_GetComponent_TisDD_CoordinateAxis_t429882320_m1433609727_RuntimeMethod_var);
			GameObject_t1113636619 * L_8 = ___line0;
			NullCheck(L_7);
			bool L_9 = DD_CoordinateAxis_RemoveLine_m544503346(L_7, L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0048;
			}
		}

IL_0041:
		{
			V_0 = (bool)0;
			goto IL_0057;
		}

IL_0048:
		{
			goto IL_0055;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004d;
		throw e;
	}

CATCH_004d:
	{ // begin catch(System.NullReferenceException)
		V_0 = (bool)0;
		goto IL_0057;
	} // end catch (depth: 1)

IL_0055:
	{
		return (bool)1;
	}

IL_0057:
	{
		bool L_10 = V_0;
		return L_10;
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
// System.Void DD_DataDiagram/MoveHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MoveHandler__ctor_m801656797 (MoveHandler_t3318770945 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_DataDiagram/MoveHandler::Invoke(System.Object,DD_MoveEventArgs)
extern "C"  void MoveHandler_Invoke_m385278750 (MoveHandler_t3318770945 * __this, RuntimeObject * ___sender0, DD_MoveEventArgs_t744120769 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MoveHandler_Invoke_m385278750((MoveHandler_t3318770945 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_MoveEventArgs_t744120769 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_MoveEventArgs_t744120769 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_MoveEventArgs_t744120769 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_MoveEventArgs_t744120769 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_MoveEventArgs_t744120769 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_MoveEventArgs_t744120769 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_MoveEventArgs_t744120769 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_MoveEventArgs_t744120769 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_MoveEventArgs_t744120769 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_MoveEventArgs_t744120769 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_MoveEventArgs_t744120769 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_MoveEventArgs_t744120769 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_DataDiagram/MoveHandler::BeginInvoke(System.Object,DD_MoveEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MoveHandler_BeginInvoke_m4010808981 (MoveHandler_t3318770945 * __this, RuntimeObject * ___sender0, DD_MoveEventArgs_t744120769 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_DataDiagram/MoveHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MoveHandler_EndInvoke_m797612962 (MoveHandler_t3318770945 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_DataDiagram/PreDestroyLineHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PreDestroyLineHandler__ctor_m3458885197 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_DataDiagram/PreDestroyLineHandler::Invoke(System.Object,DD_PreDestroyLineEventArgs)
extern "C"  void PreDestroyLineHandler_Invoke_m4216586513 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject * ___sender0, DD_PreDestroyLineEventArgs_t3472178400 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PreDestroyLineHandler_Invoke_m4216586513((PreDestroyLineHandler_t3782553210 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_PreDestroyLineEventArgs_t3472178400 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_PreDestroyLineEventArgs_t3472178400 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_DataDiagram/PreDestroyLineHandler::BeginInvoke(System.Object,DD_PreDestroyLineEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PreDestroyLineHandler_BeginInvoke_m2104830788 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject * ___sender0, DD_PreDestroyLineEventArgs_t3472178400 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_DataDiagram/PreDestroyLineHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PreDestroyLineHandler_EndInvoke_m4234825217 (PreDestroyLineHandler_t3782553210 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_DataDiagram/RectChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RectChangeHandler__ctor_m2479521780 (RectChangeHandler_t1189589726 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_DataDiagram/RectChangeHandler::Invoke(System.Object,DD_RectChangeEventArgs)
extern "C"  void RectChangeHandler_Invoke_m2451727713 (RectChangeHandler_t1189589726 * __this, RuntimeObject * ___sender0, DD_RectChangeEventArgs_t2247361209 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		RectChangeHandler_Invoke_m2451727713((RectChangeHandler_t1189589726 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_RectChangeEventArgs_t2247361209 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_RectChangeEventArgs_t2247361209 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_RectChangeEventArgs_t2247361209 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_RectChangeEventArgs_t2247361209 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_RectChangeEventArgs_t2247361209 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_RectChangeEventArgs_t2247361209 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_RectChangeEventArgs_t2247361209 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_RectChangeEventArgs_t2247361209 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_RectChangeEventArgs_t2247361209 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_RectChangeEventArgs_t2247361209 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_RectChangeEventArgs_t2247361209 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_RectChangeEventArgs_t2247361209 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_DataDiagram/RectChangeHandler::BeginInvoke(System.Object,DD_RectChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* RectChangeHandler_BeginInvoke_m4263465721 (RectChangeHandler_t1189589726 * __this, RuntimeObject * ___sender0, DD_RectChangeEventArgs_t2247361209 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_DataDiagram/RectChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RectChangeHandler_EndInvoke_m3997059619 (RectChangeHandler_t1189589726 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_DataDiagram/ZoomHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ZoomHandler__ctor_m421747723 (ZoomHandler_t2822810846 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_DataDiagram/ZoomHandler::Invoke(System.Object,DD_ZoomEventArgs)
extern "C"  void ZoomHandler_Invoke_m2574382048 (ZoomHandler_t2822810846 * __this, RuntimeObject * ___sender0, DD_ZoomEventArgs_t3840071228 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ZoomHandler_Invoke_m2574382048((ZoomHandler_t2822810846 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, DD_ZoomEventArgs_t3840071228 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, DD_ZoomEventArgs_t3840071228 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, DD_ZoomEventArgs_t3840071228 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, DD_ZoomEventArgs_t3840071228 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, DD_ZoomEventArgs_t3840071228 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, DD_ZoomEventArgs_t3840071228 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, DD_ZoomEventArgs_t3840071228 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< DD_ZoomEventArgs_t3840071228 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< DD_ZoomEventArgs_t3840071228 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< DD_ZoomEventArgs_t3840071228 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< DD_ZoomEventArgs_t3840071228 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, DD_ZoomEventArgs_t3840071228 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_DataDiagram/ZoomHandler::BeginInvoke(System.Object,DD_ZoomEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ZoomHandler_BeginInvoke_m1232790792 (ZoomHandler_t2822810846 * __this, RuntimeObject * ___sender0, DD_ZoomEventArgs_t3840071228 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_DataDiagram/ZoomHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ZoomHandler_EndInvoke_m1934726329 (ZoomHandler_t2822810846 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_DragBar::.ctor()
extern "C"  void DD_DragBar__ctor_m1471016873 (DD_DragBar_t348422191 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DD_DragBar::get_canDrag()
extern "C"  bool DD_DragBar_get_canDrag_m1696965114 (DD_DragBar_t348422191 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DD_DragBar::set_canDrag(System.Boolean)
extern "C"  void DD_DragBar_set_canDrag_m2377542068 (DD_DragBar_t348422191 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DragBar_set_canDrag_m2377542068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LayoutElement_t1785403678 * V_0 = NULL;
	{
		LayoutElement_t1785403678 * L_0 = Component_GetComponent_TisLayoutElement_t1785403678_m847584320(__this, /*hidden argument*/Component_GetComponent_TisLayoutElement_t1785403678_m847584320_RuntimeMethod_var);
		V_0 = L_0;
		LayoutElement_t1785403678 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3138619933, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		LayoutElement_t1785403678 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< bool >::Invoke(28 /* System.Void UnityEngine.UI.LayoutElement::set_ignoreLayout(System.Boolean) */, L_6, (bool)0);
		goto IL_0055;
	}

IL_0042:
	{
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		LayoutElement_t1785403678 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< bool >::Invoke(28 /* System.Void UnityEngine.UI.LayoutElement::set_ignoreLayout(System.Boolean) */, L_8, (bool)1);
	}

IL_0055:
	{
		return;
	}
}
// System.Void DD_DragBar::Start()
extern "C"  void DD_DragBar_Start_m1232799281 (DD_DragBar_t348422191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DragBar_Start_m1232799281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_DataDiagram_t1914326032 * V_0 = NULL;
	{
		DD_DragBar_GetZoomButton_m2620346376(__this, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_0 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		V_0 = L_0;
		DD_DataDiagram_t1914326032 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral2266489269, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002a:
	{
		DD_DataDiagram_t1914326032 * L_4 = V_0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		__this->set_m_DataDiagram_3(L_5);
		GameObject_t1113636619 * L_6 = __this->get_m_DataDiagram_3();
		NullCheck(L_6);
		RectTransform_t3704657025 * L_7 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_m_DataDiagramRT_5(L_7);
		GameObject_t1113636619 * L_8 = __this->get_m_DataDiagram_3();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		__this->set_m_Parent_4((GameObject_t1113636619 *)NULL);
		goto IL_0089;
	}

IL_006e:
	{
		GameObject_t1113636619 * L_12 = __this->get_m_DataDiagram_3();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = Transform_get_parent_m835071599(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		__this->set_m_Parent_4(L_15);
	}

IL_0089:
	{
		GameObject_t1113636619 * L_16 = __this->get_m_Parent_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral4144371746, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return;
	}

IL_00ab:
	{
		GameObject_t1113636619 * L_19 = __this->get_m_Parent_4();
		NullCheck(L_19);
		Canvas_t3310196443 * L_20 = GameObject_GetComponent_TisCanvas_t3310196443_m1808013672(L_19, /*hidden argument*/GameObject_GetComponent_TisCanvas_t3310196443_m1808013672_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00cd;
		}
	}
	{
		DD_DragBar_set_canDrag_m2377542068(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cd:
	{
		DD_DragBar_set_canDrag_m2377542068(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		return;
	}
}
// System.Void DD_DragBar::GetZoomButton()
extern "C"  void DD_DragBar_GetZoomButton_m2620346376 (DD_DragBar_t348422191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DragBar_GetZoomButton_m2620346376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		DD_ZoomButton_t4256419273 * L_0 = __this->get_m_ZoomButton_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b5;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral182686531, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral113163412, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0039:
	{
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		DD_DataDiagram_t1914326032 * L_7 = GameObject_GetComponentInParent_TisDD_DataDiagram_t1914326032_m2168817592(L_6, /*hidden argument*/GameObject_GetComponentInParent_TisDD_DataDiagram_t1914326032_m2168817592_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral75001033, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}

IL_005b:
	{
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		DD_ZoomButton_t4256419273 * L_11 = GameObject_GetComponent_TisDD_ZoomButton_t4256419273_m417231604(L_10, /*hidden argument*/GameObject_GetComponent_TisDD_ZoomButton_t4256419273_m417231604_RuntimeMethod_var);
		__this->set_m_ZoomButton_2(L_11);
		DD_ZoomButton_t4256419273 * L_12 = __this->get_m_ZoomButton_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral436299043, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0089:
	{
		DD_ZoomButton_t4256419273 * L_15 = __this->get_m_ZoomButton_2();
		DD_ZoomButton_t4256419273 * L_16 = L_15;
		NullCheck(L_16);
		ZoomButtonClickHandle_t1498002863 * L_17 = L_16->get_ZoomButtonClickEvent_5();
		intptr_t L_18 = (intptr_t)DD_DragBar_OnCtrlButtonClick_m622583422_RuntimeMethod_var;
		ZoomButtonClickHandle_t1498002863 * L_19 = (ZoomButtonClickHandle_t1498002863 *)il2cpp_codegen_object_new(ZoomButtonClickHandle_t1498002863_il2cpp_TypeInfo_var);
		ZoomButtonClickHandle__ctor_m651100456(L_19, __this, L_18, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_20 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_ZoomButtonClickEvent_5(((ZoomButtonClickHandle_t1498002863 *)CastclassSealed((RuntimeObject*)L_20, ZoomButtonClickHandle_t1498002863_il2cpp_TypeInfo_var)));
		goto IL_00dc;
	}

IL_00b5:
	{
		DD_ZoomButton_t4256419273 * L_21 = __this->get_m_ZoomButton_2();
		DD_ZoomButton_t4256419273 * L_22 = L_21;
		NullCheck(L_22);
		ZoomButtonClickHandle_t1498002863 * L_23 = L_22->get_ZoomButtonClickEvent_5();
		intptr_t L_24 = (intptr_t)DD_DragBar_OnCtrlButtonClick_m622583422_RuntimeMethod_var;
		ZoomButtonClickHandle_t1498002863 * L_25 = (ZoomButtonClickHandle_t1498002863 *)il2cpp_codegen_object_new(ZoomButtonClickHandle_t1498002863_il2cpp_TypeInfo_var);
		ZoomButtonClickHandle__ctor_m651100456(L_25, __this, L_24, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_26 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_ZoomButtonClickEvent_5(((ZoomButtonClickHandle_t1498002863 *)CastclassSealed((RuntimeObject*)L_26, ZoomButtonClickHandle_t1498002863_il2cpp_TypeInfo_var)));
	}

IL_00dc:
	{
		return;
	}
}
// System.Void DD_DragBar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DD_DragBar_OnDrag_m3495462451 (DD_DragBar_t348422191 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DragBar_OnDrag_m3495462451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = __this->get_m_DataDiagramRT_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RectTransform_t3704657025 * L_2 = __this->get_m_DataDiagramRT_5();
		RectTransform_t3704657025 * L_3 = L_2;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = RectTransform_get_anchoredPosition_m1813443094(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = PointerEventData_get_delta_m1062010255(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4126691837(L_3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DragBar::OnCtrlButtonClick(System.Object,ZoomButtonClickEventArgs)
extern "C"  void DD_DragBar_OnCtrlButtonClick_m622583422 (DD_DragBar_t348422191 * __this, RuntimeObject * ___sender0, ZoomButtonClickEventArgs_t1487932623 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DragBar_OnCtrlButtonClick_m622583422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_DataDiagram_3();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_get_parent_m835071599(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1261950427, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		GameObject_t1113636619 * L_5 = __this->get_m_Parent_4();
		GameObject_t1113636619 * L_6 = __this->get_m_DataDiagram_3();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Transform_get_parent_m835071599(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		GameObject_t1113636619 * L_11 = __this->get_m_DataDiagram_3();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Transform_get_parent_m835071599(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
		__this->set_m_Parent_4(L_14);
		GameObject_t1113636619 * L_15 = __this->get_m_Parent_4();
		NullCheck(L_15);
		Canvas_t3310196443 * L_16 = GameObject_GetComponent_TisCanvas_t3310196443_m1808013672(L_15, /*hidden argument*/GameObject_GetComponent_TisCanvas_t3310196443_m1808013672_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		DD_DragBar_set_canDrag_m2377542068(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_008e:
	{
		DD_DragBar_set_canDrag_m2377542068(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0095:
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
// System.Void DD_DrawGraphic::.ctor()
extern "C"  void DD_DrawGraphic__ctor_m3591345486 (DD_DrawGraphic_t171377864 * __this, const RuntimeMethod* method)
{
	{
		MaskableGraphic__ctor_m3705055375(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 DD_DrawGraphic::IsPointHorizontalInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  int32_t DD_DrawGraphic_IsPointHorizontalInRect_m514319264 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method)
{
	{
		float L_0 = (&___p0)->get_x_0();
		float L_1 = Rect_get_x_m3839990490((&___rect1), /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		float L_2 = (&___p0)->get_x_0();
		float L_3 = Rect_get_x_m3839990490((&___rect1), /*hidden argument*/NULL);
		float L_4 = Rect_get_width_m3421484486((&___rect1), /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add((float)L_3, (float)L_4))))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Int32 DD_DrawGraphic::IsPointVerticalityInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  int32_t DD_DrawGraphic_IsPointVerticalityInRect_m7006515 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method)
{
	{
		float L_0 = (&___p0)->get_y_1();
		float L_1 = Rect_get_y_m1501338330((&___rect1), /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		float L_2 = (&___p0)->get_y_1();
		float L_3 = Rect_get_y_m1501338330((&___rect1), /*hidden argument*/NULL);
		float L_4 = Rect_get_height_m1358425599((&___rect1), /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add((float)L_3, (float)L_4))))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Nullable`1<UnityEngine.Vector2> DD_DrawGraphic::CalcHorizontalCutPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Nullable_1_t3878791605  DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p10, Vector2_t2156229523  ___p21, float ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (&___p21)->get_y_1();
		float L_1 = (&___p10)->get_y_1();
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		float L_2 = (&___p21)->get_x_0();
		float L_3 = (&___p21)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Nullable_1_t3878791605  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_m680077965((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m680077965_RuntimeMethod_var);
		return L_5;
	}

IL_002c:
	{
		float L_6 = ___y2;
		float L_7 = (&___p10)->get_y_1();
		float L_8 = (&___p21)->get_y_1();
		float L_9 = (&___p10)->get_y_1();
		float L_10 = (&___p21)->get_x_0();
		float L_11 = (&___p10)->get_x_0();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))/(float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_11))));
		float L_12 = (&___p10)->get_x_0();
		float L_13 = V_0;
		float L_14 = ___y2;
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), L_14, /*hidden argument*/NULL);
		Nullable_1_t3878791605  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Nullable_1__ctor_m680077965((&L_16), L_15, /*hidden argument*/Nullable_1__ctor_m680077965_RuntimeMethod_var);
		return L_16;
	}
}
// System.Int32 DD_DrawGraphic::AddHorizontalCutPoints(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32,System.Single)
extern "C"  int32_t DD_DrawGraphic_AddHorizontalCutPoints_m3228128323 (DD_DrawGraphic_t171377864 * __this, List_1_t3628304265 * ___points0, int32_t ___sn1, float ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_AddHorizontalCutPoints_m3228128323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3878791605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t3878791605  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t3878791605  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Nullable_1_t3878791605  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3878791605 ));
		Nullable_1_t3878791605  L_0 = V_1;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3878791605 ));
		Nullable_1_t3878791605  L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		int32_t L_2 = ___sn1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		List_1_t3628304265 * L_3 = ___points0;
		int32_t L_4 = ___sn1;
		NullCheck(L_3);
		Vector2_t2156229523  L_5 = List_1_get_Item_m1378751541(L_3, L_4, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		List_1_t3628304265 * L_6 = ___points0;
		int32_t L_7 = ___sn1;
		NullCheck(L_6);
		Vector2_t2156229523  L_8 = List_1_get_Item_m1378751541(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		float L_9 = ___y2;
		Nullable_1_t3878791605  L_10 = DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905(__this, L_5, L_8, L_9, /*hidden argument*/NULL);
		Nullable_1_t3878791605  L_11 = L_10;
		V_0 = L_11;
		V_1 = L_11;
		bool L_12 = Nullable_1_get_HasValue_m1317965445((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m1317965445_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		List_1_t3628304265 * L_13 = ___points0;
		int32_t L_14 = ___sn1;
		Vector2_t2156229523  L_15 = Nullable_1_get_Value_m963759207((&V_0), /*hidden argument*/Nullable_1_get_Value_m963759207_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Insert_m78231532(L_13, L_14, L_15, /*hidden argument*/List_1_Insert_m78231532_RuntimeMethod_var);
		int32_t L_16 = ___sn1;
		___sn1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = ___sn1;
		List_1_t3628304265 * L_19 = ___points0;
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m1202123918(L_19, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_00a3;
		}
	}
	{
		List_1_t3628304265 * L_21 = ___points0;
		int32_t L_22 = ___sn1;
		NullCheck(L_21);
		Vector2_t2156229523  L_23 = List_1_get_Item_m1378751541(L_21, L_22, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		List_1_t3628304265 * L_24 = ___points0;
		int32_t L_25 = ___sn1;
		NullCheck(L_24);
		Vector2_t2156229523  L_26 = List_1_get_Item_m1378751541(L_24, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		float L_27 = ___y2;
		Nullable_1_t3878791605  L_28 = DD_DrawGraphic_CalcHorizontalCutPoint_m3211384905(__this, L_23, L_26, L_27, /*hidden argument*/NULL);
		Nullable_1_t3878791605  L_29 = L_28;
		V_2 = L_29;
		V_4 = L_29;
		bool L_30 = Nullable_1_get_HasValue_m1317965445((&V_4), /*hidden argument*/Nullable_1_get_HasValue_m1317965445_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_00a3;
		}
	}
	{
		List_1_t3628304265 * L_31 = ___points0;
		int32_t L_32 = ___sn1;
		Vector2_t2156229523  L_33 = Nullable_1_get_Value_m963759207((&V_2), /*hidden argument*/Nullable_1_get_Value_m963759207_RuntimeMethod_var);
		NullCheck(L_31);
		List_1_Insert_m78231532(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), L_33, /*hidden argument*/List_1_Insert_m78231532_RuntimeMethod_var);
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a3:
	{
		int32_t L_35 = V_3;
		return L_35;
	}
}
// System.Void DD_DrawGraphic::HorizontalCut(System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Rect)
extern "C"  void DD_DrawGraphic_HorizontalCut_m1261275112 (DD_DrawGraphic_t171377864 * __this, List_1_t3628304265 * ___points0, Rect_t2360479859  ___range1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_HorizontalCut_m1261275112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_005f;
	}

IL_000b:
	{
		List_1_t3628304265 * L_0 = ___points0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Vector2_t2156229523  L_2 = List_1_get_Item_m1378751541(L_0, L_1, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		Rect_t2360479859  L_3 = ___range1;
		int32_t L_4 = DD_DrawGraphic_IsPointVerticalityInRect_m7006515(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t3628304265 * L_6 = ___points0;
		int32_t L_7 = V_1;
		float L_8 = Rect_get_y_m1501338330((&___range1), /*hidden argument*/NULL);
		float L_9 = Rect_get_height_m1358425599((&___range1), /*hidden argument*/NULL);
		int32_t L_10 = DD_DrawGraphic_AddHorizontalCutPoints_m3228128323(__this, L_6, L_7, ((float)il2cpp_codegen_add((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0055;
	}

IL_003e:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t3628304265 * L_12 = ___points0;
		int32_t L_13 = V_1;
		float L_14 = Rect_get_y_m1501338330((&___range1), /*hidden argument*/NULL);
		int32_t L_15 = DD_DrawGraphic_AddHorizontalCutPoints_m3228128323(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		V_2 = 0;
	}

IL_005f:
	{
		int32_t L_19 = V_1;
		List_1_t3628304265 * L_20 = ___points0;
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_m1202123918(L_20, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Boolean DD_DrawGraphic::IsPointInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  bool DD_DrawGraphic_IsPointInRect_m49578682 (DD_DrawGraphic_t171377864 * __this, Vector2_t2156229523  ___p0, Rect_t2360479859  ___rect1, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___p0;
		Rect_t2360479859  L_1 = ___rect1;
		int32_t L_2 = DD_DrawGraphic_IsPointHorizontalInRect_m514319264(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Vector2_t2156229523  L_3 = ___p0;
		Rect_t2360479859  L_4 = ___rect1;
		int32_t L_5 = DD_DrawGraphic_IsPointVerticalityInRect_m7006515(__this, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Void DD_DrawGraphic::DrawRectang(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
extern "C"  void DD_DrawGraphic_DrawRectang_m3222529442 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___point1st1, Vector2_t2156229523  ___point2nd2, Vector2_t2156229523  ___point3rd3, Vector2_t2156229523  ___point4th4, Color_t2555686324  ___color5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_DrawRectang_m3222529442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UIVertexU5BU5D_t1981460040* V_0 = NULL;
	{
		V_0 = ((UIVertexU5BU5D_t1981460040*)SZArrayNew(UIVertexU5BU5D_t1981460040_il2cpp_TypeInfo_var, (uint32_t)4));
		UIVertexU5BU5D_t1981460040* L_0 = V_0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = ___point1st1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_position_0(L_2);
		UIVertexU5BU5D_t1981460040* L_3 = V_0;
		NullCheck(L_3);
		Color_t2555686324  L_4 = ___color5;
		Color32_t2600501292  L_5 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_color_2(L_5);
		UIVertexU5BU5D_t1981460040* L_6 = V_0;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_uv0_3(L_7);
		UIVertexU5BU5D_t1981460040* L_8 = V_0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = ___point2nd2;
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_position_0(L_10);
		UIVertexU5BU5D_t1981460040* L_11 = V_0;
		NullCheck(L_11);
		Color_t2555686324  L_12 = ___color5;
		Color32_t2600501292  L_13 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_color_2(L_13);
		UIVertexU5BU5D_t1981460040* L_14 = V_0;
		NullCheck(L_14);
		Vector2_t2156229523  L_15 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_uv0_3(L_15);
		UIVertexU5BU5D_t1981460040* L_16 = V_0;
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = ___point3rd3;
		Vector3_t3722313464  L_18 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_position_0(L_18);
		UIVertexU5BU5D_t1981460040* L_19 = V_0;
		NullCheck(L_19);
		Color_t2555686324  L_20 = ___color5;
		Color32_t2600501292  L_21 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_color_2(L_21);
		UIVertexU5BU5D_t1981460040* L_22 = V_0;
		NullCheck(L_22);
		Vector2_t2156229523  L_23 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_uv0_3(L_23);
		UIVertexU5BU5D_t1981460040* L_24 = V_0;
		NullCheck(L_24);
		Vector2_t2156229523  L_25 = ___point4th4;
		Vector3_t3722313464  L_26 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_position_0(L_26);
		UIVertexU5BU5D_t1981460040* L_27 = V_0;
		NullCheck(L_27);
		Color_t2555686324  L_28 = ___color5;
		Color32_t2600501292  L_29 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_color_2(L_29);
		UIVertexU5BU5D_t1981460040* L_30 = V_0;
		NullCheck(L_30);
		Vector2_t2156229523  L_31 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_uv0_3(L_31);
		VertexHelper_t2453304189 * L_32 = ___vh0;
		UIVertexU5BU5D_t1981460040* L_33 = V_0;
		NullCheck(L_32);
		VertexHelper_AddUIVertexQuad_m4228725261(L_32, L_33, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DrawGraphic::DrawPoint(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawPoint_m1150834311 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___point1, Color_t2555686324  ___color2, float ___thickness3, float ___scaleX4, float ___scaleY5, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = (&___point1)->get_x_0();
		float L_1 = ___thickness3;
		float L_2 = ___scaleX4;
		float L_3 = (&___point1)->get_y_1();
		float L_4 = ___thickness3;
		float L_5 = ___scaleY5;
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_1/(float)(2.0f))))), (float)L_2)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)((float)((float)L_4/(float)(2.0f))))), (float)L_5)), /*hidden argument*/NULL);
		float L_6 = (&___point1)->get_x_0();
		float L_7 = ___thickness3;
		float L_8 = ___scaleX4;
		float L_9 = (&___point1)->get_y_1();
		float L_10 = ___thickness3;
		float L_11 = ___scaleY5;
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_6, (float)((float)((float)L_7/(float)(2.0f))))), (float)L_8)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_9, (float)((float)((float)L_10/(float)(2.0f))))), (float)L_11)), /*hidden argument*/NULL);
		float L_12 = (&___point1)->get_x_0();
		float L_13 = ___thickness3;
		float L_14 = ___scaleX4;
		float L_15 = (&___point1)->get_y_1();
		float L_16 = ___thickness3;
		float L_17 = ___scaleY5;
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)L_13/(float)(2.0f))))), (float)L_14)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_15, (float)((float)((float)L_16/(float)(2.0f))))), (float)L_17)), /*hidden argument*/NULL);
		float L_18 = (&___point1)->get_x_0();
		float L_19 = ___thickness3;
		float L_20 = ___scaleX4;
		float L_21 = (&___point1)->get_y_1();
		float L_22 = ___thickness3;
		float L_23 = ___scaleY5;
		Vector2__ctor_m3970636864((&V_3), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_18, (float)((float)((float)L_19/(float)(2.0f))))), (float)L_20)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)((float)((float)L_22/(float)(2.0f))))), (float)L_23)), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_24 = ___vh0;
		Vector2_t2156229523  L_25 = V_0;
		Vector2_t2156229523  L_26 = V_1;
		Vector2_t2156229523  L_27 = V_2;
		Vector2_t2156229523  L_28 = V_3;
		Color_t2555686324  L_29 = ___color2;
		DD_DrawGraphic_DrawRectang_m3222529442(__this, L_24, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DrawGraphic::DrawHorizontalSegmet(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawHorizontalSegmet_m2379301707 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___startPoint1, Vector2_t2156229523  ___endPoint2, Color_t2555686324  ___color3, float ___thickness4, float ___scaleX5, float ___scaleY6, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = (&___startPoint1)->get_x_0();
		float L_1 = ___scaleX5;
		float L_2 = (&___startPoint1)->get_y_1();
		float L_3 = ___scaleY6;
		float L_4 = ___thickness4;
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)((float)((float)L_4/(float)(2.0f))))), /*hidden argument*/NULL);
		float L_5 = (&___startPoint1)->get_x_0();
		float L_6 = ___scaleX5;
		float L_7 = (&___startPoint1)->get_y_1();
		float L_8 = ___scaleY6;
		float L_9 = ___thickness4;
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)((float)((float)L_9/(float)(2.0f))))), /*hidden argument*/NULL);
		float L_10 = (&___endPoint2)->get_x_0();
		float L_11 = ___scaleX5;
		float L_12 = (&___endPoint2)->get_y_1();
		float L_13 = ___scaleY6;
		float L_14 = ___thickness4;
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)((float)L_14/(float)(2.0f))))), /*hidden argument*/NULL);
		float L_15 = (&___endPoint2)->get_x_0();
		float L_16 = ___scaleX5;
		float L_17 = (&___endPoint2)->get_y_1();
		float L_18 = ___scaleY6;
		float L_19 = ___thickness4;
		Vector2__ctor_m3970636864((&V_3), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), (float)((float)((float)L_19/(float)(2.0f))))), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_20 = ___vh0;
		Vector2_t2156229523  L_21 = V_0;
		Vector2_t2156229523  L_22 = V_1;
		Vector2_t2156229523  L_23 = V_2;
		Vector2_t2156229523  L_24 = V_3;
		Color_t2555686324  L_25 = ___color3;
		DD_DrawGraphic_DrawRectang_m3222529442(__this, L_20, L_21, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DrawGraphic::DrawVerticalitySegmet(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawVerticalitySegmet_m676743645 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___startPoint1, Vector2_t2156229523  ___endPoint2, Color_t2555686324  ___color3, float ___thickness4, float ___scaleX5, float ___scaleY6, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = (&___startPoint1)->get_x_0();
		float L_1 = ___scaleX5;
		float L_2 = ___thickness4;
		float L_3 = (&___startPoint1)->get_y_1();
		float L_4 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)((float)L_2/(float)(2.0f))))), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		float L_5 = (&___endPoint2)->get_x_0();
		float L_6 = ___scaleX5;
		float L_7 = ___thickness4;
		float L_8 = (&___endPoint2)->get_y_1();
		float L_9 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)((float)((float)L_7/(float)(2.0f))))), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		float L_10 = (&___endPoint2)->get_x_0();
		float L_11 = ___scaleX5;
		float L_12 = ___thickness4;
		float L_13 = (&___endPoint2)->get_y_1();
		float L_14 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)((float)((float)L_12/(float)(2.0f))))), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		float L_15 = (&___startPoint1)->get_x_0();
		float L_16 = ___scaleX5;
		float L_17 = ___thickness4;
		float L_18 = (&___startPoint1)->get_y_1();
		float L_19 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_3), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)((float)((float)L_17/(float)(2.0f))))), ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_20 = ___vh0;
		Vector2_t2156229523  L_21 = V_0;
		Vector2_t2156229523  L_22 = V_1;
		Vector2_t2156229523  L_23 = V_2;
		Vector2_t2156229523  L_24 = V_3;
		Color_t2555686324  L_25 = ___color3;
		DD_DrawGraphic_DrawRectang_m3222529442(__this, L_20, L_21, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DrawGraphic::DrawHorizontalLine(UnityEngine.UI.VertexHelper,System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Color,System.Single)
extern "C"  void DD_DrawGraphic_DrawHorizontalLine_m2876544230 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, List_1_t3628304265 * ___points1, Color_t2555686324  ___color2, float ___thickness3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_DrawHorizontalLine_m2876544230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t3628304265 * L_0 = ___points1;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1202123918(L_0, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0014:
	{
		VertexHelper_t2453304189 * L_2 = ___vh0;
		List_1_t3628304265 * L_3 = ___points1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector2_t2156229523  L_5 = List_1_get_Item_m1378751541(L_3, L_4, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		List_1_t3628304265 * L_6 = ___points1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector2_t2156229523  L_8 = List_1_get_Item_m1378751541(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		Color_t2555686324  L_9 = ___color2;
		float L_10 = ___thickness3;
		DD_DrawGraphic_DrawHorizontalSegmet_m2379301707(__this, L_2, L_5, L_8, L_9, L_10, (1.0f), (1.0f), /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_12 = V_0;
		List_1_t3628304265 * L_13 = ___points1;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m1202123918(L_13, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void DD_DrawGraphic::DrawHorizontalLine(UnityEngine.UI.VertexHelper,System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Color,System.Single,UnityEngine.Rect)
extern "C"  void DD_DrawGraphic_DrawHorizontalLine_m3341806192 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, List_1_t3628304265 * ___points1, Color_t2555686324  ___color2, float ___thickness3, Rect_t2360479859  ___range4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_DrawHorizontalLine_m3341806192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t3628304265 * L_0 = ___points1;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1202123918(L_0, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		List_1_t3628304265 * L_2 = ___points1;
		Rect_t2360479859  L_3 = ___range4;
		DD_DrawGraphic_HorizontalCut_m1261275112(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_008d;
	}

IL_001d:
	{
		List_1_t3628304265 * L_4 = ___points1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t2156229523  L_6 = List_1_get_Item_m1378751541(L_4, L_5, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		Rect_t2360479859  L_7 = ___range4;
		bool L_8 = DD_DrawGraphic_IsPointInRect_m49578682(__this, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		List_1_t3628304265 * L_9 = ___points1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_m1260051643(L_9, L_10, /*hidden argument*/List_1_RemoveAt_m1260051643_RuntimeMethod_var);
		goto IL_008d;
	}

IL_003d:
	{
		List_1_t3628304265 * L_11 = ___points1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Vector2_t2156229523  L_13 = List_1_get_Item_m1378751541(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		Rect_t2360479859  L_14 = ___range4;
		bool L_15 = DD_DrawGraphic_IsPointInRect_m49578682(__this, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		List_1_t3628304265 * L_16 = ___points1;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		List_1_RemoveAt_m1260051643(L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m1260051643_RuntimeMethod_var);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_008d;
	}

IL_0065:
	{
		VertexHelper_t2453304189 * L_19 = ___vh0;
		List_1_t3628304265 * L_20 = ___points1;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Vector2_t2156229523  L_22 = List_1_get_Item_m1378751541(L_20, L_21, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		List_1_t3628304265 * L_23 = ___points1;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		Vector2_t2156229523  L_25 = List_1_get_Item_m1378751541(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		Color_t2555686324  L_26 = ___color2;
		float L_27 = ___thickness3;
		DD_DrawGraphic_DrawHorizontalSegmet_m2379301707(__this, L_19, L_22, L_25, L_26, L_27, (1.0f), (1.0f), /*hidden argument*/NULL);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_29 = V_0;
		List_1_t3628304265 * L_30 = ___points1;
		NullCheck(L_30);
		int32_t L_31 = List_1_get_Count_m1202123918(L_30, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void DD_DrawGraphic::DrawTriangle(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Single,System.Single,System.Single)
extern "C"  void DD_DrawGraphic_DrawTriangle_m1635085260 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___points1, Color_t2555686324  ___color2, float ___thickness3, float ___rotate4, float ___scaleX5, float ___scaleY6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_DrawGraphic_DrawTriangle_m1635085260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = ___thickness3;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_0/(float)(3.0f))), (float)(2.0f)));
		float L_1 = (&___points1)->get_x_0();
		float L_2 = ___rotate4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_2)));
		float L_4 = V_0;
		float L_5 = ___scaleX5;
		float L_6 = (&___points1)->get_y_1();
		float L_7 = ___rotate4;
		float L_8 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_7)));
		float L_9 = V_0;
		float L_10 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))), (float)L_5)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), (float)L_10)), /*hidden argument*/NULL);
		float L_11 = (&___points1)->get_x_0();
		float L_12 = ___rotate4;
		float L_13 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_add((float)L_12, (float)(120.0f))))));
		float L_14 = V_0;
		float L_15 = ___scaleX5;
		float L_16 = (&___points1)->get_y_1();
		float L_17 = ___rotate4;
		float L_18 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_add((float)L_17, (float)(120.0f))))));
		float L_19 = V_0;
		float L_20 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_2), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)))), (float)L_15)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)L_20)), /*hidden argument*/NULL);
		float L_21 = (&___points1)->get_x_0();
		float L_22 = ___rotate4;
		float L_23 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_add((float)L_22, (float)(240.0f))))));
		float L_24 = V_0;
		float L_25 = ___scaleX5;
		float L_26 = (&___points1)->get_y_1();
		float L_27 = ___rotate4;
		float L_28 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_add((float)L_27, (float)(240.0f))))));
		float L_29 = V_0;
		float L_30 = ___scaleY6;
		Vector2__ctor_m3970636864((&V_3), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)))), (float)L_25)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)))), (float)L_30)), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_31 = ___vh0;
		Vector2_t2156229523  L_32 = V_3;
		Vector2_t2156229523  L_33 = V_1;
		Vector2_t2156229523  L_34 = V_2;
		Vector2_t2156229523  L_35 = V_3;
		Color_t2555686324  L_36 = ___color2;
		DD_DrawGraphic_DrawRectang_m3222529442(__this, L_31, L_32, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_DrawGraphic::DrawRectFrame(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single)
extern "C"  void DD_DrawGraphic_DrawRectFrame_m2871317254 (DD_DrawGraphic_t171377864 * __this, VertexHelper_t2453304189 * ___vh0, Vector2_t2156229523  ___point1st1, Vector2_t2156229523  ___point2nd2, Vector2_t2156229523  ___point3rd3, Vector2_t2156229523  ___point4th4, Color_t2555686324  ___color5, float ___thickness6, const RuntimeMethod* method)
{
	{
		VertexHelper_t2453304189 * L_0 = ___vh0;
		Vector2_t2156229523  L_1 = ___point1st1;
		Vector2_t2156229523  L_2 = ___point2nd2;
		Color_t2555686324  L_3 = ___color5;
		float L_4 = ___thickness6;
		DD_DrawGraphic_DrawVerticalitySegmet_m676743645(__this, L_0, L_1, L_2, L_3, L_4, (1.0f), (1.0f), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_5 = ___vh0;
		Vector2_t2156229523  L_6 = ___point2nd2;
		Vector2_t2156229523  L_7 = ___point3rd3;
		Color_t2555686324  L_8 = ___color5;
		float L_9 = ___thickness6;
		DD_DrawGraphic_DrawHorizontalSegmet_m2379301707(__this, L_5, L_6, L_7, L_8, L_9, (1.0f), (1.0f), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_10 = ___vh0;
		Vector2_t2156229523  L_11 = ___point3rd3;
		Vector2_t2156229523  L_12 = ___point4th4;
		Color_t2555686324  L_13 = ___color5;
		float L_14 = ___thickness6;
		DD_DrawGraphic_DrawVerticalitySegmet_m676743645(__this, L_10, L_11, L_12, L_13, L_14, (1.0f), (1.0f), /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_15 = ___vh0;
		Vector2_t2156229523  L_16 = ___point4th4;
		Vector2_t2156229523  L_17 = ___point1st1;
		Color_t2555686324  L_18 = ___color5;
		float L_19 = ___thickness6;
		DD_DrawGraphic_DrawHorizontalSegmet_m2379301707(__this, L_15, L_16, L_17, L_18, L_19, (1.0f), (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Single DD_DrawGraphic::GetTriangleCentreDis(System.Single)
extern "C"  float DD_DrawGraphic_GetTriangleCentreDis_m3561148753 (RuntimeObject * __this /* static, unused */, float ___thickness0, const RuntimeMethod* method)
{
	{
		float L_0 = ___thickness0;
		return ((float)((float)L_0/(float)(3.0f)));
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
// System.Void DD_LineButton::.ctor()
extern "C"  void DD_LineButton__ctor_m1585078633 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject DD_LineButton::get_line()
extern "C"  GameObject_t1113636619 * DD_LineButton_get_line_m714361528 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Line_2();
		return L_0;
	}
}
// System.Void DD_LineButton::set_line(UnityEngine.GameObject)
extern "C"  void DD_LineButton_set_line_m227509176 (DD_LineButton_t3694160087 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_set_line_m227509176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_Lines_t487279985 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___value0;
		NullCheck(L_0);
		DD_Lines_t487279985 * L_1 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_0, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		V_0 = L_1;
		DD_Lines_t487279985 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral712896730, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		GameObject_t1113636619 * L_6 = ___value0;
		__this->set_m_Line_2(L_6);
		DD_Lines_t487279985 * L_7 = V_0;
		DD_LineButton_SetLineButton_m253669163(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButton::Start()
extern "C"  void DD_LineButton_Start_m1240203755 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DD_LineButton::Update()
extern "C"  void DD_LineButton_Update_m418733109 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DD_LineButton::SetLabel(DD_Lines)
extern "C"  void DD_LineButton_SetLabel_m1088355368 (DD_LineButton_t3694160087 * __this, DD_Lines_t487279985 * ___lines0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_SetLabel_m1088355368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Label_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_m_Label_3();
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}

IL_0027:
	{
		__this->set_m_Label_3((GameObject_t1113636619 *)NULL);
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		GameObject_t1113636619 * L_5 = __this->get_m_Label_3();
		NullCheck(L_5);
		Text_t1901882714 * L_6 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		DD_Lines_t487279985 * L_7 = ___lines0;
		NullCheck(L_7);
		DD_Lines_t487279985 * L_8 = Component_GetComponent_TisDD_Lines_t487279985_m1227823878(L_7, /*hidden argument*/Component_GetComponent_TisDD_Lines_t487279985_m1227823878_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->get_lineName_35();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		GameObject_t1113636619 * L_10 = __this->get_m_Label_3();
		NullCheck(L_10);
		Text_t1901882714 * L_11 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		DD_Lines_t487279985 * L_12 = ___lines0;
		NullCheck(L_12);
		DD_Lines_t487279985 * L_13 = Component_GetComponent_TisDD_Lines_t487279985_m1227823878(L_12, /*hidden argument*/Component_GetComponent_TisDD_Lines_t487279985_m1227823878_RuntimeMethod_var);
		NullCheck(L_13);
		Color_t2555686324  L_14 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		NullCheck(L_11);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_14);
		goto IL_0084;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		GameObject_t1113636619 * L_15 = __this->get_m_Label_3();
		NullCheck(L_15);
		Text_t1901882714 * L_16 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_15, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		Color_t2555686324  L_17 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		goto IL_0084;
	} // end catch (depth: 1)

IL_0084:
	{
		return;
	}
}
// System.Void DD_LineButton::SetLineButton(DD_Lines)
extern "C"  void DD_LineButton_SetLineButton_m253669163 (DD_LineButton_t3694160087 * __this, DD_Lines_t487279985 * ___lines0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_SetLineButton_m253669163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DD_Lines_t487279985 * L_0 = ___lines0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3132132153, L_2, /*hidden argument*/NULL);
		Object_set_name_m291480324(__this, L_3, /*hidden argument*/NULL);
		Image_t2670269651 * L_4 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		DD_Lines_t487279985 * L_5 = ___lines0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		NullCheck(L_4);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		DD_Lines_t487279985 * L_7 = ___lines0;
		DD_LineButton_SetLabel_m1088355368(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButton::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DD_LineButton_OnPointerEnter_m2681574627 (DD_LineButton_t3694160087 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_OnPointerEnter_m2681574627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DD_DataDiagram_t1914326032 * V_1 = NULL;
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t3360306849  L_1 = PointerEventData_get_pointerCurrentRaycast_m2627585223(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = RaycastResult_get_gameObject_m2570051527((&V_0), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		GameObject_t1113636619 * L_5 = __this->get_m_Label_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		DD_DataDiagram_t1914326032 * L_7 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		V_1 = L_7;
		DD_DataDiagram_t1914326032 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		GameObject_t1113636619 * L_10 = __this->get_m_Label_3();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_m381167889(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_m_Label_3();
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_18 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_18);
		Rect_t2360479859  L_19 = RectTransform_get_rect_m574169965(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = Rect_get_height_m1358425599((&V_2), /*hidden argument*/NULL);
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), (0.0f), ((float)((float)((-L_20))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_m3387557959(L_15, L_22, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_23 = __this->get_m_Label_3();
		NullCheck(L_23);
		GameObject_SetActive_m796801857(L_23, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButton::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void DD_LineButton_OnPointerExit_m3419846658 (DD_LineButton_t3694160087 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_OnPointerExit_m3419846658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Label_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		GameObject_t1113636619 * L_2 = __this->get_m_Label_3();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_m_Label_3();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButton::OnButtonClick()
extern "C"  void DD_LineButton_OnButtonClick_m2421686483 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_OnButtonClick_m2421686483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DD_Lines_t487279985 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)306), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		GameObject_t1113636619 * L_1 = __this->get_m_Line_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, _stringLiteral1069508859, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		GameObject_t1113636619 * L_5 = __this->get_m_Line_2();
		NullCheck(L_5);
		DD_Lines_t487279985 * L_6 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_5, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		V_0 = L_6;
		DD_Lines_t487279985 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, L_9, _stringLiteral2714217928, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0065:
	{
		DD_Lines_t487279985 * L_11 = V_0;
		DD_Lines_t487279985 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = DD_Lines_get_IsShow_m2025742090(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		DD_Lines_set_IsShow_m1100533921(L_11, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButton::OnButtonClickWithCtrl()
extern "C"  void DD_LineButton_OnButtonClickWithCtrl_m1370327621 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_OnButtonClickWithCtrl_m1370327621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)306), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DD_DataDiagram_t1914326032 * L_2 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(L_1, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		GameObject_t1113636619 * L_3 = __this->get_m_Line_2();
		NullCheck(L_2);
		DD_DataDiagram_DestroyLine_m627531740(L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.NullReferenceException)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral2066833209, /*hidden argument*/NULL);
		goto IL_003b;
	} // end catch (depth: 1)

IL_003b:
	{
		return;
	}
}
// System.Void DD_LineButton::DestroyLineButton()
extern "C"  void DD_LineButton_DestroyLineButton_m767131855 (DD_LineButton_t3694160087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_LineButton_DestroyLineButton_m767131855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Label_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_m_Label_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
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
// System.Void DD_LineButtonsContent::.ctor()
extern "C"  void DD_LineButtonsContent__ctor_m1613104162 (DD_LineButtonsContent_t4224093008 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_LineButtonsContent::Start()
extern "C"  void DD_LineButtonsContent_Start_m3471313148 (DD_LineButtonsContent_t4224093008 * __this, const RuntimeMethod* method)
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
// System.Void DD_Lines::.ctor()
extern "C"  void DD_Lines__ctor_m1789042529 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines__ctor_m1789042529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Thickness_28((5.0f));
		__this->set_m_IsShow_29((bool)1);
		__this->set_m_CurIsShow_30((bool)1);
		List_1_t3628304265 * L_0 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_0, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		__this->set_PointList_31(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_lineName_35(L_1);
		DD_DrawGraphic__ctor_m3591345486(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DD_Lines::get_Thickness()
extern "C"  float DD_Lines_get_Thickness_m2225897689 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Thickness_28();
		return L_0;
	}
}
// System.Void DD_Lines::set_Thickness(System.Single)
extern "C"  void DD_Lines_set_Thickness_m3495607861 (DD_Lines_t487279985 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Thickness_28(L_0);
		return;
	}
}
// System.Boolean DD_Lines::get_IsShow()
extern "C"  bool DD_Lines_get_IsShow_m2025742090 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsShow_29();
		return L_0;
	}
}
// System.Void DD_Lines::set_IsShow(System.Boolean)
extern "C"  void DD_Lines_set_IsShow_m1100533921 (DD_Lines_t487279985 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		bool L_1 = __this->get_m_IsShow_29();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
	}

IL_0012:
	{
		bool L_2 = ___value0;
		__this->set_m_IsShow_29(L_2);
		return;
	}
}
// System.Void DD_Lines::Awake()
extern "C"  void DD_Lines_Awake_m2825272864 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_Awake_m2825272864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	RectTransform_t3704657025 * V_1 = NULL;
	RectTransform_t3704657025 * V_2 = NULL;
	{
		DD_DataDiagram_t1914326032 * L_0 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		__this->set_m_DataDiagram_33(L_0);
		DD_DataDiagram_t1914326032 * L_1 = __this->get_m_DataDiagram_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral895737547, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		DD_CoordinateAxis_t429882320 * L_4 = Component_GetComponentInParent_TisDD_CoordinateAxis_t429882320_m2971502623(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_CoordinateAxis_t429882320_m2971502623_RuntimeMethod_var);
		__this->set_m_Coordinate_34(L_4);
		DD_CoordinateAxis_t429882320 * L_5 = __this->get_m_Coordinate_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3411623376, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_005a:
	{
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		GameObject_t1113636619 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3838294924, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_008c:
	{
		GameObject_t1113636619 * L_15 = V_0;
		NullCheck(L_15);
		RectTransform_t3704657025 * L_16 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_15, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_1 = L_16;
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t3704657025 * L_18 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_2 = L_18;
		RectTransform_t3704657025 * L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		RectTransform_t3704657025 * L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c7;
		}
	}

IL_00b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral711880226, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		RectTransform_t3704657025 * L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_25 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_anchorMin_m4230103102(L_24, L_25, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_26 = V_2;
		Vector2_t2156229523  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector2__ctor_m3970636864((&L_27), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMax_m2998668828(L_26, L_27, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_28 = V_2;
		Vector2_t2156229523  L_29 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		RectTransform_set_pivot_m909387058(L_28, L_29, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_30 = V_2;
		Vector2_t2156229523  L_31 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchoredPosition_m4126691837(L_30, L_31, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_32 = V_2;
		Vector2_t2156229523  L_33 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		RectTransform_set_sizeDelta_m3462269772(L_32, L_33, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_34 = __this->get_m_Coordinate_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_015e;
		}
	}
	{
		DD_CoordinateAxis_t429882320 * L_36 = __this->get_m_Coordinate_34();
		intptr_t L_37 = (intptr_t)DD_Lines_OnCoordinateRectChange_m1992004014_RuntimeMethod_var;
		CoordinateRectChangeHandler_t1701308220 * L_38 = (CoordinateRectChangeHandler_t1701308220 *)il2cpp_codegen_object_new(CoordinateRectChangeHandler_t1701308220_il2cpp_TypeInfo_var);
		CoordinateRectChangeHandler__ctor_m1256279052(L_38, __this, L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		DD_CoordinateAxis_add_CoordinateRectChangeEvent_m1520371892(L_36, L_38, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_39 = __this->get_m_Coordinate_34();
		intptr_t L_40 = (intptr_t)DD_Lines_OnCoordinateScaleChange_m2587648133_RuntimeMethod_var;
		CoordinateScaleChangeHandler_t4226256743 * L_41 = (CoordinateScaleChangeHandler_t4226256743 *)il2cpp_codegen_object_new(CoordinateScaleChangeHandler_t4226256743_il2cpp_TypeInfo_var);
		CoordinateScaleChangeHandler__ctor_m730809343(L_41, __this, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		DD_CoordinateAxis_add_CoordinateScaleChangeEvent_m3318966535(L_39, L_41, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_42 = __this->get_m_Coordinate_34();
		intptr_t L_43 = (intptr_t)DD_Lines_OnCoordinateZeroPointChange_m3969185588_RuntimeMethod_var;
		CoordinateZeroPointChangeHandler_t1056737497 * L_44 = (CoordinateZeroPointChangeHandler_t1056737497 *)il2cpp_codegen_object_new(CoordinateZeroPointChangeHandler_t1056737497_il2cpp_TypeInfo_var);
		CoordinateZeroPointChangeHandler__ctor_m2983226949(L_44, __this, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		DD_CoordinateAxis_add_CoordinateeZeroPointChangeEvent_m666871371(L_42, L_44, /*hidden argument*/NULL);
	}

IL_015e:
	{
		return;
	}
}
// System.Void DD_Lines::Update()
extern "C"  void DD_Lines_Update_m3515201475 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_CurIsShow_30();
		bool L_1 = __this->get_m_IsShow_29();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = __this->get_m_IsShow_29();
		__this->set_m_CurIsShow_30(L_2);
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Single DD_Lines::ScaleX(System.Single)
extern "C"  float DD_Lines_ScaleX_m932027563 (DD_Lines_t487279985 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_ScaleX_m932027563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DD_CoordinateAxis_t429882320 * L_0 = __this->get_m_Coordinate_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3411623376, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_3 = ___x0;
		return L_3;
	}

IL_0023:
	{
		float L_4 = ___x0;
		DD_CoordinateAxis_t429882320 * L_5 = __this->get_m_Coordinate_34();
		NullCheck(L_5);
		Rect_t2360479859  L_6 = DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		return ((float)((float)L_4/(float)L_7));
	}
}
// System.Single DD_Lines::ScaleY(System.Single)
extern "C"  float DD_Lines_ScaleY_m386833625 (DD_Lines_t487279985 * __this, float ___y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_ScaleY_m386833625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DD_CoordinateAxis_t429882320 * L_0 = __this->get_m_Coordinate_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3411623376, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_3 = ___y0;
		return L_3;
	}

IL_0023:
	{
		float L_4 = ___y0;
		DD_CoordinateAxis_t429882320 * L_5 = __this->get_m_Coordinate_34();
		NullCheck(L_5);
		Rect_t2360479859  L_6 = DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		return ((float)((float)L_4/(float)L_7));
	}
}
// System.Int32 DD_Lines::GetStartPointSN(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Single)
extern "C"  int32_t DD_Lines_GetStartPointSN_m1766374616 (DD_Lines_t487279985 * __this, List_1_t3628304265 * ___points0, float ___startX1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_GetStartPointSN_m1766374616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t1222580846  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = (0.0f);
		List_1_t3628304265 * L_0 = ___points0;
		NullCheck(L_0);
		Enumerator_t1222580846  L_1 = List_1_GetEnumerator_m809843680(L_0, /*hidden argument*/List_1_GetEnumerator_m809843680_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0014:
		{
			Vector2_t2156229523  L_2 = Enumerator_get_Current_m2598000980((&V_3), /*hidden argument*/Enumerator_get_Current_m2598000980_RuntimeMethod_var);
			V_2 = L_2;
			float L_3 = V_1;
			float L_4 = ___startX1;
			if ((!(((float)L_3) > ((float)L_4))))
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			List_1_t3628304265 * L_5 = ___points0;
			Vector2_t2156229523  L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = List_1_IndexOf_m698163972(L_5, L_6, /*hidden argument*/List_1_IndexOf_m698163972_RuntimeMethod_var);
			V_4 = L_7;
			IL2CPP_LEAVE(0x60, FINALLY_0050);
		}

IL_0031:
		{
			float L_8 = V_1;
			float L_9 = (&V_2)->get_x_0();
			V_1 = ((float)il2cpp_codegen_add((float)L_8, (float)L_9));
			int32_t L_10 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_003f:
		{
			bool L_11 = Enumerator_MoveNext_m4079852040((&V_3), /*hidden argument*/Enumerator_MoveNext_m4079852040_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0014;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2367629053((&V_3), /*hidden argument*/Enumerator_Dispose_m2367629053_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0060:
	{
		int32_t L_13 = V_4;
		return L_13;
	}
}
// System.Void DD_Lines::OnCoordinateRectChange(System.Object,DD_CoordinateRectChangeEventArgs)
extern "C"  void DD_Lines_OnCoordinateRectChange_m1992004014 (DD_Lines_t487279985 * __this, RuntimeObject * ___sender0, DD_CoordinateRectChangeEventArgs_t641796680 * ___e1, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Void DD_Lines::OnCoordinateScaleChange(System.Object,DD_CoordinateScaleChangeEventArgs)
extern "C"  void DD_Lines_OnCoordinateScaleChange_m2587648133 (DD_Lines_t487279985 * __this, RuntimeObject * ___sender0, DD_CoordinateScaleChangeEventArgs_t3003819413 * ___e1, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Void DD_Lines::OnCoordinateZeroPointChange(System.Object,DD_CoordinateZeroPointChangeEventArgs)
extern "C"  void DD_Lines_OnCoordinateZeroPointChange_m3969185588 (DD_Lines_t487279985 * __this, RuntimeObject * ___sender0, DD_CoordinateZeroPointChangeEventArgs_t1028912263 * ___e1, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		List_1_t3628304265 * L_0 = __this->get_PointList_31();
		DD_CoordinateAxis_t429882320 * L_1 = __this->get_m_Coordinate_34();
		NullCheck(L_1);
		Rect_t2360479859  L_2 = DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_x_m3839990490((&V_0), /*hidden argument*/NULL);
		int32_t L_4 = DD_Lines_GetStartPointSN_m1766374616(__this, L_0, L_3, /*hidden argument*/NULL);
		__this->set_CurStartPointSN_32(L_4);
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Void DD_Lines::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void DD_Lines_OnPopulateMesh_m612044765 (DD_Lines_t487279985 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_OnPopulateMesh_m612044765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t3628304265 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Rect_t2360479859  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Rect_t2360479859  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Rect_t2360479859  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		VertexHelper_t2453304189 * L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_m627349662(L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_m_IsShow_29();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		V_0 = (0.0f);
		List_1_t3628304265 * L_2 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_2, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = __this->get_CurStartPointSN_32();
		V_2 = L_3;
		goto IL_00bb;
	}

IL_002a:
	{
		List_1_t3628304265 * L_4 = V_1;
		float L_5 = V_0;
		float L_6 = DD_Lines_ScaleX_m932027563(__this, L_5, /*hidden argument*/NULL);
		List_1_t3628304265 * L_7 = __this->get_PointList_31();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Vector2_t2156229523  L_9 = List_1_get_Item_m1378751541(L_7, L_8, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		V_3 = L_9;
		float L_10 = (&V_3)->get_y_1();
		DD_CoordinateAxis_t429882320 * L_11 = __this->get_m_Coordinate_34();
		NullCheck(L_11);
		Rect_t2360479859  L_12 = DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = Rect_get_y_m1501338330((&V_4), /*hidden argument*/NULL);
		float L_14 = DD_Lines_ScaleY_m386833625(__this, ((float)il2cpp_codegen_subtract((float)L_10, (float)L_13)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), L_6, L_14, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_m2298161512(L_4, L_15, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		float L_16 = V_0;
		List_1_t3628304265 * L_17 = __this->get_PointList_31();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector2_t2156229523  L_19 = List_1_get_Item_m1378751541(L_17, L_18, /*hidden argument*/List_1_get_Item_m1378751541_RuntimeMethod_var);
		V_5 = L_19;
		float L_20 = (&V_5)->get_x_0();
		V_0 = ((float)il2cpp_codegen_add((float)L_16, (float)L_20));
		float L_21 = V_0;
		DD_CoordinateAxis_t429882320 * L_22 = __this->get_m_Coordinate_34();
		NullCheck(L_22);
		Rect_t2360479859  L_23 = DD_CoordinateAxis_get_coordinateAxisViewRangeInPixel_m1727480723(L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		float L_24 = Rect_get_width_m3421484486((&V_6), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_25 = Graphic_get_rectTransform_m1167152468(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rect_t2360479859  L_26 = RectTransform_get_rect_m574169965(L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		float L_27 = Rect_get_width_m3421484486((&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_21) >= ((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_27))))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00cc;
	}

IL_00b7:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00bb:
	{
		int32_t L_29 = V_2;
		List_1_t3628304265 * L_30 = __this->get_PointList_31();
		NullCheck(L_30);
		int32_t L_31 = List_1_get_Count_m1202123918(L_30, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_002a;
		}
	}

IL_00cc:
	{
		VertexHelper_t2453304189 * L_32 = ___vh0;
		List_1_t3628304265 * L_33 = V_1;
		Color_t2555686324  L_34 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		float L_35 = __this->get_m_Thickness_28();
		RectTransform_t3704657025 * L_36 = Graphic_get_rectTransform_m1167152468(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Rect_t2360479859  L_37 = RectTransform_get_rect_m574169965(L_36, /*hidden argument*/NULL);
		V_8 = L_37;
		float L_38 = Rect_get_width_m3421484486((&V_8), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_39 = Graphic_get_rectTransform_m1167152468(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Rect_t2360479859  L_40 = RectTransform_get_rect_m574169965(L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		float L_41 = Rect_get_height_m1358425599((&V_9), /*hidden argument*/NULL);
		Rect_t2360479859  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Rect__ctor_m2614021312((&L_42), (0.0f), (0.0f), L_38, L_41, /*hidden argument*/NULL);
		DD_DrawGraphic_DrawHorizontalLine_m3341806192(__this, L_32, L_33, L_34, L_35, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_Lines::AddPoint(UnityEngine.Vector2)
extern "C"  void DD_Lines_AddPoint_m4130288851 (DD_Lines_t487279985 * __this, Vector2_t2156229523  ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_AddPoint_m4130288851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3628304265 * L_0 = __this->get_PointList_31();
		float L_1 = (&___point0)->get_x_0();
		float L_2 = (&___point0)->get_y_1();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Insert_m78231532(L_0, 0, L_3, /*hidden argument*/List_1_Insert_m78231532_RuntimeMethod_var);
		goto IL_0051;
	}

IL_0024:
	{
		List_1_t3628304265 * L_4 = __this->get_PointList_31();
		List_1_t3628304265 * L_5 = __this->get_PointList_31();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m1202123918(L_5, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_RemoveAt_m1260051643(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m1260051643_RuntimeMethod_var);
		List_1_t3628304265 * L_7 = __this->get_PointList_31();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m1202123918(L_7, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0051:
	{
		List_1_t3628304265 * L_11 = __this->get_PointList_31();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m1202123918(L_11, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		DD_DataDiagram_t1914326032 * L_13 = __this->get_m_DataDiagram_33();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_MaxPointNum_10();
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateGeometry() */, __this);
		return;
	}
}
// System.Boolean DD_Lines::Clear()
extern "C"  bool DD_Lines_Clear_m3572606507 (DD_Lines_t487279985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_Lines_Clear_m3572606507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NullReferenceException_t1023182353 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DD_CoordinateAxis_t429882320 * L_0 = __this->get_m_Coordinate_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral3411623376, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		DD_CoordinateAxis_t429882320 * L_3 = __this->get_m_Coordinate_34();
		intptr_t L_4 = (intptr_t)DD_Lines_OnCoordinateRectChange_m1992004014_RuntimeMethod_var;
		CoordinateRectChangeHandler_t1701308220 * L_5 = (CoordinateRectChangeHandler_t1701308220 *)il2cpp_codegen_object_new(CoordinateRectChangeHandler_t1701308220_il2cpp_TypeInfo_var);
		CoordinateRectChangeHandler__ctor_m1256279052(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		DD_CoordinateAxis_remove_CoordinateRectChangeEvent_m3613566325(L_3, L_5, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_6 = __this->get_m_Coordinate_34();
		intptr_t L_7 = (intptr_t)DD_Lines_OnCoordinateScaleChange_m2587648133_RuntimeMethod_var;
		CoordinateScaleChangeHandler_t4226256743 * L_8 = (CoordinateScaleChangeHandler_t4226256743 *)il2cpp_codegen_object_new(CoordinateScaleChangeHandler_t4226256743_il2cpp_TypeInfo_var);
		CoordinateScaleChangeHandler__ctor_m730809343(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		DD_CoordinateAxis_remove_CoordinateScaleChangeEvent_m4245992316(L_6, L_8, /*hidden argument*/NULL);
		DD_CoordinateAxis_t429882320 * L_9 = __this->get_m_Coordinate_34();
		intptr_t L_10 = (intptr_t)DD_Lines_OnCoordinateZeroPointChange_m3969185588_RuntimeMethod_var;
		CoordinateZeroPointChangeHandler_t1056737497 * L_11 = (CoordinateZeroPointChangeHandler_t1056737497 *)il2cpp_codegen_object_new(CoordinateZeroPointChangeHandler_t1056737497_il2cpp_TypeInfo_var);
		CoordinateZeroPointChangeHandler__ctor_m2983226949(L_11, __this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		DD_CoordinateAxis_remove_CoordinateeZeroPointChangeEvent_m1754232721(L_9, L_11, /*hidden argument*/NULL);
		List_1_t3628304265 * L_12 = __this->get_PointList_31();
		NullCheck(L_12);
		List_1_Clear_m2188935509(L_12, /*hidden argument*/List_1_Clear_m2188935509_RuntimeMethod_var);
		goto IL_008f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.NullReferenceException)
		V_0 = ((NullReferenceException_t1023182353 *)__exception_local);
		NullReferenceException_t1023182353 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1715369213(NULL /*static, unused*/, __this, _stringLiteral3787497674, L_13, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0091;
	} // end catch (depth: 1)

IL_008f:
	{
		return (bool)1;
	}

IL_0091:
	{
		bool L_15 = V_1;
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
// System.Void DD_MoveEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_MoveEventArgs__ctor_m1350353200 (DD_MoveEventArgs_t744120769 * __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_MoveEventArgs__ctor_m1350353200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		float L_0 = ___dx0;
		__this->set__moveX_1(L_0);
		float L_1 = ___dy1;
		__this->set__moveY_2(L_1);
		return;
	}
}
// System.Single DD_MoveEventArgs::get_MoveX()
extern "C"  float DD_MoveEventArgs_get_MoveX_m565828357 (DD_MoveEventArgs_t744120769 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__moveX_1();
		return L_0;
	}
}
// System.Single DD_MoveEventArgs::get_MoveY()
extern "C"  float DD_MoveEventArgs_get_MoveY_m565828356 (DD_MoveEventArgs_t744120769 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__moveY_2();
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
// System.Void DD_PreDestroyLineEventArgs::.ctor(UnityEngine.GameObject)
extern "C"  void DD_PreDestroyLineEventArgs__ctor_m3223243980 (DD_PreDestroyLineEventArgs_t3472178400 * __this, GameObject_t1113636619 * ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_PreDestroyLineEventArgs__ctor_m3223243980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		__this->set_m_Line_1((GameObject_t1113636619 *)NULL);
		GameObject_t1113636619 * L_0 = ___line0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		GameObject_t1113636619 * L_2 = ___line0;
		NullCheck(L_2);
		DD_Lines_t487279985 * L_3 = GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410(L_2, /*hidden argument*/GameObject_GetComponent_TisDD_Lines_t487279985_m1897208410_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		GameObject_t1113636619 * L_5 = ___line0;
		__this->set_m_Line_1(L_5);
		return;
	}
}
// UnityEngine.GameObject DD_PreDestroyLineEventArgs::get_line()
extern "C"  GameObject_t1113636619 * DD_PreDestroyLineEventArgs_get_line_m204555127 (DD_PreDestroyLineEventArgs_t3472178400 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Line_1();
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
// System.Void DD_RectChangeEventArgs::.ctor(UnityEngine.Vector2)
extern "C"  void DD_RectChangeEventArgs__ctor_m3288943631 (DD_RectChangeEventArgs_t2247361209 * __this, Vector2_t2156229523  ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_RectChangeEventArgs__ctor_m3288943631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_0 = ___size0;
		__this->set_m_Size_1(L_0);
		return;
	}
}
// UnityEngine.Vector2 DD_RectChangeEventArgs::get_size()
extern "C"  Vector2_t2156229523  DD_RectChangeEventArgs_get_size_m1400083616 (DD_RectChangeEventArgs_t2247361209 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_m_Size_1();
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
// System.Void DD_ZoomButton::.ctor()
extern "C"  void DD_ZoomButton__ctor_m3417381862 (DD_ZoomButton_t4256419273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_ZoomButton__ctor_m3417381862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RTparams_3(((RTParamU5BU5D_t1300874088*)SZArrayNew(RTParamU5BU5D_t1300874088_il2cpp_TypeInfo_var, (uint32_t)2)));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DD_ZoomButton::Awake()
extern "C"  void DD_ZoomButton_Awake_m1711532910 (DD_ZoomButton_t4256419273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_ZoomButton_Awake_m1711532910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DD_DataDiagram_t1914326032 * L_0 = Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710(__this, /*hidden argument*/Component_GetComponentInParent_TisDD_DataDiagram_t1914326032_m88282710_RuntimeMethod_var);
		__this->set_m_DataDiagram_2(L_0);
		DD_DataDiagram_t1914326032 * L_1 = __this->get_m_DataDiagram_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, __this, _stringLiteral1929951271, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		return;
	}
}
// System.Void DD_ZoomButton::Start()
extern "C"  void DD_ZoomButton_Start_m3655777122 (DD_ZoomButton_t4256419273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_ZoomButton_Start_m3655777122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RTParamU5BU5D_t1300874088* L_2 = __this->get_RTparams_3();
		NullCheck(L_2);
		DD_DataDiagram_t1914326032 * L_3 = __this->get_m_DataDiagram_2();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Transform_get_parent_m835071599(L_4, /*hidden argument*/NULL);
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_parent_0(L_5);
		DD_DataDiagram_t1914326032 * L_6 = __this->get_m_DataDiagram_2();
		NullCheck(L_6);
		RectTransform_t3704657025 * L_7 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_6, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		V_0 = L_7;
		RTParamU5BU5D_t1300874088* L_8 = __this->get_RTparams_3();
		NullCheck(L_8);
		RectTransform_t3704657025 * L_9 = V_0;
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = RectTransform_get_anchorMin_m2928307238(L_9, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_11 = V_0;
		NullCheck(L_11);
		Vector2_t2156229523  L_12 = RectTransform_get_anchorMax_m2495270048(L_11, /*hidden argument*/NULL);
		RTParamU5BU5D_t1300874088* L_13 = __this->get_RTparams_3();
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_parent_0();
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_14, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_15);
		Rect_t2360479859  L_16 = RectTransform_get_rect_m574169965(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		Vector2_t2156229523  L_17 = Rect_get_size_m477575021((&V_1), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_18 = V_0;
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = RectTransform_get_pivot_m3425744470(L_18, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_20 = V_0;
		NullCheck(L_20);
		Vector2_t2156229523  L_21 = RectTransform_get_anchoredPosition_m1813443094(L_20, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_22 = V_0;
		NullCheck(L_22);
		Rect_t2360479859  L_23 = RectTransform_get_rect_m574169965(L_22, /*hidden argument*/NULL);
		Rect_t2360479859  L_24 = DD_CalcRectTransformHelper_CalcLocalRect_m3010352532(NULL /*static, unused*/, L_10, L_12, L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_rect_1(L_24);
		RTParamU5BU5D_t1300874088* L_25 = __this->get_RTparams_3();
		NullCheck(L_25);
		Canvas_t3310196443 * L_26 = Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t3310196443_m1339529724_RuntimeMethod_var);
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(L_26, /*hidden argument*/NULL);
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_parent_0(L_27);
		RTParamU5BU5D_t1300874088* L_28 = __this->get_RTparams_3();
		NullCheck(L_28);
		int32_t L_29 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_30 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector2__ctor_m3970636864((&L_31), (((float)((float)((int32_t)((int32_t)L_29/(int32_t)((int32_t)10)))))), (((float)((float)((int32_t)((int32_t)L_30/(int32_t)((int32_t)10)))))), /*hidden argument*/NULL);
		int32_t L_32 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_33 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector2__ctor_m3970636864((&L_34), (((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)8))/(int32_t)((int32_t)10)))))), (((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)8))/(int32_t)((int32_t)10)))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Rect__ctor_m1342368573((&L_35), L_31, L_34, /*hidden argument*/NULL);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_rect_1(L_35);
		__this->set_paramSN_4(0);
		return;
	}
}
// System.Void DD_ZoomButton::Update()
extern "C"  void DD_ZoomButton_Update_m2897528150 (DD_ZoomButton_t4256419273 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DD_ZoomButton::OnZoomButton()
extern "C"  void DD_ZoomButton_OnZoomButton_m2037742700 (DD_ZoomButton_t4256419273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_ZoomButton_OnZoomButton_m2037742700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = __this->get_paramSN_4();
		__this->set_paramSN_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)2)));
		DD_DataDiagram_t1914326032 * L_3 = __this->get_m_DataDiagram_2();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		RTParamU5BU5D_t1300874088* L_5 = __this->get_RTparams_3();
		int32_t L_6 = __this->get_paramSN_4();
		NullCheck(L_5);
		Transform_t3600365921 * L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_parent_0();
		NullCheck(L_4);
		Transform_SetParent_m381167889(L_4, L_7, /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_8 = __this->get_m_DataDiagram_2();
		RTParamU5BU5D_t1300874088* L_9 = __this->get_RTparams_3();
		int32_t L_10 = __this->get_paramSN_4();
		NullCheck(L_9);
		Rect_t2360479859  L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_rect_1();
		Nullable_1_t4083041941  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Nullable_1__ctor_m3860665987((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_m3860665987_RuntimeMethod_var);
		NullCheck(L_8);
		DD_DataDiagram_set_rect_m224390537(L_8, L_12, /*hidden argument*/NULL);
		ZoomButtonClickHandle_t1498002863 * L_13 = __this->get_ZoomButtonClickEvent_5();
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		ZoomButtonClickHandle_t1498002863 * L_14 = __this->get_ZoomButtonClickEvent_5();
		ZoomButtonClickEventArgs_t1487932623 * L_15 = (ZoomButtonClickEventArgs_t1487932623 *)il2cpp_codegen_object_new(ZoomButtonClickEventArgs_t1487932623_il2cpp_TypeInfo_var);
		ZoomButtonClickEventArgs__ctor_m3986513944(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ZoomButtonClickHandle_Invoke_m916977965(L_14, __this, L_15, /*hidden argument*/NULL);
	}

IL_008a:
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
// Conversion methods for marshalling of: DD_ZoomButton/RTParam
extern "C" void RTParam_t3144317285_marshal_pinvoke(const RTParam_t3144317285& unmarshaled, RTParam_t3144317285_marshaled_pinvoke& marshaled)
{
	Exception_t* ___parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parent' of type 'RTParam': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parent_0Exception,NULL);
}
extern "C" void RTParam_t3144317285_marshal_pinvoke_back(const RTParam_t3144317285_marshaled_pinvoke& marshaled, RTParam_t3144317285& unmarshaled)
{
	Exception_t* ___parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parent' of type 'RTParam': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parent_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: DD_ZoomButton/RTParam
extern "C" void RTParam_t3144317285_marshal_pinvoke_cleanup(RTParam_t3144317285_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: DD_ZoomButton/RTParam
extern "C" void RTParam_t3144317285_marshal_com(const RTParam_t3144317285& unmarshaled, RTParam_t3144317285_marshaled_com& marshaled)
{
	Exception_t* ___parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parent' of type 'RTParam': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parent_0Exception,NULL);
}
extern "C" void RTParam_t3144317285_marshal_com_back(const RTParam_t3144317285_marshaled_com& marshaled, RTParam_t3144317285& unmarshaled)
{
	Exception_t* ___parent_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parent' of type 'RTParam': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parent_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: DD_ZoomButton/RTParam
extern "C" void RTParam_t3144317285_marshal_com_cleanup(RTParam_t3144317285_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DD_ZoomButton/ZoomButtonClickHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void ZoomButtonClickHandle__ctor_m651100456 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DD_ZoomButton/ZoomButtonClickHandle::Invoke(System.Object,ZoomButtonClickEventArgs)
extern "C"  void ZoomButtonClickHandle_Invoke_m916977965 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject * ___sender0, ZoomButtonClickEventArgs_t1487932623 * ___args1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ZoomButtonClickHandle_Invoke_m916977965((ZoomButtonClickHandle_t1498002863 *)__this->get_prev_9(), ___sender0, ___args1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
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
						GenericInterfaceActionInvoker1< ZoomButtonClickEventArgs_t1487932623 * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< ZoomButtonClickEventArgs_t1487932623 * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ZoomButtonClickEventArgs_t1487932623 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< ZoomButtonClickEventArgs_t1487932623 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ZoomButtonClickEventArgs_t1487932623 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DD_ZoomButton/ZoomButtonClickHandle::BeginInvoke(System.Object,ZoomButtonClickEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ZoomButtonClickHandle_BeginInvoke_m4017583403 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject * ___sender0, ZoomButtonClickEventArgs_t1487932623 * ___args1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DD_ZoomButton/ZoomButtonClickHandle::EndInvoke(System.IAsyncResult)
extern "C"  void ZoomButtonClickHandle_EndInvoke_m2687671412 (ZoomButtonClickHandle_t1498002863 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DD_ZoomEventArgs::.ctor(System.Single,System.Single)
extern "C"  void DD_ZoomEventArgs__ctor_m1841169722 (DD_ZoomEventArgs_t3840071228 * __this, float ___valX0, float ___valY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DD_ZoomEventArgs__ctor_m1841169722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		float L_0 = ___valX0;
		__this->set__zoomX_1(L_0);
		float L_1 = ___valY1;
		__this->set__zoomY_2(L_1);
		return;
	}
}
// System.Single DD_ZoomEventArgs::get_ZoomX()
extern "C"  float DD_ZoomEventArgs_get_ZoomX_m973257817 (DD_ZoomEventArgs_t3840071228 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__zoomX_1();
		return L_0;
	}
}
// System.Single DD_ZoomEventArgs::get_ZoomY()
extern "C"  float DD_ZoomEventArgs_get_ZoomY_m973257818 (DD_ZoomEventArgs_t3840071228 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__zoomY_2();
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
// System.Void LogSave::.ctor()
extern "C"  void LogSave__ctor_m885311860 (LogSave_t3250175913 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LogSave::logSave(System.String)
extern "C"  void LogSave_logSave_m305054840 (LogSave_t3250175913 * __this, String_t* ___txt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogSave_logSave_m305054840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamWriter_t1266378904 * V_0 = NULL;
	FileInfo_t1169991790 * V_1 = NULL;
	{
		String_t* L_0 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral138558762, /*hidden argument*/NULL);
		FileInfo_t1169991790 * L_2 = (FileInfo_t1169991790 *)il2cpp_codegen_object_new(FileInfo_t1169991790_il2cpp_TypeInfo_var);
		FileInfo__ctor_m3289795077(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		FileInfo_t1169991790 * L_3 = V_1;
		NullCheck(L_3);
		StreamWriter_t1266378904 * L_4 = FileInfo_AppendText_m2582519636(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		StreamWriter_t1266378904 * L_5 = V_0;
		String_t* L_6 = ___txt0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_6);
		StreamWriter_t1266378904 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Flush() */, L_7);
		StreamWriter_t1266378904 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextWriter::Close() */, L_8);
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
// System.Void MovePointView::.ctor()
extern "C"  void MovePointView__ctor_m1010924353 (MovePointView_t4144359498 * __this, const RuntimeMethod* method)
{
	{
		__this->set_RotSpeed_2((30.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MovePointView::Update()
extern "C"  void MovePointView_Update_m2700285760 (MovePointView_t4144359498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovePointView_Update_m2700285760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_003b;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		V_1 = (1.0f);
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (-1.0f);
		goto IL_006a;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_006a:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_eulerAngles_m2743581774(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = (&V_3)->get_x_1();
		float L_7 = V_0;
		float L_8 = __this->get_RotSpeed_2();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9))));
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_11 = V_2;
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_eulerAngles_m2743581774(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14 = (&V_4)->get_y_2();
		float L_15 = V_1;
		float L_16 = __this->get_RotSpeed_2();
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_eulerAngles_m2743581774(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20 = (&V_5)->get_z_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_21 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, L_11, ((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)L_17)))), L_20, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m3524318132(L_10, L_21, /*hidden argument*/NULL);
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
// System.Void Sample::.ctor()
extern "C"  void Sample__ctor_m2935122145 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample__ctor_m2935122145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_lineList_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sample::AddALine()
extern "C"  void Sample_AddALine_m3083246443 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_AddALine_m3083246443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	GameObject_t1113636619 * V_2 = NULL;
	float G_B5_0 = 0.0f;
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		float L_2 = __this->get_h_6();
		float L_3 = ((float)il2cpp_codegen_add((float)L_2, (float)(0.1f)));
		V_1 = L_3;
		__this->set_h_6(L_3);
		float L_4 = V_1;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		float L_5 = __this->get_h_6();
		G_B5_0 = ((float)il2cpp_codegen_subtract((float)L_5, (float)(1.0f)));
		goto IL_0048;
	}

IL_0042:
	{
		float L_6 = __this->get_h_6();
		G_B5_0 = L_6;
	}

IL_0048:
	{
		Color_t2555686324  L_7 = Color_HSVToRGB_m2420768060(NULL /*static, unused*/, G_B5_0, (0.8f), (0.8f), /*hidden argument*/NULL);
		V_0 = L_7;
		DD_DataDiagram_t1914326032 * L_8 = __this->get_m_DataDiagram_3();
		String_t* L_9 = Color_ToString_m671005850((&V_0), /*hidden argument*/NULL);
		Color_t2555686324  L_10 = V_0;
		NullCheck(L_8);
		GameObject_t1113636619 * L_11 = DD_DataDiagram_AddLine_m2558080196(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		GameObject_t1113636619 * L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		List_1_t2585711361 * L_14 = __this->get_lineList_2();
		GameObject_t1113636619 * L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m2765963565(L_14, L_15, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_008a:
	{
		return;
	}
}
// System.Void Sample::Start()
extern "C"  void Sample_Start_m1088282559 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_Start_m1088282559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2374827376, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1980666589, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		DD_DataDiagram_t1914326032 * L_4 = GameObject_GetComponent_TisDD_DataDiagram_t1914326032_m3066308452(L_3, /*hidden argument*/GameObject_GetComponent_TisDD_DataDiagram_t1914326032_m3066308452_RuntimeMethod_var);
		__this->set_m_DataDiagram_3(L_4);
		DD_DataDiagram_t1914326032 * L_5 = __this->get_m_DataDiagram_3();
		intptr_t L_6 = (intptr_t)Sample_U3CStartU3Em__0_m2968397177_RuntimeMethod_var;
		PreDestroyLineHandler_t3782553210 * L_7 = (PreDestroyLineHandler_t3782553210 *)il2cpp_codegen_object_new(PreDestroyLineHandler_t3782553210_il2cpp_TypeInfo_var);
		PreDestroyLineHandler__ctor_m3458885197(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		DD_DataDiagram_add_PreDestroyLineEvent_m3212590009(L_5, L_7, /*hidden argument*/NULL);
		Sample_AddALine_m3083246443(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sample::Update()
extern "C"  void Sample_Update_m4035091513 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Sample::FixedUpdate()
extern "C"  void Sample_FixedUpdate_m2400314142 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Input_5();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Input_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = __this->get_m_Input_5();
		Sample_ContinueInput_m3298532680(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sample::ContinueInput(System.Single)
extern "C"  void Sample_ContinueInput_m3298532680 (Sample_t1746682370 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_ContinueInput_m3298532680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GameObject_t1113636619 * V_1 = NULL;
	Enumerator_t179987942  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = __this->get_m_IsContinueInput_4();
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (0.0f);
		List_1_t2585711361 * L_3 = __this->get_lineList_2();
		NullCheck(L_3);
		Enumerator_t179987942  L_4 = List_1_GetEnumerator_m1750140655(L_3, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0035:
		{
			GameObject_t1113636619 * L_5 = Enumerator_get_Current_m4179928398((&V_2), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_1 = L_5;
			DD_DataDiagram_t1914326032 * L_6 = __this->get_m_DataDiagram_3();
			GameObject_t1113636619 * L_7 = V_1;
			float L_8 = ___f0;
			float L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_10 = sinf(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
			Vector2_t2156229523  L_11;
			memset(&L_11, 0, sizeof(L_11));
			Vector2__ctor_m3970636864((&L_11), (0.1f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))), (float)(2.0f))), /*hidden argument*/NULL);
			NullCheck(L_6);
			DD_DataDiagram_InputPoint_m1918161065(L_6, L_7, L_11, /*hidden argument*/NULL);
			float L_12 = V_0;
			V_0 = ((float)il2cpp_codegen_add((float)L_12, (float)(1.0f)));
		}

IL_006f:
		{
			bool L_13 = Enumerator_MoveNext_m4286844348((&V_2), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0035;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_2), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		return;
	}
}
// System.Void Sample::onButton()
extern "C"  void Sample_onButton_m4054621970 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_onButton_m4054621970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t179987942  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t2585711361 * L_2 = __this->get_lineList_2();
		NullCheck(L_2);
		Enumerator_t179987942  L_3 = List_1_GetEnumerator_m1750140655(L_2, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0023:
		{
			GameObject_t1113636619 * L_4 = Enumerator_get_Current_m4179928398((&V_1), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_0 = L_4;
			DD_DataDiagram_t1914326032 * L_5 = __this->get_m_DataDiagram_3();
			GameObject_t1113636619 * L_6 = V_0;
			float L_7 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
			Vector2_t2156229523  L_8;
			memset(&L_8, 0, sizeof(L_8));
			Vector2__ctor_m3970636864((&L_8), (1.0f), ((float)il2cpp_codegen_multiply((float)L_7, (float)(4.0f))), /*hidden argument*/NULL);
			NullCheck(L_5);
			DD_DataDiagram_InputPoint_m1918161065(L_5, L_6, L_8, /*hidden argument*/NULL);
		}

IL_004c:
		{
			bool L_9 = Enumerator_MoveNext_m4286844348((&V_1), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0023;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((&V_1), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		return;
	}
}
// System.Void Sample::OnAddLine()
extern "C"  void Sample_OnAddLine_m514911015 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	{
		Sample_AddALine_m3083246443(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sample::OnRectChange()
extern "C"  void Sample_OnRectChange_m2691573620 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_OnRectChange_m2691573620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DD_DataDiagram_t1914326032 * L_0 = __this->get_m_DataDiagram_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), ((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)L_3))))), ((float)il2cpp_codegen_multiply((float)L_4, (float)(((float)((float)L_5))))), ((float)((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(((float)((float)L_7)))))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(((float)((float)L_9)))))/(float)(2.0f))), /*hidden argument*/NULL);
		DD_DataDiagram_t1914326032 * L_10 = __this->get_m_DataDiagram_3();
		Rect_t2360479859  L_11 = V_0;
		Nullable_1_t4083041941  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Nullable_1__ctor_m3860665987((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_m3860665987_RuntimeMethod_var);
		NullCheck(L_10);
		DD_DataDiagram_set_rect_m224390537(L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sample::OnContinueInput()
extern "C"  void Sample_OnContinueInput_m2322687678 (Sample_t1746682370 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsContinueInput_4();
		__this->set_m_IsContinueInput_4((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void Sample::<Start>m__0(System.Object,DD_PreDestroyLineEventArgs)
extern "C"  void Sample_U3CStartU3Em__0_m2968397177 (Sample_t1746682370 * __this, RuntimeObject * ___s0, DD_PreDestroyLineEventArgs_t3472178400 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sample_U3CStartU3Em__0_m2968397177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = __this->get_lineList_2();
		DD_PreDestroyLineEventArgs_t3472178400 * L_1 = ___e1;
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = DD_PreDestroyLineEventArgs_get_line_m204555127(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Remove_m4063777476(L_0, L_2, /*hidden argument*/List_1_Remove_m4063777476_RuntimeMethod_var);
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
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m873742767 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Start()
extern "C"  void UIManager_Start_m1211894305 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UIManager::Update()
extern "C"  void UIManager_Update_m1085197836 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Update_m1085197836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		Text_t1901882714 * L_0 = __this->get_txtX_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float* L_2 = (&V_0)->get_address_of_x_1();
		String_t* L_3 = Single_ToString_m3947131094(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t1901882714 * L_4 = __this->get_txtY_3();
		Vector3_t3722313464  L_5 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		float* L_6 = (&V_1)->get_address_of_y_2();
		String_t* L_7 = Single_ToString_m3947131094(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		Text_t1901882714 * L_8 = __this->get_txtZ_4();
		Vector3_t3722313464  L_9 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		float* L_10 = (&V_2)->get_address_of_z_3();
		String_t* L_11 = Single_ToString_m3947131094(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		String_t* L_12 = __this->get_txtLog_6();
		V_3 = L_12;
		StringU5BU5D_t1281789340* L_13 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7));
		String_t* L_14 = V_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		Text_t1901882714 * L_16 = __this->get_txtX_2();
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_t1281789340* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614532);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_19 = L_18;
		Text_t1901882714 * L_20 = __this->get_txtY_3();
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_21);
		StringU5BU5D_t1281789340* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3452614532);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_23 = L_22;
		Text_t1901882714 * L_24 = __this->get_txtZ_4();
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		StringU5BU5D_t1281789340* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral3452614566);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614566);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m1809518182(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		__this->set_txtLog_6(L_27);
		int32_t L_28 = __this->get_updateCount_7();
		__this->set_updateCount_7(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		int32_t L_29 = __this->get_updateCount_7();
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)300)))))
		{
			goto IL_00f6;
		}
	}
	{
		InputField_t3762917431 * L_30 = __this->get_txtAll_8();
		String_t* L_31 = __this->get_txtLog_6();
		NullCheck(L_30);
		InputField_set_text_m1877260015(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00f6:
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
// System.Void UnityStandardAssets.Water.WaterBasic::.ctor()
extern "C"  void WaterBasic__ctor_m897496438 (WaterBasic_t418026961 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBasic::Update()
extern "C"  void WaterBasic_Update_m4213962468 (WaterBasic_t418026961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaterBasic_Update_m4213962468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	Material_t340375123 * V_1 = NULL;
	Vector4_t3319028937  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector4_t3319028937  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector4_t3319028937  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		V_0 = L_0;
		Renderer_t2627027031 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Renderer_t2627027031 * L_3 = V_0;
		NullCheck(L_3);
		Material_t340375123 * L_4 = Renderer_get_sharedMaterial_m1936632411(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Material_t340375123 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		Material_t340375123 * L_7 = V_1;
		NullCheck(L_7);
		Vector4_t3319028937  L_8 = Material_GetVector_m806950826(L_7, _stringLiteral49249872, /*hidden argument*/NULL);
		V_2 = L_8;
		Material_t340375123 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = Material_GetFloat_m2210875428(L_9, _stringLiteral3029421264, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		Vector4_t3319028937  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_15 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		V_5 = L_15;
		float L_16 = (&V_5)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_16, (1.0f), /*hidden argument*/NULL);
		float L_18 = (&V_5)->get_y_2();
		float L_19 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_18, (1.0f), /*hidden argument*/NULL);
		float L_20 = (&V_5)->get_z_3();
		float L_21 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_20, (1.0f), /*hidden argument*/NULL);
		float L_22 = (&V_5)->get_w_4();
		float L_23 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_22, (1.0f), /*hidden argument*/NULL);
		Vector4__ctor_m2498754347((&V_6), L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
		Material_t340375123 * L_24 = V_1;
		Vector4_t3319028937  L_25 = V_6;
		NullCheck(L_24);
		Material_SetVector_m4214217286(L_24, _stringLiteral2268830102, L_25, /*hidden argument*/NULL);
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
// System.Void ZoomButtonClickEventArgs::.ctor()
extern "C"  void ZoomButtonClickEventArgs__ctor_m3986513944 (ZoomButtonClickEventArgs_t1487932623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZoomButtonClickEventArgs__ctor_m3986513944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
