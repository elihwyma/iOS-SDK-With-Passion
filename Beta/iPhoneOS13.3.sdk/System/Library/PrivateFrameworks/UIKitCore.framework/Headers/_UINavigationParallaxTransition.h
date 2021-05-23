/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, UIColor, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;

@protocol UIViewControllerContextTransitioning;

@interface _UINavigationParallaxTransition : NSObject

{
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
    _Bool _interactionAborted;
    _Bool _clipUnderlapWhileTransitioning;
    _Bool __shouldReverseLayoutDirection;
    long long _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    long long _transitionStyle;
    double _transitionGap;
    UIColor *_overrideDimmingColor;
}

@property (nonatomic) long long operation;
@property (retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) _Bool interactionAborted;
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController;
@property (retain, nonatomic) _UIParallaxDimmingView *borderDimmingView;
@property (retain, nonatomic) _UIParallaxDimmingView *contentDimmingView;
@property (retain, nonatomic) UIView *containerFromView;
@property (retain, nonatomic) UIView *containerToView;
@property (retain, nonatomic) UIView *clipUnderView;
@property (nonatomic) _Bool clipUnderlapWhileTransitioning;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) double transitionGap;
@property (nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection;
@property (retain, nonatomic) UIColor *overrideDimmingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setDefaultSlidingTransitionDuration:(double)arg1;
+ (double)defaultSlidingTransitionDuration;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)initWithCurrentOperation:(long long)arg1;
- (void)_stopTransitionImmediately;
- (double)gapBetweenViews;
- (double)parallaxOffset;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)animateKeyboard:(id)arg1;
- (void)completeKeyboard:(id)arg1;

@end
