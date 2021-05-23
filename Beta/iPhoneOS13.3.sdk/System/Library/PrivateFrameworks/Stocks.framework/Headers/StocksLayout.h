/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class StockChartDisplayMode;

@interface StocksLayout : NSObject

{
    _Bool _infoViewHasBottomLine;
    _Bool _newsViewHasBottomLine;
    _Bool _chartViewHasBottomLine;
    _Bool _newsViewShouldUseLargerFonts;
    _Bool _chartViewHasTapGesture;
    _Bool _hasScrollView;
    _Bool _infoViewInScrollView;
    _Bool _chartViewInScrollView;
    _Bool _newsViewInScrollView;
    _Bool _hasBlurView;
    _Bool _hasGrayView;
    _Bool _hasSecondaryGrayView;
    _Bool _hasStatusView;
    _Bool _hasStatusViewDivider;
    _Bool _hasPrimaryHorizontalDivider;
    _Bool _hasSecondaryHorizontalDivider;
    _Bool _hasPrimaryVerticalDivider;
    _Bool _hasSecondaryVerticalDivider;
    _Bool _hasBlackView;
    _Bool _isFullScreenChart;
    unsigned long long _listViewRowCount;
    double _statusViewCenteringRatio;
    StockChartDisplayMode *_chartDisplayMode;
    struct CGSize _scrollViewContentSize;
    struct CGRect _listViewFrame;
    struct CGRect _infoViewFrame;
    struct CGRect _chartViewFrame;
    struct CGRect _newsViewFrame;
    struct UIEdgeInsets _listViewContentInsets;
    struct CGRect _scrollViewFrame;
    struct CGRect _blurViewFrame;
    struct CGRect _grayViewFrame;
    struct CGRect _secondaryGrayViewFrame;
    struct CGRect _statusViewFrame;
    struct CGRect _statusViewDividerFrame;
    struct CGRect _primaryHorizontalDividerFrame;
    struct CGRect _secondaryHorizontalDividerFrame;
    struct CGRect _primaryVerticalDividerFrame;
    struct CGRect _secondaryVerticalDividerFrame;
}

@property (nonatomic) struct CGRect listViewFrame;
@property (nonatomic) struct CGRect infoViewFrame;
@property (nonatomic) struct CGRect chartViewFrame;
@property (nonatomic) struct CGRect newsViewFrame;
@property (nonatomic) struct UIEdgeInsets listViewContentInsets;
@property (nonatomic) _Bool infoViewHasBottomLine;
@property (nonatomic) _Bool newsViewHasBottomLine;
@property (nonatomic) _Bool chartViewHasBottomLine;
@property (nonatomic) _Bool newsViewShouldUseLargerFonts;
@property (nonatomic) _Bool chartViewHasTapGesture;
@property (nonatomic) _Bool hasScrollView;
@property (nonatomic) struct CGRect scrollViewFrame;
@property (nonatomic) struct CGSize scrollViewContentSize;
@property (nonatomic) _Bool infoViewInScrollView;
@property (nonatomic) _Bool chartViewInScrollView;
@property (nonatomic) _Bool newsViewInScrollView;
@property (nonatomic) _Bool hasBlurView;
@property (nonatomic) struct CGRect blurViewFrame;
@property (nonatomic) _Bool hasGrayView;
@property (nonatomic) struct CGRect grayViewFrame;
@property (nonatomic) _Bool hasSecondaryGrayView;
@property (nonatomic) struct CGRect secondaryGrayViewFrame;
@property (nonatomic) _Bool hasStatusView;
@property (nonatomic) struct CGRect statusViewFrame;
@property (nonatomic) _Bool hasStatusViewDivider;
@property (nonatomic) struct CGRect statusViewDividerFrame;
@property (nonatomic) _Bool hasPrimaryHorizontalDivider;
@property (nonatomic) struct CGRect primaryHorizontalDividerFrame;
@property (nonatomic) _Bool hasSecondaryHorizontalDivider;
@property (nonatomic) struct CGRect secondaryHorizontalDividerFrame;
@property (nonatomic) _Bool hasPrimaryVerticalDivider;
@property (nonatomic) struct CGRect primaryVerticalDividerFrame;
@property (nonatomic) _Bool hasSecondaryVerticalDivider;
@property (nonatomic) struct CGRect secondaryVerticalDividerFrame;
@property (nonatomic) unsigned long long listViewRowCount;
@property (nonatomic) double statusViewCenteringRatio;
@property (retain, nonatomic) StockChartDisplayMode *chartDisplayMode;
@property (nonatomic) _Bool hasBlackView;
@property (nonatomic) _Bool isFullScreenChart;

+ (id)layoutForSize:(struct CGSize)arg1;
+ (id)singleColumnPortraitLayoutForSize:(struct CGSize)arg1;
+ (id)twoColumnsPortraitLayoutForSize:(struct CGSize)arg1;
+ (id)fullScreenChartLayoutForSize:(struct CGSize)arg1;
+ (id)twoColumnsLandscapeLayoutForSize:(struct CGSize)arg1;
+ (id)threeColumnsLandscapeLayoutForSize:(struct CGSize)arg1;
+ (unsigned long long)numberOfRowsForSize:(struct CGSize)arg1;

- (id)description;

@end
