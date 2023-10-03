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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// BallsContainerController[]
struct BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LevelsData[]
struct LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// ShopTexData[]
struct ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Ad
struct Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BallDropper
struct BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7;
// BallsContainerController
struct BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88;
// BasketController
struct BasketController_t842318361BEF46745936C36BF8554EC746DC1340;
// BoxCollisionController
struct BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConfirmBuyPanel
struct ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameMenuManager
struct GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GetStarsAnim
struct GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// AppodealStack.Monetization.Common.IAppodealInitializationListener
struct IAppodealInitializationListener_tE391C3AC8EB20933A7F002B4A19AF18271F093CB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// AppodealStack.Monetization.Common.IRewardedVideoAdListener
struct IRewardedVideoAdListener_t2EEE06D725FDBA3B92C09740538649D89F059619;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LevelsData
struct LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454;
// LevelsManager
struct LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB;
// LevelsScrollView
struct LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D;
// LvlPrefObj
struct LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PanelsSwitcher
struct PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// PlayBallManager
struct PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9;
// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SettingsController
struct SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4;
// ShopController
struct ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88;
// ShopSkinPrefabController
struct ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF;
// ShopTexData
struct ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866;
// SimpleRotation
struct SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E;
// SkinScrollPrefab
struct SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0;
// SkinsPanel
struct SkinsPanel_t7903E6A6755E90A81737817A599A1C4CD4D2FBB4;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderController
struct SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62;
// TapSoundController
struct TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TexturesData
struct TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BallDropper/DropBall
struct DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SwipeDetection/OnSwipeInput
struct OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55;

IL2CPP_EXTERN_C RuntimeClass* Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral028FACF80E052870874038642F78B9BF75689F99;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral18866D36E48E0879464217E58046A1480B6EEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96;
IL2CPP_EXTERN_C String_t* _stringLiteral27735908F3A471A79C3E650A8E1CE5CBFEDED02D;
IL2CPP_EXTERN_C String_t* _stringLiteral345320CE2CE6687A4D5EA0E3E460117E1590CA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2;
IL2CPP_EXTERN_C String_t* _stringLiteral427AF35A25E69CCE07D05410B5E61EDCBAF3F518;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23;
IL2CPP_EXTERN_C String_t* _stringLiteral5510C6BCEA3ED93A19012E8073284E7672FEE693;
IL2CPP_EXTERN_C String_t* _stringLiteral578967F25C6BCC86A96777ADB67BA8A7F9451248;
IL2CPP_EXTERN_C String_t* _stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062;
IL2CPP_EXTERN_C String_t* _stringLiteral5CFDC0773D4001A01E98AE8F0CED81B3DD17EAFC;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral724C9CF597B7C73CD21CA215B3867CF94896AB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral74279A078C47ECC250A045352E1E39F5260356AF;
IL2CPP_EXTERN_C String_t* _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral76EE995D0B4A273770FD7DECCE18A426D2F451B7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D871AF4D4F76B14BDF1B3B151F566223AEE53EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E124FDF68E0C37CAAE9A2D33D95FB4F5EC60AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral9C26DFABD08CCB6C516F0155E5475F91AF34A8A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C4998D5519DFC6A20591776820D54C0E4785A4;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralB0C56D02DA989918B5E8D645934F7B8884A27C50;
IL2CPP_EXTERN_C String_t* _stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE1EF97FD77703FA6637BDC37E73D80372057E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1450B1D996858F93FE2D396FB0A5F50F45C6A07;
IL2CPP_EXTERN_C String_t* _stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396;
IL2CPP_EXTERN_C String_t* _stringLiteralDE99FB8CF1055D2A0DD269959FD88A054160A904;
IL2CPP_EXTERN_C String_t* _stringLiteralE51314D72335EAD9A2004A6DC90EDDE9373F64A7;
IL2CPP_EXTERN_C String_t* _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialClicked_m8DE455ED4E379EC13D2D075B63F4B392C933EE8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialClosed_mCEB4BA4B18F7BDF1799D4409430A9E2FDF829768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialExpired_m7572675F8C7C85586716AC7A792D74D4DE996400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialFailedToLoad_mFBDB18B868C793DE4F73E7A7CDCC8F8B22047799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialLoaded_m130F52E639414BAA31B649B1D2867A21DFB9CE44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialShowFailed_m9497F5AC918FE94E5ADF920EC98380503E8BBB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnInterstitialShown_mA4FA24BE10DBEBEA3761CC1B06358A70B9DB1918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoClicked_m55AE85244C5AA72C01FAA18C314D27C4D0A2E4D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoClosed_m05DBF011F0D10C324622D7254012A1D351A19A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoExpired_m2F7D9FE0678311A5F0542AE926D1847C90E72196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoFailedToLoad_m04AFD63D80F967502AC049C6AACCD90C6D557F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoLoaded_m9834582667F85C8E9E785FBA3A58128D4B837E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoShowFailed_mA56408D3A1D09ABD87FB7564CA9EC92E63F59C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ad_OnRewardedVideoShown_mF1ED336E7F58835BE78E69529227CEA270D2A68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511_mD807E7426BFE5F0581CA34F9EAEFE09515B09392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBasketController_t842318361BEF46745936C36BF8554EC746DC1340_mD0F42D407D32BE4BBE94CBBCC5F0044C20D68513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB_mE40AA67B4870C15F976D265C012895F5CFB8BA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC_mC56F6893D1DAF971847AAFAD5FC17FA7C1C28279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38_mE91851040F6AD869E28095643C043B231B2D0964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_mF160445FEB43CF97F1AA27E8527885D4121DC8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_m94398BE6D9A9EE5219C83056FF0E02E3DB4CEDFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// DeleteSavedData
struct DeleteSavedData_t056B071397940EEC465E394517A6321352BD1DD8  : public RuntimeObject
{
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A  : public RuntimeObject
{
	// System.String PlayerData::name
	String_t* ___name_0;
};

// ShopTexData
struct ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866  : public RuntimeObject
{
	// ShopItemType ShopTexData::type
	int32_t ___type_0;
	// UnityEngine.Texture[] ShopTexData::_texture
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ____texture_1;
	// UnityEngine.GameObject[] ShopTexData::_effect
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____effect_2;
	// System.Boolean[] ShopTexData::_open
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____open_3;
	// System.Int32[] ShopTexData::_price
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____price_4;
	// System.Int32 ShopTexData::_itemIndex
	int32_t ____itemIndex_5;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// LevelsData
struct LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454  : public RuntimeObject
{
	// System.Int32 LevelsData::LevelIndex
	int32_t ___LevelIndex_0;
	// UnityEngine.Vector3 LevelsData::BasketRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___BasketRotation_1;
	// System.Int32 LevelsData::starsComplete
	int32_t ___starsComplete_2;
	// UnityEngine.Transform[] LevelsData::BoxPositions
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___BoxPositions_3;
	// UnityEngine.Transform LevelsData::BasketPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BasketPosition_4;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// BallDropper/DropBall
struct DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246  : public MulticastDelegate_t
{
};

// SwipeDetection/OnSwipeInput
struct OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Ad
struct Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Ad::AppKey
	String_t* ___AppKey_5;
	// System.Int32 Ad::count
	int32_t ___count_6;
	// System.Boolean Ad::videoFinished
	bool ___videoFinished_7;
	// System.Double Ad::rewardAmount
	double ___rewardAmount_8;
	// System.String Ad::rewardName
	String_t* ___rewardName_9;
};

struct Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_StaticFields
{
	// Ad Ad::Instance
	Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* ___Instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BallDropper
struct BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BallDropper::Sensivity
	float ___Sensivity_5;
	// UnityEngine.Vector3 BallDropper::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_6;
	// System.Single BallDropper::Acceleration
	float ___Acceleration_7;
	// UnityEngine.Rigidbody BallDropper::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_8;
	// System.Boolean BallDropper::Droped
	bool ___Droped_9;
	// System.Boolean BallDropper::TimeToCheckVelocity
	bool ___TimeToCheckVelocity_10;
	// System.Boolean BallDropper::FirstFloorTouch
	bool ___FirstFloorTouch_11;
	// UnityEngine.ParticleSystem BallDropper::particles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particles_12;
	// UnityEngine.PhysicMaterial BallDropper::BallPhysMat
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___BallPhysMat_13;
	// PlayBallManager BallDropper::_playBallManager
	PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* ____playBallManager_14;
};

struct BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields
{
	// BallDropper/DropBall BallDropper::ThrowEvent
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* ___ThrowEvent_4;
};

// BallsContainerController
struct BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BallsContainerController::angle
	float ___angle_4;
	// System.Single BallsContainerController::MaxRotAngle
	float ___MaxRotAngle_5;
	// System.Single BallsContainerController::angleSpeed
	float ___angleSpeed_6;
	// System.Boolean BallsContainerController::TimeToRotate
	bool ___TimeToRotate_7;
};

// BasketController
struct BasketController_t842318361BEF46745936C36BF8554EC746DC1340  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BasketController::angle
	float ___angle_4;
	// System.Single BasketController::DeltaAngle
	float ___DeltaAngle_5;
	// System.Single BasketController::AngleSpeed
	float ___AngleSpeed_6;
	// UnityEngine.GameObject BasketController::Effect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_7;
	// System.Boolean BasketController::RotateRight
	bool ___RotateRight_8;
	// System.Single[] BasketController::DeltaAngles
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___DeltaAngles_9;
	// UnityEngine.Vector3 BasketController::RotationDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RotationDirection_10;
};

// BoxCollisionController
struct BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayBallManager BoxCollisionController::_playBallManager
	PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* ____playBallManager_4;
};

// ConfirmBuyPanel
struct ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ConfirmBuyPanel::ShopObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ShopObj_4;
	// UnityEngine.UI.Text ConfirmBuyPanel::PriceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PriceText_5;
};

// GameMenuManager
struct GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture[] GameMenuManager::PlayTextures
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___PlayTextures_5;
	// UnityEngine.GameObject GameMenuManager::Money
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Money_6;
	// UnityEngine.GameObject GameMenuManager::PlayPanObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayPanObj_7;
	// UnityEngine.UI.Image GameMenuManager::TrophyRewardImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___TrophyRewardImage_8;
	// UnityEngine.UI.Text GameMenuManager::StarsCount
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StarsCount_9;
	// UnityEngine.UI.Text GameMenuManager::ShopMoneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ShopMoneyText_10;
	// UnityEngine.Color[] GameMenuManager::StatusColor
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___StatusColor_11;
	// System.Int32 GameMenuManager::LevelToLoad
	int32_t ___LevelToLoad_12;
	// System.Boolean GameMenuManager::CanClaimTrophyReward
	bool ___CanClaimTrophyReward_13;
	// PlayerData GameMenuManager::playerData
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* ___playerData_14;
	// TexturesData GameMenuManager::_texturesData
	TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* ____texturesData_15;
};

struct GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields
{
	// GameMenuManager GameMenuManager::Instance
	GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* ___Instance_4;
};

// GetStarsAnim
struct GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem[] GetStarsAnim::SmallStarsEffects
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___SmallStarsEffects_4;
	// UnityEngine.UI.Text GetStarsAnim::LevelTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LevelTxt_5;
	// UnityEngine.UI.Text GetStarsAnim::EndStatusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EndStatusText_6;
	// UnityEngine.GameObject GetStarsAnim::Star2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Star2_7;
	// UnityEngine.GameObject GetStarsAnim::Star3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Star3_8;
	// UnityEngine.GameObject GetStarsAnim::RewardTextDouble
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RewardTextDouble_9;
	// UnityEngine.AudioSource GetStarsAnim::StarsSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___StarsSound_10;
	// System.Boolean GetStarsAnim::CanSwitchScene
	bool ___CanSwitchScene_11;
};

// LevelsManager
struct LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LevelsManager::LevelIndex
	int32_t ___LevelIndex_5;
	// UnityEngine.GameObject LevelsManager::BoxPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BoxPrefab_6;
	// UnityEngine.GameObject LevelsManager::BasketPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BasketPrefab_7;
	// UnityEngine.GameObject LevelsManager::BasketEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BasketEffect_8;
	// LevelsData[] LevelsManager::levelsdataarray
	LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* ___levelsdataarray_9;
};

struct LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_StaticFields
{
	// LevelsManager LevelsManager::Instance
	LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* ___Instance_4;
};

// LevelsScrollView
struct LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LevelsScrollView::LevelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LevelPrefab_4;
	// UnityEngine.UI.ScrollRect LevelsScrollView::Scroll
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___Scroll_5;
	// UnityEngine.Color LevelsScrollView::BorderLockedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___BorderLockedColor_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelsScrollView::LevelsTemp
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___LevelsTemp_7;
	// GameMenuManager LevelsScrollView::_manager
	GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* ____manager_8;
};

// LvlPrefObj
struct LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LvlPrefObj::LevelIndex
	int32_t ___LevelIndex_4;
	// System.Boolean LvlPrefObj::CanPlay
	bool ___CanPlay_5;
	// UnityEngine.UI.Image LvlPrefObj::Border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Border_6;
	// UnityEngine.GameObject[] LvlPrefObj::Stars
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Stars_7;
	// UnityEngine.GameObject LvlPrefObj::StarsContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StarsContainer_8;
	// UnityEngine.GameObject LvlPrefObj::Lock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Lock_9;
	// UnityEngine.GameObject LvlPrefObj::Leveltxt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Leveltxt_10;
	// UnityEngine.Animator LvlPrefObj::ComponentAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___ComponentAnimator_11;
};

// PanelsSwitcher
struct PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PanelsSwitcher::ClosePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ClosePanel_4;
	// UnityEngine.GameObject PanelsSwitcher::OpenPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___OpenPanel_5;
	// UnityEngine.GameObject PanelsSwitcher::SkinScrollObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SkinScrollObj_6;
	// System.String PanelsSwitcher::SceneName
	String_t* ___SceneName_7;
	// System.Boolean PanelsSwitcher::NeedSwitchScene
	bool ___NeedSwitchScene_8;
	// System.Boolean PanelsSwitcher::ShopObj
	bool ___ShopObj_9;
	// UnityEngine.Animation PanelsSwitcher::Anim
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___Anim_10;
};

// PlayBallManager
struct PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayBallManager::BoxDoubleTouch
	bool ___BoxDoubleTouch_5;
	// System.Int32 PlayBallManager::DropsCount
	int32_t ___DropsCount_6;
	// System.Int32 PlayBallManager::GameLevel
	int32_t ___GameLevel_7;
	// System.Int32 PlayBallManager::BoxTouches
	int32_t ___BoxTouches_8;
	// System.Int32 PlayBallManager::BoxTouchesNeed
	int32_t ___BoxTouchesNeed_9;
	// UnityEngine.UI.Text PlayBallManager::GameStatusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GameStatusText_10;
	// UnityEngine.UI.Text PlayBallManager::RewardText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RewardText_11;
	// UnityEngine.GameObject PlayBallManager::BallPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BallPrefab_12;
	// UnityEngine.GameObject PlayBallManager::RoomParentObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RoomParentObj_13;
	// UnityEngine.GameObject PlayBallManager::EndRoundPanelObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EndRoundPanelObj_14;
	// UnityEngine.GameObject PlayBallManager::BallTrailEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BallTrailEffect_15;
	// UnityEngine.GameObject[] PlayBallManager::BallSoundObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___BallSoundObj_16;
	// UnityEngine.GameObject PlayBallManager::WinSoundObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WinSoundObj_17;
	// UnityEngine.AudioSource[] PlayBallManager::BallSound
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___BallSound_18;
	// UnityEngine.AudioSource PlayBallManager::WinSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___WinSound_19;
	// UnityEngine.GameObject PlayBallManager::BallTemp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BallTemp_20;
	// UnityEngine.UI.Image PlayBallManager::FillGreen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___FillGreen_21;
	// UnityEngine.UI.Image PlayBallManager::FillOrange
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___FillOrange_22;
	// UnityEngine.UI.Image PlayBallManager::FillRed
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___FillRed_23;
	// UnityEngine.Transform PlayBallManager::StartBallPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___StartBallPos_24;
	// GetStarsAnim PlayBallManager::_getStarsAnim
	GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* ____getStarsAnim_25;
	// LevelsManager PlayBallManager::_levelsManager
	LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* ____levelsManager_26;
};

struct PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields
{
	// PlayBallManager PlayBallManager::Instance
	PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* ___Instance_4;
};

// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SceneTransition::LoadingProgressBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___LoadingProgressBar_4;
	// UnityEngine.GameObject SceneTransition::SceneTransitionCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SceneTransitionCanvas_5;
	// UnityEngine.Animator SceneTransition::compomemtAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___compomemtAnimator_8;
	// UnityEngine.AsyncOperation SceneTransition::loadingSceneOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___loadingSceneOperation_9;
};

struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields
{
	// SceneTransition SceneTransition::Instance
	SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* ___Instance_6;
	// System.Boolean SceneTransition::shouldPlayOpeningAnimation
	bool ___shouldPlayOpeningAnimation_7;
};

// SettingsController
struct SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SettingsController::SoundObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundObj_4;
	// System.Single SettingsController::SoundValue
	float ___SoundValue_5;
	// UnityEngine.UI.Slider SettingsController::_slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____slider_6;
	// UnityEngine.AudioSource SettingsController::SoundSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___SoundSource_7;
};

// ShopController
struct ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ShopController::PreviewObjIndex
	int32_t ___PreviewObjIndex_5;
	// System.Int32 ShopController::GlobalShopIndex
	int32_t ___GlobalShopIndex_6;
	// System.Int32 ShopController::SkinIndex
	int32_t ___SkinIndex_7;
	// System.Int32 ShopController::SkinPrice
	int32_t ___SkinPrice_8;
	// System.Int32 ShopController::GalkaIndex
	int32_t ___GalkaIndex_9;
	// System.Int32[] ShopController::PreviosTextureIndex
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___PreviosTextureIndex_10;
	// System.Int32[] ShopController::PreviewTexturesLenght
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___PreviewTexturesLenght_11;
	// UnityEngine.GameObject[] ShopController::ShopPreviewObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ShopPreviewObj_12;
	// UnityEngine.GameObject[] ShopController::ShopTypeObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ShopTypeObj_13;
	// UnityEngine.GameObject ShopController::SkinScrollPrefabObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SkinScrollPrefabObj_14;
	// UnityEngine.GameObject ShopController::ShopSkinPrefabObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ShopSkinPrefabObj_15;
	// UnityEngine.GameObject ShopController::ConfirmPanObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConfirmPanObj_16;
	// UnityEngine.UI.ScrollRect ShopController::ScrollView
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___ScrollView_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShopController::TempItems
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___TempItems_18;
	// UnityEngine.Material[] ShopController::PreviewMat
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___PreviewMat_19;
	// BallsContainerController[] ShopController::PreviewContainer
	BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959* ___PreviewContainer_20;
	// PlayerData ShopController::_playerData
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* ____playerData_21;
	// SkinScrollPrefab ShopController::_skinScrollPrefab
	SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* ____skinScrollPrefab_22;
	// TexturesData ShopController::_texturesData
	TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* ____texturesData_23;
	// ConfirmBuyPanel ShopController::_confirmBuyPanel
	ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* ____confirmBuyPanel_24;
	// ShopTexData ShopController::arraydata
	ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* ___arraydata_25;
};

