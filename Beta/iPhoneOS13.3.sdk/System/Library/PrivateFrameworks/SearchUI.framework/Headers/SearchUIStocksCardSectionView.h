/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class ChartUpdater, NSMutableArray, NSString, NUIContainerBoxView, NUIContainerStackView, SearchUIDashedLineView, SearchUIStockGraphSectionRowModel, StockChartData, StockChartDisplayMode, StockGraphView, TLKLabel, UIView;

@interface SearchUIStocksCardSectionView

{
    int _graphColor;
    ChartUpdater *_chartUpdater;
    StockGraphView *_stockGraphView;
    StockChartDisplayMode *_displayMode;
    TLKLabel *_highLabel;
    TLKLabel *_lowLabel;
    SearchUIDashedLineView *_previousCloseLine;
    StockChartData *_chartData;
    NUIContainerStackView *_stackView;
    NSMutableArray *_axisViews;
    UIView *_xAxisKeyline;
    NSMutableArray *_xLabelViews;
}

@property (retain) ChartUpdater *chartUpdater;
@property (retain) StockGraphView *stockGraphView;
@property (retain) StockChartDisplayMode *displayMode;
@property (retain) TLKLabel *highLabel;
@property (retain) TLKLabel *lowLabel;
@property (retain) SearchUIDashedLineView *previousCloseLine;
@property (retain) StockChartData *chartData;
@property (retain) NUIContainerStackView *stackView;
@property (retain) NUIContainerBoxView *contentView;
@property (retain) NSMutableArray *axisViews;
@property (retain) UIView *xAxisKeyline;
@property (retain) NSMutableArray *xLabelViews;
@property (retain) SearchUIStockGraphSectionRowModel *rowModel;
@property (nonatomic) int graphColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (struct CGRect)lineGraphFrame;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)setHourLabels;
- (void)layoutPriceLabels;
- (void)layoutAxesAndXLabels;

@end
