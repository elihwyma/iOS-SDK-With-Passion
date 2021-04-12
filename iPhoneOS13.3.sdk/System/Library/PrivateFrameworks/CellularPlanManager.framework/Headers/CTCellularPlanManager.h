//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCellularPlanManagerDelegate, NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s _queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
    CTCellularPlanManagerDelegate *_delegate;
}

+ (long long)calculateInstallConsentTextTypeFor:(id)arg1;
+ (id)sharedManager;
- (void)dealloc;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (id)getShortLabelsForLabels:(id)arg1;
- (id)getSubscriptionContextUUIDforPlan:(id)arg1;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 isRemote:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)userDidProvideResponse:(long long)arg1 confirmationCode:(id)arg2 forPlan:(id)arg3 isRemote:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)getPredefinedLabels;
- (void)eraseAllRemotePlansWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)pendingReleaseRemotePlan;
- (void)didCancelRemotePlan;
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)getPhoneAuthTokenWithMessage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getRemoteInfo:(id /* CDUnknownBlockType */)arg1;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(id)arg1;
- (void)selectRemoteProfile:(id)arg1;
- (void)setSkipEligibilityCheck:(BOOL)arg1;
- (void)getSkipEligibilityCheck:(id /* CDUnknownBlockType */)arg1;
- (void)setRoamingSignupOverride:(BOOL)arg1;
- (void)getRoamingSignupOverrideWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setAutoPlanSelection:(BOOL)arg1;
- (void)getAutoPlanSelectionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchRemoteProfiles:(id)arg1;
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)didSelectRemotePlanItem:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 withCSN:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)remotePlanItemsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(id /* CDUnknownBlockType */)arg9;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)addNewRemotePlan:(BOOL)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)manageAccountForRemotePlan:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)finishRemoteProvisioningForCSN:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)startRemoteProvisioningForCSN:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)isRemotePlanCapableWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)launchDataActivationNextWithUrl:(id)arg1;
- (void)expirePlan;
- (void)launchSequoia;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(id /* CDUnknownBlockType */)arg1;
- (void)carrierHandoffToken:(id /* CDUnknownBlockType */)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)didTransferPlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 state:(id)arg4;
- (void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3;
- (void)planLaunchInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)eraseAllRemotePlansWithCSN:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)eraseAllPlans:(id /* CDUnknownBlockType */)arg1;
- (void)didDeletePlanItem:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2;
- (void)manageAccountForPlan:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)didSelectPlansForIMessage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)didSelectPlanForDefaultVoice:(id)arg1;
- (void)didSelectPlanForDefaultVoice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (id)didSelectPlanForData:(id)arg1;
- (void)didSelectPlanForData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2;
- (void)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)willDisplayPlanItems;
- (void)carrierItemsShouldUpdate:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)resolveSimLabel:(id)arg1;
- (void)resolveSimLabel:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deletePlanPendingTransfer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)cancelPlanActivation:(id)arg1;
- (void)activatePlanPendingTransfer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)getPlansPendingTransfer:(id )arg1;
- (id)danglingPlanItemsShouldUpdate:(BOOL)arg1;
- (void)danglingPlanItemsShouldUpdate:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)planItemsShouldUpdate:(BOOL)arg1;
- (void)planItemsShouldUpdate:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)planItemsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isAddButtonEnabled;
- (void)isAddButtonEnabled:(id /* CDUnknownBlockType */)arg1;
- (BOOL)shouldShowPlanList;
- (void)shouldShowPlanList:(id /* CDUnknownBlockType */)arg1;
- (void)plansForRenewalWithProgress:(id /* CDUnknownBlockType */)arg1 andCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)plansWithProgress:(id /* CDUnknownBlockType */)arg1 andCompletion:(id /* CDUnknownBlockType */)arg2 additionalParameters:(id)arg3;
- (void)plansWithProgress:(id /* CDUnknownBlockType */)arg1 andCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_plansForRenewal:(BOOL)arg1 progress:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3 additionalParameters:(id)arg4;
- (void)loadPlansWithUrl:(id)arg1 postData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)latitudeLongitudeOverride:(id /* CDUnknownBlockType */)arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(id /* CDUnknownBlockType */)arg1;
- (BOOL)getEnableVinylFlowTypeOverride;
- (void)enableVinylFlowTypeOverride:(BOOL)arg1;
- (void)showUiIgnoringActivationFlags:(BOOL)arg1;
- (void)setUseNewCellularPlanUI:(BOOL)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(id /* CDUnknownBlockType */)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(id /* CDUnknownBlockType */)arg1;
- (void)setESimServerURL:(id)arg1;
- (void)getESimServerURL:(id /* CDUnknownBlockType */)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)getIMEIPrefix:(id /* CDUnknownBlockType */)arg1;
- (void)connectionSettings:(id /* CDUnknownBlockType */)arg1;
- (void)addNewAddonPlanDuringBuddy:(BOOL)arg1 userConsent:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addNewPlanWithUserInWebsheetWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)addNewPlanWithFlowType:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)triggerAddNewDataPlan:(id /* CDUnknownBlockType */)arg1;
- (void)isMultipleDataPlanSupportAvailable:(id /* CDUnknownBlockType */)arg1;
- (void)exitSimSetupWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)enterSimSetupWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)finishProvisioningWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)startProvisioningWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)getSupportedFlowTypes;
- (void)getSupportedFlowTypes:(id /* CDUnknownBlockType */)arg1;
- (void)isNewDataPlanCapable:(id /* CDUnknownBlockType */)arg1;
- (void)shouldShowPlanSetup:(id /* CDUnknownBlockType */)arg1;
- (void)ping;
- (id)synchronousProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_reconnect;

@end

