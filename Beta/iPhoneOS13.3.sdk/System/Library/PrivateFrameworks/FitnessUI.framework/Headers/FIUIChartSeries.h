/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FIUIChartDataSet, NSDate, NSNumber;

@protocol FIUIChartSeriesDataSource;

@interface FIUIChartSeries : UIView

{
    NSDate *_minXValue;
    NSDate *_maxXValue;
    _Bool _displayAboveAxisLabels;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <FIUIChartSeriesDataSource> _dataSource;
    FIUIChartDataSet *_dataSet;
    struct UIEdgeInsets _edgeInsets;
}

@property (retain, nonatomic) NSNumber *minYValue;
@property (retain, nonatomic) NSNumber *maxYValue;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) struct CGRect insetBounds;
@property (weak, nonatomic) id <FIUIChartSeriesDataSource> dataSource;
@property (retain, nonatomic) FIUIChartDataSet *dataSet;
@property (nonatomic) _Bool displayAboveAxisLabels;

- (id)init;
- (void)layoutSubviews;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (double)yValueForPointFromChartPointValue:(id)arg1;
- (id)labelsFromDataSet;
- (void)_reloadMinMaxValues;
- (float)_relativePositionForYPlaneValue:(id)arg1;

@end