struct ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_StaticFields
{
	// ShopController ShopController::Instance
	ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* ___Instance_4;
};

// ShopSkinPrefabController
struct ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ShopSkinPrefabController::Index
	int32_t ___Index_4;
	// System.Single ShopSkinPrefabController::AnimDelay
	float ___AnimDelay_5;
	// UnityEngine.Animator ShopSkinPrefabController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_6;
	// UnityEngine.UI.Text ShopSkinPrefabController::PriceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PriceText_7;
	// UnityEngine.GameObject ShopSkinPrefabController::PriceBackGroundObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PriceBackGroundObj_8;
	// UnityEngine.GameObject ShopSkinPrefabController::GalkaBackObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GalkaBackObj_9;
	// UnityEngine.GameObject ShopSkinPrefabController::GalkaObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GalkaObj_10;
	// UnityEngine.GameObject[] ShopSkinPrefabController::ItemObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ItemObj_11;
};

// SimpleRotation
struct SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SimpleRotation::angle
	float ___angle_4;
	// System.Single SimpleRotation::angleSpeed
	float ___angleSpeed_5;
	// System.Single SimpleRotation::StartXPos
	float ___StartXPos_6;
	// System.Boolean SimpleRotation::ShopObj
	bool ___ShopObj_7;
};

// SkinScrollPrefab
struct SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SkinScrollPrefab::Move
	bool ___Move_4;
	// System.Single SkinScrollPrefab::Speed
	float ___Speed_5;
	// UnityEngine.Vector2 SkinScrollPrefab::Direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Direction_6;
	// ShopController SkinScrollPrefab::_shopController
	ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* ____shopController_7;
	// UnityEngine.GameObject SkinScrollPrefab::BGScroll
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BGScroll_8;
	// UnityEngine.UI.Text SkinScrollPrefab::ItemTypeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ItemTypeText_9;
};

// SkinsPanel
struct SkinsPanel_t7903E6A6755E90A81737817A599A1C4CD4D2FBB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SliderController
struct SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SliderController::SensValue
	float ___SensValue_4;
	// UnityEngine.UI.Text SliderController::SensivityText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SensivityText_5;
	// UnityEngine.UI.Slider SliderController::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// UnityEngine.GameObject SliderController::SwipeDetector
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SwipeDetector_7;
	// PlayBallManager SliderController::_playBallManager
	PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* ____playBallManager_8;
};

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 SwipeDetection::TapPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TapPosition_5;
	// UnityEngine.Vector2 SwipeDetection::SwipeDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___SwipeDelta_6;
	// System.Single SwipeDetection::DeadZone
	float ___DeadZone_7;
	// System.Boolean SwipeDetection::IsSwiping
	bool ___IsSwiping_8;
	// System.Boolean SwipeDetection::IsMobile
	bool ___IsMobile_9;
	// System.Boolean SwipeDetection::CallDelegate
	bool ___CallDelegate_10;
};

struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields
{
	// SwipeDetection/OnSwipeInput SwipeDetection::SwipeEvent
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___SwipeEvent_4;
};

// TapSoundController
struct TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource TapSoundController::TapSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___TapSound_5;
};

struct TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields
{
	// TapSoundController TapSoundController::Instance
	TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* ___Instance_4;
};

// TexturesData
struct TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ShopTexData[] TexturesData::_shopTexDataArray
	ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* ____shopTexDataArray_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// ShopTexData[]
struct ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F  : public RuntimeArray
{
	ALIGN_FIELD (8) ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* m_Items[1];

	inline ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LevelsData[]
struct LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754  : public RuntimeArray
{
	ALIGN_FIELD (8) LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* m_Items[1];

	inline LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// BallsContainerController[]
struct BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959  : public RuntimeArray
{
	ALIGN_FIELD (8) BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* m_Items[1];

