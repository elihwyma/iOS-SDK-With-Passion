/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer

{
    long long _touchInterfaceOrientationWhenGestureBegan;
    SBFluidSwitcherViewController *_switcherViewController;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (void)reset;
- (void)setState:(long long)arg1;
- (long long)_touchInterfaceOrientation;
- (id)viewForTouchHistory;

@end
