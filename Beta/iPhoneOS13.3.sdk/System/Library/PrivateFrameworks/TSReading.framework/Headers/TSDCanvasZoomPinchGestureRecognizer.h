/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer

{
    _Bool mZoomTimedOut;
}

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)p_stopCancellationTimer;
- (void)p_startCancellationTimer;
- (void)p_cancelAfterDelay;

@end
