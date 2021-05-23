/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKBasicMapView, MKCompassView, MKRotationFilter, MKScaleView, MKTiltGestureRecognizer, MKVariableDelayTapRecognizer, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UITraitCollection, VKCompoundAnimation, VKDynamicAnimation, VKTimedAnimation, _MKDirectionalArrowRecognizer, _MKOneHandedZoomGestureRecognizer, _MKUserInteractionGestureRecognizer;

@protocol MKMapGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMapGestureController : NSObject

{
    MKBasicMapView *_mapView;
    id <MKMapGestureControllerDelegate> _delegate;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    MKRotationFilter *_rotationFilter;
    _Bool _rotationSnappingEnabled;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_verticalPanGestureRecognizer;
    _MKOneHandedZoomGestureRecognizer *_oneHandedZoomGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;
    VKTimedAnimation *_currentArrowAnimation;
    double _arrowZoomSpeed;
    double _arrowZoomStartTimestamp;
    double _pinchFactorAverageInGesture;
    double _lastPinchUpdateTimestamp;
    double _lastScale;
    VKDynamicAnimation *_pinchDecelerationAnimation;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _gestureCount;
    _Bool _panWithMomentum;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    VKDynamicAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    VKDynamicAnimation *_tiltDecelerationAnimation;
    _Bool _didStartLongPress;
    _Bool _isPanning;
    _Bool _isPinching;
    UITraitCollection *_traitCollection;
}

@property (nonatomic, readonly) MKBasicMapView *mapView;
@property (weak, nonatomic) id <MKMapGestureControllerDelegate> delegate;
@property (retain, nonatomic) MKScaleView *scaleView;
@property (retain, nonatomic) MKCompassView *compassView;
@property (retain, nonatomic) MKRotationFilter *rotationFilter;
@property (nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property (nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property (nonatomic, getter=isRotationEnabled) _Bool rotationEnabled;
@property (nonatomic, getter=isTiltEnabled) _Bool tiltEnabled;
@property (nonatomic) _Bool panWithMomentum;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@property (nonatomic, readonly) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *verticalPanGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)_setTraitCollection:(id)arg1;
- (void)stopDynamicAnimations;
- (void)clearGestureRecognizersInFlight;
- (void)startUserInteractionFromExternalGesture;
- (void)stopUserInteractionFromExternalGesture;
- (void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)handleArrowZoom:(id)arg1;
- (void)handlePanZoom:(id)arg1;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (void)beginGesturing;
- (void)endGesturing;
- (void)_clearGesture:(id)arg1;
- (void)_handleStandardTilt:(id)arg1;
- (void)_updateRotationGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4;
- (void)_updateZoomGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 scale:(double)arg3 velocity:(double)arg4 gestureType:(long long)arg5 configuration:(id)arg6;
- (struct CGPoint)_snapPointToDevicePixels:(struct CGPoint)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (void)_setOneHandedZoomGestureConfiguration:(id)arg1;

@end
