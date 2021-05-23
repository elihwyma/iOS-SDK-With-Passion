/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SKStoreProductViewController, SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController : SUViewController

{
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)dismissAnimated:(_Bool)arg1;
- (id)initWithSection:(id)arg1;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(_Bool)arg3;
- (void)_loadClientContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;
- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;

@end
