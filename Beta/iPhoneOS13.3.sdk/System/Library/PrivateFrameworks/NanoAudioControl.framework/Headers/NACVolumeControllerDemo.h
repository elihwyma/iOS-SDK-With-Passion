/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NACEventThrottler, NSNumber, NSOrderedSet, NSString;

@protocol NACVolumeControllerDelegate;

__attribute__((visibility("hidden")))
@interface NACVolumeControllerDemo : NSObject

{
    NSString *_audioCategory;
    NACEventThrottler *_defaultsThrottler;
    NSNumber *_volumeValue;
    _Bool _allowUserToExceedEUVolumeLimit;
    NSString *_currentListeningMode;
    _Bool _observingListeningModes;
    _Bool _systemMuted;
    _Bool _prominentHapticEnabled;
    float _hapticIntensity;
    id <NACVolumeControllerDelegate> _delegate;
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

- (id)init;
- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)allowUserToExceedEUVolumeLimit;
- (id)initWithAudioCategory:(id)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)beginObservingListeningModes;
- (void)endObservingListeningModes;
- (void)endObservingVolume;
- (void)beginObservingVolume;
- (void)setVolumeValue:(float)arg1 muted:(_Bool)arg2 overrideEULimit:(_Bool)arg3;
- (void)_persistVolumeValue:(id)arg1;
- (void)_setNeedsVolumeReload;
- (id)_volumeDictionary;

@end
