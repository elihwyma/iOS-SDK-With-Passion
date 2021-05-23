/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartSeries.h>

@class NSArray, NSDictionary, NSMutableArray, UIColor;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries

{
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
    UIColor *_barColor;
    double _cornerRadius;
    NSDictionary *_labelAttributes;
}

@property (retain, nonatomic) UIColor *barColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSDictionary *labelAttributes;

- (void)layoutSubviews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_loadFromDataSet;

@end
