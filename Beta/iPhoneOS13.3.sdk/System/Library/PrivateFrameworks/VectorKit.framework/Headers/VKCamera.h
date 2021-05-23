/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKCameraRegionRestriction, VKFootprint, VKViewVolume;

__attribute__((visibility("hidden")))
@interface VKCamera : NSObject

{
    struct RunLoopController *_runLoopController;
    CDStruct_7a7719de _frustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    _Bool _needsUpdate;
    _Bool _updating;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    Matrix_6e1d3589 _forward;
    Matrix_6e1d3589 _right;
    Matrix_6e1d3589 _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    _Bool _allowDatelineWraparound;
    double _canonicalPitch;
    double _horizontalOffset;
    double _ndcZNear;
    double _aspectRatio;
    Unit_3d259e8a _verticalFieldOfView;
    double _near;
    double _far;
    double _width;
    double _height;
    RigidTransform_b9386d13 _transform;
    Matrix_08d701e4 _scaledViewMatrix;
    Matrix_08d701e4 _scaledProjectionMatrix;
    Matrix_08d701e4 _scaledViewProjectionMatrix;
    Matrix_08d701e4 _unscaledViewMatrix;
    Matrix_08d701e4 _unscaledProjectionMatrix;
    Matrix_08d701e4 _worldMatrix;
    double _maxHeightNoPitch;
    VKCameraRegionRestriction *_regionRestriction;
    optional_76e85d3d _minDistanceToGroundRestriction;
    optional_76e85d3d _maxDistanceToGroundRestriction;
}

@property (nonatomic, readonly) CDStruct_7a7719de frustum;
@property (nonatomic) const Matrix_6e1d3589 *position;
@property (nonatomic) const Quaternion_febf9140 *orientation;
@property (nonatomic) double aspectRatio;
@property (nonatomic, readonly) Unit_3d259e8a horizontalFieldOfView;
@property (nonatomic) Unit_3d259e8a verticalFieldOfView;
@property (nonatomic, readonly) double farClipDistance;
@property (nonatomic, readonly) double nearClipDistance;
@property (nonatomic) double ndcZNear;
@property (nonatomic) struct VKCameraState cameraState;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxHeightNoPitch;
@property (nonatomic) double maxPitch;
@property (nonatomic) optional_76e85d3d minDistanceToGroundRestriction;
@property (nonatomic) optional_76e85d3d maxDistanceToGroundRestriction;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;
@property (nonatomic) double terrainHeight;
@property (nonatomic, readonly) VKViewVolume *viewVolume;
@property (nonatomic, readonly) VKFootprint *footprint;
@property (nonatomic, readonly) Matrix_6e1d3589 upVector;
@property (nonatomic, readonly) Matrix_6e1d3589 rightVector;
@property (nonatomic, readonly) Matrix_6e1d3589 forwardVector;
@property (nonatomic, readonly) Matrix_6e1d3589 groundPoint;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly) double tanHalfHorizFOV;
@property (nonatomic, readonly) double tanHalfVerticalFOV;
@property (nonatomic, readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property (nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property (nonatomic) _Bool allowDatelineWraparound;
@property (nonatomic) double canonicalPitch;
@property (nonatomic) double horizontalOffset;
@property (nonatomic, readonly) const Matrix_08d701e4 *scaledViewMatrix;
@property (nonatomic, readonly) const Matrix_08d701e4 *scaledProjectionMatrix;
@property (nonatomic, readonly) const Matrix_08d701e4 *scaledViewProjectionMatrix;
@property (nonatomic, readonly) const Matrix_08d701e4 *unscaledViewMatrix;
@property (nonatomic, readonly) const Matrix_08d701e4 *unscaledProjectionMatrix;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)setNeedsUpdate;
- (float)zoomAtPoint:(struct CGPoint)arg1;
- (id)descriptionDictionaryRepresentation;
- (CameraFrame_406dbd31)cameraFrame;
- (id)detailedDescription;
- (void)updateIfNeeded;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationCoordinateTest;
- (double)widthOfViewAtDepth:(double)arg1;
- (_Bool)isWorldSpaceRectVisible:(const Box_3d7e3c2c *)arg1;
- (void)adjustClipPlanes;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (Matrix_6e1d3589)groundPlaneIntersectionPoint;
- (id)initWithRunLoopController:(struct RunLoopController *)arg1;
- (void)_setPosition:(const Matrix_6e1d3589 *)arg1;
- (void)setMercatorPosition:(const Mercator3_d8bb135c *)arg1;
- (Mercator3_d8bb135c)mercatorPosition;
- (double)displayZoomLevel;
- (float)maximumStyleZForRect:(const Box_3d7e3c2c *)arg1;
- (_Bool)isOuterWorldBoundsVisible;
- (double)depthForViewWidth:(double)arg1;
- (float)zoomAtCentrePoint;
- (View_a667aa2f)view:(struct ViewSize)arg1;

@end
