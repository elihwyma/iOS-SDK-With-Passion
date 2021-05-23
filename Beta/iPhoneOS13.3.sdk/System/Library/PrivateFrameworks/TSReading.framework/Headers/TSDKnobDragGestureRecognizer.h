/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnobTracker, TSDRep, TSDiOSCanvasViewController, UITouch;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer

{
    TSDiOSCanvasViewController *mCVC;
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    struct CGPoint mKnobToTouchOffset;
    TSDKnobTracker *mTracker;
    _Bool mKnobTouchHasMoved;
    _Bool mDelayHasElapsed;
    struct CGPoint mOriginalPointInWindow;
    UITouch *mSecondTouch;
    TSDRep *mLastHitRep;
    _Bool mTouchesMoved;
    TSDAutoscroll *mAutoscroll;
    struct CGPoint mAutoscrollPoint;
}

@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) TSDInteractiveCanvasController *icc;
@property (retain, nonatomic) TSDAutoscroll *autoscroll;
@property (nonatomic) struct CGPoint autoscrollPoint;

- (void)dealloc;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)tracker;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)autoscrollWillNotStart;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)p_cancelDelayedKnobTracking;
- (struct CGPoint)p_pointInUnscaledCanvas;
- (void)p_requestDelayedKnobTracking:(double)arg1;
- (void)p_triggerDelayedKnobTracking:(id)arg1;
- (void)updateAfterAutoscroll:(id)arg1;
- (double)unscaledStartAutoscrollThreshold;
- (int)allowedAutoscrollDirections;
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;
- (_Bool)readyToEndOperation;
- (void)operationDidEnd;
- (void)cancelBecauseOfRotation;
- (_Bool)p_hitRepIsValid:(id)arg1;

@end
