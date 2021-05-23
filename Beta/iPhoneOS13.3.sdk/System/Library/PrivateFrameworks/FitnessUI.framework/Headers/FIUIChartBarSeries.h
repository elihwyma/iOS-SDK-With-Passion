/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, UIColor;

@interface FIUIChartBarSeries : FIUIChartNumericSeries

{
    _Bool _fadeZeroBars;
    double _barWidth;
    double _barSpacing;
    double _roundedCornerRadius;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_backgroundStrokeColor;
    double _backgroundStrokeWidth;
    NSArray *_barColors;
    struct CGGradient *_barGradient;
    UIColor *_barColor;
    UIColor *_fadedBarColor;
    NSArray *_labelAttributes;
    NSArray *_plotPoints;
    NSArray *_barLabels;
}

@property (retain, nonatomic) NSArray *plotPoints;
@property (retain, nonatomic) NSArray *barLabels;
@property (nonatomic) double barWidth;
@property (nonatomic) double barSpacing;
@property (nonatomic) double roundedCornerRadius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *backgroundStrokeColor;
@property (nonatomic) double backgroundStrokeWidth;
@property (retain, nonatomic) NSArray *barColors;
@property (nonatomic) struct CGGradient *barGradient;
@property (retain, nonatomic) UIColor *barColor;
@property (nonatomic) _Bool fadeZeroBars;
@property (retain, nonatomic) UIColor *fadedBarColor;
@property (retain, nonatomic) NSArray *labelAttributes;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_translateColorThresholds;
- (void)_strokeRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 color:(struct CGColor *)arg3 width:(double)arg4;
- (id)_chartColorForChartYValue:(double)arg1;

@end
