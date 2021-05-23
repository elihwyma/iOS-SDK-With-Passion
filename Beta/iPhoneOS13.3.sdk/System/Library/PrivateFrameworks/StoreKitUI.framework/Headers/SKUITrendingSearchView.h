/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIScrollView.h>

@class NSArray, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchView : UIScrollView

{
    UIView *_trendingTitleView;
    NSArray *_trendingSearchViews;
    UIStackView *_trendingSearchesStackView;
    UIStackView *_titleStackView;
    NSArray *_verticalMarginRelatedConstraints;
}

@property (weak, nonatomic) UIStackView *trendingSearchesStackView;
@property (weak, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) NSArray *verticalMarginRelatedConstraints;
@property (copy, nonatomic) UIView *trendingTitleView;
@property (copy, nonatomic) NSArray *trendingSearchViews;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (void)commonInitWithFrame:(struct CGRect)arg1;

@end
