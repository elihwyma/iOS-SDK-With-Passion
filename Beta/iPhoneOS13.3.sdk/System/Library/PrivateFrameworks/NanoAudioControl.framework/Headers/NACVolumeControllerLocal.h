/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPVolumeController, MediaControlsVolumeController, NACEventThrottler, NSCountedSet, NSOrderedSet, NSString;

@protocol NACVolumeControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NACVolumeControllerLocal : NSObject

{
    NSString *_audioCategory;
    MPAVRoute *_route;
    MPVolumeController *_volumeController;
    MPAVRoutingController *_routingController;
    NSCountedSet *_volumeSetHistory;
    NACEventThrottler *_volumeThrottler;
    NACEventThrottler *_hapticThrottler;
    _Bool _validCachedMutedValue;
    _Bool _muted;
    _Bool _shouldIgnoreHaptics;
    _Bool _monitoringHaptics;
    long long _cachedHapticState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MediaControlsVolumeController *_mediaControlsVolumeController;
    NSOrderedSet *_lastNotifiedAvailableListeningModes;
    NSString *_lastNotifiedCurrentListeningMode;
    _Bool _systemMuted;
    id <NACVolumeControllerDelegate> _delegate;
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

- (id)init;
- (id)_init;
- (id)initWithRoute:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)_volumeController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)allowUserToExceedEUVolumeLimit;
- (id)initWithAudioCategory:(id)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(_Bool)arg2;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)beginObservingHapticState;
- (void)beginObservingListeningModes;
- (void)endObservingListeningModes;
- (void)_setVolumeValue:(id)arg1;
- (void)_setHapticIntensity:(id)arg1;
- (void)endObservingVolume;
- (void)beginObservingVolume;
- (void)beginObservingHaptics;
- (void)endObservingHaptics;
- (void)_ignoreHapticObservation;
- (void)setVolumeValue:(float)arg1 muted:(_Bool)arg2 overrideEULimit:(_Bool)arg3;
- (void)_updateMutedStateFromVolumeController:(id)arg1;
- (void)_updateVolumeState;
- (void)updateCachedHapticState;
- (void)endObservingHapticState;
- (id)_mediaControlsVolumeController;
- (void)playPreview;

@end
