/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPVolumeControllerDataSourceDelegate;

@protocol MPVolumeControllerDataSource <Swift>

@property (weak, nonatomic) id <MPVolumeControllerDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool applicationShouldOverrideHardwareVolumeBehavior;
@property (copy, nonatomic, readonly) NSString *volumeControlLabel;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, readonly) _Bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;
@property (nonatomic, readonly) float EUVolumeLimit;

- (unsigned short)reload;
- (unsigned short)adjustVolumeValue: /* Error: Ran out of types for this method. */;
- (unsigned short)initializeVolume;
- (unsigned short)getVolumeValueWithCompletion: /* Error: Ran out of types for this method. */;

@end