	inline BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TapSoundController::PlayTapSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90 (TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void GameMenuManager::OpenGameScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_OpenGameScene_m731BD890096AE614C5C82FAFAAB48EF1B16CB7B8 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, int32_t ___LvlToLoad0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void ShopController::OpenConfPan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_OpenConfPan_m7537DC0F1F518BAFE035975F4311314ABE66E8E5 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ShopController::SpawnShopItemsHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SpawnShopItemsHelper_m4A93FD4E0DDEEFB9441D820253FB98B3E418B422 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) ;
// System.Void ShopController::ShopTypeObjActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_ShopTypeObjActive_mFEC4F7C5DE7B1F3E7E67B6BD4CAED3ECC9BEABE1 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, bool ___on0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void BasketController::CalculateRotateAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketController_CalculateRotateAxis_m3FC8838666ABF2BC0E4B9FC7F969550F7D475CA1 (BasketController_t842318361BEF46745936C36BF8554EC746DC1340* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PlayBallManager>()
inline PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B (const RuntimeMethod* method)
{
	return ((  PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void PlayBallManager::BoxTouchAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Api.Appodeal::Initialize(System.String,System.Int32,AppodealStack.Monetization.Common.IAppodealInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appodeal_Initialize_m9411C634CA28FA74A0C57C210392C84B8DD1AF8B (String_t* ___appKey0, int32_t ___adTypes1, RuntimeObject* ___listener2, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Api.Appodeal::SetRewardedVideoCallbacks(AppodealStack.Monetization.Common.IRewardedVideoAdListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appodeal_SetRewardedVideoCallbacks_m1455C957FD829CEB6CFD18CAD6D6724C4FA088F9 (RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Void AppodealStack.Monetization.Api.Appodeal::Cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appodeal_Cache_mFF16A0508FB1BD11FD5DD7ADDD3FF9CF089019C5 (int32_t ___adType0, const RuntimeMethod* method) ;
// System.Int32 PlayerData::get_Money()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::set_Money(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean AppodealStack.Monetization.Api.Appodeal::IsLoaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Appodeal_IsLoaded_mF6BBD221F5333459A071A449C89E8212AD33E56B (int32_t ___adType0, const RuntimeMethod* method) ;
// System.Boolean AppodealStack.Monetization.Api.Appodeal::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Appodeal_Show_m1D24F31247F2DB92D5BA7370D95B53228A5D8305 (int32_t ___adType0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void DeleteSavedData::SetCompeletedLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteSavedData_SetCompeletedLevels_m0D218D52F431C770537854A6E62F975CE68B16CC (int32_t ___LevelCount0, int32_t ___Stars1, const RuntimeMethod* method) ;
// System.Void TexturesData::LoadTexturesStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturesData_LoadTexturesStatus_m5342E7801F7A120F267FCA270CA429D8E522FF38 (TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> DeleteSavedData::GetLevelStarsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* DeleteSavedData_GetLevelStarsCompleted_mB18321B23374BEC97CFAC271FB16D22AF52F0164 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Int32 PlayerData::get_TrophyRewardsCollected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_TrophyRewardsCollected_m1FE2267FB46C00B04E38D441453CF48D0EAC3496 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::set_TrophyRewardsCollected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_TrophyRewardsCollected_mD2E6CC0940C6006B72E2F2562BC7F7853C36E814 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void GameMenuManager::CheckTrophyRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_CheckTrophyRewards_m09BA0D360273D81A6166F87427265ABD36D303FE (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) ;
// System.Void GameMenuManager::LoadTexturesForPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_LoadTexturesForPlay_m7772A794C29DF799CE10A8F979C64BDB6A40B1A8 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) ;
// System.Void SceneTransition::SwitchToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameMenuManager::UpdateMoneyCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_UpdateMoneyCount_m6E476CBFE0BA92D361CBD350E962830D9F5E0B7A (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single PlayerData::get_SoundValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerData_get_SoundValue_mA0D63434F48E20A264C0BBF0924382C241421A25 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameMenuManager>()
inline GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* Object_FindObjectOfType_TisGameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_mF160445FEB43CF97F1AA27E8527885D4121DC8F8 (const RuntimeMethod* method)
{
	return ((  GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void LevelsScrollView::SpawnLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsScrollView_SpawnLevels_m302E859F708D5229803EDA910910ACD99BF1C799 (LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<LvlPrefObj>()
inline LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* GameObject_GetComponent_TisLvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38_mE91851040F6AD869E28095643C043B231B2D0964 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerData::set_SoundValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_SoundValue_m55C5EA4D4872A691ED432CF87D01B6D74784A40A (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void ShopController::ExitSkinScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_ExitSkinScroll_m8FB1685ACF447B7DE5A341C64A26C0E9145DD862 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.PhysicMaterial::set_bounciness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounciness_m99D8D24F76D60306CC4CFE38AD43BF240F84FDF9 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SwipeDetection/OnSwipeInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SwipeDetection::add_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_SwipeEvent_mB2BCB53EBE5245223EFE039622013CCCB73A9790 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::remove_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_SwipeEvent_mA9DA4CFA7B6318637C8428F1932C2AF0435EB08E (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void PlayBallManager::UpdateStatusText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, String_t* ___status0, const RuntimeMethod* method) ;
// System.Void BallDropper/DropBall::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_inline (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void PlayBallManager::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_PlaySound_mFDE4CA6E226FFDC794D69BF3BB264DD541EBDC3E (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void LevelsManager::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsManager_StartLevel_m2614CB9D1197B8C73FB27E361A0B3F0D0F24B290 (LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* __this, int32_t ___LvlIndex0, const RuntimeMethod* method) ;
// System.Void PlayBallManager::SpawnBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_SpawnBall_m470AB0C1ABAD6523922F803246026725C93FF53C (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BasketController>()
inline BasketController_t842318361BEF46745936C36BF8554EC746DC1340* GameObject_GetComponent_TisBasketController_t842318361BEF46745936C36BF8554EC746DC1340_mD0F42D407D32BE4BBE94CBBCC5F0044C20D68513 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BasketController_t842318361BEF46745936C36BF8554EC746DC1340* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayBallManager::GetGameEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_GetGameEffects_mAB78FF349E879CF05FA4F1ACA4DEB7216FD3CA93 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// System.Void BallDropper/DropBall::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropBall__ctor_m73E181DCD8D59494229134FA1443C95AE1B48A69 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void BallDropper::add_ThrowEvent(BallDropper/DropBall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_add_ThrowEvent_m5971444A161EB013DB577B81FC4B3B18E1B14602 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GetStarsAnim>()
inline GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* GameObject_GetComponent_TisGetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC_mC56F6893D1DAF971847AAFAD5FC17FA7C1C28279 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<LevelsManager>()
inline LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* Object_FindObjectOfType_TisLevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_m94398BE6D9A9EE5219C83056FF0E02E3DB4CEDFD (const RuntimeMethod* method)
{
	return ((  LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.GameObject::GetComponent<BallDropper>()
inline BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single PlayBallManager::get_Sensivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayBallManager_get_Sensivity_m9972F23ADCA73F8D30A417CFF1E3376523434685 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Ad::ShowRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_ShowRewarded_m6B55736C0C1D79F52286916AA4499CA5DF68C397 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) ;
// System.Void LevelsData::set_StarsComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsData_set_StarsComplete_m5034C2EFA083F64F1E0E8A32BCF5B1873EA35D08 (LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void PlayBallManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_Win_m7CD9BF43E63981C2102B7E21C7DD1CCB21929ACB (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) ;
// System.Void BallDropper::remove_ThrowEvent(BallDropper/DropBall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_remove_ThrowEvent_mDD1DC7BDCA3920967D53EE6E10A244A2E241E443 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void PlayBallManager::set_Sensivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_set_Sensivity_m742A9C8CF62FE142EFA53A87FBF5EA36CD7B7D27 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void SwipeDetection::CheckSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void Ad::ShowInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_ShowInterstitial_m8901F1BDC959B3D9AD19F2E9DA6B820B6B8BE37D (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) ;
// System.Void SwipeDetection/OnSwipeInput::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::ResetSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TexturesData>()
inline TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* Component_GetComponent_TisTexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511_mD807E7426BFE5F0581CA34F9EAEFE09515B09392 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<SkinScrollPrefab>()
inline SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ConfirmBuyPanel>()
inline ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* GameObject_GetComponent_TisConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB_mE40AA67B4870C15F976D265C012895F5CFB8BA72 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ShopController::SetPrewievMat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SetPrewievMat_m29B82C898EEA5ECF0F6951EDCEB95E2A8866ED42 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___Index0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<ShopSkinPrefabController>()
inline ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ConfirmBuyPanel::ExitPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfirmBuyPanel_ExitPanel_mE4C2B117794EEDECAC563E4D0819AABFB4B52B16 (ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void ShopSkinPrefabController::CallOpenAnim(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_CallOpenAnim_m5D1A3BEFBC6FAA91F2C2CC88921C56C747297C03 (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void SkinScrollPrefab::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab_StartMove_m911443CD41FE168854877226825B2A280A899D11 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 ShopController::CalculateTextureIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopController_CalculateTextureIndex_m1D7BDA230B40D9BAE3B11BAD3904A62A2182791C (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___lenght0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void LvlPrefObj::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvlPrefObj_Start_m1BFC289ACBC6CD68287C4EE490F621AE9EEC5D61 (LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ComponentAnimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___ComponentAnimator_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentAnimator_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void LvlPrefObj::PlayAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvlPrefObj_PlayAnim_m45C0CC57BD81CC33938948DD56F62AE09852005C (LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// ComponentAnimator.SetTrigger("On");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___ComponentAnimator_11;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73, NULL);
		// }
		return;
	}
}
// System.Void LvlPrefObj::StartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvlPrefObj_StartLevel_mF3E9815490192F575DB6744358CE69B78DD40CE5 (LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (CanPlay)
		bool L_0 = __this->___CanPlay_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// GameMenuManager.Instance.OpenGameScene(LevelIndex);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_2 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_3 = __this->___LevelIndex_4;
		NullCheck(L_2);
		GameMenuManager_OpenGameScene_m731BD890096AE614C5C82FAFAAB48EF1B16CB7B8(L_2, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void LvlPrefObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvlPrefObj__ctor_m6A773EF17A24405DC478B1023F368445B101184F (LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* __this, const RuntimeMethod* method) 
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
// System.Void ShopSkinPrefabController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_Start_m98ED43EA40D9E692DE7613820AC95FD3A823336C (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ShopSkinPrefabController::CallOpenAnim(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_CallOpenAnim_m5D1A3BEFBC6FAA91F2C2CC88921C56C747297C03 (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D871AF4D4F76B14BDF1B3B151F566223AEE53EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("PlayAnim", AnimDelay * index);
		float L_0 = __this->___AnimDelay_5;
		int32_t L_1 = ___index0;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral7D871AF4D4F76B14BDF1B3B151F566223AEE53EA, ((float)il2cpp_codegen_multiply(L_0, ((float)L_1))), NULL);
		// }
		return;
	}
}
// System.Void ShopSkinPrefabController::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_Buy_m7596681448FFFF48FB7DAB1F30374FD59F98DEE2 (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// ShopController.Instance.OpenConfPan(Index);
		ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* L_1 = ((ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_2 = __this->___Index_4;
		NullCheck(L_1);
		ShopController_OpenConfPan_m7537DC0F1F518BAFE035975F4311314ABE66E8E5(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ShopSkinPrefabController::MarkAsGameVariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_MarkAsGameVariant_m8F46353BF346F9D7B9CF0ECE3487DDEDBBA3BA8C (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShopSkinPrefabController::PlayAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController_PlayAnim_mFEC8AA83C86AADF4DF5D2F83542B2E39AE20179E (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetTrigger("Open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_6;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, NULL);
		// }
		return;
	}
}
// System.Void ShopSkinPrefabController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopSkinPrefabController__ctor_m5F39623C07F2FE5CCFB8A62E3F2685DA5A50C043 (ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* __this, const RuntimeMethod* method) 
{
	{
		// private float AnimDelay = 0.4f;
		__this->___AnimDelay_5 = (0.400000006f);
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
// System.Void SkinScrollPrefab::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab_FixedUpdate_mCB0D13E61F767A2026935F8109A8BA65B2892980 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Move)
		bool L_0 = __this->___Move_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0094;
		}
	}
	{
		// transform.Translate(Direction * Speed * Time.fixedDeltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___Direction_6;
		float L_4 = __this->___Speed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_8, NULL);
		// if (transform.localPosition.y >= 300)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		float L_11 = L_10.___y_3;
		V_1 = (bool)((((int32_t)((!(((float)L_11) >= ((float)(300.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		// transform.localPosition = new Vector2(0, 300);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), (300.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_14, NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// Move = false;
		__this->___Move_4 = (bool)0;
		// GetComponent<Animator>().SetTrigger("Open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16;
		L_16 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_16);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_16, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, NULL);
	}

IL_0093:
	{
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void SkinScrollPrefab::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab_StartMove_m911443CD41FE168854877226825B2A280A899D11 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) 
{
	{
		// Move = true;
		__this->___Move_4 = (bool)1;
		// }
		return;
	}
}
// System.Void SkinScrollPrefab::StartSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab_StartSpawn_mBF1C687BAB99B906082721FBDF242DC54925FEB7 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) 
{
	{
		// BGScroll.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BGScroll_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _shopController.SpawnShopItemsHelper();
		ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* L_1 = __this->____shopController_7;
		NullCheck(L_1);
		ShopController_SpawnShopItemsHelper_m4A93FD4E0DDEEFB9441D820253FB98B3E418B422(L_1, NULL);
		// }
		return;
	}
}
// System.Void SkinScrollPrefab::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab_Deactivate_m1A65866A7D670840A37CD2D7DF78C5A7E6B9A9F1 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) 
{
	{
		// BGScroll.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BGScroll_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _shopController.ShopTypeObjActive(true);
		ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* L_1 = __this->____shopController_7;
		NullCheck(L_1);
		ShopController_ShopTypeObjActive_mFEC4F7C5DE7B1F3E7E67B6BD4CAED3ECC9BEABE1(L_1, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SkinScrollPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinScrollPrefab__ctor_m7D429C28345FEFE603B9F47B7AF55276391F17D6 (SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* __this, const RuntimeMethod* method) 
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
// System.Void BasketController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketController_Start_mC696348DB8DD127709ED40F9D590DF298DD8A8A2 (BasketController_t842318361BEF46745936C36BF8554EC746DC1340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DeltaAngles = new float[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___DeltaAngles_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeltaAngles_9), (void*)L_0);
		// DeltaAngle = Time.fixedDeltaTime * AngleSpeed;
		float L_1;
		L_1 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		float L_2 = __this->___AngleSpeed_6;
		__this->___DeltaAngle_5 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// CalculateRotateAxis();
		BasketController_CalculateRotateAxis_m3FC8838666ABF2BC0E4B9FC7F969550F7D475CA1(__this, NULL);
		// }
		return;
	}
}
// System.Void BasketController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketController_FixedUpdate_m7F7AA2AC5B1E9A49DDC18678FEB1AB9ECF9AA2F1 (BasketController_t842318361BEF46745936C36BF8554EC746DC1340* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (RotationDirection != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___RotationDirection_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_014d;
		}
	}
	{
		// if (DeltaAngles[1] != 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___DeltaAngles_9;
		NullCheck(L_4);
		int32_t L_5 = 1;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = (bool)((((int32_t)((((float)L_6) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// DeltaAngles[0] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___DeltaAngles_9;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// DeltaAngles[2] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___DeltaAngles_9;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)(0.0f));
		goto IL_00f0;
	}

IL_0050:
	{
		// float XAngle = transform.localEulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_10, NULL);
		float L_12 = L_11.___x_2;
		V_2 = L_12;
		// float ZAngle = transform.localEulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_13, NULL);
		float L_15 = L_14.___z_4;
		V_3 = L_15;
		// if ((XAngle < 360 - RotationDirection.x) && (XAngle > RotationDirection.x))
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___RotationDirection_10);
		float L_18 = L_17->___x_2;
		if ((!(((float)L_16) < ((float)((float)il2cpp_codegen_subtract((360.0f), L_18))))))
		{
			goto IL_0097;
		}
	}
	{
		float L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___RotationDirection_10);
		float L_21 = L_20->___x_2;
		G_B6_0 = ((((float)L_19) > ((float)L_21))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B6_0 = 0;
	}

IL_0098:
	{
		V_4 = (bool)G_B6_0;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// DeltaAngles[0] = -DeltaAngles[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___DeltaAngles_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___DeltaAngles_9;
		NullCheck(L_24);
		int32_t L_25 = 0;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((-L_26)));
	}

IL_00b1:
	{
		// if ((ZAngle < 360 - RotationDirection.z) && (ZAngle > RotationDirection.z))
		float L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___RotationDirection_10);
		float L_29 = L_28->___z_4;
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_subtract((360.0f), L_29))))))
		{
			goto IL_00d5;
		}
	}
	{
		float L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___RotationDirection_10);
		float L_32 = L_31->___z_4;
		G_B11_0 = ((((float)L_30) > ((float)L_32))? 1 : 0);
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B11_0 = 0;
	}

IL_00d6:
	{
		V_5 = (bool)G_B11_0;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_00ef;
		}
	}
	{
		// DeltaAngles[2] = -DeltaAngles[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___DeltaAngles_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___DeltaAngles_9;
		NullCheck(L_35);
		int32_t L_36 = 2;
		float L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_37)));
	}

IL_00ef:
	{
	}

IL_00f0:
	{
		// transform.localEulerAngles = new Vector3(transform.localEulerAngles.x + DeltaAngles[0],
		// transform.localEulerAngles.y + DeltaAngles[1], transform.localEulerAngles.z + DeltaAngles[2]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_39, NULL);
		float L_41 = L_40.___x_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___DeltaAngles_9;
		NullCheck(L_42);
		int32_t L_43 = 0;
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_45, NULL);
		float L_47 = L_46.___y_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = __this->___DeltaAngles_9;
		NullCheck(L_48);
		int32_t L_49 = 1;
		float L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_51, NULL);
		float L_53 = L_52.___z_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = __this->___DeltaAngles_9;
		NullCheck(L_54);
		int32_t L_55 = 2;
		float L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), ((float)il2cpp_codegen_add(L_41, L_44)), ((float)il2cpp_codegen_add(L_47, L_50)), ((float)il2cpp_codegen_add(L_53, L_56)), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_38, L_57, NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void BasketController::CalculateRotateAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketController_CalculateRotateAxis_m3FC8838666ABF2BC0E4B9FC7F969550F7D475CA1 (BasketController_t842318361BEF46745936C36BF8554EC746DC1340* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (RotationDirection.x != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___RotationDirection_10);
		float L_1 = L_0->___x_2;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// DeltaAngles[0] = DeltaAngle;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___DeltaAngles_9;
		float L_4 = __this->___DeltaAngle_5;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_4);
	}

IL_002a:
	{
		// if (RotationDirection.y != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___RotationDirection_10);
		float L_6 = L_5->___y_3;
		V_1 = (bool)((((int32_t)((((float)L_6) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// DeltaAngles[1] = DeltaAngle;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___DeltaAngles_9;
		float L_9 = __this->___DeltaAngle_5;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_9);
		// transform.localEulerAngles = RotationDirection;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___RotationDirection_10;
		NullCheck(L_10);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_10, L_11, NULL);
	}

IL_0065:
	{
		// if (RotationDirection.z != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___RotationDirection_10);
		float L_13 = L_12->___z_4;
		V_2 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		// DeltaAngles[2] = DeltaAngle;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___DeltaAngles_9;
		float L_16 = __this->___DeltaAngle_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_16);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void BasketController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketController__ctor_m261695708574EA9EAA5F70C368F7E5F8966035B2 (BasketController_t842318361BEF46745936C36BF8554EC746DC1340* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleSpeed = 20f;
		__this->___AngleSpeed_6 = (20.0f);
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
// System.Void BoxCollisionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollisionController_Start_m572C624C065B5FEFE755AC6E3A8B4B1FFEC3F9FA (BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playBallManager = FindObjectOfType<PlayBallManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_0;
		L_0 = Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B(Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		__this->____playBallManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playBallManager_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void BoxCollisionController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollisionController_OnTriggerEnter_m31A7AB85B277813091C235967EBE7DFC2B204E44 (BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (other.CompareTag("Ball"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// _playBallManager.BoxTouchAction();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_3 = __this->____playBallManager_4;
		NullCheck(L_3);
		PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BoxCollisionController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollisionController_OnTriggerExit_m124CC661C082FBE8A1E5984FAE9FC7B4BF6924EE (BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (other.CompareTag("Ball"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// _playBallManager.BoxTouchAction();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_3 = __this->____playBallManager_4;
		NullCheck(L_3);
		PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BoxCollisionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollisionController__ctor_mF9216F0C13DF66F8622FC54EF458A2D36E8017FB (BoxCollisionController_t9D90BA32F4CEAD321DE4EE18A08C46B62A71823C* __this, const RuntimeMethod* method) 
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
// System.Void Ad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_Start_m5DF25223A1949DC0DC390E1FA8FF3162DDB641D4 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Instance = this;
		((Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_StaticFields*)il2cpp_codegen_static_fields_for(Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_StaticFields*)il2cpp_codegen_static_fields_for(Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// count = 0;
		__this->___count_6 = 0;
		// int adTypes = AppodealAdType.Interstitial | AppodealAdType.Banner | AppodealAdType.RewardedVideo | AppodealAdType.Mrec;
		V_0 = ((int32_t)15);
		// Appodeal.Initialize(AppKey, adTypes, this);
		String_t* L_0 = __this->___AppKey_5;
		int32_t L_1 = V_0;
		Appodeal_Initialize_m9411C634CA28FA74A0C57C210392C84B8DD1AF8B(L_0, L_1, __this, NULL);
		// Appodeal.SetRewardedVideoCallbacks(this);
		Appodeal_SetRewardedVideoCallbacks_m1455C957FD829CEB6CFD18CAD6D6724C4FA088F9(__this, NULL);
		// Appodeal.Cache(AppodealAdType.Interstitial);
		Appodeal_Cache_mFF16A0508FB1BD11FD5DD7ADDD3FF9CF089019C5(1, NULL);
		// Appodeal.Cache(AppodealAdType.RewardedVideo);
		Appodeal_Cache_mFF16A0508FB1BD11FD5DD7ADDD3FF9CF089019C5(4, NULL);
		// }
		return;
	}
}
// System.Void Ad::OnInitializationFinished(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInitializationFinished_m7093BD086854A80082B5489FDC4490ECA6BBAEFC (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___errors0, const RuntimeMethod* method) 
{
	{
		// public void OnInitializationFinished(List<string> errors) { }
		return;
	}
}
// System.Void Ad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_Update_m61F4A87D363F0B1C66E9B8311BD902BC078EC2EA (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (videoFinished)
		bool L_0 = __this->___videoFinished_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// GameMenuManager.Instance.playerData.Money += 25;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_2 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = L_2->___playerData_14;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383(L_4, NULL);
		NullCheck(L_4);
		PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970(L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)25))), NULL);
		// PlayBallManager.Instance.RewardText.text = 50.ToString();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_6 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___RewardText_11;
		V_1 = ((int32_t)50);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// videoFinished = false;
		__this->___videoFinished_7 = (bool)0;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Ad::ShowInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_ShowInterstitial_m8901F1BDC959B3D9AD19F2E9DA6B820B6B8BE37D (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// count++;
		int32_t L_0 = __this->___count_6;
		__this->___count_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (count == 150)
		int32_t L_1 = __this->___count_6;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)150)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// if (Appodeal.IsLoaded(AppodealAdType.Interstitial))
		bool L_3;
		L_3 = Appodeal_IsLoaded_mF6BBD221F5333459A071A449C89E8212AD33E56B(1, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Appodeal.Show(AppodealShowStyle.Interstitial);
		bool L_5;
		L_5 = Appodeal_Show_m1D24F31247F2DB92D5BA7370D95B53228A5D8305(1, NULL);
	}

IL_0032:
	{
		// count = 0;
		__this->___count_6 = 0;
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Ad::ShowRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_ShowRewarded_m6B55736C0C1D79F52286916AA4499CA5DF68C397 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Appodeal.IsLoaded(AppodealAdType.RewardedVideo))
		bool L_0;
		L_0 = Appodeal_IsLoaded_mF6BBD221F5333459A071A449C89E8212AD33E56B(4, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Appodeal.Show(AppodealShowStyle.RewardedVideo);
		bool L_2;
		L_2 = Appodeal_Show_m1D24F31247F2DB92D5BA7370D95B53228A5D8305(((int32_t)32), NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Ad::OnInterstitialLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialLoaded_m130F52E639414BAA31B649B1D2867A21DFB9CE44 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, bool ___isPrecache0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialLoaded_m130F52E639414BAA31B649B1D2867A21DFB9CE44_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialFailedToLoad_mFBDB18B868C793DE4F73E7A7CDCC8F8B22047799 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialFailedToLoad_mFBDB18B868C793DE4F73E7A7CDCC8F8B22047799_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialShowFailed_m9497F5AC918FE94E5ADF920EC98380503E8BBB8B (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialShowFailed_m9497F5AC918FE94E5ADF920EC98380503E8BBB8B_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialShown_mA4FA24BE10DBEBEA3761CC1B06358A70B9DB1918 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialShown_mA4FA24BE10DBEBEA3761CC1B06358A70B9DB1918_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialClosed_mCEB4BA4B18F7BDF1799D4409430A9E2FDF829768 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialClosed_mCEB4BA4B18F7BDF1799D4409430A9E2FDF829768_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialClicked_m8DE455ED4E379EC13D2D075B63F4B392C933EE8F (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialClicked_m8DE455ED4E379EC13D2D075B63F4B392C933EE8F_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnInterstitialExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnInterstitialExpired_m7572675F8C7C85586716AC7A792D74D4DE996400 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnInterstitialExpired_m7572675F8C7C85586716AC7A792D74D4DE996400_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoLoaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoLoaded_m9834582667F85C8E9E785FBA3A58128D4B837E10 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, bool ___isPrecache0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoLoaded_m9834582667F85C8E9E785FBA3A58128D4B837E10_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoFailedToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoFailedToLoad_m04AFD63D80F967502AC049C6AACCD90C6D557F8F (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoFailedToLoad_m04AFD63D80F967502AC049C6AACCD90C6D557F8F_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoShowFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoShowFailed_mA56408D3A1D09ABD87FB7564CA9EC92E63F59C72 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoShowFailed_mA56408D3A1D09ABD87FB7564CA9EC92E63F59C72_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoShown_mF1ED336E7F58835BE78E69529227CEA270D2A68E (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoShown_mF1ED336E7F58835BE78E69529227CEA270D2A68E_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoFinished(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoFinished_m9378F118D3A95FDB7EA60F173972ABB084CCF6DD (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, double ___amount0, String_t* ___currency1, const RuntimeMethod* method) 
{
	{
		// rewardAmount = amount;
		double L_0 = ___amount0;
		__this->___rewardAmount_8 = L_0;
		// rewardName = currency;
		String_t* L_1 = ___currency1;
		__this->___rewardName_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardName_9), (void*)L_1);
		// videoFinished = true;
		__this->___videoFinished_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Ad::OnRewardedVideoClosed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoClosed_m05DBF011F0D10C324622D7254012A1D351A19A33 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, bool ___finished0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoClosed_m05DBF011F0D10C324622D7254012A1D351A19A33_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoExpired_m2F7D9FE0678311A5F0542AE926D1847C90E72196 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoExpired_m2F7D9FE0678311A5F0542AE926D1847C90E72196_RuntimeMethod_var)));
	}
}
// System.Void Ad::OnRewardedVideoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad_OnRewardedVideoClicked_m55AE85244C5AA72C01FAA18C314D27C4D0A2E4D2 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ad_OnRewardedVideoClicked_m55AE85244C5AA72C01FAA18C314D27C4D0A2E4D2_RuntimeMethod_var)));
	}
}
// System.Void Ad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ad__ctor_mA4186FDF0A154FDDE07FB30E8D5CE735CD4B4C86 (Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C4998D5519DFC6A20591776820D54C0E4785A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string AppKey = "5bc66218a6f859056b042efe26c86b889dd803682deea2a7";
		__this->___AppKey_5 = _stringLiteralA3C4998D5519DFC6A20591776820D54C0E4785A4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AppKey_5), (void*)_stringLiteralA3C4998D5519DFC6A20591776820D54C0E4785A4);
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
// System.Void DeleteSavedData::ClearGameData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteSavedData_ClearGameData_m294AEDDD805102254A62AC54A91D99E3DE3493F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 1; i < 31; i++)
		V_0 = 1;
		goto IL_0023;
	}

IL_0005:
	{
		// PlayerPrefs.SetInt("StarsComplete" + i, 0);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2, L_0, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_1, 0, NULL);
		// for (int i = 1; i < 31; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0023:
	{
		// for (int i = 1; i < 31; i++)
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)31)))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> DeleteSavedData::GetLevelStarsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* DeleteSavedData_GetLevelStarsCompleted_mB18321B23374BEC97CFAC271FB16D22AF52F0164 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_3 = NULL;
	{
		// List<int> LevelsList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < 31; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		// LevelsList.Add(PlayerPrefs.GetInt("StarsComplete" + i, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = V_0;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2, L_2, NULL);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_3, 0, NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < 31; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < 31; i++)
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)31)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		// return LevelsList;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = V_0;
		V_3 = L_8;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = V_3;
		return L_9;
	}
}
// System.Void DeleteSavedData::SetCompeletedLevels(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteSavedData_SetCompeletedLevels_m0D218D52F431C770537854A6E62F975CE68B16CC (int32_t ___LevelCount0, int32_t ___Stars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 1; i <= LevelCount; i++)
		V_0 = 1;
		goto IL_0023;
	}

IL_0005:
	{
		// PlayerPrefs.SetInt("StarsComplete" + i, Stars);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2, L_0, NULL);
		int32_t L_2 = ___Stars1;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_1, L_2, NULL);
		// for (int i = 1; i <= LevelCount; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0023:
	{
		// for (int i = 1; i <= LevelCount; i++)
		int32_t L_4 = V_0;
		int32_t L_5 = ___LevelCount0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
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
// System.Void GameMenuManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Awake_m69003EF1F42782546CF9000C01F14626EF018520 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DeleteSavedData.SetCompeletedLevels(30, 3);
		DeleteSavedData_SetCompeletedLevels_m0D218D52F431C770537854A6E62F975CE68B16CC(((int32_t)30), 3, NULL);
		// playerData.Money = 1000;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0 = __this->___playerData_14;
		NullCheck(L_0);
		PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970(L_0, ((int32_t)1000), NULL);
		// _texturesData.LoadTexturesStatus();
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_1 = __this->____texturesData_15;
		NullCheck(L_1);
		TexturesData_LoadTexturesStatus_m5342E7801F7A120F267FCA270CA429D8E522FF38(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameMenuManager::CheckTrophyRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_CheckTrophyRewards_m09BA0D360273D81A6166F87427265ABD36D303FE (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E124FDF68E0C37CAAE9A2D33D95FB4F5EC60AF2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// int TotalStars = 0;
		V_0 = 0;
		// List<int> LevelsStars = DeleteSavedData.GetLevelStarsCompleted();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0;
		L_0 = DeleteSavedData_GetLevelStarsCompleted_mB18321B23374BEC97CFAC271FB16D22AF52F0164(NULL);
		V_1 = L_0;
		// for (int i = 0; i < LevelsStars.Count; i++)
		V_2 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		// TotalStars += LevelsStars[i];
		int32_t L_1 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, L_3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_4));
		// for (int i = 0; i < LevelsStars.Count; i++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < LevelsStars.Count; i++)
		int32_t L_6 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_7, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		// TotalStars -= playerData.TrophyRewardsCollected * 15;
		int32_t L_10 = V_0;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_11 = __this->___playerData_14;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PlayerData_get_TrophyRewardsCollected_m1FE2267FB46C00B04E38D441453CF48D0EAC3496(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)15)))));
		// StarsCount.text = (TotalStars.ToString() + "/15");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___StarsCount_9;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_14, _stringLiteral8E124FDF68E0C37CAAE9A2D33D95FB4F5EC60AF2, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// if (TotalStars >= 15)
		int32_t L_16 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		// TrophyRewardImage.color = StatusColor[0];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___TrophyRewardImage_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_19 = __this->___StatusColor_11;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_21);
		// CanClaimTrophyReward = true;
		__this->___CanClaimTrophyReward_13 = (bool)1;
		goto IL_00aa;
	}

IL_0089:
	{
		// TrophyRewardImage.color = StatusColor[1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___TrophyRewardImage_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_23 = __this->___StatusColor_11;
		NullCheck(L_23);
		int32_t L_24 = 1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_25);
		// CanClaimTrophyReward = false;
		__this->___CanClaimTrophyReward_13 = (bool)0;
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void GameMenuManager::CollectTrophyReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_CollectTrophyReward_m94A3EACA455620A318E7E1B3618893D1FADCE858 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// if (CanClaimTrophyReward)
		bool L_1 = __this->___CanClaimTrophyReward_13;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// playerData.TrophyRewardsCollected += 1;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = __this->___playerData_14;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PlayerData_get_TrophyRewardsCollected_m1FE2267FB46C00B04E38D441453CF48D0EAC3496(L_4, NULL);
		NullCheck(L_4);
		PlayerData_set_TrophyRewardsCollected_mD2E6CC0940C6006B72E2F2562BC7F7853C36E814(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// playerData.Money += 25;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_6 = __this->___playerData_14;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383(L_7, NULL);
		NullCheck(L_7);
		PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970(L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)25))), NULL);
		// GameObject temp = Instantiate(Money, PlayPanObj.transform) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Money_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___PlayPanObj_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_12;
		// Destroy(temp, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_13, (1.0f), NULL);
		// CheckTrophyRewards();
		GameMenuManager_CheckTrophyRewards_m09BA0D360273D81A6166F87427265ABD36D303FE(__this, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void GameMenuManager::OpenGameScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_OpenGameScene_m731BD890096AE614C5C82FAFAAB48EF1B16CB7B8 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, int32_t ___LvlToLoad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18866D36E48E0879464217E58046A1480B6EEEA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadTexturesForPlay();
		GameMenuManager_LoadTexturesForPlay_m7772A794C29DF799CE10A8F979C64BDB6A40B1A8(__this, NULL);
		// LevelToLoad = LvlToLoad;
		int32_t L_0 = ___LvlToLoad0;
		__this->___LevelToLoad_12 = L_0;
		// SceneTransition.SwitchToScene("PlayBallScene");
		SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316(_stringLiteral18866D36E48E0879464217E58046A1480B6EEEA8, NULL);
		// }
		return;
	}
}
// System.Void GameMenuManager::UpdateMoneyCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_UpdateMoneyCount_m6E476CBFE0BA92D361CBD350E962830D9F5E0B7A (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (ShopMoneyText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ShopMoneyText_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// ShopMoneyText.text = value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___ShopMoneyText_10;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___value0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void GameMenuManager::LoadTexturesForPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_LoadTexturesForPlay_m7772A794C29DF799CE10A8F979C64BDB6A40B1A8 (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int itIndex = _texturesData._shopTexDataArray[0]._itemIndex;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_0 = __this->____texturesData_15;
		NullCheck(L_0);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_1 = L_0->____shopTexDataArray_4;
		NullCheck(L_1);
		int32_t L_2 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4 = L_3->____itemIndex_5;
		V_0 = L_4;
		// PlayTextures[0] = _texturesData._shopTexDataArray[0]._texture[itIndex];
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_5 = __this->___PlayTextures_5;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_6 = __this->____texturesData_15;
		NullCheck(L_6);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_7 = L_6->____shopTexDataArray_4;
		NullCheck(L_7);
		int32_t L_8 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_10 = L_9->____texture_1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_13);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_13);
		// PlayTextures[1] = _texturesData._shopTexDataArray[1]._texture[_texturesData._shopTexDataArray[1]._itemIndex];
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_14 = __this->___PlayTextures_5;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_15 = __this->____texturesData_15;
		NullCheck(L_15);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_16 = L_15->____shopTexDataArray_4;
		NullCheck(L_16);
		int32_t L_17 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_19 = L_18->____texture_1;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_20 = __this->____texturesData_15;
		NullCheck(L_20);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_21 = L_20->____shopTexDataArray_4;
		NullCheck(L_21);
		int32_t L_22 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24 = L_23->____itemIndex_5;
		NullCheck(L_19);
		int32_t L_25 = L_24;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_26 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_26);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_26);
		// }
		return;
	}
}
// System.Void GameMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager__ctor_mDAD729E1E2A853245FFBF04647A7CB055F7C1CCD (GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* __this, const RuntimeMethod* method) 
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
// System.String PlayerData::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerData_get_Name_m36E6C7B0831731519A3CEE3ABF53273200E47599 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return name;
		String_t* L_0 = __this->___name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerData::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_Name_mBB4B82D2146BD2D30922F5852BBD8692CA98B5BF (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// name = value;
		String_t* L_0 = ___value0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 PlayerData::get_Money()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return PlayerPrefs.GetInt("Money", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, 0, NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerData::set_Money(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Money", value);
		int32_t L_0 = ___value0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, L_0, NULL);
		// GameMenuManager.Instance.UpdateMoneyCount(value);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_1 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		GameMenuManager_UpdateMoneyCount_m6E476CBFE0BA92D361CBD350E962830D9F5E0B7A(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Single PlayerData::get_SoundValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerData_get_SoundValue_mA0D63434F48E20A264C0BBF0924382C241421A25 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0C56D02DA989918B5E8D645934F7B8884A27C50);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return PlayerPrefs.GetFloat("SoundValue", 1);
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralB0C56D02DA989918B5E8D645934F7B8884A27C50, (1.0f), NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerData::set_SoundValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_SoundValue_m55C5EA4D4872A691ED432CF87D01B6D74784A40A (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0C56D02DA989918B5E8D645934F7B8884A27C50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("SoundValue", value);
		float L_0 = ___value0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralB0C56D02DA989918B5E8D645934F7B8884A27C50, L_0, NULL);
		// }
		return;
	}
}
// System.Int32 PlayerData::get_TrophyRewardsCollected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_TrophyRewardsCollected_m1FE2267FB46C00B04E38D441453CF48D0EAC3496 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CFDC0773D4001A01E98AE8F0CED81B3DD17EAFC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return PlayerPrefs.GetInt("TrophyRewardsCollected", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral5CFDC0773D4001A01E98AE8F0CED81B3DD17EAFC, 0, NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerData::set_TrophyRewardsCollected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_TrophyRewardsCollected_mD2E6CC0940C6006B72E2F2562BC7F7853C36E814 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CFDC0773D4001A01E98AE8F0CED81B3DD17EAFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("TrophyRewardsCollected", value);
		int32_t L_0 = ___value0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral5CFDC0773D4001A01E98AE8F0CED81B3DD17EAFC, L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mDD79CC7712EAF325215F97832BFE3403DF47DFA8 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
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
// System.Void GetStarsAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim_Start_m684F0AB09D8ADDB18EE8ED91E33520F2AF051AF1 (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarsSound = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___StarsSound_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StarsSound_10), (void*)L_0);
		// StarsSound.volume = GameMenuManager.Instance.playerData.SoundValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___StarsSound_10;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_2 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = L_2->___playerData_14;
		NullCheck(L_3);
		float L_4;
		L_4 = PlayerData_get_SoundValue_mA0D63434F48E20A264C0BBF0924382C241421A25(L_3, NULL);
		NullCheck(L_1);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_1, L_4, NULL);
		// CanSwitchScene = true;
		__this->___CanSwitchScene_11 = (bool)1;
		// }
		return;
	}
}
// System.Void GetStarsAnim::PlayAnim1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim_PlayAnim1_m91700618F5E21DD07C189A25303F2E2E2AB45022 (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
{
	{
		// StarsSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___StarsSound_10;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SmallStarsEffects[0].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = __this->___SmallStarsEffects_4;
		NullCheck(L_1);
		int32_t L_2 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_3, NULL);
		// }
		return;
	}
}
// System.Void GetStarsAnim::PlayAnim2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim_PlayAnim2_m9B218CE0F2593AE9B1D089BFC05B5D79B3411A10 (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Star2.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Star2_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// StarsSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___StarsSound_10;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_001e:
	{
		// SmallStarsEffects[1].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_4 = __this->___SmallStarsEffects_4;
		NullCheck(L_4);
		int32_t L_5 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
		// }
		return;
	}
}
// System.Void GetStarsAnim::PlayAnim3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim_PlayAnim3_mDBC83989DDFD29AEE6C1BD9B5714EC3F9089CE9A (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Star3.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Star3_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// StarsSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___StarsSound_10;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_001e:
	{
		// SmallStarsEffects[2].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_4 = __this->___SmallStarsEffects_4;
		NullCheck(L_4);
		int32_t L_5 = 2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
		// }
		return;
	}
}
// System.Void GetStarsAnim::LoadNewLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim_LoadNewLvl_mEEF4366592DC85DF3410178BF183EF188AACD0FD (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028FACF80E052870874038642F78B9BF75689F99);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// if (CanSwitchScene)
		bool L_1 = __this->___CanSwitchScene_11;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		// CanSwitchScene = false;
		__this->___CanSwitchScene_11 = (bool)0;
		// int LevelNow = LevelsManager.Instance.LevelIndex;
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_3 = ((LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_StaticFields*)il2cpp_codegen_static_fields_for(LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		int32_t L_4 = L_3->___LevelIndex_5;
		V_1 = L_4;
		// if (LevelNow == LevelsManager.Instance.levelsdataarray.Length - 1)
		int32_t L_5 = V_1;
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_6 = ((LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_StaticFields*)il2cpp_codegen_static_fields_for(LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_7 = L_6->___levelsdataarray_9;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1))))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// SceneTransition.SwitchToScene("MainMenuScene");
		SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316(_stringLiteral028FACF80E052870874038642F78B9BF75689F99, NULL);
		goto IL_005d;
	}

