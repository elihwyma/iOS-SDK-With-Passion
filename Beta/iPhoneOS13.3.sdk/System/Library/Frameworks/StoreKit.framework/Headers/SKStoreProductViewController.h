/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, SKInvocationQueueProxy, SKRemoteProductViewController, SKScrollDetector, _UIAsyncInvocation;

@protocol SKStoreProductViewControllerDelegate, SKStoreProductViewControllerDelegatePrivate, SKUIServiceProductPageViewController;

@interface SKStoreProductViewController : UIViewController

{
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    _Bool _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    id <SKStoreProductViewControllerDelegatePrivate> _delegate;
    CDUnknownBlockType _loadBlock;
    long long _originalStatusBarStyle;
    long long _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    _Bool _showsStoreButton;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    _Bool _showsRightBarButton;
    _Bool _askToBuy;
    NSString *_promptString;
    SKScrollDetector *_scrollDetector;
    _Bool _viewWasOnScreen;
    CDUnknownBlockType _dismissalCompleted;
}

@property (copy, nonatomic) NSString *additionalBuyParameters;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (nonatomic) long long productPageStyle;
@property (nonatomic) _Bool askToBuy;
@property (nonatomic) _Bool showsStoreButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *rightBarButtonTitle;
@property (nonatomic) _Bool showsRightBarButton;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) _Bool automaticallyDismisses;
@property (weak, nonatomic) id <SKStoreProductViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)loadView;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (void)setParentViewController:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didFinish;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (_Bool)dismissRemoteViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestRemoteViewController;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)sk_didBecomeOnScreen:(id)arg1;
- (void)sk_didBecomeOffScreen:(id)arg1;
- (void)finishImmediately;
- (void)_configureForFullScreenPresentationOrThrowException;
- (_Bool)_isPeeking;
- (void)setPresentationStyleIfNeeded;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_throwUnsupportedPresentationException;
- (void)_setLoadBlock:(CDUnknownBlockType)arg1;
- (void)_fireLoadBlockBeforeFinishing;
- (void)_loadDidFinishWithResult:(_Bool)arg1 error:(id)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_didFinishWithResult:(long long)arg1;
- (void)_didFinishDismissal;
- (void)_presentPageWithRequest:(id)arg1 animated:(_Bool)arg2;

@end
