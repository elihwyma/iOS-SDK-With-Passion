/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, AFSettingsConnection, AVSystemController, NSHashTable, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject

{
    _Bool _inWirelessSplitterSession;
    _Bool _inWirelessSplitterSessionStateValid;
    _Bool _routeAvailableForSpokenMessages;
    _Bool _lastKnownEligibilityState;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)requiredIntentIDInNotificationCategory;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)pairedDevicesChanged:(id)arg1;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (_Bool)requestCanBeHandled;
- (_Bool)hasEligibleSetup;
- (_Bool)supportedByApplicationWithBundleID:(id)arg1;
- (void)systemControllerDied:(id)arg1;
- (void)updateAudioRouteAvailabilityForSpokenMessages:(id)arg1;
- (void)fetchInitialState;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyObserversOfCurrentEligibleSetupState:(_Bool)arg1;
- (void)fetchEligibleSetupStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWirelessSplitterSessionInfoAndObserve;
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
- (_Bool)_updateAudioRouteAvailabilityForSpokenMessagesAndBroadcast:(_Bool)arg1;
- (void)notifyObserversOfCurrentRequestCanBeHandledState;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRequestCanBeHandledStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_settingsConnection;
- (void)_settingsConnectionDidDisconnect;

@end