IL_004d:
	{
		// GameMenuManager.Instance.OpenGameScene(LevelNow + 1);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_9 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GameMenuManager_OpenGameScene_m731BD890096AE614C5C82FAFAAB48EF1B16CB7B8(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
	}

IL_005d:
	{
	}

IL_005e:
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GetStarsAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStarsAnim__ctor_m441330087A6BEB7DFCD12EC638F7B16A93AECEF6 (GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* __this, const RuntimeMethod* method) 
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
// System.Void LevelsScrollView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsScrollView_Start_m06729F0BCF2D48DF213DA9662146058CC6E1DD7B (LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_mF160445FEB43CF97F1AA27E8527885D4121DC8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _manager = FindObjectOfType<GameMenuManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_0;
		L_0 = Object_FindObjectOfType_TisGameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_mF160445FEB43CF97F1AA27E8527885D4121DC8F8(Object_FindObjectOfType_TisGameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_mF160445FEB43CF97F1AA27E8527885D4121DC8F8_RuntimeMethod_var);
		__this->____manager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manager_8), (void*)L_0);
		// SpawnLevels();
		LevelsScrollView_SpawnLevels_m302E859F708D5229803EDA910910ACD99BF1C799(__this, NULL);
		// }
		return;
	}
}
// System.Void LevelsScrollView::SpawnLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsScrollView_SpawnLevels_m302E859F708D5229803EDA910910ACD99BF1C799 (LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38_mE91851040F6AD869E28095643C043B231B2D0964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		// _manager.CheckTrophyRewards();
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_0 = __this->____manager_8;
		NullCheck(L_0);
		GameMenuManager_CheckTrophyRewards_m09BA0D360273D81A6166F87427265ABD36D303FE(L_0, NULL);
		// List<int> LevelsStars = DeleteSavedData.GetLevelStarsCompleted();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = DeleteSavedData_GetLevelStarsCompleted_mB18321B23374BEC97CFAC271FB16D22AF52F0164(NULL);
		V_0 = L_1;
		// bool CentalLvl = true;
		V_2 = (bool)1;
		// for (int i = 1; i < LevelsStars.Count; i++)
		V_3 = 1;
		goto IL_012f;
	}

IL_001c:
	{
		// stars = LevelsStars[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = V_0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, L_3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_4;
		// GameObject temp = Instantiate(LevelPrefab, Scroll.content) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___LevelPrefab_4;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->___Scroll_5;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_4 = L_8;
		// LevelsTemp.Add(temp);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___LevelsTemp_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_4;
		NullCheck(L_9);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_10, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// var tempComp = temp.GetComponent<LvlPrefObj>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_4;
		NullCheck(L_11);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_12;
		L_12 = GameObject_GetComponent_TisLvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38_mE91851040F6AD869E28095643C043B231B2D0964(L_11, GameObject_GetComponent_TisLvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38_mE91851040F6AD869E28095643C043B231B2D0964_RuntimeMethod_var);
		V_5 = L_12;
		// tempComp.LevelIndex = i;
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_13 = V_5;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		L_13->___LevelIndex_4 = L_14;
		// tempComp.Leveltxt.GetComponent<Text>().text = i.ToString();
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_15 = V_5;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___Leveltxt_10;
		NullCheck(L_16);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17;
		L_17 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_16, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// tempComp.CanPlay = true;
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_19 = V_5;
		NullCheck(L_19);
		L_19->___CanPlay_5 = (bool)1;
		// if (stars == 0)
		int32_t L_20 = V_1;
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00df;
		}
	}
	{
		// tempComp.StarsContainer.SetActive(false);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_22 = V_5;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___StarsContainer_8;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// if (CentalLvl)
		bool L_24 = V_2;
		V_7 = L_24;
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		// CentalLvl = false;
		V_2 = (bool)0;
		goto IL_00dc;
	}

IL_00a3:
	{
		// tempComp.Leveltxt.SetActive(false);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_26 = V_5;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___Leveltxt_10;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// tempComp.Lock.SetActive(true);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_28 = V_5;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___Lock_9;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// tempComp.CanPlay = false;
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_30 = V_5;
		NullCheck(L_30);
		L_30->___CanPlay_5 = (bool)0;
		// tempComp.Border.color = BorderLockedColor;
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_31 = V_5;
		NullCheck(L_31);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = L_31->___Border_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = __this->___BorderLockedColor_6;
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
	}

IL_00dc:
	{
		goto IL_012a;
	}

IL_00df:
	{
		// switch (stars)
		int32_t L_34 = V_1;
		V_9 = L_34;
		int32_t L_35 = V_9;
		V_8 = L_35;
		int32_t L_36 = V_8;
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_00ee;
	}

IL_00ee:
	{
		int32_t L_37 = V_8;
		if ((((int32_t)L_37) == ((int32_t)2)))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_0129;
	}

IL_00f5:
	{
		// tempComp.Stars[1].SetActive(false);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_38 = V_5;
		NullCheck(L_38);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_39 = L_38->___Stars_7;
		NullCheck(L_39);
		int32_t L_40 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// tempComp.Stars[2].SetActive(false);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_42 = V_5;
		NullCheck(L_42);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = L_42->___Stars_7;
		NullCheck(L_43);
		int32_t L_44 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// break;
		goto IL_0129;
	}

IL_0117:
	{
		// tempComp.Stars[2].SetActive(false);
		LvlPrefObj_t2040D760610349A19392A19C810D23312F18DE38* L_46 = V_5;
		NullCheck(L_46);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = L_46->___Stars_7;
		NullCheck(L_47);
		int32_t L_48 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// break;
		goto IL_0129;
	}

IL_0129:
	{
	}

IL_012a:
	{
		// for (int i = 1; i < LevelsStars.Count; i++)
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_012f:
	{
		// for (int i = 1; i < LevelsStars.Count; i++)
		int32_t L_51 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_52, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_51) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelsScrollView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsScrollView__ctor_mD9CE953E7779B6FD6359387BED5856320AE8FBD7 (LevelsScrollView_tC77720FB9496271DAD3894D98373D96C1D04DE9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> LevelsTemp = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___LevelsTemp_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LevelsTemp_7), (void*)L_0);
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
// System.Void SettingsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_Start_m7D3582F7E06664BAF4F0084D8E1005DF225DE7E0 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundSource = SoundObj.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SoundObj_4;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___SoundSource_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SoundSource_7), (void*)L_1);
		// SoundValue = GameMenuManager.Instance.playerData.SoundValue;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_2 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = L_2->___playerData_14;
		NullCheck(L_3);
		float L_4;
		L_4 = PlayerData_get_SoundValue_mA0D63434F48E20A264C0BBF0924382C241421A25(L_3, NULL);
		__this->___SoundValue_5 = L_4;
		// _slider.value = SoundValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->____slider_6;
		float L_6 = __this->___SoundValue_5;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// SoundSource.volume = SoundValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___SoundSource_7;
		float L_8 = __this->___SoundValue_5;
		NullCheck(L_7);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void SettingsController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_FixedUpdate_mF54AC614E52B7002D309089A5AC912D655BE72A7 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_slider.value != SoundValue)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____slider_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2 = __this->___SoundValue_5;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// SoundValue = _slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____slider_6;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		__this->___SoundValue_5 = L_5;
		// GameMenuManager.Instance.playerData.SoundValue = SoundValue;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_6 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_7 = L_6->___playerData_14;
		float L_8 = __this->___SoundValue_5;
		NullCheck(L_7);
		PlayerData_set_SoundValue_m55C5EA4D4872A691ED432CF87D01B6D74784A40A(L_7, L_8, NULL);
		// SoundSource.volume = SoundValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___SoundSource_7;
		float L_10 = __this->___SoundValue_5;
		NullCheck(L_9);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, L_10, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void SettingsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController__ctor_mC1D5DFEFE813AC5732F61D424190E259768F4795 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
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
// System.Void SimpleRotation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotation_FixedUpdate_m81FB9D98D201199F61CAC5AC81D1E967225B7144 (SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// angle += Time.fixedDeltaTime * angleSpeed;
		float L_0 = __this->___angle_4;
		float L_1;
		L_1 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		float L_2 = __this->___angleSpeed_5;
		__this->___angle_4 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if (ShopObj)
		bool L_3 = __this->___ShopObj_7;
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// transform.localEulerAngles = new Vector3(StartXPos, angle, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = __this->___StartXPos_6;
		float L_7 = __this->___angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_5, L_8, NULL);
		goto IL_006d;
	}

