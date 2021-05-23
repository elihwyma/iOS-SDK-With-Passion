/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableIndexSet, NSOperationQueue, NSString, SKComposeReviewViewController, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIPadCustomerReviewsHeaderView, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableView, SKUIReviewList, SKUIReviewsFacebookViewController, SKUIReviewsHistogramViewController, SKUIStarRatingQueue, SSVLoadURLOperation, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageReviewsViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKComposeReviewViewController *_composeViewController;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    _Bool _isPad;
    SKUILayoutCache *_layoutCache;
    long long _loadedPageCount;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    long long _sortOrder;
    _Bool _showAllVersions;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
    _Bool _askPermission;
}

@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_reloadData;
- (id)_tableView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)_addHeaderView;
- (id)_urlStringWithPageNumber:(long long)arg1;
- (double)_defaultPageWidth;
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint)arg1;
- (id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (_Bool)_shouldShowLoadMoreCell;
- (id)_histogramViewController;
- (id)_reviewsHeaderView;
- (void)_resetPersonalStarRating;
- (id)_textLayoutRequestWithText:(id)arg1;
- (void)_appSupportAction:(id)arg1;
- (void)_versionSelectionAction:(id)arg1;
- (void)_starRatingAction:(id)arg1;
- (void)_writeAReviewAction:(id)arg1;
- (void)_addReviewsFromResponse:(id)arg1 error:(id)arg2;
- (void)_setReviewListWithResponse:(id)arg1 error:(id)arg2;
- (void)_sortSelectionAction:(id)arg1;
- (id)_bottomBorderColorForScheme:(id)arg1;
- (void)reviewsFacebookViewControllerDidChange:(id)arg1;

@end
