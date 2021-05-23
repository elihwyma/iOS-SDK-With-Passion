/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class ChartHUDView, ChartIntervalButtonRow, ChartTitleLabel, ChartUpdater, DashedLineView, LoadingLabel, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, Stock, StockChartData, StockChartDisplayMode, StocksViewController, UILabel;

@protocol StockChartViewDelegate;

@interface StockChartView : UIView

{
    LoadingLabel *_loadingLabel;
    ChartUpdater *_chartUpdater;
    ChartIntervalButtonRow *_intervalButtonRow;
    Stock *_stock;
    NSMutableArray *_axisViews;
    NSMutableArray *_xLabelViews;
    NSMutableArray *_yLabelViews;
    DashedLineView *_previousCloseLine;
    UILabel *_previousCloseLabel;
    ChartTitleLabel *_titleView;
    ChartHUDView *_HUDView;
    _Bool _animating;
    _Bool _layoutPending;
    UIView *_chartTopKeyline;
    UIView *_chartBottomKeyline;
    UIView *_xAxisKeyline;
    NSMutableArray *_displayModes;
    NSMutableDictionary *_graphViews;
    _Bool _drawsBottomLine;
    StocksViewController *_controller;
    StockChartData *_chartData;
    NSError *_error;
    StockChartDisplayMode *_currentDisplayMode;
    long long _selectedInterval;
    id <StockChartViewDelegate> _chartViewDelegate;
    long long _preferredInterval;
}

@property (retain, nonatomic) StockChartDisplayMode *currentDisplayMode;
@property (weak, nonatomic) id <StockChartViewDelegate> chartViewDelegate;
@property (nonatomic) long long preferredInterval;
@property (weak, nonatomic) StocksViewController *controller;
@property (retain, nonatomic) Stock *stock;
@property (retain, nonatomic) StockChartData *chartData;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSArray *alternateDisplayModes;
@property (nonatomic) _Bool drawsBottomLine;
@property (nonatomic) long long selectedInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGGradient *)LineBackgroundGradient;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_layoutSubviews;
- (double)horizontalPadding;
- (void)forceLayout;
- (_Bool)isLoading;
- (_Bool)isLandscape;
- (void)clearData;
- (void)resetLocale;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_setHourLabels;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(_Bool)arg2;
- (void)_setMonthAndYearLabels;
- (struct CGRect)lineGraphFrame;
- (struct CGRect)graphViewFrameForMode:(id)arg1;
- (double)lineGraphBottomPadding;
- (double)widestYLabelWidthForMode:(id)arg1;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (_Bool)hadError;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithInitialDisplayMode:(id)arg1 preferredChartInterval:(long long)arg2 stockChartViewDelegate:(id)arg3;
- (id)chartUpdater;
- (void)setShowingHUD:(_Bool)arg1;
- (void)chartIntervalButtonRow:(id)arg1 didSelectChartInterval:(long long)arg2;
- (void)createYLabelsForMode:(id)arg1;
- (void)addDisplayMode:(id)arg1;
- (long long)maxSupportedIntervalFromDesiredInterval:(long long)arg1;
- (void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg1;
- (id)graphViewForMode:(id)arg1;
- (void)enumerateGraphsAndDisplayModesUsingBlock:(CDUnknownBlockType)arg1;
- (id)currentGraphView;
- (void)_layoutTopLabelsHidden:(_Bool)arg1;
- (void)hideLabelsAxesAndGraphs;
- (void)_setShowingLoadingStatus:(_Bool)arg1;
- (void)layoutGraphViews;
- (void)_layoutIntervalButtonRow;
- (_Bool)shouldShowLoadingStatus;
- (void)_layoutVolumeSeparatorLineForGraphRect:(struct CGRect)arg1;
- (void)_layoutYLabels;
- (void)_layoutAxesAndXLabels;
- (void)layoutPreviousClose;
- (_Bool)isCurrentChart;
- (void)renderGraphDataIfNeeded;
- (void)updateHUDView;
- (void)renderGraphDataIfNeededForMode:(id)arg1;
- (void)hideOtherGraphViews;
- (void)setLabelsAndAxesAlpha:(double)arg1;
- (void)layoutLoadingStatus;
- (void)updateChartViewForSelectedInterval;
- (void)reloadDataIfStale;
- (id)HUDView;
- (double)_evennessOfValue:(double)arg1 inRange:(double)arg2;
- (void)prepareForTransitionToDisplayMode:(id)arg1;
- (void)animateTransitionToDisplayMode:(id)arg1;
- (void)didTransitionToDisplayMode:(id)arg1;

@end
