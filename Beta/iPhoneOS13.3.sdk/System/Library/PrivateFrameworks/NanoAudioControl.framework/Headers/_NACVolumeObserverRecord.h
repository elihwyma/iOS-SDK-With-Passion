/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class MPAVRoutingController, MPVolumeController, NACEventThrottler;

@protocol NACVolumeController;

__attribute__((visibility("hidden")))
@interface _NACVolumeObserverRecord : NSObject

{
    _Bool _volumeControlAvailable;
    _Bool _volumeWarningEnabled;
    _Bool _muted;
    float _EUVolumeLimit;
    long long _volumeWarningState;
    NACEventThrottler *_throttler;
    MPVolumeController *_volumeController;
    MPAVRoutingController *_routingController;
    id <NACVolumeController> _nacVolumeController;
}

@property (nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, getter=isVolumeWarningEnabled) _Bool volumeWarningEnabled;
@property (nonatomic) long long volumeWarningState;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic) float EUVolumeLimit;
@property (retain, nonatomic) NACEventThrottler *throttler;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) id <NACVolumeController> nacVolumeController;

@end
