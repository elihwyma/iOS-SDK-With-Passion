/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString, SKInvocationQueueProxy, SKRemoteStorePageViewController, SKStoreProductViewController, _UIAsyncInvocation;

@protocol SKUIServiceStorePageViewController;

@interface SKStorePageViewController : UIViewController

{
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)_prepareToLoadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_dismissProductPageViewController;
- (void)_didLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_showProductPageWithItemIdentifier:(id)arg1;

@end
