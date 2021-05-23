/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NUCropModel;

@protocol OS_dispatch_queue, OS_dispatch_source, PUCropGestureHandlerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropGestureHandler : NSObject

{
    struct CGVector _panRubberBandDelta;
    struct CGVector _panSlideVelocity;
    NSObject<OS_dispatch_queue> *_animationQueue;
    NSObject<OS_dispatch_source> *_pitchYawRollAnimationTimer;
    NSObject<OS_dispatch_source> *_panAnimationTimer;
    NSObject<OS_dispatch_source> *_zoomAnimationTimer;
    struct {
        double scale;
        struct CGVector modelSpaceTranslation;
    } _panState;
    struct {
        double scale;
    } _pinchState;
    struct {
        struct CGRect startCropRect;
    } _pitchYawRollState;
    struct CGRect _panPinchStartRect;
    double _gestureStartPitch;
    double _gestureStartYaw;
    double _gestureStartRoll;
    int _pitchYawRollAnimationTimerCountdown;
    _Bool _inPanState;
    _Bool _inZoomState;
    _Bool _isDebugging;
    _Bool _isLogging;
    _Bool _delegateQueueIsMain;
    _Bool _animateEndGesture;
    id <PUCropGestureHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    double _maximumZoomScale;
    NUCropModel *_cropModel;
    double _zoomOverflow;
    long long _gesture;
    struct CGVector _panRubberBandOffset;
}

@property (weak) id <PUCropGestureHandlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property double maximumZoomScale;
@property (retain, readonly) NUCropModel *cropModel;
@property (readonly) struct CGVector panRubberBandOffset;
@property (readonly) double zoomOverflow;
@property (readonly) long long gesture;

- (void)reset;
- (void)setRollAngle:(double)arg1;
- (void)setYawAngle:(double)arg1;
- (void)setPitchAngle:(double)arg1;
- (void)setLoggingEnabled:(_Bool)arg1;
- (void)_setZoomScale:(double)arg1;
- (struct CGSize)masterImageSize;
- (double)_zoomScaleForModelCropRect:(struct CGRect)arg1;
- (double)_zoomScaleForCurrentCropRectAndModelRect;
- (id)initWithCropModel:(id)arg1;
- (void)setAnimateEndGestureEnabled:(_Bool)arg1;
- (id)delgateQueue;
- (void)_setGestureTypePan;
- (void)_setGestureTypePinch;
- (void)_clearGestureTypePitchYawRoll;
- (void)_clearGestureTypePan;
- (void)_clearGestureTypePinch;
- (void)_dispatchSyncOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_didTrack;
- (void)_setGestureType:(long long)arg1;
- (void)beginPan;
- (void)panWithTranslation:(struct CGVector)arg1 velocity:(struct CGVector)arg2;
- (void)endPanWithTranslation:(struct CGVector)arg1 velocity:(struct CGVector)arg2;
- (void)beginZoom;
- (void)zoomWithScale:(double)arg1 rubberband:(_Bool)arg2;
- (void)zoomWithScale:(double)arg1;
- (void)endZoomWithScale:(double)arg1;
- (void)_startPitchYawRollGestureTimeoutTimer;
- (void)_zoomWithScale:(double)arg1 startCropRect:(struct CGRect)arg2;
- (void)_constrainedMoveCropRectBy:(struct CGVector)arg1 startRect:(struct CGRect)arg2 rubberband:(_Bool)arg3;
- (void)_stopAnimatedZoomTimer;
- (void)_stopAnimatedZoom;
- (void)_stopAnimatedPanTimer;
- (void)_stopAnimatedPan;

@end
