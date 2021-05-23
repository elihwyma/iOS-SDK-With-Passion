/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@interface CCUIOverlayStatusBarPresentationProvider : NSObject

{
    id <CCUIOverlayViewProvider> _viewProvider;
    id <CCUIOverlayMetricsProvider> _metricsProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double dismissalFlickMaximumTime;
@property (nonatomic, readonly) double dismissalFlickMinimumVelocity;
@property (nonatomic, readonly) unsigned long long dismissalFlickAllowedDirections;
@property (nonatomic, readonly, getter=isPanDismissalAvailable) _Bool panDismissalAvailable;
@property (nonatomic, readonly, getter=isZoomEnabled) _Bool zoomEnabled;
@property (nonatomic, readonly) _Bool allowHotPocketDuringTransition;
@property (weak, nonatomic) id <CCUIOverlayViewProvider> viewProvider;
@property (weak, nonatomic) id <CCUIOverlayMetricsProvider> metricsProvider;
@property (nonatomic, readonly) unsigned long long headerMode;
@property (copy, nonatomic, readonly) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;

+ (id)_hiddenStatusBarFadeAnimationParameters;
+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
+ (id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_reducedMotionStatusBarStateCAAnimationParameters;
+ (id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
+ (id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg1;

- (void)layoutViews;
- (id)prepareForPresentation;
- (struct CGRect)_presentedViewFrame;
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 withinBounds:(struct CGRect)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3 orientation:(long long)arg4;
- (struct CGRect)_headerViewFrameForContentSize:(struct CGSize)arg1 withinBounds:(struct CGRect)arg2 contentInset:(struct UIEdgeInsets)arg3 contentEdgeInsets:(struct UIEdgeInsets)arg4 orientation:(long long)arg5;
- (void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addReducedMotionStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleScaleAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleAlphaAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (double)_leadingStatusBarAlphaForTransitionState:(id)arg1;
- (struct CGAffineTransform)_headerViewTransformForTransitionState:(id)arg1;
- (struct CGAffineTransform)_compactStatusBar:(id)arg1 transformForTransitionState:(id)arg2;
- (struct CGAffineTransform)_transformForTransitionState:(id)arg1 rubberBandingHeight:(double)arg2;
- (struct CGAffineTransform)_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (double)_delayForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (struct CGAffineTransform)_moduleViewScaleTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (_Bool)backdropViewShouldUseAlphaTransformer;
- (id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (id)cleanupForDismissal;

@end
