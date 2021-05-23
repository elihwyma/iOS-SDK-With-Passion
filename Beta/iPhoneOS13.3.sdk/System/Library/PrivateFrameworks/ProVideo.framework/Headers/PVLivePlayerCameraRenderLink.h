/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVLivePlayerRenderLink.h>

@interface PVLivePlayerCameraRenderLink : PVLivePlayerRenderLink

- (id)initWithPlayerCameraSource:(id)arg1;
- (void)cameraSourceRecievedFrameSet:(id)arg1;
- (void)cameraSourceDroppedFrame;

@end
