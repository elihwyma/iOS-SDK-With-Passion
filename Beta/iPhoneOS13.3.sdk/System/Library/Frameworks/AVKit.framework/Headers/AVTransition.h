/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVPresentationContext, NSMutableArray, UIViewPropertyAnimator;

@protocol AVTransitionDelegate, UIViewControllerContextTransitioningEx;

__attribute__((visibility("hidden")))
@interface AVTransition : NSObject

{
    AVPresentationContext *_presentationContext;
    id <AVTransitionDelegate> _delegate;
    id <UIViewControllerContextTransitioningEx> _transitionContext;
    UIViewPropertyAnimator *_transitionAnimator;
    UIViewPropertyAnimator *_clientAnimator;
    NSMutableArray *_allAnimators;
}

@property (weak, nonatomic, readonly) id <UIViewControllerContextTransitioningEx> transitionContext;
@property (nonatomic, readonly) UIViewPropertyAnimator *transitionAnimator;
@property (nonatomic, readonly) UIViewPropertyAnimator *clientAnimator;
@property (nonatomic, readonly) NSMutableArray *allAnimators;
@property (retain, nonatomic) AVPresentationContext *presentationContext;
@property (nonatomic, readonly) double transitionAnimatorProgress;
@property (weak, nonatomic) id <AVTransitionDelegate> delegate;

- (void)dealloc;
- (double)duration;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition;
- (void)pauseInteractiveTransition;
- (id)initWithTransitionContext:(id)arg1;
- (void)_presentationTransitionWillBegin;
- (void)_dismissalTransitionWillBegin;
- (void)updateWithPercentComplete:(double)arg1 scale:(double)arg2 translation:(struct CGPoint)arg3 rotation:(double)arg4;
- (void)_animateFinishInteractiveTransition;
- (void)_freezeDismissingViewForFinishing;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)addRunAlongsideAnimationsIfNeeded;
- (void)_presentationTransitionDidEnd:(_Bool)arg1;
- (void)_dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_startOrContinueAnimatorsReversed:(_Bool)arg1;
- (struct CGRect)_initialFrameForPresentedView;
- (struct CGRect)_finalFrameForPresentedView;
- (struct CGAffineTransform)_transformForScale:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4 sourceRectInContainerView:(struct CGRect)arg5;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (struct CGRect)_sourceViewFrameInContainerView;

@end
