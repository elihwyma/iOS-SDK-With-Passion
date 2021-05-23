/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKScreenCameraController.h>

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKARCameraController : VKScreenCameraController

{
    shared_ptr_e963992e _taskContext;
    struct GlobeView *_globeView;
    struct MapEngine *_mapEngine;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _height;
    double _altitudeOffset;
    Unit_3d259e8a _fovy;
    RigidTransform_b9386d13 _offsetTransform;
    CameraFrame_406dbd31 _cameraFrame;
    RigidTransform_b9386d13 _baseTransform;
    RigidTransform_b9386d13 _arTransform;
    RigidTransform_b9386d13 _currentARTransform;
    RigidTransform_b9386d13 _lastARTransform;
    Quaternion_febf9140 _arOrientation;
    VKTimedAnimation *_transitionAnimation;
    long long _interfaceOrientation;
    Quaternion_febf9140 _interfaceOrientationRotation;
    struct Coordinate2D<Radians, double> _currentCoordinate;
    _Bool _overrideARFieldOfView;
    Unit_57582783 _fieldOfView;
}

@property (nonatomic) struct MapEngine *mapEngine;
@property (nonatomic) struct GlobeView *globeView;
@property (nonatomic) Unit_57582783 fieldOfView;
@property (nonatomic) _Bool overrideARFieldOfView;
@property (nonatomic, readonly) float heightScale;
@property (nonatomic) RigidTransform_b9386d13 offsetTransform;
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
- (void)setCamera:(id)arg1;
- (CameraFrame_406dbd31)cameraFrame;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (void)setMaxZoomLevel:(double)arg1;
- (double)presentationYaw;
- (_Bool)isPitched;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (_Bool)isFullyPitched;
- (double)currentZoomLevel;
- (void)trasitionToARModeFromCameraFrame:(const CameraFrame_406dbd31 *)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCameraFrameFromARTransform;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (double)minimumZoomLevel;
- (double)maximumZoomLevel;
- (double)topDownMinimumZoomLevel;
- (double)distanceFromCenterCoordinate;
- (void)updateGlobeFromCamera;
- (void)_updateBaseTransform;
- (RigidTransform_b9386d13)_transformFromARCamera:(id)arg1;
- (void)_updateARContext;
- (void)updateWithARSession:(id)arg1;
- (Matrix_6e1d3589)_intersectAndResolveWorldCollision:(const RigidTransform_b9386d13 *)arg1;
- (void)_setupPounceAnimation:(const Coordinate3D_bc242218 *)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;
- (Geocentric_d8fde6f2)cameraPosition;
- (double)_fovAdjustment;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)trasitionToARModeAtCoordinate:(CDStruct_c3b9c2ee)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (RigidTransform_b9386d13)arCameraTransform;
- (void)arSessionWasInterrupted:(unsigned long long)arg1;

@end
