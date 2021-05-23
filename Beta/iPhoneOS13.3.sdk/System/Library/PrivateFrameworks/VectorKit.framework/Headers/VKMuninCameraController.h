/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKCameraController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMuninCameraController : VKCameraController

{
    struct MuninSceneLogic *_muninSceneLogic;
    shared_ptr_e963992e _taskContext;
    struct optional<(anonymous namespace)::PointSegment> _currentPointSegment;
    struct unique_ptr<(anonymous namespace)::PathAnimator, std::__1::default_delete<(anonymous namespace)::PathAnimator>> _pathAnimator;
    struct unique_ptr<(anonymous namespace)::BumpAnimator, std::__1::default_delete<(anonymous namespace)::BumpAnimator>> _bumpAnimator;
    _Bool _panning;
    _Bool _panStopping;
    Matrix_8746f91e _panTranslation;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _panAnimation;
    _Bool _pinching;
    Matrix_8746f91e _pinchZoomOffset;
    Unit_3d259e8a _pinchStartFieldOfView;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _pinchResetAnimation;
    _Bool _virtualParallaxEnabled;
    float _cameraOffsetFactor;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _offsetAnimation;
    double _lastUpdateTime;
    struct Spring<double, 1, mdc::SpringType::Angular> _panSpring;
    Unit_3d259e8a _heading;
    Unit_3d259e8a _pitch;
    _Bool _restrictWidestFieldOfView;
    Unit_3d259e8a _widestFieldOfView;
    Coordinate3D_bc242218 _rigPosition;
    CameraFrame_406dbd31 _previousCameraFrame;
}

@property (nonatomic) _Bool virtualParallaxEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (double)pitch;
- (double)altitude;
- (double)heading;
- (void)stopAnimations;
- (void)_setHeading:(Unit_3d259e8a)arg1;
- (const struct CollectionPoint *)currentPoint;
- (id)viewportInfo;
- (void)setCamera:(id)arg1;
- (void)setCameraFrame:(CameraFrame_406dbd31)arg1;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (_Bool)cancelPendingMove;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)selectLabelMarker:(const shared_ptr_2d33c5e4 *)arg1 completion:(CDUnknownBlockType)arg2;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)willStopPanningAtPoint:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 muninSceneLogic:(struct MuninSceneLogic *)arg6;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)transferGestureState:(id)arg1;
- (void)setCurrentPoint:(const struct CollectionPoint *)arg1;
- (void)updateCurrentPointView:(_Bool)arg1;
- (_Bool)isAnimationsRunning;
- (void)zoomAnimatedWithDuration:(Unit_3d259e8a)arg1 duration:(float)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)cancelPendingMoveExceptBump;
- (void)runBumpAnimation:(const Geocentric_d8fde6f2 *)arg1 targetPoint:(const Geocentric_d8fde6f2 *)arg2;
- (void)animatePath:(vector_e91c9c3b *)arg1 withTarget:(const Geocentric_d8fde6f2 *)arg2 lookAtTarget:(_Bool)arg3 constantLod:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)stopAnimationsExceptBump;
- (_Bool)isAnimationsRunningExceptBump;
- (void)zoomAnimated:(Unit_3d259e8a)arg1 completion:(CDUnknownBlockType)arg2;
- (Matrix_8746f91e)screenPointWithOffset:(struct CGPoint)arg1;
- (_Bool)moveToPoint:(const struct CollectionPoint *)arg1 withHeading:(Unit_3d259e8a)arg2 withPitch:(Unit_3d259e8a)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (Unit_3d259e8a)_horizontalFieldOfView:(Unit_3d259e8a)arg1;
- (Unit_3d259e8a)_verticalFieldOfView:(Unit_3d259e8a)arg1;
- (double)_zoomRubberBandFov:(double)arg1;
- (void)setWidestFieldOfView:(Unit_3d259e8a)arg1;
- (void)setCurrentSegment:(struct PointSegment *)arg1;

@end
