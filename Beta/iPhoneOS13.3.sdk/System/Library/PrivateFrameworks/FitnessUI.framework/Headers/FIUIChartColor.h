/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIChartColor : NSObject

{
    struct CGGradient *_gradient;
    struct CGColor *_color;
    double _threshold;
}

@property (nonatomic) double threshold;

- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (id)initWithThreshold:(double)arg1 color:(id)arg2;

@end