IL_004a:
	{
		// transform.localEulerAngles = new Vector3(0, 0, angle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = __this->___angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_9, L_11, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void SimpleRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotation__ctor_m742A37EB3C099BBD220D910AE26951756863E906 (SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E* __this, const RuntimeMethod* method) 
{
	{
		// private float angle = 0;
		__this->___angle_4 = (0.0f);
		// private float angleSpeed = 25f;
		__this->___angleSpeed_5 = (25.0f);
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
// System.Void TapSoundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSoundController_Start_m3595C02B7CFE964CAFE0BD80BB5E0B094EEDF5AE (TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// TapSound = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___TapSound_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TapSound_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void TapSoundController::PlayTapSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90 (TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* __this, const RuntimeMethod* method) 
{
	{
		// TapSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___TapSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapSoundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSoundController__ctor_mA992CCF8473A153F9E3EF2AB19ADE99050AC6D42 (TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* __this, const RuntimeMethod* method) 
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
// System.Void PanelsSwitcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelsSwitcher_Start_m66CF232A3A4BB8C85450EA338211C575E24806E7 (PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Anim = GetComponent<Animation>();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		__this->___Anim_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Anim_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void PanelsSwitcher::PlayAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelsSwitcher_PlayAnim_m9227642EA06C2F69DA1457C80E8C07A0AFB011F4 (PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// Anim.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___Anim_10;
		NullCheck(L_1);
		bool L_2;
		L_2 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_1, NULL);
		// }
		return;
	}
}
// System.Void PanelsSwitcher::GoToPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelsSwitcher_GoToPanel_m5AB3E1D07401BC4E90DBEA058E8A4F37D55B9D3E (PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (ShopObj)
		bool L_0 = __this->___ShopObj_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (SkinScrollObj.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___SkinScrollObj_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// ShopController.Instance.ExitSkinScroll();
		ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* L_5 = ((ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_5);
		ShopController_ExitSkinScroll_m8FB1685ACF447B7DE5A341C64A26C0E9145DD862(L_5, NULL);
		goto IL_0046;
	}

IL_002a:
	{
		// ClosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___ClosePanel_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// OpenPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___OpenPanel_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_0046:
	{
		goto IL_0084;
	}

IL_0049:
	{
		// if (!NeedSwitchScene)
		bool L_8 = __this->___NeedSwitchScene_8;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// ClosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ClosePanel_4;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// OpenPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___OpenPanel_5;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		goto IL_0083;
	}

IL_0075:
	{
		// SceneTransition.SwitchToScene(SceneName);
		String_t* L_12 = __this->___SceneName_7;
		SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316(L_12, NULL);
	}

IL_0083:
	{
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void PanelsSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelsSwitcher__ctor_m6731CCD0F5B513C93BA05EB1C12C418767CA9A51 (PanelsSwitcher_t006C2FECFDB0E77D6220D8AEC713DC496C20A230* __this, const RuntimeMethod* method) 
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
// System.Void BallDropper::add_ThrowEvent(BallDropper/DropBall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_add_ThrowEvent_m5971444A161EB013DB577B81FC4B3B18E1B14602 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_0 = NULL;
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_1 = NULL;
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_2 = NULL;
	{
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_0 = ((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_1 = V_0;
		V_1 = L_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_2 = V_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)CastclassSealed((RuntimeObject*)L_4, DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var));
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_5 = V_2;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_6 = V_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_7;
		L_7 = InterlockedCompareExchangeImpl<DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*>((&((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4), L_5, L_6);
		V_0 = L_7;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_8 = V_0;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_9 = V_1;
		if ((!(((RuntimeObject*)(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)L_8) == ((RuntimeObject*)(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BallDropper::remove_ThrowEvent(BallDropper/DropBall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_remove_ThrowEvent_mDD1DC7BDCA3920967D53EE6E10A244A2E241E443 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_0 = NULL;
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_1 = NULL;
	DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* V_2 = NULL;
	{
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_0 = ((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_1 = V_0;
		V_1 = L_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_2 = V_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)CastclassSealed((RuntimeObject*)L_4, DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var));
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_5 = V_2;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_6 = V_1;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_7;
		L_7 = InterlockedCompareExchangeImpl<DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*>((&((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4), L_5, L_6);
		V_0 = L_7;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_8 = V_0;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_9 = V_1;
		if ((!(((RuntimeObject*)(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)L_8) == ((RuntimeObject*)(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BallDropper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_Start_m39BB10E9E97BB1585125C79FCC1C3C3CBC53C8ED (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playBallManager = FindObjectOfType<PlayBallManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_0;
		L_0 = Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B(Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		__this->____playBallManager_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playBallManager_14), (void*)L_0);
		// particles = gameObject.GetComponentInChildren<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
		L_2 = GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114(L_1, GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114_RuntimeMethod_var);
		__this->___particles_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_12), (void*)L_2);
		// FirstFloorTouch = false;
		__this->___FirstFloorTouch_11 = (bool)0;
		// BallPhysMat.bounciness = 0;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_3 = __this->___BallPhysMat_13;
		NullCheck(L_3);
		PhysicMaterial_set_bounciness_m99D8D24F76D60306CC4CFE38AD43BF240F84FDF9(L_3, (0.0f), NULL);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_4);
		// SwipeDetection.SwipeEvent += OnSwipe;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_5 = (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)il2cpp_codegen_object_new(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391(L_5, __this, (intptr_t)((void*)BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B_RuntimeMethod_var), NULL);
		SwipeDetection_add_SwipeEvent_mB2BCB53EBE5245223EFE039622013CCCB73A9790(L_5, NULL);
		// }
		return;
	}
}
// System.Void BallDropper::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_OnDestroy_m9AAAE0DAACBE03A366CCE57B44817B390ECAEE35 (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SwipeDetection.SwipeEvent -= OnSwipe;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)il2cpp_codegen_object_new(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391(L_0, __this, (intptr_t)((void*)BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B_RuntimeMethod_var), NULL);
		SwipeDetection_remove_SwipeEvent_mA9DA4CFA7B6318637C8428F1932C2AF0435EB08E(L_0, NULL);
		// }
		return;
	}
}
// System.Void BallDropper::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_FixedUpdate_m97B5C500B5A28D9C617923925A93784BC731115B (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C26DFABD08CCB6C516F0155E5475F91AF34A8A0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Droped && TimeToCheckVelocity)
		bool L_0 = __this->___Droped_9;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___TimeToCheckVelocity_10;
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
			goto IL_0066;
		}
	}
	{
		// TimeToCheckVelocity = false;
		__this->___TimeToCheckVelocity_10 = (bool)0;
		// if ( Mathf.Abs(rb.velocity.y) < 1 )   //(rb.velocity.x < 5 && rb.velocity.z < 5 && rb.velocity.y < 5)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6;
		L_6 = fabsf(L_5);
		V_1 = (bool)((((float)L_6) < ((float)(1.0f)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// PlayBallManager.Instance.UpdateStatusText("LoseVelocity");
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_8 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_8);
		PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1(L_8, _stringLiteral9C26DFABD08CCB6C516F0155E5475F91AF34A8A0, NULL);
		goto IL_0065;
	}

IL_0052:
	{
		// Invoke("SetCheckVelocity", 4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062, (4.0f), NULL);
	}

IL_0065:
	{
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void BallDropper::OnSwipe(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_OnSwipe_mC090CE830707816679EAE11BD870ACBEEE1EBA6B (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (ThrowEvent != null)
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_0 = ((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4;
		V_0 = (bool)((!(((RuntimeObject*)(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// ThrowEvent();
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_2 = ((BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_StaticFields*)il2cpp_codegen_static_fields_for(BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_il2cpp_TypeInfo_var))->___ThrowEvent_4;
		NullCheck(L_2);
		DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_inline(L_2, NULL);
	}

IL_001a:
	{
		// if (!Droped)
		bool L_3 = __this->___Droped_9;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00cd;
		}
	}
	{
		// if (particles == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___particles_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// particles = gameObject.GetComponentInChildren<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9;
		L_9 = GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114(L_8, GameObject_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D58B1A61AC6006F3EB95D60B23DAACE124D5114_RuntimeMethod_var);
		__this->___particles_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_12), (void*)L_9);
	}

IL_004e:
	{
		// Acceleration = direction.y / 650 * Sensivity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___direction0;
		float L_11 = L_10.___y_1;
		float L_12 = __this->___Sensivity_5;
		__this->___Acceleration_7 = ((float)il2cpp_codegen_multiply(((float)(L_11/(650.0f))), L_12));
		// Direction.x = direction.x / 10 * Sensivity;      //was 10
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___Direction_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___direction0;
		float L_15 = L_14.___x_0;
		float L_16 = __this->___Sensivity_5;
		L_13->___x_2 = ((float)il2cpp_codegen_multiply(((float)(L_15/(10.0f))), L_16));
		// BallPhysMat.bounciness = 0.75f;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_17 = __this->___BallPhysMat_13;
		NullCheck(L_17);
		PhysicMaterial_set_bounciness_m99D8D24F76D60306CC4CFE38AD43BF240F84FDF9(L_17, (0.75f), NULL);
		// rb.AddForce(Direction * Acceleration, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___Direction_6;
		float L_20 = __this->___Acceleration_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_20, NULL);
		NullCheck(L_18);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_18, L_21, 1, NULL);
		// Droped = true;
		__this->___Droped_9 = (bool)1;
		// Invoke("SetCheckVelocity", 7f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062, (7.0f), NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Void BallDropper::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_OnTriggerEnter_mE0A8D8D67453CE1E72D96F0244FA5108E612D33B (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724C9CF597B7C73CD21CA215B3867CF94896AB2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74279A078C47ECC250A045352E1E39F5260356AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((!other.CompareTag("Table")) && (!other.CompareTag("Room")))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// _playBallManager.PlaySound();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_5 = __this->____playBallManager_14;
		NullCheck(L_5);
		PlayBallManager_PlaySound_mFDE4CA6E226FFDC794D69BF3BB264DD541EBDC3E(L_5, NULL);
	}

IL_0031:
	{
		// if (other.CompareTag("Box"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_6, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// _playBallManager.BoxTouchAction();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_9 = __this->____playBallManager_14;
		NullCheck(L_9);
		PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8(L_9, NULL);
	}

IL_004e:
	{
		// if (other.CompareTag("FloorTag"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___other0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_10, _stringLiteral724C9CF597B7C73CD21CA215B3867CF94896AB2D, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		// if (!FirstFloorTouch)
		bool L_13 = __this->___FirstFloorTouch_11;
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// FirstFloorTouch = true;
		__this->___FirstFloorTouch_11 = (bool)1;
		goto IL_0088;
	}

IL_0076:
	{
		// PlayBallManager.Instance.UpdateStatusText("LoseFloor");
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_15 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_15);
		PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1(L_15, _stringLiteral74279A078C47ECC250A045352E1E39F5260356AF, NULL);
	}

IL_0088:
	{
		goto IL_00ae;
	}

IL_008b:
	{
		// else if (other.CompareTag("Win"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = ___other0;
		NullCheck(L_16);
		bool L_17;
		L_17 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_16, _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		// PlayBallManager.Instance.UpdateStatusText("Win");
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_19 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_19);
		PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1(L_19, _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void BallDropper::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_OnTriggerExit_mAC86CA141714E3521DBBBFE670BF778BB3603B9F (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (other.CompareTag("Room"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// PlayBallManager.Instance.UpdateStatusText("Lose");
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_3 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1(L_3, _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, NULL);
	}

IL_0022:
	{
		// if (other.CompareTag("Box"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_4, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// _playBallManager.BoxTouchAction();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_7 = __this->____playBallManager_14;
		NullCheck(L_7);
		PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8(L_7, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BallDropper::SetCheckVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper_SetCheckVelocity_mD985C5B57545CDEA535D87756B730C1D25612358 (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SetCheckVelocity");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5B67B20987242E9F9361FE1176E03E9C2D677062, NULL);
		// TimeToCheckVelocity = true;
		__this->___TimeToCheckVelocity_10 = (bool)1;
		// }
		return;
	}
}
// System.Void BallDropper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDropper__ctor_mFB88A77284811B053CC23C538FEF932173BEF171 (BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* __this, const RuntimeMethod* method) 
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
void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_Multicast(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* currentDelegate = reinterpret_cast<DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_Open(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_OpenStaticInvoker(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_ClosedStaticInvoker(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void BallDropper/DropBall::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropBall__ctor_m73E181DCD8D59494229134FA1443C95AE1B48A69 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_Multicast;
}
// System.Void BallDropper/DropBall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult BallDropper/DropBall::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DropBall_BeginInvoke_m8817F4CADB69575EC9D401188A776D9F6E88D88E (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void BallDropper/DropBall::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropBall_EndInvoke_mD64D3FAE042BA6B8B98C874E41680EA6E7D76B76 (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void LevelsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsManager_Awake_m113CBBA6EC72461F1CA6A29E1B3BF918357A9B96 (LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_StaticFields*)il2cpp_codegen_static_fields_for(LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_StaticFields*)il2cpp_codegen_static_fields_for(LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// StartLevel(GameMenuManager.Instance.LevelToLoad);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_0 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___LevelToLoad_12;
		LevelsManager_StartLevel_m2614CB9D1197B8C73FB27E361A0B3F0D0F24B290(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelsManager::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsManager_StartLevel_m2614CB9D1197B8C73FB27E361A0B3F0D0F24B290 (LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* __this, int32_t ___LvlIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBasketController_t842318361BEF46745936C36BF8554EC746DC1340_mD0F42D407D32BE4BBE94CBBCC5F0044C20D68513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	BasketController_t842318361BEF46745936C36BF8554EC746DC1340* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	{
		// LevelIndex = LvlIndex;
		int32_t L_0 = ___LvlIndex0;
		__this->___LevelIndex_5 = L_0;
		// PlayBallManager.Instance.SpawnBall();
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_1 = ((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_1);
		PlayBallManager_SpawnBall_m470AB0C1ABAD6523922F803246026725C93FF53C(L_1, NULL);
		// GameObject _basket = Instantiate(BasketPrefab, levelsdataarray[LvlIndex].BasketPosition.transform) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BasketPrefab_7;
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_3 = __this->___levelsdataarray_9;
		int32_t L_4 = ___LvlIndex0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___BasketPosition_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_2, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_9;
		// _basket.GetComponent<MeshRenderer>().material.SetTexture("_MainTex", GameMenuManager.Instance.PlayTextures[1]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11;
		L_11 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_10, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_13 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_13);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_14 = L_13->___PlayTextures_5;
		NullCheck(L_14);
		int32_t L_15 = 1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_12, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_16, NULL);
		// BasketController _basketController = _basket.GetComponent<BasketController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		BasketController_t842318361BEF46745936C36BF8554EC746DC1340* L_18;
		L_18 = GameObject_GetComponent_TisBasketController_t842318361BEF46745936C36BF8554EC746DC1340_mD0F42D407D32BE4BBE94CBBCC5F0044C20D68513(L_17, GameObject_GetComponent_TisBasketController_t842318361BEF46745936C36BF8554EC746DC1340_mD0F42D407D32BE4BBE94CBBCC5F0044C20D68513_RuntimeMethod_var);
		V_1 = L_18;
		// BasketEffect = _basketController.Effect;
		BasketController_t842318361BEF46745936C36BF8554EC746DC1340* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___Effect_7;
		__this->___BasketEffect_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BasketEffect_8), (void*)L_20);
		// _basketController.RotationDirection = levelsdataarray[LvlIndex].BasketRotation;
		BasketController_t842318361BEF46745936C36BF8554EC746DC1340* L_21 = V_1;
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_22 = __this->___levelsdataarray_9;
		int32_t L_23 = ___LvlIndex0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___BasketRotation_1;
		NullCheck(L_21);
		L_21->___RotationDirection_10 = L_26;
		// if (levelsdataarray[LvlIndex].BoxPositions.Length > 0)
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_27 = __this->___levelsdataarray_9;
		int32_t L_28 = ___LvlIndex0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_31 = L_30->___BoxPositions_3;
		NullCheck(L_31);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_31)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00d3;
		}
	}
	{
		// for (int i = 0; i < levelsdataarray[LvlIndex].BoxPositions.Length; i++)
		V_3 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		// GameObject _box = Instantiate(BoxPrefab, levelsdataarray[LvlIndex].BoxPositions[i].transform) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___BoxPrefab_6;
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_34 = __this->___levelsdataarray_9;
		int32_t L_35 = ___LvlIndex0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_38 = L_37->___BoxPositions_3;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_33, L_42, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_4 = L_43;
		// for (int i = 0; i < levelsdataarray[LvlIndex].BoxPositions.Length; i++)
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ba:
	{
		// for (int i = 0; i < levelsdataarray[LvlIndex].BoxPositions.Length; i++)
		int32_t L_45 = V_3;
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_46 = __this->___levelsdataarray_9;
		int32_t L_47 = ___LvlIndex0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_50 = L_49->___BoxPositions_3;
		NullCheck(L_50);
		V_5 = (bool)((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_0093;
		}
	}
	{
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void LevelsManager::CloseScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsManager_CloseScene_m3D7AEA7C97B750FF70B495D5BD7E2E7278F9F86E (LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028FACF80E052870874038642F78B9BF75689F99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneTransition.SwitchToScene("MainMenuScene");
		SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316(_stringLiteral028FACF80E052870874038642F78B9BF75689F99, NULL);
		// }
		return;
	}
}
// System.Void LevelsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsManager__ctor_m097AAA28C9A379C47DA3979452CFF6584FD8B00E (LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* __this, const RuntimeMethod* method) 
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
// System.Int32 LevelsData::get_StarsComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelsData_get_StarsComplete_m1B4241380B230EA4001D7BF1D7A2381634F0F097 (LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// starsComplete = PlayerPrefs.GetInt("StarsComplete" + LevelIndex, 0);
		int32_t* L_0 = (&__this->___LevelIndex_0);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2, L_1, NULL);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_2, 0, NULL);
		__this->___starsComplete_2 = L_3;
		// return starsComplete;
		int32_t L_4 = __this->___starsComplete_2;
		V_0 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void LevelsData::set_StarsComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsData_set_StarsComplete_m5034C2EFA083F64F1E0E8A32BCF5B1873EA35D08 (LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// starsComplete = value;
		int32_t L_0 = ___value0;
		__this->___starsComplete_2 = L_0;
		// PlayerPrefs.SetInt("StarsComplete" + LevelIndex, value);
		int32_t* L_1 = (&__this->___LevelIndex_0);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C8AF97EC1EFB3D7A4703FFBB2A65B1F0A1124B2, L_2, NULL);
		int32_t L_4 = ___value0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void LevelsData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelsData__ctor_mBAD8E131AAF6EFEB3F989C1F8FCF2F1EAE6630DF (LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* __this, const RuntimeMethod* method) 
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
// System.Single PlayBallManager::get_Sensivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayBallManager_get_Sensivity_m9972F23ADCA73F8D30A417CFF1E3376523434685 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578967F25C6BCC86A96777ADB67BA8A7F9451248);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return PlayerPrefs.GetFloat("Sensivity", 1);
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral578967F25C6BCC86A96777ADB67BA8A7F9451248, (1.0f), NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayBallManager::set_Sensivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_set_Sensivity_m742A9C8CF62FE142EFA53A87FBF5EA36CD7B7D27 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578967F25C6BCC86A96777ADB67BA8A7F9451248);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("Sensivity", value);
		float L_0 = ___value0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral578967F25C6BCC86A96777ADB67BA8A7F9451248, L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_Awake_mBA660AA9EDB010018CBF242B9F17FCFCCEE572B7 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC_mC56F6893D1DAF971847AAFAD5FC17FA7C1C28279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_m94398BE6D9A9EE5219C83056FF0E02E3DB4CEDFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// Instance = this;
		((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// float volume = GameMenuManager.Instance.playerData.SoundValue;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_0 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = L_0->___playerData_14;
		NullCheck(L_1);
		float L_2;
		L_2 = PlayerData_get_SoundValue_mA0D63434F48E20A264C0BBF0924382C241421A25(L_1, NULL);
		V_0 = L_2;
		// BoxDoubleTouch = false;
		__this->___BoxDoubleTouch_5 = (bool)0;
		// GetGameEffects();
		PlayBallManager_GetGameEffects_mAB78FF349E879CF05FA4F1ACA4DEB7216FD3CA93(__this, NULL);
		// BallDropper.ThrowEvent += UpdateFill;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_3 = (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)il2cpp_codegen_object_new(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DropBall__ctor_m73E181DCD8D59494229134FA1443C95AE1B48A69(L_3, __this, (intptr_t)((void*)PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15_RuntimeMethod_var), NULL);
		BallDropper_add_ThrowEvent_m5971444A161EB013DB577B81FC4B3B18E1B14602(L_3, NULL);
		// for (int i = 0; i < BallSoundObj.Length; i++)
		V_1 = 0;
		goto IL_0065;
	}

IL_003b:
	{
		// BallSound[i] = BallSoundObj[i].GetComponent<AudioSource>();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_4 = __this->___BallSound_18;
		int32_t L_5 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___BallSoundObj_16;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_9, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)L_10);
		// BallSound[i].volume = volume;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_11 = __this->___BallSound_18;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		float L_15 = V_0;
		NullCheck(L_14);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_14, L_15, NULL);
		// for (int i = 0; i < BallSoundObj.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < BallSoundObj.Length; i++)
		int32_t L_17 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___BallSoundObj_16;
		NullCheck(L_18);
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_003b;
		}
	}
	{
		// WinSound = WinSoundObj.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___WinSoundObj_17;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21;
		L_21 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_20, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___WinSound_19 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WinSound_19), (void*)L_21);
		// WinSound.volume = volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___WinSound_19;
		float L_23 = V_0;
		NullCheck(L_22);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_22, L_23, NULL);
		// _getStarsAnim = EndRoundPanelObj.GetComponent<GetStarsAnim>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___EndRoundPanelObj_14;
		NullCheck(L_24);
		GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* L_25;
		L_25 = GameObject_GetComponent_TisGetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC_mC56F6893D1DAF971847AAFAD5FC17FA7C1C28279(L_24, GameObject_GetComponent_TisGetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC_mC56F6893D1DAF971847AAFAD5FC17FA7C1C28279_RuntimeMethod_var);
		__this->____getStarsAnim_25 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getStarsAnim_25), (void*)L_25);
		// _levelsManager = FindObjectOfType<LevelsManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_26;
		L_26 = Object_FindObjectOfType_TisLevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_m94398BE6D9A9EE5219C83056FF0E02E3DB4CEDFD(Object_FindObjectOfType_TisLevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB_m94398BE6D9A9EE5219C83056FF0E02E3DB4CEDFD_RuntimeMethod_var);
		__this->____levelsManager_26 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____levelsManager_26), (void*)L_26);
		// GameLevel = GameMenuManager.Instance.LevelToLoad;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_27 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_27);
		int32_t L_28 = L_27->___LevelToLoad_12;
		__this->___GameLevel_7 = L_28;
		// BoxTouchesNeed = _levelsManager.levelsdataarray[GameLevel].BoxPositions.Length;
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_29 = __this->____levelsManager_26;
		NullCheck(L_29);
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_30 = L_29->___levelsdataarray_9;
		int32_t L_31 = __this->___GameLevel_7;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_34 = L_33->___BoxPositions_3;
		NullCheck(L_34);
		__this->___BoxTouchesNeed_9 = ((int32_t)(((RuntimeArray*)L_34)->max_length));
		// }
		return;
	}
}
// System.Void PlayBallManager::GetGameEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_GetGameEffects_mAB78FF349E879CF05FA4F1ACA4DEB7216FD3CA93 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayBallManager::SpawnBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_SpawnBall_m470AB0C1ABAD6523922F803246026725C93FF53C (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51314D72335EAD9A2004A6DC90EDDE9373F64A7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (BallTemp == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BallTemp_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		// BoxDoubleTouch = false;
		__this->___BoxDoubleTouch_5 = (bool)0;
		// BoxTouches = 0;
		__this->___BoxTouches_8 = 0;
		// GameObject ball = Instantiate(BallPrefab, RoomParentObj.transform) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___BallPrefab_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___RoomParentObj_13;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_6;
		// BallTemp = ball;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		__this->___BallTemp_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BallTemp_20), (void*)L_7);
		// ball.GetComponent<BallDropper>().Sensivity = Sensivity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* L_9;
		L_9 = GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D(L_8, GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D_RuntimeMethod_var);
		float L_10;
		L_10 = PlayBallManager_get_Sensivity_m9972F23ADCA73F8D30A417CFF1E3376523434685(__this, NULL);
		NullCheck(L_9);
		L_9->___Sensivity_5 = L_10;
		// ball.transform.position = StartBallPos.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___StartBallPos_24;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_14, NULL);
		// ball.GetComponent<MeshRenderer>().material.SetTexture("_MainTex", GameMenuManager.Instance.PlayTextures[0]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_16;
		L_16 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_15, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_16, NULL);
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_18 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_18);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_19 = L_18->___PlayTextures_5;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_17, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_21, NULL);
		goto IL_0098;
	}

IL_008b:
	{
		// Debug.Log("TryZadvoit'");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE51314D72335EAD9A2004A6DC90EDDE9373F64A7, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PlayBallManager::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_PlaySound_mFDE4CA6E226FFDC794D69BF3BB264DD541EBDC3E (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	{
		// BallSound[Random.Range(0, BallSoundObj.Length)].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = __this->___BallSound_18;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___BallSoundObj_16;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::BoxTouchAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_BoxTouchAction_m0442E15ADB09D3E9BF73DA50F852E9C108968DE8 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE99FB8CF1055D2A0DD269959FD88A054160A904);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!BoxDoubleTouch)
		bool L_0 = __this->___BoxDoubleTouch_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// BoxTouches += 1;
		int32_t L_2 = __this->___BoxTouches_8;
		__this->___BoxTouches_8 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// BoxDoubleTouch = true;
		__this->___BoxDoubleTouch_5 = (bool)1;
		// Invoke("BoxTouchTimeController", 0.1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralDE99FB8CF1055D2A0DD269959FD88A054160A904, (0.100000001f), NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void PlayBallManager::BoxTouchTimeController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_BoxTouchTimeController_m11D2718E24746895D01C0D3FBDFA7B3DD09F4E31 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	{
		// BoxDoubleTouch = false;
		__this->___BoxDoubleTouch_5 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayBallManager::UpdateFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// ++DropsCount;
		int32_t L_0 = __this->___DropsCount_6;
		__this->___DropsCount_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (DropsCount <= 15)
		int32_t L_1 = __this->___DropsCount_6;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// fill = (float)DropsCount / 15;
		int32_t L_3 = __this->___DropsCount_6;
		V_0 = ((float)(((float)L_3)/(15.0f)));
		// FillGreen.fillAmount = fill;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___FillGreen_21;
		float L_5 = V_0;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, L_5, NULL);
		goto IL_00b6;
	}

IL_003f:
	{
		// else if ((DropsCount > 15) && (DropsCount <= 25))
		int32_t L_6 = __this->___DropsCount_6;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_7 = __this->___DropsCount_6;
		G_B5_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B5_0 = 0;
	}

IL_0059:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// fill = (float)(DropsCount - 15) / 10;
		int32_t L_9 = __this->___DropsCount_6;
		V_0 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)15))))/(10.0f)));
		// FillOrange.fillAmount = fill;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___FillOrange_22;
		float L_11 = V_0;
		NullCheck(L_10);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_10, L_11, NULL);
		// _getStarsAnim.Star3.SetActive(false);
		GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* L_12 = __this->____getStarsAnim_25;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___Star3_8;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		goto IL_00b6;
	}

