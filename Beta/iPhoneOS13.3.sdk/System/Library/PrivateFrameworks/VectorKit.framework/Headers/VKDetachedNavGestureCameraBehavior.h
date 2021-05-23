/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKGestureCameraBehavior.h>

@class NSString, VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior

{
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    Unit_3d259e8a _startPitch;
    VKTimedAnimation *_tapZoomAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (id)initWithNavCameraController:(id)arg1;

@end
