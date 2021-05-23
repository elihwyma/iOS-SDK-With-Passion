/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPanSystemGestureRecognizer.h>

@class NSString, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer

{
    _Bool _installedAsSystemGesture;
    SBFluidSwitcherViewController *_switcherViewController;
    SBTouchHistory *_touchHistory;
}

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic) _Bool installedAsSystemGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (double)peakSpeed;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;

@end
