/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject

{
    double _percentComplete;
    _Bool _presenting;
    id <SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;
}

@property (weak, nonatomic) id <SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (nonatomic, readonly) double percentVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)percentComplete;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (_Bool)supportsRestarting;

@end
