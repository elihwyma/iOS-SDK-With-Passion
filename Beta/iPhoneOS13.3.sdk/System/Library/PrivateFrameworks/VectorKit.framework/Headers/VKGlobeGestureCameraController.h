/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKGestureCameraBehavior.h>

__attribute__((visibility("hidden")))
@interface VKGlobeGestureCameraController : VKGestureCameraBehavior

{
    struct GlobeView *_globeView;
    struct CameraManager *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    _Bool _isPitchIncreasing;
}

- (_Bool)isPitchIncreasing;
- (void)setGlobeView:(struct GlobeView *)arg1;
- (void)setCameraManager:(struct CameraManager *)arg1;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)endZoom:(struct CGPoint)arg1;
- (void)beginPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)endPan:(struct CGPoint)arg1;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)endRotate:(struct CGPoint)arg1;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)endPitch:(struct CGPoint)arg1;

@end
