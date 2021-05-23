/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <AVKit/AVHomeIPCameraBehavior.h>

@class NSString;

@protocol HUCameraPlayerAVBehaviorDelegate;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior

{
    id <HUCameraPlayerAVBehaviorDelegate> _delegate;
}

@property (weak, nonatomic) id <HUCameraPlayerAVBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)beginScrubbing;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;
- (void)endScrubbingWithTargetTime:(double)arg1;
- (void)scrubToTime:(double)arg1;

@end
