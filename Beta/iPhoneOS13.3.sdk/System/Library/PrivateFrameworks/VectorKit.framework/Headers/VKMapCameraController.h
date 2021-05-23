/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKScreenCameraController.h>

@class NSString, VKMapCanvas, VKMapModel, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController : VKScreenCameraController

{
    VKMapModel *_mapModel;
    VKMapCanvas *_mapCanvas;
    VKTimedAnimation *_horizontalOffsetAnimation;
    double _minDistanceToGroundAlongForwardVector;
    double _maxDistanceToGroundAlongForwardVector;
    double _finalYaw;
    double _finalPitch;
}

@property (retain, nonatomic) VKMapModel *mapModel;
@property (nonatomic) VKMapCanvas *mapCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)pitch;
- (double)yaw;
- (double)altitude;
- (double)heading;
- (long long)tileSize;
- (id)viewportInfo;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (double)presentationYaw;
- (void)setAllowDatelineWraparound:(_Bool)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)isPitched;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)enter3DMode;
- (void)exit3DMode;
- (_Bool)canEnter3DMode;
- (_Bool)allowDatelineWraparound;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canRotate;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (_Bool)isFullyPitched;
- (void)setGesturing:(_Bool)arg1;
- (float)currentNormalizedZoomLevel;
- (double)currentZoomLevel;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (void)updateCameraToPositionOrientationLimits;
- (void)canvasDidLayout;
- (double)minimumZoomLevel;
- (double)maximumZoomLevel;
- (double)topDownMinimumZoomLevel;
- (double)distanceFromCenterCoordinate;
- (void)updateCameraZBounds;
- (float)currentDisplayZoomLevel;
- (void)rotateToPitch:(double)arg1 withPoint:(const Matrix_6e1d3589 *)arg2 preserveAltitude:(_Bool)arg3 animated:(_Bool)arg4 exaggerate:(_Bool)arg5;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (float)currentMaximumNormalizedZoomLevel;
- (float)currentMinimumNormalizedZoomLevel;
- (void)zoom:(double)arg1 withPoint:(Matrix_6e1d3589)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoomToLevel:(double)arg1 withPoint:(Matrix_6e1d3589)arg2;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;
- (void)clampZoomLevelIfNecessary;
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;
- (float)currentStyleZoomLevel;
- (void)rotateToYaw:(double)arg1 withPoint:(const Matrix_6e1d3589 *)arg2 animated:(_Bool)arg3;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (_Bool)canEnter3DModeNoUpdate;
- (float)maximumNormalizedZoomLevel;
- (float)minimumNormalizedZoomLevel;
- (CDStruct_c3b9c2ee)_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 forceDestination:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)clampPitch:(double *)arg1 yaw:(double *)arg2 atTargetPositionZ:(double)arg3;
- (void)_jumpToCenterPoint:(Matrix_6e1d3589)arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 forceDestination:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (float)currentTopDownMinimumNormalizedZoomLevel;
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

@end
