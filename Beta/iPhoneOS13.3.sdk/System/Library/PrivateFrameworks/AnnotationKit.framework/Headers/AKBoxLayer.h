/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer

{
    double _borderWidthScale;
    double _boxCornerRadius;
    double _nominalBorderWidth;
}

@property double boxCornerRadius;
@property double nominalBorderWidth;
@property (nonatomic) double borderWidthScale;

- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2;
- (void)_updateBoxPath;

@end
