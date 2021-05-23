/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIIPadSearchController, SKUINetworkErrorViewController, SKUIPopoverObserver, SKUIProductPageOverlayController, SKUIWishlistViewController, UIBarButtonItem;

@interface SKUIViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    _Bool _wishlistButtonHidden;
    UIBarButtonItem *_wishlistButtonItem;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}

@property (nonatomic, readonly) UIBarButtonItem *_wishlistButtonItem;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUIIPadSearchController *IPadSearchController;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setWishlistButtonHidden:(_Bool)arg1;
- (void)showDefaultNavigationItems;
- (id)initWithTabBarItem:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)forceOrientationBackToSupportedOrientation;
- (id)_defaultLeftBarButtonItems;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)_getIPadSearchController;
- (id)_defaultRightBarButtonItemsIsCompact:(_Bool)arg1;
- (void)_showDialogWithError:(id)arg1;
- (void)_reloadForOrientation:(long long)arg1;
- (void)_presentWishlistFromSheet;
- (void)_presentWishlistFromPopover:(id)arg1;
- (void)_wishlistPopoverDidDismiss;
- (void)_wishlistAction:(id)arg1;
- (void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)showDefaultNavigationItemsForSize:(struct CGSize)arg1;
- (void)showDefaultNavigationItemsIsCompact:(_Bool)arg1;
- (void)showError:(id)arg1;
- (_Bool)showingError;

@end
