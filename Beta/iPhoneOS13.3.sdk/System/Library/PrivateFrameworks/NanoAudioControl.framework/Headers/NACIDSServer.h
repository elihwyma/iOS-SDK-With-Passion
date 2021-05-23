/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class IDSService, NACEventThrottler, NACRunAssertion, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NACIDSServer : NSObject

{
    NACRunAssertion *_systemVolumeRunAssertion;
    NACRunAssertion *_proxyVolumeRunAssertion;
    NSMutableDictionary *_systemVolumeObservers;
    NSMutableDictionary *_proxyVolumeObservers;
    NSMutableDictionary *_routesObservers;
    NSMutableDictionary *_messageRecords;
    NSArray *_volumeAudioCategories;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _shouldPickRouteAfterFetching;
    _Bool _shouldObserveSystemMutedState;
    _Bool _isSystemMuted;
    int _systemMuteToken;
    _Bool _shouldObserveHapticState;
    _Bool _prominentHapticEnabled;
    float _hapticIntensity;
    long long _hapticState;
    NACEventThrottler *_hapticThrottler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (id)initWithVolumeAudioCategories:(id)arg1;
- (void)beginObservingHapticState;
- (void)beginObservingSystemMutedState;
- (void)_handleSetMuted:(id)arg1;
- (void)_handleBeginObservingVolume:(id)arg1;
- (void)_handleEndObservingVolume:(id)arg1;
- (void)_handleBeginObservingAudioRoutes:(id)arg1;
- (void)_handleEndObservingAudioRoutes:(id)arg1;
- (void)_handleSetSystemMuted:(id)arg1;
- (void)_handleSetHapticState:(id)arg1;
- (void)_handleSetCurrentListeningMode:(id)arg1;
- (void)_handleBeginObservingListeningModes:(id)arg1;
- (void)_handleEndObservingListeningModes:(id)arg1;
- (void)_handleSetHapticIntensity:(id)arg1;
- (void)_handleSetProminentHapticEnabled:(id)arg1;
- (void)_beginObservingSystemVolume;
- (void)_beginObservingHapticState;
- (void)_beginObservingSystemMutedState;
- (void)_handleBeginObservingSystemVolume;
- (void)_handleBeginObservingProxyVolumeForTarget:(id)arg1;
- (void)_updateProminentHapticState;
- (id)_nacVolumeControllerForTarget:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_sendAvailableListeningModes:(id)arg1 currentListeningMode:(id)arg2 error:(id)arg3 forTarget:(id)arg4;
- (void)_updateHapticState;
- (void)_cancelRouteObservationForCategory:(id)arg1;
- (_Bool)_hasRequestedVolumeAtLeastOnce;
- (void)_setRequestedVolumeAtLeastOnce;
- (void)_sendCurrentObservingSystemVolumeValues;
- (void)_cancelSystemVolumeObservation;
- (void)_sendVolumeValue:(float)arg1 forTarget:(id)arg2;
- (void)_sendVolumeControlAvailability:(_Bool)arg1 forTarget:(id)arg2;
- (void)_sendVolumeWarningEnabled:(_Bool)arg1 volumeWarningState:(long long)arg2 forTarget:(id)arg3;
- (void)_sendEUVolumeLimit:(float)arg1 forTarget:(id)arg2;
- (void)_hapticIntensityDidChangeNotification:(id)arg1;
- (void)updateProminentHapticState;
- (void)_updateHapticIntensityValue;
- (void)_updateSystemMutedState;
- (void)_sendSystemMutedState:(_Bool)arg1;
- (void)_sendHapticState:(long long)arg1;
- (void)_beginObservingProxyVolumeForTarget:(id)arg1 withEndpointRoute:(id)arg2;
- (void)_cancelProxyVolumeObservationForTarget:(id)arg1;
- (void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 retry:(_Bool)arg5;
- (id)_targetForVolumeController:(id)arg1;
- (void)_sendMutedState:(_Bool)arg1 forTarget:(id)arg2;
- (id)_targetForNACVolumeController:(id)arg1;
- (_Bool)_shouldForceVolumeWarning;
- (void)volumeControllerDidUpdateAvailableListeningModes:(id)arg1;
- (void)volumeControllerDidUpdateCurrentListeningMode:(id)arg1;
- (void)volumeController:(id)arg1 didFailToSetCurrentListeningModeWithError:(id)arg2;

@end
