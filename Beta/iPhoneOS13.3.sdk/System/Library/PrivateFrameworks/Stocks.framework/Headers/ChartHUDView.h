/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class NSMutableSet, PricePopoverBar, StockChartView, StockGraphView, StocksTapDragGestureRecognizer, UILabel;

@interface ChartHUDView : UIView

{
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    long long _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    _Bool _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
    _Bool _enabled;
    _Bool _overlayHidden;
    StockChartView *_chartView;
    StockGraphView *_graphView;
    double _barHeight;
}

@property (weak, nonatomic) StockChartView *chartView;
@property (retain, nonatomic) StockGraphView *graphView;
@property (nonatomic) _Bool enabled;
@property (nonatomic, getter=isOverlayHidden) _Bool overlayHidden;
@property (nonatomic) double barHeight;

+ (id)monoSpacedFontWithFont:(id)arg1;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(_Bool)arg3 isLeft:(_Bool)arg4;
+ (id)_dateRangeSeparatorString;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetLocale;
- (_Bool)isTrackingTouches;
- (void)tapDragGestureChanged:(id)arg1;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2;
- (void)_showHUD;
- (void)setShowingTracking:(_Bool)arg1 withTouchInfo:(id)arg2 animated:(_Bool)arg3;

@end
