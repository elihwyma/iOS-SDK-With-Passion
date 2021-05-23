/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer

{
    CAGradientLayer *_gradient;
    CAShapeLayer *_shapeMask;
}

@property (retain, nonatomic) CAGradientLayer *gradient;
@property (retain, nonatomic) CAShapeLayer *shapeMask;
@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint startPoint;
@property struct CGPoint endPoint;
@property (copy) NSString *type;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setPath:(struct CGPath *)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setFillRule:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setStrokeStart:(double)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setLineDashPhase:(double)arg1;
- (_Bool)isGradientTree;
- (void)p_flatten;
- (void)p_createGradientTreeIfNeeded;

@end
