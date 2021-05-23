/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@class TSDAutoscroll, TSDInteractiveCanvasController;

@protocol TSDAutoscrollDelegate

@property (nonatomic, readonly) TSDInteractiveCanvasController *icc;
@property (retain, nonatomic) TSDAutoscroll *autoscroll;
@property (nonatomic) struct CGPoint autoscrollPoint;

- (unsigned short)autoscrollWillNotStart;
- (unsigned short)updateAfterAutoscroll: /* Error: Ran out of types for this method. */;

@end
