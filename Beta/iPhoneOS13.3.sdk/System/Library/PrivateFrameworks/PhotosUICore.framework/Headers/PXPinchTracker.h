/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PXChangeDirectionNumberFilter, PXNumberFilter;

@interface PXPinchTracker : PXObservable

{
    struct {
        _Bool initialValues;
        _Bool geometry;
    } _needsUpdateFlags;
    _Bool _didSetInitialValues;
    struct CGPoint _initialCenter;
    struct CGSize _initialSize;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _initialTransformInverse;
    struct CGPoint _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint _initialPinchOrigin;
    PXNumberFilter *_pinchRotationFilter;
    PXNumberFilter *_horizontalVelocityFilter;
    PXNumberFilter *_verticalVelocityFilter;
    PXNumberFilter *_scaleVelocityFilter;
    PXNumberFilter *_rotationalVelocityFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    _Bool _shouldResize;
    double _time;
    double _scale;
    long long _scaleDirection;
    double _rotationHysteris;
    double _scaleHysteresis;
    struct CGPoint _pinchLocation1;
    struct CGPoint _pinchLocation2;
    struct CGPoint _center;
    struct CGSize _size;
    struct PXDisplayVelocity _velocity;
    struct CGAffineTransform _transform;
}

@property (nonatomic, setter=_setCenter:) struct CGPoint center;
@property (nonatomic, setter=_setSize:) struct CGSize size;
@property (nonatomic, setter=_setTransform:) struct CGAffineTransform transform;
@property (nonatomic, setter=_setVelocity:) struct PXDisplayVelocity velocity;
@property (nonatomic, setter=_setScale:) double scale;
@property (nonatomic, setter=_setScaleDirection:) long long scaleDirection;
@property (nonatomic, readonly) double rotationHysteris;
@property (nonatomic, readonly) double scaleHysteresis;
@property (nonatomic, readonly) _Bool shouldResize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint pinchLocation1;
@property (nonatomic) struct CGPoint pinchLocation2;
@property (nonatomic) double time;

- (id)init;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3;
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;
- (void)_invalidateInitialValues;
- (void)_updateInitialValuesIfNeeded;
- (void)_invalidateGeometry;
- (void)_updateGeometryIfNeeded;

@end
