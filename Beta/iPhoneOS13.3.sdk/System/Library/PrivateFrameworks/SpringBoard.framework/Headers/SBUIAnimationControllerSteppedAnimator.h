/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIAnimationControllerAnimator.h>

@class NSString, SBAnimationStepper;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator

{
    SBAnimationStepper *_stepper;
}

@property (nonatomic, readonly) SBAnimationStepper *stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)percentComplete;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;
- (id)initWithAnimationController:(id)arg1;

@end
