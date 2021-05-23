/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBHIconAnimationSettings, SBIconAnimator, SBNestingViewController;

@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBViewControllerContextTransitioning;

@interface SBHomeScreenIconTransitionAnimator : NSObject

{
    id <SBViewControllerContextTransitioning> _transitionContext;
    unsigned long long _transitionToken;
    SBHIconAnimationSettings *_currentSettings;
    unsigned long long _currentOperation;
    _Bool _receivedFirstInteractiveUpdate;
    _Bool _needsTransitionTokenIncrementOnNextUpdate;
    SBIconAnimator *_iconAnimator;
    SBNestingViewController *_childViewController;
    unsigned long long _operation;
    double _initialDelay;
    id <SBHomeScreenIconTransitionAnimatorDelegate> _delegate;
}

@property (nonatomic, readonly) SBHIconAnimationSettings *currentSettings;
@property (nonatomic, readonly) SBIconAnimator *iconAnimator;
@property (nonatomic, readonly) SBNestingViewController *childViewController;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic) double initialDelay;
@property (nonatomic, readonly) unsigned long long currentOperation;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=wasRestarted) _Bool restarted;
@property (weak, nonatomic) id <SBHomeScreenIconTransitionAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (double)percentComplete;
- (void)reverse;
- (void)restart;
- (_Bool)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(CDUnknownBlockType)arg2;
- (id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (_Bool)supportsRestarting;
- (id)transitionAnimationFactory:(id)arg1;
- (void)iconAnimatorWasInvalidated:(id)arg1;

@end
