/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, UIColor;

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries

{
    NSArray *_dataPoints;
    UIColor *_color;
    double _lineWidth;
    double _sidePadding;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) double sidePadding;

- (void)layoutSubviews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;

@end
