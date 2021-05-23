/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <Foundation/NSObject.h>

@class CTDeviceIdentifier, CTRemotePlan, CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSArray, NSMutableDictionary, NSMutableSet, NSString, UIViewController;

@interface NPHCellularBridgeUIManager : NSObject

{
    CoreTelephonyClient *_coreTelephonyClient;
    CTXPCServiceSubscriptionInfo *_serviceSubscriptionInfo;
    NSMutableDictionary *_serviceSubscriptionInfoList;
    NSArray *_proxyPlanItems;
    long long _outstandingPlanFlowsIdentified;
    NSMutableSet *_outstandingRemotePlanItemsRequestedForCSN;
    UIViewController *_hostViewController;
    CDUnknownBlockType _hostCompletionBlock;
    _Bool LTEMayImpactService;
    _Bool _shouldOfferSignupCompletion;
    CTRemotePlan *_transferableRemotePlan;
    CTDeviceIdentifier *_transferableRemoteDeviceID;
}

@property (retain, nonatomic) CTRemotePlan *transferableRemotePlan;
@property (retain, nonatomic) CTDeviceIdentifier *transferableRemoteDeviceID;
@property (nonatomic, readonly) _Bool cellularPlanIsSetUp;
@property (nonatomic, readonly) _Bool isAnyCellularPlanActivating;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsInUse;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsToOfferUser;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsShouldShowAddNewRemotePlan;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsOfferingRemotePlan;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsOfferingTrialPlan;
@property (nonatomic, readonly) _Bool shouldShowAddNewRemotePlan;
@property (nonatomic, readonly) _Bool shouldOfferRemotePlan;
@property (nonatomic, readonly) _Bool shouldOfferTrialPlan;
@property (nonatomic, readonly) _Bool LTEMayImpactService;
@property (nonatomic, readonly) _Bool shouldOfferSignupCompletion;
@property (nonatomic, readonly) NSString *trialPlanType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)carrierName;
+ (id)carrierPhoneNumber;
+ (void)presentCellularError:(id)arg1 onViewController:(id)arg2;
+ (_Bool)_isSubscriptionInUse:(id)arg1;
+ (void)_presentAirplaneModeOnAlertOnViewController:(id)arg1;
+ (void)_presentCellularRequiredModeAlertOnViewController:(id)arg1;
+ (void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3;
+ (void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (void)subscriptionInfoDidChange;
- (void)activeSubscriptionsDidChange;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)_currentDeviceCSN;
- (id)carrierNameForSubscription:(id)arg1;
- (void)_ctCellularPlanInfoDidChange:(id)arg1;
- (void)_localPlanInfoDidChange:(id)arg1;
- (void)_ctCellularRemoteProvisioningDidBecomeAvailable:(id)arg1;
- (void)_updateCoreTelephonyClientInfo;
- (void)_updateSIMStatusForSubscriptionContext:(id)arg1 withStatus:(id)arg2;
- (id)_serviceSubscriptionInfoForSubscriptionContext:(id)arg1;
- (void)_updateServiceSubscriptionInfo:(id)arg1;
- (void)_prePromptForUserConsentIfNecessary:(CDUnknownBlockType)arg1;
- (_Bool)shouldAllowUserToTransferPlanFromDeviceWithCSN:(id)arg1;
- (void)_promptUserToPickSubscriptionContextOnViewController:(id)arg1 andIsTransferFlow:(_Bool)arg2;
- (void)setUpCellularPlanOnViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setUpCellularPlanOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_updateTransferableCellularPlanFromDeviceWithCSN:(id)arg1;
- (_Bool)allCompanionSIMsMissing;
- (_Bool)_isCarrierSetupFlowUnsupportedForServiceSubscription:(id)arg1;
- (void)_setUpCellularPlanDirectWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setUpCellularPlanWithActivationCodeOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 codelessActivationBlock:(CDUnknownBlockType)arg4;
- (void)_prePromptUserForConsentTextType:(long long)arg1 relevantPlanItem:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)userConsentMessageForConsentType:(long long)arg1 relevantPlanItem:(id)arg2;
- (id)selectedCellularPlan;
- (id)_activeDeviceCSNList;
- (void)_updateCellularPlansWithFetch:(_Bool)arg1 forCSN:(id)arg2;
- (void)_updateShouldShowAddNewRemotePlan;
- (void)_updateIsRemotePlanCapable;
- (void)_updateShouldWarnAboutLTEMayImpactService;
- (_Bool)_isPersistentError:(id)arg1;
- (_Bool)_isSetupBlockingError:(id)arg1;
- (id)cellularPlans;
- (void)updateCellularPlansWithFetch:(_Bool)arg1;
- (void)_updateSIMStatusForAllSubscriptionContexts;
- (_Bool)isGeminiSetup;
- (id)_trialPlanTypeForContext:(id)arg1;
- (id)cellularUseErrors;
- (void)userTappedSetUp:(id)arg1;
- (void)userTappedCancel;
- (void)setUpOrTransferCellularPlanOnViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)transferCellularPlanOnViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)consentRequiredRelevantCellularPlanItem:(id *)arg1;
- (void)startRemoteProvisioning;
- (void)finishRemoteProvisioning;
- (id)displayNameForCellularPlan:(id)arg1;
- (_Bool)shouldAllowUserToAddOrSetUpPlan;
- (id)cellularUseError;
- (_Bool)isCarrierSetupFlowUnsupported;

@end
