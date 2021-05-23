/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, NSString, NSURL, NSURLRequest, SKUIClientContext, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMessageBanner, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIView;

@protocol SKUIIPadProductPageDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPadProductPageViewController : UIViewController

{
    _Bool _askPermission;
    SKUIMessageBanner *_banner;
    NSString *_bannerText;
    SKUIClientContext *_clientContext;
    long long _defaultSelectedSectionIndex;
    id <SKUIIPadProductPageDelegate> _delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    _Bool _didSendCannotOpen;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIItem *_item;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    UIView *_overlayView;
    SKUIProductPagePlaceholderViewController *_placeholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    long long _selectedSectionIndex;
    NSURLRequest *_urlRequest;
}

@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIIPadProductPageDelegate> delegate;
@property (nonatomic) _Bool askPermission;
@property (copy, nonatomic) NSString *bannerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (id)initWithItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)_placeholderViewController;
- (void)_setMetricsController:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (id)activeMetricsController;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(CDUnknownBlockType)arg2;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (struct CGPoint)topContentOffset;
- (id)_initSKUIIPadProductPageViewController;
- (void)_setDefaultSectionIndexWithFragment:(long long)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_showBanner;
- (void)_selectSectionIndex:(long long)arg1;
- (id)_reviewsViewController;
- (void)_sendCannotOpen;
- (void)_reloadHeaderViewController;
- (id)_viewControllerForSectionIndex:(long long)arg1;
- (void)_showViewController:(id)arg1;
- (void)_showError:(id)arg1;
- (_Bool)_isIncompatibleItem;
- (void)_showIncompatibleView;
- (id)_detailsViewController;
- (id)_relatedViewController;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (void)askPermissionBannerDidSelect:(id)arg1;

@end
