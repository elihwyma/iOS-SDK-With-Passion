/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class GraphRenderOperation, LineGraphView, NSArray, NSMutableArray, StockChartData, StockChartDisplayMode, VolumeGraphView;

@protocol StockGraphViewContainer;

@interface StockGraphView : UIView

{
    LineGraphView *_lineView;
    VolumeGraphView *_volumeView;
    UIView<StockGraphViewContainer> *_chartViewDelegate;
    StockChartData *_chartData;
    int _valueIndex;
    int _valueCount;
    struct CGPoint *_points;
    struct CGPoint *_values;
    NSMutableArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    unsigned int _dataSize;
    unsigned int _dataCount;
    CDStruct_b5bb7d6f *_volumeBars;
    unsigned int _volumeSize;
    unsigned int _volumeCount;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    GraphRenderOperation *_renderOperation;
    _Bool _isRendered;
    StockChartDisplayMode *_displayMode;
    struct UIEdgeInsets _graphInsets;
}

@property (weak, nonatomic) UIView<StockGraphViewContainer> *chartViewDelegate;
@property (nonatomic, readonly) _Bool isRendered;
@property (nonatomic, readonly) _Bool isRendering;
@property (nonatomic) struct UIEdgeInsets graphInsets;
@property (retain, nonatomic) StockChartDisplayMode *displayMode;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutSubviews;
- (void)clearPaths;
- (void)clearData;
- (void)loadStockChartData:(id)arg1;
- (void)recomputePathsAndRenderIfNeededForSize:(struct CGSize)arg1;
- (void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (struct CGRect)volumeBarRectNearestToPoint:(struct CGPoint)arg1;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (CDStruct_d4d9707c)plottedPointNearestToPoint:(struct CGPoint *)arg1;
- (struct CGPoint)rightmostPlottedPoint;
- (void)setShowingSelectedVolumeRegion:(_Bool)arg1;
- (void)setShowingSelectedLine:(_Bool)arg1;
- (void)cancelRenderOperation;
- (void)setDottedLinePositionsWithLabelInfo:(id)arg1;
- (void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)arg1;
- (struct CGRect)_lineViewFrameForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)_volumeViewFrameForBoundsSize:(struct CGSize)arg1;
- (void)_finishCurrentLine;
- (float)_priceAtTime:(double)arg1 dataPosition:(double *)arg2;
- (double)_timeAtPosition:(double)arg1;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint)arg1;
- (void)_processGraphDataForWidth:(double)arg1;
- (void)readyForDisplayFromChartData;
- (struct CGRect)_trueGraphPointsRegion;
- (void)graphRenderOperationDidFinish:(id)arg1;

@end
