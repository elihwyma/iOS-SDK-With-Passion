/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class CALayer;

@protocol TSWPTextMagnifierRendererDelegate;

@interface TSWPTextMagnifierRenderer : UIView

{
    id <TSWPTextMagnifierRendererDelegate> _delegate;
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
    int _autoscrollDirections;
}

@property (nonatomic) id <TSWPTextMagnifierRendererDelegate> delegate;
@property (nonatomic) int autoscrollDirections;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setNeedsDisplay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tearDown;
- (void)canvasNeedsDisplay;
- (id)p_createChildLayer;

@end
