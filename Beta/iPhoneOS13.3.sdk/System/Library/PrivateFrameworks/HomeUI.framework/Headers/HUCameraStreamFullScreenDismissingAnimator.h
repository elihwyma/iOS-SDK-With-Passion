/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>

@class NSString, UIView;

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator

{
    UIView *_cameraViewSnapshot;
    UIView *_cameraOverlaySnapshot;
}

@property (nonatomic, readonly) UIView *cameraViewSnapshot;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3;

@end
