/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class NSString, TSWPRep, TSWPTextMagnifierRenderer, TSWPTextMagnifierTimeWeightedPoint;

@interface TSWPTextMagnifierRanged : UIView

{
    TSWPRep *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _offset;
    struct CGPoint _animationPoint;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
    _Bool _inPlace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TSWPRep *target;
@property (nonatomic, readonly) struct CGPoint terminalPoint;
@property (nonatomic, readonly) _Bool terminalPointPlacedCarefully;
@property (nonatomic) struct CGPoint magnificationPoint;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) struct CGPoint animationPoint;
@property (nonatomic, readonly) NSString *underlayImageName;
@property (nonatomic, readonly) NSString *overlayImageName;
@property (nonatomic, readonly) NSString *maskImageName;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)currentOffset;
- (void)setNeedsDisplay;
- (void)stopMagnifying:(_Bool)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)autoscrollWillNotStart;
- (double)horizontalMovementAtTime:(double)arg1;
- (_Bool)wasPlacedCarefullyAtTime:(double)arg1;
- (double)horizontalMovement;
- (void)updateFrame;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
- (void)canvasNeedsDisplay;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldHideCanvasLayer;

@end
