/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSDictionary, NSString, NSURL, SKUIBannerViewController, SKUIClientContext, SKUIIPadProductPageViewController, SKUIIPhoneProductPageViewController, SKUIITunesStoreUIPageViewController, SKUIItemStateCenter, SSMetricsPageEvent, SUBarButtonItem, SUDialogManager, SUPreviewOverlayViewController, SUPurchaseManager;

@protocol SKProductPageViewControllerDelegate, SKProductPageViewControllerDelegatePrivate;

@interface SKProductPageViewController : SUViewController

{
    NSString *_additionalPurchaseParameters;
    NSString *_affiliateIdentifier;
    _Bool _askToBuy;
    SKUIBannerViewController *_bannerViewController;
    SKUIClientContext *_clientContext;
    id <SKProductPageViewControllerDelegatePrivate> _delegate;
    SUDialogManager *_dialogManager;
    SUBarButtonItem *_gotoStoreButtonItem;
    SUBarButtonItem *_rightBarButtonItem;
    SKUIIPadProductPageViewController *_ipadProductPageViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKUIItemStateCenter *_itemStateCenter;
    SSMetricsPageEvent *_lastPageEvent;
    NSURL *_nativeURL;
    SUPreviewOverlayViewController *_previewOverlay;
    NSDictionary *_productParameters;
    SUPurchaseManager *_purchaseManager;
    _Bool _preview;
    _Bool _showsStoreButton;
    _Bool _showsRightBarButton;
    NSString *_rightBarButtonTitle;
    NSString *_promptString;
    long long _style;
    SKUIITunesStoreUIPageViewController *_storePageViewController;
    long long _urlBagType;
    NSString *_cancelButtonTitle;
}

@property (weak, nonatomic) id <SKProductPageViewControllerDelegate> delegate;
@property (nonatomic) long long productPageStyle;
@property (nonatomic, getter=isPreview) _Bool preview;
@property (nonatomic) _Bool showsStoreButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *rightBarButtonTitle;
@property (nonatomic) _Bool showsRightBarButton;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) _Bool askToBuy;
@property (copy, nonatomic) NSString *additionalPurchaseParameters;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (nonatomic) long long URLBagType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultClientInterface;
+ (void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)_defaultClientIdentifier;
+ (void)getCanLoadWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (void)_failWithError:(id)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setShowsCancelButton:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_applicationWillEnterForeground;
- (void)_reloadViews;
- (void)loadProductWithParameters:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (id)_initSKProductPageViewController;
- (void)_loadRequestForProductParameters;
- (void)_loadProductWithRequest:(id)arg1;
- (void)_reloadGotoStoreButton;
- (void)_sendDidFailLoadWithError:(id)arg1;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (id)_previewOverlay;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (void)_showProductPage:(id)arg1 pageEvent:(id)arg2;
- (void)_loadClientContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadWithStorePageRequest:(id)arg1;
- (id)_newRequestPropertiesWithRequest:(id)arg1;
- (void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3;
- (void)_gotoStoreButtonAction:(id)arg1;
- (void)_rightBarButtonAction:(id)arg1;
- (void)bannerViewDidClose:(id)arg1;
- (void)bannerView:(id)arg1 didFailWithError:(id)arg2;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(CDUnknownBlockType)arg3;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (id)previewOverlayForClientInterface:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
- (void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
- (void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2;
- (void)itemStateCenter:(id)arg1 didFinishSoftwarePurchases:(id)arg2;
- (id)initWithProductPageStyle:(long long)arg1;
- (id)initWithTabBarItem:(id)arg1;
- (id)cancelButtonTitle:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)loadWithProductPage:(id)arg1;
- (void)_setClientContext:(id)arg1;
- (void)_showPageWithRequest:(id)arg1 animated:(_Bool)arg2;

@end
