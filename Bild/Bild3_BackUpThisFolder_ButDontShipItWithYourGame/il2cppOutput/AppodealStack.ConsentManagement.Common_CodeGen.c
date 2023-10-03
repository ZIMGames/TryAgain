#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormLoaded()
// 0x00000002 System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormError(AppodealStack.ConsentManagement.Common.IConsentManagerException)
// 0x00000003 System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormOpened()
// 0x00000004 System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormClosed(AppodealStack.ConsentManagement.Common.IConsent)
// 0x00000005 System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnConsentInfoUpdated(AppodealStack.ConsentManagement.Common.IConsent)
// 0x00000006 System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnFailedToUpdateConsentInfo(AppodealStack.ConsentManagement.Common.IConsentManagerException)
// 0x00000007 AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Common.IConsent::GetZone()
// 0x00000008 AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Common.IConsent::GetStatus()
// 0x00000009 AppodealStack.ConsentManagement.Common.ConsentAuthorizationStatus AppodealStack.ConsentManagement.Common.IConsent::GetAuthorizationStatus()
// 0x0000000A AppodealStack.ConsentManagement.Common.HasConsent AppodealStack.ConsentManagement.Common.IConsent::HasConsentForVendor(System.String)
// 0x0000000B System.String AppodealStack.ConsentManagement.Common.IConsent::GetIabConsentString()
// 0x0000000C AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Common.IConsent::get_NativeConsent()
// 0x0000000D System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Load()
// 0x0000000E System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Show()
// 0x0000000F System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsLoaded()
// 0x00000010 System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsShowing()
// 0x00000011 System.Void AppodealStack.ConsentManagement.Common.IConsentManager::RequestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
// 0x00000012 System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetCustomVendor(AppodealStack.ConsentManagement.Common.IVendor)
// 0x00000013 AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IConsentManager::GetCustomVendor(System.String)
// 0x00000014 AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Common.IConsentManager::GetStorage()
// 0x00000015 System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage)
// 0x00000016 AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Common.IConsentManager::ShouldShowConsentDialog()
// 0x00000017 AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentZone()
// 0x00000018 AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentStatus()
// 0x00000019 AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Common.IConsentManager::GetConsent()
// 0x0000001A System.Void AppodealStack.ConsentManagement.Common.IConsentManager::DisableAppTrackingTransparencyRequest()
// 0x0000001B System.String AppodealStack.ConsentManagement.Common.IConsentManagerException::GetReason()
// 0x0000001C System.Int32 AppodealStack.ConsentManagement.Common.IConsentManagerException::GetCode()
// 0x0000001D System.String AppodealStack.ConsentManagement.Common.IVendor::GetName()
// 0x0000001E System.String AppodealStack.ConsentManagement.Common.IVendor::GetBundle()
// 0x0000001F System.String AppodealStack.ConsentManagement.Common.IVendor::GetPolicyUrl()
// 0x00000020 System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetPurposeIds()
// 0x00000021 System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetFeatureIds()
// 0x00000022 System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetLegitimateInterestPurposeIds()
// 0x00000023 AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendor::get_NativeVendor()
// 0x00000024 AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendorBuilder::Build()
// 0x00000025 System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
// 0x00000026 System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetFeatureIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
// 0x00000027 System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
static Il2CppMethodPointer s_methodPointers[39] = 
{
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
static const int32_t s_InvokerIndices[39] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AppodealStack_ConsentManagement_Common_CodeGenModule;
const Il2CppCodeGenModule g_AppodealStack_ConsentManagement_Common_CodeGenModule = 
{
	"AppodealStack.ConsentManagement.Common.dll",
	39,
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
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
