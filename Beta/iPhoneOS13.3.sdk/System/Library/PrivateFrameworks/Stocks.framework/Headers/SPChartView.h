/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class ChartLabelInfoManager, NSMutableArray, Stock, StockChartData, StockChartDisplayMode, StockGraphView, UIFont;

@protocol SPChartViewDelegate;

@interface SPChartView : UIView

{
    long long _selectedInterval;
    StockGraphView *_graph;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
    ChartLabelInfoManager *_labelInfoManager;
    _Bool _compactGraph;
    _Bool _showsHorizontalLines;
    unsigned long long _chartViewType;
    StockChartData *_chartData;
    Stock *_stock;
    id <SPChartViewDelegate> _delegate;
    StockChartDisplayMode *_currentDisplayMode;
}

@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic) unsigned long long chartViewType;
@property (nonatomic, getter=isCompactGraph) _Bool compactGraph;
@property (nonatomic) _Bool showsHorizontalLines;
@property (retain, nonatomic) StockChartData *chartData;
@property (retain, nonatomic) Stock *stock;
@property (weak, nonatomic) id <SPChartViewDelegate> delegate;
@property (nonatomic, readonly) StockChartDisplayMode *currentDisplayMode;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundGradient:(struct CGGradient *)arg1;
- (void)clearData;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (void)_prepareYAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_setHourLabels;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(_Bool)arg2;
- (void)_setMonthAndYearLabels;
- (struct CGRect)lineGraphFrame;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1;
- (struct CGRect)graphViewFrameForMode:(id)arg1;
- (double)lineGraphBottomPadding;
- (double)widestYLabelWidthForMode:(id)arg1;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (id)initWithStockChartDisplayMode:(id)arg1;
- (id)_smallCapsFontFrom:(id)arg1;

@end
