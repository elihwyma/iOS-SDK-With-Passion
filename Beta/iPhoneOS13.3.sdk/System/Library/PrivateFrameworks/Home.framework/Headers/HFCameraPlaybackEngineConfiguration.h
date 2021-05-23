/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCameraPlaybackPosition, HMCameraProfile, HMHome;

@protocol HFCameraClipScrubbing, HFCameraLiveStreamControlling;

@interface HFCameraPlaybackEngineConfiguration : NSObject

{
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    HFCameraPlaybackPosition *_playbackPosition;
    id <HFCameraClipScrubbing> _clipScrubber;
    CDUnknownBlockType _clipPlayerBuilder;
    id <HFCameraLiveStreamControlling> _liveStreamController;
}

@property (copy, nonatomic) CDUnknownBlockType clipPlayerBuilder;
@property (retain, nonatomic) id <HFCameraLiveStreamControlling> liveStreamController;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (weak, nonatomic) id <HFCameraClipScrubbing> clipScrubber;

- (void)assertConfigurationIsValid;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;

@end