IL_0091:
	{
		// _getStarsAnim.Star2.SetActive(false);
		GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* L_14 = __this->____getStarsAnim_25;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___Star2_7;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// FillRed.fillAmount = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___FillRed_23;
		NullCheck(L_16);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_16, (1.0f), NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void PlayBallManager::DoubleReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_DoubleReward_mB6525109A89B4F5A0503A106B03A45AEF16A0443 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ad.Instance.ShowRewarded();
		Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* L_0 = ((Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_StaticFields*)il2cpp_codegen_static_fields_for(Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		Ad_ShowRewarded_m6B55736C0C1D79F52286916AA4499CA5DF68C397(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_Win_m7CD9BF43E63981C2102B7E21C7DD1CCB21929ACB (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral345320CE2CE6687A4D5EA0E3E460117E1590CA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427AF35A25E69CCE07D05410B5E61EDCBAF3F518);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5510C6BCEA3ED93A19012E8073284E7672FEE693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EE995D0B4A273770FD7DECCE18A426D2F451B7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// WinSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___WinSound_19;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// _getStarsAnim.LevelTxt.text = GameLevel.ToString();
		GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* L_1 = __this->____getStarsAnim_25;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1->___LevelTxt_5;
		int32_t* L_3 = (&__this->___GameLevel_7);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (DropsCount <= 15)
		int32_t L_5 = __this->___DropsCount_6;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// EndGameStatustxt = "Awesome!";
		V_1 = _stringLiteral76EE995D0B4A273770FD7DECCE18A426D2F451B7;
		// StarsComplete = 3;
		V_0 = 3;
		goto IL_007a;
	}

IL_0046:
	{
		// else if ((DropsCount > 15) && (DropsCount <= 25))
		int32_t L_7 = __this->___DropsCount_6;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)15))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = __this->___DropsCount_6;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B5_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		// EndGameStatustxt = "Nice!";
		V_1 = _stringLiteral5510C6BCEA3ED93A19012E8073284E7672FEE693;
		// StarsComplete = 2;
		V_0 = 2;
		goto IL_007a;
	}

IL_0070:
	{
		// EndGameStatustxt = "Good!";
		V_1 = _stringLiteral427AF35A25E69CCE07D05410B5E61EDCBAF3F518;
		// StarsComplete = 1;
		V_0 = 1;
	}

IL_007a:
	{
		// GameMenuManager.Instance.playerData.Money += 25;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_10 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_10);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_11 = L_10->___playerData_14;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383(L_12, NULL);
		NullCheck(L_12);
		PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970(L_12, ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)25))), NULL);
		// _levelsManager.levelsdataarray[GameLevel].StarsComplete = StarsComplete;
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_14 = __this->____levelsManager_26;
		NullCheck(L_14);
		LevelsDataU5BU5D_tA3DEF0162FC5F4E652C3B382A58E36890290D754* L_15 = L_14->___levelsdataarray_9;
		int32_t L_16 = __this->___GameLevel_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		LevelsData_tC1A7B2F49B60303CE1391C07458038561A07D454* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		NullCheck(L_18);
		LevelsData_set_StarsComplete_m5034C2EFA083F64F1E0E8A32BCF5B1873EA35D08(L_18, L_19, NULL);
		// _getStarsAnim.EndStatusText.text = EndGameStatustxt;
		GetStarsAnim_t46ADFD2F4B0CDF4A1FFADA0C6B5E1C5FFD01DBAC* L_20 = __this->____getStarsAnim_25;
		NullCheck(L_20);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = L_20->___EndStatusText_6;
		String_t* L_22 = V_1;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// DropsCount = 0;
		__this->___DropsCount_6 = 0;
		// Invoke("OnEndRoundPanel", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral345320CE2CE6687A4D5EA0E3E460117E1590CA1E, (1.5f), NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::OnEndRoundPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_OnEndRoundPanel_m40AC7D91A6707E8A3E9EBD3EE72776DE048C4E1A (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	{
		// EndRoundPanelObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EndRoundPanelObj_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::UpdateStatusText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_UpdateStatusText_m2052B6AEBDABA63B4D6D2E9604E966EC5BAFF3B1 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// Destroy(BallTemp);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BallTemp_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// BallTemp = null;
		__this->___BallTemp_20 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BallTemp_20), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// if ((status == "Win") && (BoxTouches >= BoxTouchesNeed))
		String_t* L_1 = ___status0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->___BoxTouches_8;
		int32_t L_4 = __this->___BoxTouchesNeed_9;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0089;
		}
	}
	{
		// FillGreen.fillAmount = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___FillGreen_21;
		NullCheck(L_6);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_6, (0.0f), NULL);
		// FillOrange.fillAmount = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___FillOrange_22;
		NullCheck(L_7);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_7, (0.0f), NULL);
		// FillRed.fillAmount = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___FillRed_23;
		NullCheck(L_8);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_8, (0.0f), NULL);
		// _levelsManager.BasketEffect.SetActive(true);
		LevelsManager_t2BE8A98F36F9B45B1560E3CA19D6178F409B3ABB* L_9 = __this->____levelsManager_26;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___BasketEffect_8;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// Win();
		PlayBallManager_Win_m7CD9BF43E63981C2102B7E21C7DD1CCB21929ACB(__this, NULL);
		goto IL_0092;
	}

