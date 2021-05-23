/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class FLFollowUpController;

@protocol NSObject;

@interface BYFlowSkipController : NSObject

{
    _Bool _basicFunctionalityEnabled_doNotAccessDirectly;
    FLFollowUpController *_followUpController_doNotAccessDirectly;
    id <NSObject> _wfNetworkChangeObserver;
}

+ (id)sharedInstance;
+ (id)_supportedIdentifiers;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (id)_actionForFlowSkipIdentifiers:(id)arg1;
+ (id)_localizedStringListingFlowSkipIdentifiers:(id)arg1;
+ (id)_flowSkipIdentifierFromActionIdentifier:(id)arg1;
+ (id)_actionIdentifierForFlowSkipIdentifier:(id)arg1;
+ (id)_localizedStringListOfStrings:(id)arg1;
+ (void)_setShouldObserveChangeFromNetworkSSID:(id)arg1;
+ (_Bool)_shouldObserveChangeFromNetworkSSID:(id *)arg1;
+ (void)_clearShouldObserveChangeFromNetworkSSID;
+ (id)flowSkipIdentifiersFromFollowUpAction:(id)arg1;

- (id)init;
- (id)_followUpController;
- (void)observeFinishSetupTriggers;
- (_Bool)_isBasicFunctionalityEnabled;
- (id)_pendingFollowUpItem;
- (void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg1 previousFollowUpItem:(id)arg2 forceNotification:(_Bool)arg3;
- (long long)_timeIntervalForNotifications;
- (long long)_timeIntervalForFrequentNotifications;
- (_Bool)_isPasscodeSet;
- (void)didCompleteFlow:(id)arg1;
- (void)_persistInitialNetworkSSID;
- (void)registerActivities;
- (void)_repostExistingFollowUpItemForcingNotification:(id)arg1;
- (long long)_timeoutForWifiObserver;
- (long long)_timeIntervalForWifiObserver;
- (void)_regsiterWiFiObserverActivityWithNeedsActivity:(_Bool)arg1 handlerQueue:(id)arg2;
- (void)revisePendingFollowUpsForcingRepost:(_Bool)arg1;
- (void)setBasicFunctionalityEnabled:(_Bool)arg1;
- (void)didSkipFlow:(id)arg1;
- (void)cancelPendingFlows;
- (void)passcodeDidChange;
- (id)getFlowSkipIdentifiers;

@end
