/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>

@class HMCameraSnapshot, NSString, NSURL;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator

{
    HMCameraSnapshot *_cameraSnapshot;
    NSURL *_demoSnapshotURL;
}

@property (nonatomic, readonly) HMCameraSnapshot *cameraSnapshot;
@property (retain, nonatomic) NSURL *demoSnapshotURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3;

@end
