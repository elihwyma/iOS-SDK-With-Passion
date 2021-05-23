/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, CARAutomaticDNDStatus, CARSessionStatus, CXCallObserver, NSArray, NSHashTable, NSMutableSet, NSString, SASLockStateMonitor, SRSSessionController, SUICApplicationStateHelper;

@interface SASSystemState : NSObject

{
    _Bool _accessibilityShortcutEnabled;
    _Bool _enabled;
    _Bool _starModeActive;
    int _carPlayConnectionState;
    SASLockStateMonitor *_lockStateMonitor;
    CXCallObserver *_callObserver;
    NSMutableSet *_activeCalls;
    NSArray *_currentCarPlaySupportedOEMAppIdList;
    CARSessionStatus *_carPlaySessionStatus;
    CARAutomaticDNDStatus *_carAutomaticDNDStatus;
    SUICApplicationStateHelper *_applicationStateHelper;
    NSHashTable *_listeners;
    SRSSessionController *_starSessionController;
    AFNotifyObserver *_observerWirelessSplitter;
    AFNotifyObserver *_observerBluetoothGuestConnected;
}

@property (nonatomic) int carPlayConnectionState;
@property (nonatomic) _Bool accessibilityShortcutEnabled;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) NSMutableSet *activeCalls;
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList;
@property (retain, nonatomic) CARSessionStatus *carPlaySessionStatus;
@property (retain, nonatomic) CARAutomaticDNDStatus *carAutomaticDNDStatus;
@property (retain, nonatomic) SUICApplicationStateHelper *applicationStateHelper;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) SRSSessionController *starSessionController;
@property (nonatomic) _Bool starModeActive;
@property (retain, nonatomic) AFNotifyObserver *observerWirelessSplitter;
@property (retain, nonatomic) AFNotifyObserver *observerBluetoothGuestConnected;
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)sharedSystemState;

- (id)init;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (_Bool)isPad;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)addStateChangeListener:(id)arg1;
- (void)removeStateChangeListener:(id)arg1;
- (_Bool)siriIsSupported;
- (_Bool)siriIsEnabled;
- (unsigned long long)carDNDStatus;
- (_Bool)carDNDActive;
- (_Bool)isConnectedToTrustedCarPlay;
- (_Bool)isConnectedToCarPlay;
- (id)foregroundAppInfosForPresentationIdentifier:(long long)arg1;
- (_Bool)siriIsRestricted;
- (id)currentSpokenLanguageCode;
- (_Bool)hasUnlockedSinceBoot;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)smartCoverClosed;
- (void)monitorLockState;
- (void)_updateAccessibilityState;
- (void)monitorCarSessions;
- (_Bool)isInActiveCall;
- (void)_pairedVehiclesDidChange:(id)arg1;
- (void)_setCarPlayConnectionState:(int)arg1;
- (void)_updateCarPlayConnectionState;
- (void)_fetchOEMAppContext;
- (void)sessionControllerWillEnterSTARMode:(id)arg1;
- (void)sessionControllerDidExitSTARMode:(id)arg1;
- (_Bool)isInSTARMode;
- (_Bool)isWirelessSplitterOn;
- (_Bool)isGuestConnected;

@end
