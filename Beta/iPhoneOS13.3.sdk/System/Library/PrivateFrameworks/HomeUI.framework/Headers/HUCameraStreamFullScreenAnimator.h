/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject

{
    HUGridCameraCell *_sourceCameraCell;
}

@property (nonatomic, readonly) HUGridCameraCell *sourceCameraCell;

- (double)transitionDuration:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1;
- (struct CGRect)_toViewFinalFrame:(id)arg1;
- (struct CGRect)_adjustPresentedViewFrame:(struct CGRect)arg1 forTransitionContext:(id)arg2;

@end
