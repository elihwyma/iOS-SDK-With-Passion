/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FIUIChartBackgroundView, FIUIChartDataGroup, FIUIChartTimeAxisDescriptor, NSArray, NSDateInterval, NSNumber, NSString;

@protocol FIUIChartAxisDescriptor, FIUIChartDataSource;

@interface FIUIChartView : UIView

{
    FIUIChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_yAxisLabels;
    NSArray *_chartSeries;
    UIView *_containerView;
    _Bool _labelsInsetChartBackground;
    _Bool _xAxisLabelsShouldBaselineAlign;
    id <FIUIChartDataSource> _dataSource;
    FIUIChartTimeAxisDescriptor *_xAxisDescriptor;
    id <FIUIChartAxisDescriptor> _yAxisDescriptor;
    FIUIChartBackgroundView *_backgroundView;
    double _yAxisEdgeInset;
    double _xAxisToLabelPadding;
    double _animationDuration;
    NSDateInterval *_dateInterval;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    NSNumber *_highlightedYValue;
    struct UIEdgeInsets _seriesEdgeInsets;
    struct UIEdgeInsets _contentBufferEdgeInsets;
}

@property (weak, nonatomic) id <FIUIChartDataSource> dataSource;
@property (retain, nonatomic) FIUIChartTimeAxisDescriptor *xAxisDescriptor;
@property (retain, nonatomic) id <FIUIChartAxisDescriptor> yAxisDescriptor;
@property (retain, nonatomic) FIUIChartBackgroundView *backgroundView;
@property (nonatomic) double yAxisEdgeInset;
@property (nonatomic) double xAxisToLabelPadding;
@property (nonatomic) _Bool labelsInsetChartBackground;
@property (nonatomic) _Bool xAxisLabelsShouldBaselineAlign;
@property (nonatomic) struct UIEdgeInsets seriesEdgeInsets;
@property (nonatomic) struct UIEdgeInsets contentBufferEdgeInsets;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSNumber *minYValue;
@property (retain, nonatomic) NSNumber *maxYValue;
@property (retain, nonatomic) NSNumber *highlightedYValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_orderSubviews;
- (void)_updateBackgroundView;
- (void)_layoutContainerView;
- (id)initWithDateInterval:(id)arg1;
- (void)_adjustMinMaxValues;
- (void)_updateHighlightedValue;
- (void)_reloadDataSeries;
- (void)_updateDataSeries;
- (double)_yAxisLabelPadding;
- (double)_xAxisLabelPaddingForBackground:(_Bool)arg1;
- (unsigned long long)_numberOfSeries;
- (id)_seriesAtIndex:(unsigned long long)arg1;
- (void)_layoutChartSeries;
- (void)_layoutAxisLabels;
- (void)_layoutXAxisLabels;
- (void)_layoutYAxisLabels;
- (struct CGRect)_insetChartRect;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (struct CGRect)_chartRect;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (unsigned long long)_numberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_dataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (id)_dataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_labelsForSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataSetsInGroup:(id)arg1;
- (unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (id)minXValueForChartSeries:(id)arg1;
- (id)maxXValueForChartSeries:(id)arg1;
- (id)minYValueForChartSeries:(id)arg1;
- (id)maxYValueForChartSeries:(id)arg1;
- (void)selectAxisPoint:(long long)arg1 selected:(_Bool)arg2;

@end
