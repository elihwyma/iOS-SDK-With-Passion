/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class BSUIAnimationFactory, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView;

@protocol SBViewControllerTransitionContextDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface SBViewControllerTransitionContext : NSObject

{
    long long _presentationStyle;
    struct CGAffineTransform _targetTransform;
    NSMutableDictionary *_viewControllersByKey;
    NSMutableDictionary *_viewsByKey;
    NSMapTable *_initialFramesByViewController;
    NSMapTable *_finalFramesByViewController;
    _Bool _transitionStarted;
    _Bool _animationFinished;
    _Bool _transitionFinished;
    _Bool _transitionIsCancelled;
    _Bool _transitionWasEverCancelled;
    _Bool _transitionBeganInteractively;
    _Bool _transitionWasInteractive;
    _Bool _wantsAnimation;
    _Bool _transitionDidBeginCalled;
    double _transitionPercentComplete;
    unsigned long long _transitionAnimationOptions;
    BSUIAnimationFactory *_transitionAnimationFactory;
    id <UIViewControllerAnimatedTransitioning> _animator;
    id <UIViewControllerInteractiveTransitioning> _interactor;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    NSMutableArray *_alongsideInteractionEndedHandlers;
    NSMutableSet *_alongsideAnimationViews;
    NSMutableArray *_transitionContinuations;
    unsigned long long _outstandingClientCompletionCount;
    id <SBViewControllerTransitionContextDelegate> _delegate;
    UIView *_containerView;
    id _userInfo;
}

@property (weak, nonatomic) id <SBViewControllerTransitionContextDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator;
@property (retain, nonatomic) id <UIViewControllerInteractiveTransitioning> interactor;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct CGAffineTransform targetTransform;
@property (nonatomic, readonly) _Bool isTransitioning;
@property (nonatomic) _Bool wantsAnimation;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) _Bool transitionWasCancelled;
@property (nonatomic, readonly) _Bool initiallyInteractive;
@property (nonatomic, readonly) _Bool isInterruptible;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double completionVelocity;
@property (nonatomic, readonly) long long completionCurve;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)_completeTransition;
- (id)viewForKey:(id)arg1;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pauseInteractiveTransition;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (void)cancelTransition;
- (void)startTransition;
- (_Bool)_animatorIsInteractive;
- (_Bool)_interactorSupportsRestarting;
- (_Bool)_animatorSupportsRestarting;
- (void)_startInteractiveTransition;
- (void)_updateTransitionAnimationFactoryAndOptions;
- (id)transitionAnimationFactory;
- (unsigned long long)transitionAnimationOptions;
- (void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2;
- (void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
- (id)_interactiveAnimator;
- (void)_runInteractionEndedHandlers;
- (CDUnknownBlockType)_acquireTransitionCompletion;
- (void)_completeTransitionIfPossible;
- (_Bool)supportsCancelling;
- (id)_reversibleAnimator;
- (_Bool)_animatorIsReversible;
- (_Bool)supportsRestarting;
- (_Bool)_objectSupportsRestarting:(id)arg1;
- (_Bool)transitionWasRestarted;
- (void)restartTransition;
- (_Bool)wasPreviousPhaseInteractive;
- (_Bool)requiresCancellableAnimations;
- (_Bool)requiresInteractiveAnimations;
- (_Bool)requiresRestartableAnimations;
- (void)addTransitionContinuation:(CDUnknownBlockType)arg1;
- (void)setViewController:(id)arg1 forKey:(id)arg2;
- (void)setView:(id)arg1 forKey:(id)arg2;
- (void)setInitialFrame:(struct CGRect)arg1 forViewController:(id)arg2;
- (void)setFinalFrame:(struct CGRect)arg1 forViewController:(id)arg2;

@end
