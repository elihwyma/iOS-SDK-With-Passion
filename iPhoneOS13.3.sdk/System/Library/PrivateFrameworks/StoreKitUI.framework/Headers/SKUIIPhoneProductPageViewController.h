//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKStoreProductViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIMessageBannerDelegate-Protocol.h>
#import <StoreKitUI/SKUIMetricsViewController-Protocol.h>
#import <StoreKitUI/SKUINetworkErrorDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageChildViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageHeaderViewDelegate-Protocol.h>

@class NSOperationQueue, NSString, NSURL, NSURLRequest, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMessageBanner, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIViewController;
@protocol SKUIIPhoneProductPageDelegate, SKUIProductPageChildViewController;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate>
{
    BOOL _askPermission;
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
    BOOL _wantsActivityViewController;
}

@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <SKUIIPhoneProductPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(nonatomic) BOOL askPermission; // @synthesize askPermission=_askPermission;
// - (void).cxx_destruct;
- (id)_viewControllerForSectionIndex:(NSUInteger)arg1;
- (void)_showActivityViewController;
- (void)_showError:(id)arg1;
- (void)_setSectionIndexWithFragment:(long long)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_reloadChildViewControllers;
- (void)_presentHTMLProductPage;
- (BOOL)_isIncompatibleItem;
- (void)_invalidateChildViewControllers;
- (id)_headerViewController;
- (id)_loadingViewController;
- (id)_relatedPlaceholderViewController;
- (void)_hideBanner;
- (void)_showBanner;
- (id)_relatedViewController;
- (id)_reviewsViewController;
- (id)_detailsViewController;
- (void)_animateAddToWishlist;
- (void)_shareButtonAction:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (CGPoint)topContentOffset;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id /* CDUnknownBlockType */)arg2;
- (void)productPageChildOpenItem:(id)arg1;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)activeMetricsController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)contentScrollView;
- (void)reloadData;
@property(readonly, nonatomic) NSURL *URL;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithItem:(id)arg1;
- (id)_initSKUIIPhoneProductPageViewController;

@end

