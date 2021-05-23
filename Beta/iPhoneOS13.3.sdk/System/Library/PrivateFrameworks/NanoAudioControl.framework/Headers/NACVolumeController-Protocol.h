/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <NanoAudioControl/Swift-Protocol.h>

@class MISSING_TYPE, NSOrderedSet, NSString;

@protocol NACVolumeControllerDelegate;

@protocol NACVolumeController <Swift>

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

- (MISSING_TYPE *)setMuted: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)allowUserToExceedEUVolumeLimit;
- (MISSING_TYPE *)setVolumeValue: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginObservingListeningModes;
- (MISSING_TYPE *)endObservingListeningModes;
- (MISSING_TYPE *)endObservingVolume;
- (MISSING_TYPE *)beginObservingVolume;
- (MISSING_TYPE *)beginObservingHaptics;
- (MISSING_TYPE *)endObservingHaptics;

@end
