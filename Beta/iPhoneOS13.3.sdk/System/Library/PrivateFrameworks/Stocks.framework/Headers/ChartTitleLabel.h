/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView

{
    LabelSequenceView *_leftView;
    LabelSequenceView *_rightView;
    double _width;
    Stock *_stock;
    Stock *_deferredStock;
}

- (id)init;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_stockWillBeRemoved:(id)arg1;
- (void)prepareStringsWithStock:(id)arg1 width:(double)arg2;
- (void)setLabelsHidden:(_Bool)arg1;
- (void)prepareStringsForDeferredStockIfNeeded;

@end
