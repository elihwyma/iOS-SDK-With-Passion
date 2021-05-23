/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPinchTracker : NSObject

{
    struct CGPoint _initialCenter;
    struct CGSize _initialSize;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _initialTransformInverse;
    _Bool _didSetInitialPinchValues;
    struct CGPoint _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint _initialPinchOrigin;
    PUValueFilter *_pinchRotationValueFilter;
    _Bool _allowTrackingOutside;
    CDUnknownBlockType _updateHandler;
    double _rotationHysteresisDegrees;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (nonatomic) _Bool allowTrackingOutside;
@property (nonatomic) double rotationHysteresisDegrees;

- (id)init;
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;
- (id)initWithInitialCenter:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 initialTransform:(struct CGAffineTransform)arg3;
- (void)setPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2;

@end
