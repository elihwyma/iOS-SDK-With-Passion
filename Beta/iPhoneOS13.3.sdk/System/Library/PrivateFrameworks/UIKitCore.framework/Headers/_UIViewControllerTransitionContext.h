/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView, _UIViewControllerTransitionCoordinator;

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface _UIViewControllerTransitionContext : NSObject

{
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
        unsigned int transitionIsInterruptible:1;
    } _transitionContextFlags;
    id <UIViewControllerAnimatedTransitioning> __animator;
    UIView *_containerView;
    _Bool __allowUserInteraction;
    _Bool _rotating;
    _Bool _animated;
    _Bool _initiallyInteractive;
    _Bool _currentlyInteractive;
    _Bool __isPresentation;
    NSArray *__containerViews;
    double __percentOffset;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    double __duration;
    CDUnknownBlockType __willCompleteHandler;
    CDUnknownBlockType __completionHandler;
    CDUnknownBlockType __didCompleteHandler;
    double __completionVelocity;
    long long __completionCurve;
    _UIViewControllerTransitionCoordinator *__auxContext;
    long long __state;
    CDUnknownBlockType __interactiveUpdateHandler;
    CDUnknownBlockType __postInteractiveCompletionHandler;
    long long _presentationStyle;
}

@property (nonatomic, getter=_initiallyInteractive, setter=_setInitiallyInteractive:) _Bool initiallyInteractive;
@property (nonatomic, getter=isCurrentlyInteractive, setter=_setCurrentlyInteractive:) _Bool currentlyInteractive;
@property (nonatomic, getter=isInterruptible, setter=_setInterruptible:) _Bool interruptible;
@property (nonatomic, setter=_setCompletionVelocity:) double _completionVelocity;
@property (nonatomic, setter=_setCompletionCurve:) long long _completionCurve;
@property (nonatomic, setter=_setTransitionIsCompleting:) _Bool _transitionIsCompleting;
@property (retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext;
@property (nonatomic, setter=_setState:) long long _state;
@property (copy, nonatomic, setter=_setInteractiveUpdateHandler:) CDUnknownBlockType _interactiveUpdateHandler;
@property (copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) CDUnknownBlockType _postInteractiveCompletionHandler;
@property (nonatomic, setter=_setPresentationStyle:) long long presentationStyle;
@property (nonatomic, setter=_setIsPresentation:) _Bool _isPresentation;
@property (retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews;
@property (nonatomic, setter=_setPercentOffset:) double _percentOffset;
@property (weak, nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator;
@property (weak, nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor;
@property (nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) _Bool _allowUserInteraction;
@property (nonatomic, getter=_isRotating, setter=_setRotating:) _Bool rotating;
@property (nonatomic, readonly, getter=_affineTransform) struct CGAffineTransform affineTransform;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, setter=_setDuration:) double _duration;
@property (copy, nonatomic, setter=_setWillCompleteHandler:) CDUnknownBlockType _willCompleteHandler;
@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler;
@property (copy, nonatomic, setter=_setDidCompleteHandler:) CDUnknownBlockType _didCompleteHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) _Bool transitionWasCancelled;
@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

+ (id)_associatedTransitionContextForObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_transitionCoordinator;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)_enableInteractionForDisabledViews;
- (id)viewForKey:(id)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setIsAnimated:(_Bool)arg1;
- (void)_setTransitionIsInFlight:(_Bool)arg1;
- (void)pauseInteractiveTransition;
- (void)__runAlongsideAnimations;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (void)_disableInteractionForViews:(id)arg1;
- (long long)_alongsideAnimationsCount;
- (_Bool)initiallyInteractive;
- (void)_interactivityDidChange:(_Bool)arg1;
- (void)_runAlongsideCompletions;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (double)_previousPercentComplete;
- (void)_setPreviousPercentComplete:(double)arg1;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1;
- (void)_stopInteractiveTransition;
- (void)setTransitionWasCancelled:(_Bool)arg1;
- (_Bool)_transitionIsInFlight;

@end
