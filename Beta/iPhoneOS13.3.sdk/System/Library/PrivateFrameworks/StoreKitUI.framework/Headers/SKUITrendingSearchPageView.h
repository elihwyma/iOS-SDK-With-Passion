/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUITrendingSearchPage, SKUITrendingSearchView;

@protocol SKUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchPageView : UIView

{
    id <SKUITrendingSearchPageViewDelegate> _delegate;
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchView *_trendingSearchView;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (weak, nonatomic) id <SKUITrendingSearchPageViewDelegate> delegate;
@property (retain, nonatomic) SKUITrendingSearchPage *page;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_buttonAction:(id)arg1;

@end
