/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKScreenCameraController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController : VKScreenCameraController

{
    struct GlobeView *_globeView;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    _Bool _isPitching;
    _Bool _isRotating;
    _Bool _wasPitched;
    _Bool _couldEnter3DMode;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _minZoomLevel;
    double _lastRotation;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    double _beganDoublePanPitch;
    shared_ptr_e963992e _taskContext;
    _Bool _tourShouldResumeWhenDoneGesturing;
}

@property (nonatomic) struct GlobeView *globeView;
@property (nonatomic) _Bool tourShouldResumeWhenDoneGesturing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (double)pitch;
- (double)altitude;
- (double)heading;
- (long long)tileSize;
- (id)mapRegion;
- (id)viewportInfo;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (void)updateState;
- (void)setMinZoomLevel:(double)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (double)presentationYaw;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)isPitched;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)enter3DMode;
- (void)exit3DMode;
- (_Bool)canEnter3DMode;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)pauseFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (_Bool)isFullyPitched;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)setGesturing:(_Bool)arg1;
- (double)currentZoomLevel;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (double)minimumZoomLevel;
- (double)maximumZoomLevel;
- (double)topDownMinimumZoomLevel;
- (double)distanceFromCenterCoordinate;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;
- (Geocentric_d8fde6f2)cameraPosition;
- (double)_fovAdjustment;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)_updateGlobeFromCamera;
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_406dbd31)arg1 toLatLon:(CameraFrame_406dbd31)arg2;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)stopFlyoverTourAnimation;
- (void)updateCameraManager;
- (void)_updateIsPitched;
- (void)_updateCanEnter3DMode;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopGlobeAnimations;
- (_Bool)isFlyoverTourStarted;
- (void)interruptFlyoverTourAnimation;
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;
- (double)earthRadiusAt:(double)arg1;
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;
- (double)zoomForMapRegion:(id)arg1;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 cursor:(Matrix_443f5d51)arg3 stepHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;
- (float)slowDownFactorFromLoadProgress;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;

@end
