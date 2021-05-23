/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class NSString, TSWPRep, TSWPTextMagnifierRenderer, TSWPTextMagnifierTimeWeightedPoint;

@interface TSWPTextMagnifierCaret : UIView

{
    TSWPRep *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _offset;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    double _yOffset;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
}

@property (nonatomic) double yOffset;
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

+ (id)sharedCaretMagnifier;

- (void)dealloc;
- (void)remove;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)stopMagnifying:(_Bool)arg1;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)autoscrollWillNotStart;
- (id)initWithDefaultFrame;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldHideCanvasLayer;

@end
