/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableView.h>

@class SKUITrendingSearchPage, SKUITrendingSearchPageView, SKUITrendingSearchProvider;

@protocol SKUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISearchFieldTableView : UITableView

{
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchPageView *_pageView;
    _Bool _trendingSearchesVisible;
    SKUITrendingSearchProvider *_trendingSearchProvider;
    id <SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
}

@property (retain, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider;
@property (weak, nonatomic) id <SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;
@property (nonatomic) _Bool trendingSearchesVisible;

- (void)layoutSubviews;
- (void)_reloadData;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;

@end
