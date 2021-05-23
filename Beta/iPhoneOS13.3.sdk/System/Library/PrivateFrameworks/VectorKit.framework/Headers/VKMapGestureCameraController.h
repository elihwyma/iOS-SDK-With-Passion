/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKGestureCameraBehavior.h>

@class VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapGestureCameraController : VKGestureCameraBehavior

{
    struct CGPoint _panLastScreenPoint;
    _Bool _isPitchIncreasing;
    double _beganPitch;
    VKTimedAnimation *_zoomAnimation;
}

- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;
- (_Bool)isPitchIncreasing;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1 delta:(Matrix_6e1d3589)arg2;

@end
