/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSString, UITouch;

@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer

{
    double _thresholdDistance;
    double _squaredThreshold;
    struct CGPoint _drawTouchStartPoint;
    _Bool _drawingTargetIsDrawing;
    _Bool _gestureDetected;
    _Bool _ignoreFingerTouchesUntilReset;
    id <PKDrawingGestureTarget> drawingTarget;
    UITouch *_drawingTouch;
}

@property (retain, nonatomic) UITouch *drawingTouch;
@property (nonatomic) double thresholdDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PKDrawingGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id <PKDrawingGestureTarget> drawingTarget;

- (void)cancel;
- (void)reset;
- (void)end;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)_cancelDrawing;
- (void)_endDrawing;
- (_Bool)_shouldBeginDrawing:(id)arg1 withEvent:(id)arg2;
- (void)_beginDrawingWithTouch:(id)arg1;
- (void)_updateDrawingWithEvent:(id)arg1;
- (void)_drawingCancelled;
- (void)_drawingBegan;
- (void)_drawingMoved:(id)arg1;
- (void)_drawingEnded;

@end
