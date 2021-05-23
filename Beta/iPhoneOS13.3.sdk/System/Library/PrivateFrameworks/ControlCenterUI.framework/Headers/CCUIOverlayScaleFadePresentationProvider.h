/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@interface CCUIOverlayScaleFadePresentationProvider : NSObject

{
    id <CCUIOverlayViewProvider> _viewProvider;
    id <CCUIOverlayMetricsProvider> _metricsProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPanDismissalAvailable) _Bool panDismissalAvailable;
@property (nonatomic, readonly, getter=isZoomEnabled) _Bool zoomEnabled;
@property (nonatomic, readonly) _Bool allowHotPocketDuringTransition;
@property (weak, nonatomic) id <CCUIOverlayViewProvider> viewProvider;
@property (weak, nonatomic) id <CCUIOverlayMetricsProvider> metricsProvider;
@property (nonatomic, readonly) unsigned long long headerMode;
@property (copy, nonatomic, readonly) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;

+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;

- (void)layoutViews;
- (struct CGRect)_presentedViewFrame;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (_Bool)backdropViewShouldUseAlphaTransformer;
- (CDUnknownBlockType)customBackdropScaleAdjustment;
- (struct CGRect)_statusLabelViewFrame;
- (void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;

@end