IL_0089:
	{
		// SpawnBall();
		PlayBallManager_SpawnBall_m470AB0C1ABAD6523922F803246026725C93FF53C(__this, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void PlayBallManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager_OnDestroy_m640D6A5C385F86A1F498FC5650CC9F7D3B43DA1F (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BallDropper.ThrowEvent -= UpdateFill;
		DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* L_0 = (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246*)il2cpp_codegen_object_new(DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DropBall__ctor_m73E181DCD8D59494229134FA1443C95AE1B48A69(L_0, __this, (intptr_t)((void*)PlayBallManager_UpdateFill_m1D36BE0939DB0CA039C0EB6425CCEA742D1A5F15_RuntimeMethod_var), NULL);
		BallDropper_remove_ThrowEvent_mDD1DC7BDCA3920967D53EE6E10A244A2E241E443(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayBallManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBallManager__ctor_m3CF6F7203ECABAFC4F3923C97CC303B3A366C7E5 (PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AudioSource[] BallSound = new AudioSource[2];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = (AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)SZArrayNew(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___BallSound_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BallSound_18), (void*)L_0);
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
// System.Void SliderController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderController_Start_mF64AA7E62FF2B0312C3FD9A4DC0ABA836EB11934 (SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playBallManager = FindObjectOfType<PlayBallManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_0;
		L_0 = Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B(Object_FindObjectOfType_TisPlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9_m78F6F38A22CFA7E06562B3426B64C96B8933EE1B_RuntimeMethod_var);
		__this->____playBallManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playBallManager_8), (void*)L_0);
		// SensValue = _playBallManager.Sensivity;
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_1 = __this->____playBallManager_8;
		NullCheck(L_1);
		float L_2;
		L_2 = PlayBallManager_get_Sensivity_m9972F23ADCA73F8D30A417CFF1E3376523434685(L_1, NULL);
		__this->___SensValue_4 = L_2;
		// SensivityText.text = SensValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___SensivityText_5;
		float* L_4 = (&__this->___SensValue_4);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// slider.value = SensValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_6;
		float L_7 = __this->___SensValue_4;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void SliderController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderController_FixedUpdate_mD66A2D938241BE119013E5A3DF300DE92FD9797B (SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (slider.value != SensValue)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2 = __this->___SensValue_4;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_009a;
		}
	}
	{
		// SensValue = Mathf.Round(slider.value * 100.0f) * 0.01f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_6;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_5, (100.0f))));
		__this->___SensValue_4 = ((float)il2cpp_codegen_multiply(L_6, (0.00999999978f)));
		// SensivityText.text = SensValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___SensivityText_5;
		float* L_8 = (&__this->___SensValue_4);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// _playBallManager.Sensivity = SensValue;
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_10 = __this->____playBallManager_8;
		float L_11 = __this->___SensValue_4;
		NullCheck(L_10);
		PlayBallManager_set_Sensivity_m742A9C8CF62FE142EFA53A87FBF5EA36CD7B7D27(L_10, L_11, NULL);
		// if (_playBallManager.BallTemp != null)
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_12 = __this->____playBallManager_8;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___BallTemp_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0099;
		}
	}
	{
		// _playBallManager.BallTemp.GetComponent<BallDropper>().Sensivity = SensValue;
		PlayBallManager_t1533A91D3FFE7614B62A0B130E30C39148F561D9* L_16 = __this->____playBallManager_8;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___BallTemp_20;
		NullCheck(L_17);
		BallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7* L_18;
		L_18 = GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D(L_17, GameObject_GetComponent_TisBallDropper_tCF5F02D70524071EA963E1258A5E2360E5496DB7_m55A86AF03098822A459C60B5587E1BBC5E5CF48D_RuntimeMethod_var);
		float L_19 = __this->___SensValue_4;
		NullCheck(L_18);
		L_18->___Sensivity_5 = L_19;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void SliderController::ExitSetPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderController_ExitSetPanel_m52348D28BE3C3AAD3E18D1F40C772355A8C28F5E (SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SwipeDetector.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___SwipeDetector_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SliderController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderController__ctor_mF9C897ABF6ABCCA22F3A9D0198DC1B64599849B3 (SliderController_t28803A87CAE890CD0001E507808B72CFF8A26D02* __this, const RuntimeMethod* method) 
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
// System.Void SwipeDetection::add_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_SwipeEvent_mB2BCB53EBE5245223EFE039622013CCCB73A9790 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_1 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_2 = NULL;
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_1 = V_0;
		V_1 = L_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_2 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)CastclassSealed((RuntimeObject*)L_4, OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var));
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_5 = V_2;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_6 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>((&((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4), L_5, L_6);
		V_0 = L_7;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_8 = V_0;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_8) == ((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::remove_SwipeEvent(SwipeDetection/OnSwipeInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_SwipeEvent_mA9DA4CFA7B6318637C8428F1932C2AF0435EB08E (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_0 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_1 = NULL;
	OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* V_2 = NULL;
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_0 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_1 = V_0;
		V_1 = L_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_2 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)CastclassSealed((RuntimeObject*)L_4, OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55_il2cpp_TypeInfo_var));
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_5 = V_2;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_6 = V_1;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>((&((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4), L_5, L_6);
		V_0 = L_7;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_8 = V_0;
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_8) == ((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Start_m70C6479D4B71F2A4EBEB1EE11E362E4C9641B127 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// IsMobile = Application.isMobilePlatform;
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		__this->___IsMobile_9 = L_0;
		// }
		return;
	}
}
// System.Void SwipeDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Update_m2C2173A4CF609396BF54D14C1FF94FD498C10904 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t G_B12_0 = 0;
	{
		// if (!IsMobile)
		bool L_0 = __this->___IsMobile_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// SwipeDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___SwipeDelta_6 = L_4;
		// IsSwiping = true;
		__this->___IsSwiping_8 = (bool)1;
		// TapPosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		__this->___TapPosition_5 = L_6;
		goto IL_0059;
	}

IL_003f:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_7;
		L_7 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// IsSwiping = false;
		__this->___IsSwiping_8 = (bool)0;
		// CallDelegate = true;
		__this->___CallDelegate_10 = (bool)1;
	}

IL_0059:
	{
		goto IL_00f2;
	}

IL_005f:
	{
		// if (Input.touchCount > 0)
		int32_t L_9;
		L_9 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00f1;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_11;
		L_11 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_5 = L_11;
		int32_t L_12;
		L_12 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		// SwipeDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___SwipeDelta_6 = L_14;
		// IsSwiping = true;
		__this->___IsSwiping_8 = (bool)1;
		// TapPosition = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_15;
		L_15 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_5 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_5), NULL);
		__this->___TapPosition_5 = L_16;
		goto IL_00f0;
	}

IL_00b3:
	{
		// else if (Input.GetTouch(0).phase == TouchPhase.Canceled || Input.GetTouch(0).phase == TouchPhase.Ended)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_17;
		L_17 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_5 = L_17;
		int32_t L_18;
		L_18 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
		if ((((int32_t)L_18) == ((int32_t)4)))
		{
			goto IL_00d9;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_19;
		L_19 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_5 = L_19;
		int32_t L_20;
		L_20 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
		G_B12_0 = ((((int32_t)L_20) == ((int32_t)3))? 1 : 0);
		goto IL_00da;
	}

IL_00d9:
	{
		G_B12_0 = 1;
	}

IL_00da:
	{
		V_6 = (bool)G_B12_0;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00f0;
		}
	}
	{
		// IsSwiping = false;
		__this->___IsSwiping_8 = (bool)0;
		// CallDelegate = true;
		__this->___CallDelegate_10 = (bool)1;
	}

IL_00f0:
	{
	}

IL_00f1:
	{
	}

IL_00f2:
	{
		// CheckSwipe();
		SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B(__this, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::CheckSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_CheckSwipe_m33523EEE4FE21D4E9068FC0F47F9591C54AF2A5B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (IsSwiping)
		bool L_0 = __this->___IsSwiping_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// if (!IsMobile)
		bool L_2 = __this->___IsMobile_9;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// SwipeDelta = (Vector2)Input.mousePosition - TapPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___TapPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_5, L_6, NULL);
		__this->___SwipeDelta_6 = L_7;
		goto IL_0059;
	}

IL_0038:
	{
		// SwipeDelta = Input.GetTouch(0).position - TapPosition;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_8;
		L_8 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___TapPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_9, L_10, NULL);
		__this->___SwipeDelta_6 = L_11;
	}

IL_0059:
	{
		goto IL_00cf;
	}

IL_005c:
	{
		// else if (CallDelegate)     //endswipe    call delegate
		bool L_12 = __this->___CallDelegate_10;
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00cf;
		}
	}
	{
		// CallDelegate = false;
		__this->___CallDelegate_10 = (bool)0;
		// if (SwipeDelta.magnitude >= DeadZone)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___SwipeDelta_6);
		float L_15;
		L_15 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_14, NULL);
		float L_16 = __this->___DeadZone_7;
		V_4 = (bool)((((int32_t)((!(((float)L_15) >= ((float)L_16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		// if (SwipeEvent != null)
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_18 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		V_5 = (bool)((!(((RuntimeObject*)(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// Ad.Instance.ShowInterstitial();
		Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938* L_20 = ((Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_StaticFields*)il2cpp_codegen_static_fields_for(Ad_tDBA6B6F51736A45140CBB7BDF96507FBB91BC938_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_20);
		Ad_ShowInterstitial_m8901F1BDC959B3D9AD19F2E9DA6B820B6B8BE37D(L_20, NULL);
		// SwipeEvent(SwipeDelta);
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* L_21 = ((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___SwipeEvent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___SwipeDelta_6;
		NullCheck(L_21);
		OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline(L_21, L_22, NULL);
	}

IL_00b7:
	{
		goto IL_00c7;
	}

IL_00ba:
	{
		// Debug.Log("DeadZone");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96, NULL);
	}

IL_00c7:
	{
		// ResetSwipe();
		SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141(__this, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void SwipeDetection::ResetSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_ResetSwipe_mE1DC59EAC068295F9BF52C2CEA10AB56560FA141 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// IsSwiping = false;
		__this->___IsSwiping_8 = (bool)0;
		// TapPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___TapPosition_5 = L_0;
		// SwipeDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___SwipeDelta_6 = L_1;
		// }
		return;
	}
}
// System.Void SwipeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection__ctor_m57902E84B7829542CBF0214C71B3F7816129BD9B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// private float DeadZone = 300;
		__this->___DeadZone_7 = (300.0f);
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
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Multicast(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* currentDelegate = reinterpret_cast<OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Open(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___direction0, method);
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStaticInvoker(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___direction0);
}
void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_ClosedStaticInvoker(OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___direction0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___direction0);

}
// System.Void SwipeDetection/OnSwipeInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput__ctor_mB0C6E52702E54A667BCD028ACF0120D7DE560391 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_Multicast;
}
// System.Void SwipeDetection/OnSwipeInput::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1 (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SwipeDetection/OnSwipeInput::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSwipeInput_BeginInvoke_m81D585E4C9E2B1C04D0004C3C4C10EFAD8F832FB (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___direction0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SwipeDetection/OnSwipeInput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipeInput_EndInvoke_mE58F8CABAD4C93C42CA2EFE89BBC0A583FC33A2F (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SceneTransition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_Start_m3EED3EEFBBDC2F2DBCD8F97962EB1884AFE3DA18 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFBE1EF97FD77703FA6637BDC37E73D80372057E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Instance = this;
		((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance_6), (void*)__this);
		// compomemtAnimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___compomemtAnimator_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compomemtAnimator_8), (void*)L_0);
		// if (shouldPlayOpeningAnimation)
		bool L_1 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___shouldPlayOpeningAnimation_7;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// compomemtAnimator.SetTrigger("sceneOpening");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___compomemtAnimator_8;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteralBFBE1EF97FD77703FA6637BDC37E73D80372057E, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void SceneTransition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_Update_mA7239AD26F1EFBD3705089EBB6AF8F35CB6EB73F (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (loadingSceneOperation != null)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = __this->___loadingSceneOperation_9;
		V_0 = (bool)((!(((RuntimeObject*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// LoadingProgressBar.fillAmount = loadingSceneOperation.progress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___LoadingProgressBar_4;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___loadingSceneOperation_9;
		NullCheck(L_3);
		float L_4;
		L_4 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_3, NULL);
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void SceneTransition::SwitchToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316 (String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27735908F3A471A79C3E650A8E1CE5CBFEDED02D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.compomemtAnimator.SetTrigger("sceneClosing");
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_0 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance_6;
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = L_0->___compomemtAnimator_8;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral27735908F3A471A79C3E650A8E1CE5CBFEDED02D, NULL);
		// Instance.loadingSceneOperation = SceneManager.LoadSceneAsync(sceneName);
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_2 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance_6;
		String_t* L_3 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_3, NULL);
		NullCheck(L_2);
		L_2->___loadingSceneOperation_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___loadingSceneOperation_9), (void*)L_4);
		// Instance.loadingSceneOperation.allowSceneActivation = false;
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_5 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance_6;
		NullCheck(L_5);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = L_5->___loadingSceneOperation_9;
		NullCheck(L_6);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SceneTransition::OnAnimationOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_OnAnimationOver_mAFAF27C753DC4FC43E99B9A2EE501D48064E8176 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shouldPlayOpeningAnimation = true;
		((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___shouldPlayOpeningAnimation_7 = (bool)1;
		// loadingSceneOperation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = __this->___loadingSceneOperation_9;
		NullCheck(L_0);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SceneTransition::OffBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_OffBackground_mF2658707F1A74BEA81E7F020B53B7389B7CCC29A (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	{
		// SceneTransitionCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SceneTransitionCanvas_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SceneTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition__ctor_m6FEBED7A92C4C5A3ED76C9251DC10A680690B5E5 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
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
// System.Void BallsContainerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallsContainerController_FixedUpdate_mDCC9CEA98998650A7E69EB7EB681AE2F76714F39 (BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (TimeToRotate)
		bool L_0 = __this->___TimeToRotate_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c9;
		}
	}
	{
		// angle += Time.fixedDeltaTime * angleSpeed;
		float L_2 = __this->___angle_4;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		float L_4 = __this->___angleSpeed_6;
		__this->___angle_4 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		// transform.localEulerAngles = new Vector3(0, angle, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = __this->___angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_5, L_7, NULL);
		// if (angle > MaxRotAngle)
		float L_8 = __this->___angle_4;
		float L_9 = __this->___MaxRotAngle_5;
		V_1 = (bool)((((float)L_8) > ((float)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00c8;
		}
	}
	{
		// if (angle > 40)
		float L_11 = __this->___angle_4;
		V_2 = (bool)((((float)L_11) > ((float)(40.0f)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		// angle = -180;
		__this->___angle_4 = (-180.0f);
		// MaxRotAngle = 0;
		__this->___MaxRotAngle_5 = (0.0f);
		goto IL_009f;
	}

IL_0087:
	{
		// angle = 0;
		__this->___angle_4 = (0.0f);
		// MaxRotAngle = 180;
		__this->___MaxRotAngle_5 = (180.0f);
	}

IL_009f:
	{
		// transform.localEulerAngles = new Vector3(0, angle, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_14 = __this->___angle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_13, L_15, NULL);
		// TimeToRotate = false;
		__this->___TimeToRotate_7 = (bool)0;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void BallsContainerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallsContainerController__ctor_m118E4DD8A220511F7220AC03092A14A18B7B67E9 (BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* __this, const RuntimeMethod* method) 
{
	{
		// private float angle = 0;
		__this->___angle_4 = (0.0f);
		// private float MaxRotAngle = 180;
		__this->___MaxRotAngle_5 = (180.0f);
		// private float angleSpeed = 300f;
		__this->___angleSpeed_6 = (300.0f);
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
// System.Void ConfirmBuyPanel::ExitPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfirmBuyPanel_ExitPanel_mE4C2B117794EEDECAC563E4D0819AABFB4B52B16 (ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// for (int i = 0; i < ShopObj.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		// ShopObj[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ShopObj_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (int i = 0; i < ShopObj.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < ShopObj.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___ShopObj_4;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ConfirmBuyPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfirmBuyPanel__ctor_m864AA8B8982612C8974EB53408EC9C2BED97D297 (ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* __this, const RuntimeMethod* method) 
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
// System.Void ShopController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_Awake_mBA4A220F849BA197AC5C27F67C486C740AE1BC39 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511_mD807E7426BFE5F0581CA34F9EAEFE09515B09392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB_mE40AA67B4870C15F976D265C012895F5CFB8BA72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Instance = this;
		((ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// _texturesData = GetComponent<TexturesData>();
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_0;
		L_0 = Component_GetComponent_TisTexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511_mD807E7426BFE5F0581CA34F9EAEFE09515B09392(__this, Component_GetComponent_TisTexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511_mD807E7426BFE5F0581CA34F9EAEFE09515B09392_RuntimeMethod_var);
		__this->____texturesData_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texturesData_23), (void*)L_0);
		// _skinScrollPrefab = SkinScrollPrefabObj.GetComponent<SkinScrollPrefab>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SkinScrollPrefabObj_14;
		NullCheck(L_1);
		SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* L_2;
		L_2 = GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114(L_1, GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114_RuntimeMethod_var);
		__this->____skinScrollPrefab_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____skinScrollPrefab_22), (void*)L_2);
		// _confirmBuyPanel = ConfirmPanObj.GetComponent<ConfirmBuyPanel>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___ConfirmPanObj_16;
		NullCheck(L_3);
		ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* L_4;
		L_4 = GameObject_GetComponent_TisConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB_mE40AA67B4870C15F976D265C012895F5CFB8BA72(L_3, GameObject_GetComponent_TisConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB_mE40AA67B4870C15F976D265C012895F5CFB8BA72_RuntimeMethod_var);
		__this->____confirmBuyPanel_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____confirmBuyPanel_24), (void*)L_4);
		// _playerData = GameMenuManager.Instance.playerData;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_5 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_5);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_6 = L_5->___playerData_14;
		__this->____playerData_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerData_21), (void*)L_6);
		// PreviewTexturesLenght[0] = _texturesData._shopTexDataArray[0]._texture.Length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___PreviewTexturesLenght_11;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_8 = __this->____texturesData_23;
		NullCheck(L_8);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_9 = L_8->____shopTexDataArray_4;
		NullCheck(L_9);
		int32_t L_10 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_12 = L_11->____texture_1;
		NullCheck(L_12);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		// PreviewTexturesLenght[1] = _texturesData._shopTexDataArray[1]._texture.Length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___PreviewTexturesLenght_11;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_14 = __this->____texturesData_23;
		NullCheck(L_14);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_15 = L_14->____shopTexDataArray_4;
		NullCheck(L_15);
		int32_t L_16 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_18 = L_17->____texture_1;
		NullCheck(L_18);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)));
		// PreviewObjIndex = 0;
		__this->___PreviewObjIndex_5 = 0;
		// for (int i = 0; i < ShopPreviewObj.Length; i++)
		V_0 = 0;
		goto IL_00a8;
	}

IL_0088:
	{
		// PreviewMat[i] = ShopPreviewObj[i].GetComponent<MeshRenderer>().material;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_19 = __this->___PreviewMat_19;
		int32_t L_20 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___ShopPreviewObj_12;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_25;
		L_25 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_24, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_26);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_26);
		// for (int i = 0; i < ShopPreviewObj.Length; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a8:
	{
		// for (int i = 0; i < ShopPreviewObj.Length; i++)
		int32_t L_28 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___ShopPreviewObj_12;
		NullCheck(L_29);
		V_1 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_0088;
		}
	}
	{
		// SetPrewievMat(PreviewObjIndex);
		int32_t L_31 = __this->___PreviewObjIndex_5;
		ShopController_SetPrewievMat_m29B82C898EEA5ECF0F6951EDCEB95E2A8866ED42(__this, L_31, NULL);
		// Invoke("UpdateCounter", 5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void ShopController::BuySkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_BuySkin_mF58B82EAAAAC0EBD1FA2D6DCB64B375067D88F6B (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1450B1D996858F93FE2D396FB0A5F50F45C6A07);
		s_Il2CppMethodInitialized = true;
	}
	ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* V_0 = NULL;
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// GameMenuManager.Instance.playerData.Money -= SkinPrice;
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_1 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_1);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2 = L_1->___playerData_14;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383(L_3, NULL);
		int32_t L_5 = __this->___SkinPrice_8;
		NullCheck(L_3);
		PlayerData_set_Money_m81D92059DA3A6C0F25FD3562555101842E781970(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		// arraydata._open[SkinIndex] = true;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_6 = __this->___arraydata_25;
		NullCheck(L_6);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = L_6->____open_3;
		int32_t L_8 = __this->___SkinIndex_7;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (bool)1);
		// PlayerPrefs.SetInt(arraydata.type.ToString() + "_open" + SkinIndex, 1);
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_9 = __this->___arraydata_25;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___type_0);
		Il2CppFakeBox<int32_t> L_11(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		int32_t* L_13 = (&__this->___SkinIndex_7);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_12, _stringLiteralD1450B1D996858F93FE2D396FB0A5F50F45C6A07, L_14, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_15, 1, NULL);
		// TempItems[GalkaIndex].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->___TempItems_18;
		int32_t L_17 = __this->___GalkaIndex_9;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_16, L_17, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_18);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_19;
		L_19 = GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A(L_18, GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___GalkaObj_10;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// GalkaIndex = SkinIndex;
		int32_t L_21 = __this->___SkinIndex_7;
		__this->___GalkaIndex_9 = L_21;
		// arraydata._itemIndex = SkinIndex;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_22 = __this->___arraydata_25;
		int32_t L_23 = __this->___SkinIndex_7;
		NullCheck(L_22);
		L_22->____itemIndex_5 = L_23;
		// PlayerPrefs.SetInt(arraydata.type.ToString() + "_itemIndex", SkinIndex);
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_24 = __this->___arraydata_25;
		NullCheck(L_24);
		int32_t* L_25 = (&L_24->___type_0);
		Il2CppFakeBox<int32_t> L_26(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_25);
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		String_t* L_28;
		L_28 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_27, _stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23, NULL);
		int32_t L_29 = __this->___SkinIndex_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_28, L_29, NULL);
		// var _temp = TempItems[SkinIndex].GetComponent<ShopSkinPrefabController>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->___TempItems_18;
		int32_t L_31 = __this->___SkinIndex_7;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_30, L_31, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_32);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_33;
		L_33 = GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A(L_32, GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		V_0 = L_33;
		// _temp.GalkaBackObj.SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_34 = V_0;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___GalkaBackObj_9;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// _temp.GalkaObj.SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_36 = V_0;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___GalkaObj_10;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// _temp.PriceBackGroundObj.SetActive(false);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_38 = V_0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = L_38->___PriceBackGroundObj_8;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// _confirmBuyPanel.ExitPanel();
		ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* L_40 = __this->____confirmBuyPanel_24;
		NullCheck(L_40);
		ConfirmBuyPanel_ExitPanel_mE4C2B117794EEDECAC563E4D0819AABFB4B52B16(L_40, NULL);
		// }
		return;
	}
}
// System.Void ShopController::OpenConfPan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_OpenConfPan_m7537DC0F1F518BAFE035975F4311314ABE66E8E5 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!arraydata._open[index])
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_0 = __this->___arraydata_25;
		NullCheck(L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0->____open_3;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_00df;
		}
	}
	{
		// SkinIndex = index;
		int32_t L_6 = ___index0;
		__this->___SkinIndex_7 = L_6;
		// SkinPrice = _texturesData._shopTexDataArray[GlobalShopIndex]._price[index];
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_7 = __this->____texturesData_23;
		NullCheck(L_7);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_8 = L_7->____shopTexDataArray_4;
		int32_t L_9 = __this->___GlobalShopIndex_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->____price_4;
		int32_t L_13 = ___index0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___SkinPrice_8 = L_15;
		// if (GameMenuManager.Instance.playerData.Money >= SkinPrice)
		GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308* L_16 = ((GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t4EFB562831C781235DFA17A401712B864FE07308_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_16);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_17 = L_16->___playerData_14;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = PlayerData_get_Money_mA9CAAAA243B327D83FC8E5043598FF5C6AF10383(L_17, NULL);
		int32_t L_19 = __this->___SkinPrice_8;
		V_1 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_00d7;
		}
	}
	{
		// ConfirmPanObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___ConfirmPanObj_16;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// _confirmBuyPanel.PriceText.text = SkinPrice.ToString();
		ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* L_22 = __this->____confirmBuyPanel_24;
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = L_22->___PriceText_5;
		int32_t* L_24 = (&__this->___SkinPrice_8);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		// _confirmBuyPanel.ShopObj[GlobalShopIndex].SetActive(true);
		ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* L_26 = __this->____confirmBuyPanel_24;
		NullCheck(L_26);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = L_26->___ShopObj_4;
		int32_t L_28 = __this->___GlobalShopIndex_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// _confirmBuyPanel.ShopObj[GlobalShopIndex].GetComponentInChildren<MeshRenderer>().material.SetTexture("_MainTex", arraydata._texture[index]);
		ConfirmBuyPanel_t820B28DE5A8C4C658C245FE95E718687DA9B2DFB* L_31 = __this->____confirmBuyPanel_24;
		NullCheck(L_31);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = L_31->___ShopObj_4;
		int32_t L_33 = __this->___GlobalShopIndex_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_36;
		L_36 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_35, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_38 = __this->___arraydata_25;
		NullCheck(L_38);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_39 = L_38->____texture_1;
		int32_t L_40 = ___index0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_37);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_37, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_42, NULL);
		goto IL_00d9;
	}

IL_00d7:
	{
	}

IL_00d9:
	{
		goto IL_016c;
	}

IL_00df:
	{
		// if (index != GalkaIndex)
		int32_t L_43 = ___index0;
		int32_t L_44 = __this->___GalkaIndex_9;
		V_2 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_2;
		if (!L_45)
		{
			goto IL_016b;
		}
	}
	{
		// TempItems[GalkaIndex].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = __this->___TempItems_18;
		int32_t L_47 = __this->___GalkaIndex_9;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_46, L_47, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_48);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_49;
		L_49 = GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A(L_48, GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = L_49->___GalkaObj_10;
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
		// TempItems[index].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_51 = __this->___TempItems_18;
		int32_t L_52 = ___index0;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_51, L_52, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_53);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_54;
		L_54 = GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A(L_53, GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = L_54->___GalkaObj_10;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)1, NULL);
		// GalkaIndex = index;
		int32_t L_56 = ___index0;
		__this->___GalkaIndex_9 = L_56;
		// arraydata._itemIndex = index;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_57 = __this->___arraydata_25;
		int32_t L_58 = ___index0;
		NullCheck(L_57);
		L_57->____itemIndex_5 = L_58;
		// PlayerPrefs.SetInt(arraydata.type.ToString() + "_itemIndex", index);
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_59 = __this->___arraydata_25;
		NullCheck(L_59);
		int32_t* L_60 = (&L_59->___type_0);
		Il2CppFakeBox<int32_t> L_61(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_60);
		String_t* L_62;
		L_62 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_61), NULL);
		String_t* L_63;
		L_63 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_62, _stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23, NULL);
		int32_t L_64 = ___index0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_63, L_64, NULL);
	}

