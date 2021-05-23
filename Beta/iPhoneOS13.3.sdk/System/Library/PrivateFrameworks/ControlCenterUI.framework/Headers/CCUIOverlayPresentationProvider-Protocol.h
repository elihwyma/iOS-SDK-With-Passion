/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@protocol CCUIOverlayPresentationProvider <Swift>

@property (nonatomic, readonly, getter=isPanDismissalAvailable) _Bool panDismissalAvailable;
@property (nonatomic, readonly, getter=isZoomEnabled) _Bool zoomEnabled;
@property (nonatomic, readonly) _Bool allowHotPocketDuringTransition;
@property (weak, nonatomic) id <CCUIOverlayViewProvider> viewProvider;
@property (weak, nonatomic) id <CCUIOverlayMetricsProvider> metricsProvider;
@property (nonatomic, readonly) unsigned long long headerMode;
@property (copy, nonatomic, readonly) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;

- (MISSING_TYPE *)layoutViews;
- (MISSING_TYPE *)transitionStateForType:interactive:translation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)finalTransitionTypeForState:gestureTranslation:gestureVelocity: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)animationBatchForTransitionState:previousTransitionState: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)tapAllowsDismissalForLocation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)backdropViewShouldUseAlphaTransformer;

@end
