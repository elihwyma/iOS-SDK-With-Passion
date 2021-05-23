/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKGestureCameraBehavior.h>

@class VKARCameraController;

__attribute__((visibility("hidden")))
@interface VKARGestureCameraBehavior : VKGestureCameraBehavior

{
    VKARCameraController *_arCameraController;
    Geocentric_d8fde6f2 _startPanPosition;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithARCameraController:(id)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;

@end
