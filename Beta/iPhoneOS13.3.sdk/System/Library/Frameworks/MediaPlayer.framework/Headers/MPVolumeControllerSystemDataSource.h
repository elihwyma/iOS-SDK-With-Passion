/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVSystemController, NSString;

@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerSystemDataSource : NSObject

{
    _Bool _debugVolumeWarning;
    _Bool _volumeInitialized;
    _Bool _volumeControlCapabilitiesInitialized;
    AVSystemController *_avSystemController;
    _Bool _volumeControlAvailable;
    _Bool _muted;
    _Bool _volumeWarningEnabled;
    float _volume;
    float _EUVolumeLimit;
    NSString *_volumeAudioCategory;
    id <MPVolumeControllerDataSourceDelegate> _delegate;
    NSString *_volumeControlLabel;
    long long _volumeWarningState;
}

@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MPVolumeControllerDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool applicationShouldOverrideHardwareVolumeBehavior;
@property (copy, nonatomic, readonly) NSString *volumeControlLabel;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, readonly) _Bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;
@property (nonatomic, readonly) float EUVolumeLimit;

- (id)init;
- (void)dealloc;
- (void)reload;
- (void)_tearDown;
- (void)_setup;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)reloadWarning;
- (void)adjustVolumeValue:(float)arg1;
- (void)initializeVolume;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateVolume:(float)arg1;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;
- (id)_mediaPlaybackVolumeAudioCategory;
- (id)_reloadQueue;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_updateRouteLabelForRoute:(id)arg1;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_reloadEUVolumeLimits;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1;

@end
