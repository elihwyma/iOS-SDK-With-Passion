/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString, UIView, UIViewPropertyAnimator;

@protocol PLViewControllerAnimatorDelegate;

@interface PLViewControllerAnimator : NSObject

{
    UIView *_sourceView;
    NSPointerArray *_observers;
    _Bool _didPrepareForTransition;
    _Bool _presenting;
    _Bool _includePresentingViewInAnimation;
    _Bool _runAlongsideAnimationsManually;
    UIViewPropertyAnimator *_propertyAnimator;
    id <PLViewControllerAnimatorDelegate> _delegate;
}

@property (weak, nonatomic) id <PLViewControllerAnimatorDelegate> delegate;
@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;
@property (nonatomic) _Bool includePresentingViewInAnimation;
@property (nonatomic) _Bool runAlongsideAnimationsManually;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)drivesAnimation;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_newPropertyAnimator;
- (id)initForPresentation:(_Bool)arg1 withSourceView:(id)arg2;
- (id)_presentingViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedExpandedPlatterForPresentedView:(id)arg1;
- (id)_previewInteractionPresentableViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (void)_performTransitionWithContext:(id)arg1;
- (void)performTransitionWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (void)_animateTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isTransitionAnimated;
- (id)_sourceViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;

@end
