/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, NSString;

@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerRouteDataSource : NSObject

{
    float _pendingVolume;
    _Bool _hasPendingVolume;
    _Bool _hasVolumeInFlight;
    _Bool _volumeInitialized;
    _Bool _volumeCapabilitiesInitialized;
    _Bool _volumeControlAvailable;
    _Bool _muted;
    _Bool _volumeWarningEnabled;
    float _volume;
    float _EUVolumeLimit;
    id <MPVolumeControllerDataSourceDelegate> _delegate;
    long long _volumeWarningState;
    MPAVRoute *_groupRoute;
    MPAVRoute *_outputDeviceRoute;
}

@property (retain, nonatomic) MPAVRoute *groupRoute;
@property (retain, nonatomic) MPAVRoute *outputDeviceRoute;
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

- (void)dealloc;
- (void)reload;
- (void)beginIncreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)beginDecreasingRelativeVolume;
- (void)endDecreasingRelativeVolume;
- (void)adjustVolumeValue:(float)arg1;
- (void)initializeVolume;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2;
- (void)_setPendingVolumeIfNeeded;
- (void)_sendVolumeButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;
- (void)_updateVolumeControlCapabilities:(unsigned int)arg1;
- (void)_routeVolumeDidChangeNotification:(id)arg1;
- (void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg1;

@end
