/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSOperationQueue, NSString, NSURL, NSURLRequest, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMessageBanner, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIViewController;

@protocol SKUIIPhoneProductPageDelegate, SKUIProductPageChildViewController;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <Swift>

{
    _Bool _askPermission;
    SKUIMessageBanner *_banner;
    NSString *_bannerText;
    UIViewController<SKUIProductPageChildViewController> *_childViewController;
    id <SKUIIPhoneProductPageDelegate> _delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    SKUINetworkErrorViewController *_errorViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SKUIItem *_item;
    SSMetricsPageEvent *_lastPageEvent;
    SKUIProductPagePlaceholderViewController *_loadingViewController;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SKUIProductPagePlaceholderViewController *_relatedPlaceholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    long long _sectionIndex;
    NSURLRequest *_urlRequest;
    _Bool _wantsActivityViewController;
}

@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (nonatomic, readonly) NSURL *URL;
@property (weak, nonatomic) id <SKUIIPhoneProductPageDelegate> delegate;
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
- (id)contentScrollView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)_headerViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (id)activeMetricsController;
- (void)_reloadChildViewControllers;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(CDUnknownBlockType)arg2;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)_shareButtonAction:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (struct CGPoint)topContentOffset;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_showBanner;
- (id)_reviewsViewController;
- (id)_viewControllerForSectionIndex:(unsigned long long)arg1;
- (void)_showError:(id)arg1;
- (_Bool)_isIncompatibleItem;
- (id)_detailsViewController;
- (id)_relatedViewController;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (id)_initSKUIIPhoneProductPageViewController;
- (void)_setSectionIndexWithFragment:(long long)arg1;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_hideBanner;
- (void)_showActivityViewController;
- (void)_invalidateChildViewControllers;
- (void)_presentHTMLProductPage;
- (void)_animateAddToWishlist;
- (id)_loadingViewController;
- (id)_relatedPlaceholderViewController;

@end
