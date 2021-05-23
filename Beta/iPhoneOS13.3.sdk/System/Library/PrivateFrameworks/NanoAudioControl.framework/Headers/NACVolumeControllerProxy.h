/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NACEventThrottler, NACProxyVolumeControlTarget, NACXPCClient, NSNumber, NSOrderedSet, NSString;

@protocol NACVolumeControllerDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NACVolumeControllerProxy : NSObject

{
    NACProxyVolumeControlTarget *_target;
    NACEventThrottler *_volumeThrottler;
    NACEventThrottler *_hapticThrottler;
    NSObject<OS_dispatch_source> *_setVolumeTimer;
    NSObject<OS_dispatch_source> *_setHapticTimer;
    NSObject<OS_dispatch_source> *_setProminentHapticTimer;
    NSObject<OS_dispatch_source> *_setHapticStateTimer;
    NACXPCClient *_xpcClient;
    _Bool _observingVolume;
    float _lastReceivedVolumeValue;
    float _lastRecievedHapticIntensity;
    _Bool _lastReceivedProminentHapticEnabled;
    long long _lastReceivedHapticState;
    NSNumber *_volumeValue;
    NSNumber *_hapticIntensity;
    NSOrderedSet *_availableListeningModes;
    NSString *_currentListeningMode;
    _Bool _observingListeningModes;
    _Bool _volumeControlAvailable;
    _Bool _volumeWarningEnabled;
    _Bool _muted;
    _Bool _systemMuted;
    _Bool _prominentHapticEnabled;
    float _EUVolumeLimit;
    id <NACVolumeControllerDelegate> _delegate;
    long long _volumeWarningState;
    long long _hapticState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NACVolumeControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, readonly, getter=isVolumeWarningEnabled) _Bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;
@property (nonatomic, readonly, getter=isMuted) _Bool muted;
@property (nonatomic, readonly) float volumeValue;
@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, getter=isSystemMuted) _Bool systemMuted;
@property (nonatomic) long long hapticState;
@property (nonatomic, readonly) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (nonatomic) float hapticIntensity;
@property (nonatomic, getter=isProminentHapticEnabled) _Bool prominentHapticEnabled;

- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)allowUserToExceedEUVolumeLimit;
- (void)setVolumeValue:(float)arg1;
- (id)initWithVolumeControlTarget:(id)arg1;
- (void)beginObservingListeningModes;
- (void)endObservingListeningModes;
- (void)_setVolumeValue:(id)arg1;
- (void)_setHapticIntensity:(id)arg1;
- (void)endObservingVolume;
- (void)_handleFailedToSetCurrentListeningModeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChange;
- (void)_volumeValueDidChange;
- (void)_mutedStateDidChange;
- (void)_systemMutedStateDidChange;
- (void)_hapticStateDidChange;
- (void)_volumeWarningDidChange;
- (void)_EUVolumeLimitDidChange;
- (void)_availableListeningModesDidChange;
- (void)_currentListeningModeDidChange;
- (void)_prominentHapticStateDidChange;
- (void)_hapticIntensityDidChange;
- (void)_cancelSetVolumeTimer;
- (void)_volumeTimout;
- (id)_scheduleTimeoutWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyDelegateVolumeChanged;
- (void)_prominentHapticTimeout;
- (void)_notifyDelegateProminentHapticStateChanged;
- (void)_cancelSetProminentHapticTimer;
- (void)_hapticTimeout;
- (void)_notifyDelegateHapticChanged;
- (void)_cancelSetHapticTimer;
- (void)_hapticStateTimeout;
- (void)_notifyDelegateHapticStateChanged;
- (void)_cancelSetHapticStateTimer;
- (void)_notifyDelegateSystemMutedStateChanged;
- (void)beginObservingVolume;
- (void)beginObservingHaptics;
- (void)endObservingHaptics;
- (void)setVolumeValue:(float)arg1 muted:(_Bool)arg2 overrideEULimit:(_Bool)arg3;

@end