IL_016b:
	{
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void ShopController::SpawnShopItemsHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SpawnShopItemsHelper_m4A93FD4E0DDEEFB9441D820253FB98B3E418B422 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// arraydata = _texturesData._shopTexDataArray[GlobalShopIndex];
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_0 = __this->____texturesData_23;
		NullCheck(L_0);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_1 = L_0->____shopTexDataArray_4;
		int32_t L_2 = __this->___GlobalShopIndex_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___arraydata_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arraydata_25), (void*)L_4);
		// for (int i = 0; i < arraydata._open.Length; i++)
		V_0 = 0;
		goto IL_0120;
	}

IL_0020:
	{
		// GameObject _temp = Instantiate(ShopSkinPrefabObj, ScrollView.content) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___ShopSkinPrefabObj_15;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->___ScrollView_17;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_8;
		// var _itemController = _temp.GetComponent<ShopSkinPrefabController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		NullCheck(L_9);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_10;
		L_10 = GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A(L_9, GameObject_GetComponent_TisShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF_mC31106A16E46A4AEEBA698BA74CDACF19AC9070A_RuntimeMethod_var);
		V_2 = L_10;
		// TempItems.Add(_temp);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___TempItems_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_11, L_12, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _itemController.Index = i;
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_13 = V_2;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		L_13->___Index_4 = L_14;
		// _itemController.ItemObj[GlobalShopIndex].SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_15 = V_2;
		NullCheck(L_15);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = L_15->___ItemObj_11;
		int32_t L_17 = __this->___GlobalShopIndex_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// _itemController.ItemObj[GlobalShopIndex].GetComponentInChildren<MeshRenderer>().material.SetTexture("_MainTex", arraydata._texture[i]);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_20 = V_2;
		NullCheck(L_20);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = L_20->___ItemObj_11;
		int32_t L_22 = __this->___GlobalShopIndex_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_25;
		L_25 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_24, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_27 = __this->___arraydata_25;
		NullCheck(L_27);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_28 = L_27->____texture_1;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_26);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_26, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_31, NULL);
		// if (arraydata._open[i])
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_32 = __this->___arraydata_25;
		NullCheck(L_32);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_33 = L_32->____open_3;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (uint8_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_3 = (bool)L_36;
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_00e2;
		}
	}
	{
		// _itemController.GalkaBackObj.SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_38 = V_2;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = L_38->___GalkaBackObj_9;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// if (i == arraydata._itemIndex)
		int32_t L_40 = V_0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_41 = __this->___arraydata_25;
		NullCheck(L_41);
		int32_t L_42 = L_41->____itemIndex_5;
		V_4 = (bool)((((int32_t)L_40) == ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00df;
		}
	}
	{
		// _itemController.GalkaObj.SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_44 = V_2;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___GalkaObj_10;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		// GalkaIndex = i;
		int32_t L_46 = V_0;
		__this->___GalkaIndex_9 = L_46;
	}

IL_00df:
	{
		goto IL_0113;
	}

IL_00e2:
	{
		// _itemController.PriceBackGroundObj.SetActive(true);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_47 = V_2;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___PriceBackGroundObj_8;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		// _itemController.PriceText.text = arraydata._price[i].ToString();
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_49 = V_2;
		NullCheck(L_49);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = L_49->___PriceText_7;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_51 = __this->___arraydata_25;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->____price_4;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_54);
	}

IL_0113:
	{
		// _itemController.CallOpenAnim(i);
		ShopSkinPrefabController_t94C01B6F053E03AB4C7151300E490AF63F79ECBF* L_55 = V_2;
		int32_t L_56 = V_0;
		NullCheck(L_55);
		ShopSkinPrefabController_CallOpenAnim_m5D1A3BEFBC6FAA91F2C2CC88921C56C747297C03(L_55, L_56, NULL);
		// for (int i = 0; i < arraydata._open.Length; i++)
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0120:
	{
		// for (int i = 0; i < arraydata._open.Length; i++)
		int32_t L_58 = V_0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_59 = __this->___arraydata_25;
		NullCheck(L_59);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_60 = L_59->____open_3;
		NullCheck(L_60);
		V_5 = (bool)((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))? 1 : 0);
		bool L_61 = V_5;
		if (L_61)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopController::OpenSkinScroll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_OpenSkinScroll_m1E32676E4E4513726AB54D7BB84BBC344C249D0C (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapSoundController.Instance.PlayTapSound();
		TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B* L_0 = ((TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_StaticFields*)il2cpp_codegen_static_fields_for(TapSoundController_t25166F7CAD46E7E0EEDB822EE4E597E752423B9B_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		TapSoundController_PlayTapSound_m588F922BA92A91A7F8334800AE7D1D7B40863F90(L_0, NULL);
		// CancelInvoke("UpdateCounter");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396, NULL);
		// GlobalShopIndex = index;
		int32_t L_1 = ___index0;
		__this->___GlobalShopIndex_6 = L_1;
		// ShopTypeObjActive(false);
		ShopController_ShopTypeObjActive_mFEC4F7C5DE7B1F3E7E67B6BD4CAED3ECC9BEABE1(__this, (bool)0, NULL);
		// SkinScrollPrefabObj.transform.localPosition = ShopTypeObj[index].transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___SkinScrollPrefabObj_14;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___ShopTypeObj_13;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_9, NULL);
		// SkinScrollPrefabObj.GetComponent<SkinScrollPrefab>().ItemTypeText.text = _texturesData._shopTexDataArray[index].type.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___SkinScrollPrefabObj_14;
		NullCheck(L_10);
		SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* L_11;
		L_11 = GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114(L_10, GameObject_GetComponent_TisSkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0_mED043177079FCCA84D6FCA3F284C8988C5757114_RuntimeMethod_var);
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___ItemTypeText_9;
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_13 = __this->____texturesData_23;
		NullCheck(L_13);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_14 = L_13->____shopTexDataArray_4;
		int32_t L_15 = ___index0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___type_0);
		Il2CppFakeBox<int32_t> L_19(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_18);
		String_t* L_20;
		L_20 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_19), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_20);
		// SkinScrollPrefabObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___SkinScrollPrefabObj_14;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// _skinScrollPrefab.StartMove();
		SkinScrollPrefab_t7DD70D53BAE72D080FEBF5A28DA9845769294BF0* L_22 = __this->____skinScrollPrefab_22;
		NullCheck(L_22);
		SkinScrollPrefab_StartMove_m911443CD41FE168854877226825B2A280A899D11(L_22, NULL);
		// }
		return;
	}
}
// System.Void ShopController::ExitSkinScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_ExitSkinScroll_m8FB1685ACF447B7DE5A341C64A26C0E9145DD862 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Invoke("UpdateCounter", 2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396, (2.0f), NULL);
		// for (int i = 0; i < TempItems.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0016:
	{
		// TempItems[i].GetComponent<Animator>().SetTrigger("Close");
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___TempItems_18;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, NULL);
		// Destroy(TempItems[i], 0.5f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___TempItems_18;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, (0.5f), NULL);
		// for (int i = 0; i < TempItems.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < TempItems.Count; i++)
		int32_t L_8 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___TempItems_18;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// TempItems.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___TempItems_18;
		NullCheck(L_12);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_12, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// SkinScrollPrefabObj.GetComponent<Animator>().SetTrigger("Close");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SkinScrollPrefabObj_14;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14;
		L_14 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_13, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_14);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_14, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, NULL);
		// }
		return;
	}
}
// System.Void ShopController::ShopTypeObjActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_ShopTypeObjActive_mFEC4F7C5DE7B1F3E7E67B6BD4CAED3ECC9BEABE1 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, bool ___on0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < ShopTypeObj.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// ShopTypeObj[i].SetActive(on);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ShopTypeObj_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___on0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// for (int i = 0; i < ShopTypeObj.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < ShopTypeObj.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___ShopTypeObj_13;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopController::UpdateCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_UpdateCounter_m5633B47D8A2369A9546C0684E1FB43742D4E0761 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PreviewObjIndex = 1 - PreviewObjIndex;
		int32_t L_0 = __this->___PreviewObjIndex_5;
		__this->___PreviewObjIndex_5 = ((int32_t)il2cpp_codegen_subtract(1, L_0));
		// SetPrewievMat(PreviewObjIndex);
		int32_t L_1 = __this->___PreviewObjIndex_5;
		ShopController_SetPrewievMat_m29B82C898EEA5ECF0F6951EDCEB95E2A8866ED42(__this, L_1, NULL);
		// PreviewContainer[0].TimeToRotate = true;
		BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959* L_2 = __this->___PreviewContainer_20;
		NullCheck(L_2);
		int32_t L_3 = 0;
		BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		L_4->___TimeToRotate_7 = (bool)1;
		// PreviewContainer[1].TimeToRotate = true;
		BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959* L_5 = __this->___PreviewContainer_20;
		NullCheck(L_5);
		int32_t L_6 = 1;
		BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		L_7->___TimeToRotate_7 = (bool)1;
		// PreviewContainer[2].TimeToRotate = true;
		BallsContainerControllerU5BU5D_t1949166BAF7FA2145CA644E9DE59025544598959* L_8 = __this->___PreviewContainer_20;
		NullCheck(L_8);
		int32_t L_9 = 2;
		BallsContainerController_t27D50E36A8B7ED145D837C8C03B853FAC403AC88* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		L_10->___TimeToRotate_7 = (bool)1;
		// Invoke("UpdateCounter", 5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralDD88032F7BE0DA931220A1D58CCBDAA9717D2396, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void ShopController::SetPrewievMat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SetPrewievMat_m29B82C898EEA5ECF0F6951EDCEB95E2A8866ED42 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___Index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PreviewMat[0 + Index].SetTexture("_MainTex", _texturesData._shopTexDataArray[0]._texture[CalculateTextureIndex(PreviewTexturesLenght[0], 0)]);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___PreviewMat_19;
		int32_t L_1 = ___Index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_4 = __this->____texturesData_23;
		NullCheck(L_4);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_5 = L_4->____shopTexDataArray_4;
		NullCheck(L_5);
		int32_t L_6 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_8 = L_7->____texture_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___PreviewTexturesLenght_11;
		NullCheck(L_9);
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12;
		L_12 = ShopController_CalculateTextureIndex_m1D7BDA230B40D9BAE3B11BAD3904A62A2182791C(__this, L_11, 0, NULL);
		NullCheck(L_8);
		int32_t L_13 = L_12;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_14, NULL);
		// PreviewMat[2 + Index].SetTexture("_MainTex", _texturesData._shopTexDataArray[1]._texture[CalculateTextureIndex(PreviewTexturesLenght[1], 1)]);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15 = __this->___PreviewMat_19;
		int32_t L_16 = ___Index0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(2, L_16));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* L_19 = __this->____texturesData_23;
		NullCheck(L_19);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_20 = L_19->____shopTexDataArray_4;
		NullCheck(L_20);
		int32_t L_21 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_23 = L_22->____texture_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___PreviewTexturesLenght_11;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27;
		L_27 = ShopController_CalculateTextureIndex_m1D7BDA230B40D9BAE3B11BAD3904A62A2182791C(__this, L_26, 1, NULL);
		NullCheck(L_23);
		int32_t L_28 = L_27;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_18);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_18, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_29, NULL);
		// }
		return;
	}
}
// System.Int32 ShopController::CalculateTextureIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopController_CalculateTextureIndex_m1D7BDA230B40D9BAE3B11BAD3904A62A2182791C (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, int32_t ___lenght0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int tempindex = Random.Range(0, lenght);
		int32_t L_0 = ___lenght0;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_0, NULL);
		V_0 = L_1;
		// if (tempindex == PreviosTextureIndex[index])
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___PreviosTextureIndex_10;
		int32_t L_4 = ___index1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_2 = 0;
		goto IL_0040;
	}

IL_001d:
	{
		// tempindex = Random.Range(0, lenght);
		int32_t L_8 = ___lenght0;
		int32_t L_9;
		L_9 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_8, NULL);
		V_0 = L_9;
		// if (tempindex != PreviosTextureIndex[index])
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___PreviosTextureIndex_10;
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		// break;
		goto IL_004b;
	}

IL_003b:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_17 = V_2;
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)100)))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001d;
		}
	}

IL_004b:
	{
	}

IL_004c:
	{
		// PreviosTextureIndex[index] = tempindex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___PreviosTextureIndex_10;
		int32_t L_20 = ___index1;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_21);
		// return tempindex;
		int32_t L_22 = V_0;
		V_5 = L_22;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		int32_t L_23 = V_5;
		return L_23;
	}
}
// System.Void ShopController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController__ctor_mE66E56FB9BD0AB9B873FEB23A025E26018EA1BB6 (ShopController_t3F0D11E8E1A751C12C7973534713E5F24D6DAF88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] PreviosTextureIndex = new int[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___PreviosTextureIndex_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PreviosTextureIndex_10), (void*)L_0);
		// private int[] PreviewTexturesLenght = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___PreviewTexturesLenght_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PreviewTexturesLenght_11), (void*)L_1);
		// private List<GameObject> TempItems = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___TempItems_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TempItems_18), (void*)L_2);
		// private Material[] PreviewMat = new Material[4];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___PreviewMat_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PreviewMat_19), (void*)L_3);
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
// System.Void SkinsPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinsPanel_Start_mE49656D019F1A99CFE9FAF10FD6EFA3CBBBC503C (SkinsPanel_t7903E6A6755E90A81737817A599A1C4CD4D2FBB4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SkinsPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinsPanel_Update_m2F3D382E2D47A744F666D43BA2DEC52BF5E73E9F (SkinsPanel_t7903E6A6755E90A81737817A599A1C4CD4D2FBB4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SkinsPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinsPanel__ctor_mD50C41BE989B85544B4EB12966D9E65226F14F86 (SkinsPanel_t7903E6A6755E90A81737817A599A1C4CD4D2FBB4* __this, const RuntimeMethod* method) 
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
// System.Void TexturesData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturesData_Start_m5FBB11507007569309A0A49EA145ED43669D2D59 (TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* __this, const RuntimeMethod* method) 
{
	{
		// LoadTexturesStatus();
		TexturesData_LoadTexturesStatus_m5342E7801F7A120F267FCA270CA429D8E522FF38(__this, NULL);
		// }
		return;
	}
}
// System.Void TexturesData::LoadTexturesStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturesData_LoadTexturesStatus_m5342E7801F7A120F267FCA270CA429D8E522FF38 (TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1450B1D996858F93FE2D396FB0A5F50F45C6A07);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int i = 0; i < 2; i++)
		V_0 = 0;
		goto IL_008a;
	}

IL_0008:
	{
		// for (int x = 0; x < _shopTexDataArray[i]._open.Length; x++)
		V_1 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		// if (PlayerPrefs.GetInt(_shopTexDataArray[i].type.ToString() + "_open" + x, 0) == 1)
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_0 = __this->____shopTexDataArray_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___type_0);
		Il2CppFakeBox<int32_t> L_5(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, _stringLiteralD1450B1D996858F93FE2D396FB0A5F50F45C6A07, L_7, NULL);
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_8, 0, NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// _shopTexDataArray[i]._open[x] = true;
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_11 = __this->____shopTexDataArray_4;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = L_14->____open_3;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (bool)1);
		goto IL_006a;
	}

IL_0058:
	{
		// _shopTexDataArray[i]._open[x] = false;
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_17 = __this->____shopTexDataArray_4;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = L_20->____open_3;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (bool)0);
	}

IL_006a:
	{
		// for (int x = 0; x < _shopTexDataArray[i]._open.Length; x++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006f:
	{
		// for (int x = 0; x < _shopTexDataArray[i]._open.Length; x++)
		int32_t L_24 = V_1;
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_25 = __this->____shopTexDataArray_4;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_29 = L_28->____open_3;
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_000d;
		}
	}
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_008a:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_32 = V_0;
		V_4 = (bool)((((int32_t)L_32) < ((int32_t)2))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_0008;
		}
	}
	{
		// _shopTexDataArray[0]._open[0] = true;
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_34 = __this->____shopTexDataArray_4;
		NullCheck(L_34);
		int32_t L_35 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_37 = L_36->____open_3;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		// _shopTexDataArray[1]._open[0] = true;
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_38 = __this->____shopTexDataArray_4;
		NullCheck(L_38);
		int32_t L_39 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_41 = L_40->____open_3;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		// _shopTexDataArray[0]._itemIndex = PlayerPrefs.GetInt(_shopTexDataArray[0].type.ToString() + "_itemIndex", 0);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_42 = __this->____shopTexDataArray_4;
		NullCheck(L_42);
		int32_t L_43 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_45 = __this->____shopTexDataArray_4;
		NullCheck(L_45);
		int32_t L_46 = 0;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		int32_t* L_48 = (&L_47->___type_0);
		Il2CppFakeBox<int32_t> L_49(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_48);
		String_t* L_50;
		L_50 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_49), NULL);
		String_t* L_51;
		L_51 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_50, _stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23, NULL);
		int32_t L_52;
		L_52 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_51, 0, NULL);
		NullCheck(L_44);
		L_44->____itemIndex_5 = L_52;
		// _shopTexDataArray[1]._itemIndex = PlayerPrefs.GetInt(_shopTexDataArray[1].type.ToString() + "_itemIndex", 0);
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_53 = __this->____shopTexDataArray_4;
		NullCheck(L_53);
		int32_t L_54 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ShopTexDataU5BU5D_tB94751BB0B074FF616FFC9FCA755B046053B7D5F* L_56 = __this->____shopTexDataArray_4;
		NullCheck(L_56);
		int32_t L_57 = 1;
		ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		int32_t* L_59 = (&L_58->___type_0);
		Il2CppFakeBox<int32_t> L_60(ShopItemType_tC9523EE09354AD09C8B3649B3896D5C65718BD72_il2cpp_TypeInfo_var, L_59);
		String_t* L_61;
		L_61 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_60), NULL);
		String_t* L_62;
		L_62 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_61, _stringLiteral4CE7578AA54FE7B9B4C87027FBC4AE50101CDB23, NULL);
		int32_t L_63;
		L_63 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_62, 0, NULL);
		NullCheck(L_55);
		L_55->____itemIndex_5 = L_63;
		// }
		return;
	}
}
// System.Void TexturesData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturesData__ctor_mAFD27E42333C65CAD9960CAC301B3D6612DE5234 (TexturesData_t1AEE39491E95B170A88CC84FE77B2023D7F20511* __this, const RuntimeMethod* method) 
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
// System.Void ShopTexData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopTexData__ctor_m4D7A0895CCA5C04FE0153C42998DF56443DFAE4E (ShopTexData_tEFF7D1E3F89E839206B11CCCC72CED75148F3866* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DropBall_Invoke_m4F3E4CB378A1C4CDF0863978F0F1FC2DC5A5F569_inline (DropBall_t1D633B7240A4EBA342B2748D3F55FD7AE55B9246* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipeInput_Invoke_m385E7FFAEFED9049B7F9EF2DA663AAC3096AFEF1_inline (OnSwipeInput_tD251C9B1A05E758A0623EB4ABA29A32B1B248F55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___direction0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
