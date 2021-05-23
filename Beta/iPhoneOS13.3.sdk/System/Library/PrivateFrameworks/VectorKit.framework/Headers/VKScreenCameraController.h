/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKCameraController.h>

@class NSString, VKAnnotationTrackingCameraController, VKCameraRegionRestriction, VKGestureCameraBehavior, VKTimedAnimation;

@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKScreenCameraController : VKCameraController

{
    VKTimedAnimation *_zoomAnimation;
    VKTimedAnimation *_pitchAnimation;
    VKTimedAnimation *_rotationAnimation;
    VKTimedAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;
    long long _annotationTrackingZoomStyle;
    long long _annotationTrackingHeadingAnimationDisplayRate;
    _Bool _isPitchIncreasing;
    VKCameraRegionRestriction *_regionRestriction;
    struct {
        double min;
        double max;
    } _centerCoordinateDistanceRange;
}

@property (nonatomic) CDStruct_c3b9c2ee centerCoordinateDistanceRange;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;
@property (nonatomic) long long annotationTrackingZoomStyle;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic, readonly, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property (nonatomic, readonly) id <VKTrackableAnnotation> trackingAnnotation;
@property (nonatomic, readonly, getter=isTrackingHeading) _Bool trackingHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAnimatingToTrackAnnotation;
@property (nonatomic, readonly) _Bool isTrackingHeading;

- (void)dealloc;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (_Bool)isAnimating;
- (void)stopAnimations;
- (long long)tileSize;
- (void)setCamera:(id)arg1;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)stopTrackingAnnotation;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)enter3DMode;
- (void)exit3DMode;
- (_Bool)canEnter3DMode;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)stopSnappingAnimations;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)transferGestureState:(id)arg1;
- (void)stopRegionAnimation;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (void)clampZoomLevelIfNecessary;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

@end
