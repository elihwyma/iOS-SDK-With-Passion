/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, NSDate;

@interface FIUIChartUniformBarSeries : FIUIChartNumericSeries

{
    NSDate *_minDate;
    double _barWidth;
    double _barSpacing;
    double _roundedCornerRadius;
    struct CGGradient *_barGradient;
    NSArray *_plotPoints;
}

@property (retain, nonatomic) NSArray *plotPoints;
@property (nonatomic) NSDate *minDate;
@property (nonatomic) double barWidth;
@property (nonatomic) double barSpacing;
@property (nonatomic) double roundedCornerRadius;
@property (nonatomic) struct CGGradient *barGradient;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (double)yValueForPointFromChartPointValue:(id)arg1;

@end
