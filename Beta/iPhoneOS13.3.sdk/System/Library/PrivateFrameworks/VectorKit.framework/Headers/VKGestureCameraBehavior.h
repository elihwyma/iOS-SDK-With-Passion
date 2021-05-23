/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKCameraController;

__attribute__((visibility("hidden")))
@interface VKGestureCameraBehavior : NSObject

{
    _Bool _pinching;
    struct CGPoint _pinchStartFocusPoint;
    _Bool _panning;
    struct CGPoint _panStartFocusPoint;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    _Bool _rotating;
    struct CGPoint _rotateStartFocusPoint;
    double _lastRotation;
    _Bool _shouldRotationRubberband;
    _Bool _pitching;
    struct CGPoint _pitchStartFocusPoint;
    struct CGPoint _pitchStartScreenPoint;
    _Bool _notifyCameraStateChanges;
    VKCameraController *_cameraController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isRotating;
- (_Bool)isPanning;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (_Bool)isGesturing;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)transferGestureState:(id)arg1;
- (id)initWithCameraController:(id)arg1;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
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
- (_Bool)isPitching;
- (_Bool)isPinching;

@end
