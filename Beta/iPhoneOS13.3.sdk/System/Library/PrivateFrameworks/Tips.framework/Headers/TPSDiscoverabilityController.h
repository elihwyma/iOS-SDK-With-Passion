/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, TPSDiscoverabilityContentController, TPSEventsHistoryController, TPSEventsProviderManager, TPSExperiment, TPSTipStatusController;

@protocol OS_dispatch_queue;

@interface TPSDiscoverabilityController : NSObject

{
    long long _overrideHintMaxDisplayedCount;
    NSMutableDictionary *_deliveryInfoMap;
    NSMutableSet *_registeredEventIdentifiers;
    TPSExperiment *_experiment;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
    _Bool _onPause;
    NSString *_deliveryInfoVersion;
    TPSDiscoverabilityContentController *_contentController;
    TPSTipStatusController *_tipStatusController;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) _Bool onPause;
@property (copy, nonatomic, readonly) TPSExperiment *experiment;
@property (copy, nonatomic, readonly) NSString *deliveryInfoVersion;
@property (retain, nonatomic) TPSDiscoverabilityContentController *contentController;
@property (nonatomic, readonly) NSDictionary *deliveryInfoMap;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (copy, nonatomic, readonly) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_cleanupDeliveryInfoMap;
- (void)_reconcileRegisteredEvents;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1;
- (void)updateHintDismissedForIdentifier:(id)arg1 dismissType:(id)arg2 context:(id)arg3;
- (void)markHintIneligibleForIdentifiers:(id)arg1 context:(id)arg2 reason:(long long)arg3;
- (void)_updateCacheData;
- (void)_updatePauseStatus:(_Bool)arg1;
- (void)_updateExperimentCache;
- (_Bool)_updateTriggerConditionForObserverIdentifers:(id)arg1;
- (void)queryCurrentEvents;
- (_Bool)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg1;
- (void)_updateDeliveryInfoMapCache;
- (void)markHintIneligibleForIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4;
- (void)contentWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)arg1 forObserverIdentifiers:(id)arg2 hasUpdates:(_Bool *)arg3;
- (void)_registerWakingCallbackForDeliveryInfo:(id)arg1;
- (_Bool)_isConditionMet:(id)arg1 hasUpdates:(_Bool *)arg2 forIdentifier:(id)arg3;
- (void)fetchDeliveryInfo;
- (id)dismissalEventsForDeliveryInfo:(id)arg1;
- (void)_updateRegisteredEventIdentifiers;
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)processEventProviderQueryResults:(id)arg1 type:(long long)arg2;
- (void)processDeliveryInfoDictionary:(id)arg1 error:(id)arg2;
- (void)dataProviderManager:(id)arg1 didFinishQueryWithResults:(id)arg2 type:(long long)arg3;
- (void)dataProviderManager:(id)arg1 didReceiveCallbackWithResult:(id)arg2 type:(long long)arg3;
- (void)discoverabilityContentController:(id)arg1 deliveryInfoFetchDidComplete:(id)arg2 error:(id)arg3;
- (id)initWithTipStatusController:(id)arg1;
- (id)deliveryInfoForIdentifier:(id)arg1;
- (_Bool)isHoldoutCamp;
- (_Bool)isDeliveryInfoExistForIdentifier:(id)arg1;
- (_Bool)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg1;
- (_Bool)updateExperimentCampIfNeeded;
- (id)dismissalEventsForContentID:(id)arg1;
- (long long)customizationIDForContentID:(id)arg1;
- (void)updateContentViewedForIdentifier:(id)arg1;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg1 context:(id)arg2;

@end
