/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPercentDrivenInteractiveTransition;

@protocol UIViewControllerContextTransitioning;

@interface PUViewControllerTransition : NSObject

{
    double _duration;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    _Bool _interactive;
    _Bool _startedInteractively;
    double _interactiveProgress;
    double _visibleInteractiveProgress;
}

@property (nonatomic, setter=_setInteractiveProgress:) double interactiveProgress;
@property (nonatomic, getter=isInteractive, setter=_setInteractive:) _Bool interactive;
@property (nonatomic) double visibleInteractiveProgress;
@property (nonatomic) _Bool startedInteractively;
@property (nonatomic, readonly) double imageModulationIntensity;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interactionControllerForAnimationController:(id)arg1;

- (id)containerView;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)setTransitionContext:(id)arg1;
- (id)fromViewController;
- (id)toViewController;
- (id)initWithDuration:(double)arg1;
- (void)imageModulationIntensityDidChange;
- (void)didCompleteTransitionAnimation;
- (id)_newInteractiveTransition;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1 visibleTransitionProgress:(double)arg2;
- (id)interactiveTransition;
- (struct CGRect)initialFromViewFrame;
- (struct CGRect)initialToViewFrame;
- (struct CGRect)finalFromViewFrame;
- (struct CGRect)finalToViewFrame;

@end
