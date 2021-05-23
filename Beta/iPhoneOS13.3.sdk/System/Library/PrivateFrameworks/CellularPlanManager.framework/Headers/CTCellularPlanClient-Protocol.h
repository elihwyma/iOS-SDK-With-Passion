/*
 Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

#import <CellularPlanManager/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol CTCellularPlanClient <Swift>

- (MISSING_TYPE *)ping;
- (MISSING_TYPE *)getPredefinedLabels: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSubscriptionContextUUIDforPlan:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getShortLabelsForLabels:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldShowPlanSetup: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isNewDataPlanCapable: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSupportedFlowTypes: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)finishProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewPlanWithCarrierItem:triggerType:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewPlanWithCardData:confirmationCode:triggerType:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewPlanWithAddress:matchingId:oid:confirmationCode:triggerType:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewAddonPlanDuringBuddy:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewPlanWithUserInWebsheetWithUserConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewPlanWithFlowType:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)resumePlanProvisioning:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)manageAccountForPlan:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)planItemsShouldUpdate:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)danglingPlanItemsShouldUpdate:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getPlansPendingTransferWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)activatePlanPendingTransfer:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelPlanActivation:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deletePlanPendingTransfer:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)carrierItemsShouldUpdate:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)resolveSimLabel:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)remapSimLabel:to:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)userDidProvideResponse:confirmationCode:plan:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didSelectPlanItem:enable:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didSelectPlanForData:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setLabelForPlan:label:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didSelectPlanForDefaultVoice:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didSelectPlansForIMessage:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didDeletePlanItem:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)eraseAllPlansWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)planLaunchInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didPurchasePlanForCsn:iccid:profileServer: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didTransferPlanForCsn:iccid:profileServer:state: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)carrierHandoffToken: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)triggerAddNewDataPlan: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isAddButtonEnabled: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldShowPlanList: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)willDisplayPlanItems;
- (MISSING_TYPE *)signIdMapForSessionId:locationRequired:withCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didPurchasePlanWithIccid:downloadProfile: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUserInPurchaseFlow: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)registerHasNewProfileCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchNewProfilesWithCompletion:additionalParameters: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)retrieveRequestSettings: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getDeviceInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)openInternalUrlId: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isRemotePlanCapableWithContext:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldShowAddNewRemotePlanWithContext:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)remotePlanItemsWithUpdateFetch:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)remoteUserDidProvideResponse:confirmationCode:plan:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startRemoteProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)finishRemoteProvisioningWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewRemotePlan:withCSN:withContext:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewRemotePlanWithCardData:confirmationCode:isPairing:withCSN:withContext:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addNewRemotePlanWithAddress:matchingId:oid:confirmationCode:isPairing:withCSN:withContext:userConsent:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)manageAccountForRemotePlan:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didSelectRemotePlanItem:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didDeleteRemotePlanItem:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)eraseAllRemotePlansWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)remotePlanLaunchInfoForEid:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didPurchaseRemotePlanForEid:imei:meid:iccid:alternateSmdpFqdn:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)pendingReleaseRemotePlan;
- (MISSING_TYPE *)didCancelRemotePlan;
- (MISSING_TYPE *)launchSequoia;
- (MISSING_TYPE *)expirePlan;
- (MISSING_TYPE *)launchDataActivationNextWithUrl: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getIMEIPrefix: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setIMEIPrefix: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getESimServerURL: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setESimServerURL: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSelectedEnv: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSelectedEnv: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSelectedProxy: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSelectedProxy: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setUseNewCellularPlanUI: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)showUiIgnoringActivationFlags: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enableVinylFlowTypeOverride: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getEnableVinylFlowTypeOverride: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)mccMncOverride: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setMcc:andMnc: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)latitudeLongitudeOverride: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setLatitude:andLongitude: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchRemoteProfiles: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)selectRemoteProfile: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteRemoteProfile: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteAllRemoteProfiles;
- (MISSING_TYPE *)getAutoPlanSelectionWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAutoPlanSelection: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getRoamingSignupOverrideWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setRoamingSignupOverride: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSkipEligibilityCheck: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSkipEligibilityCheck: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getRemoteInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getPhoneAuthTokenWithMessage:completion: /* Error: Ran out of types for this method. */;

@end
