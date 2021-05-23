/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class ACAccount, NSString, NSURL, SKInvocationQueueProxy, SKRemoteAccountPageViewController, SURedeemCameraViewController, _UIAsyncInvocation;

@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;

@interface SKAccountPageViewController : UIViewController

{
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _loadBlock;
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
    _Bool _isRemoteViewControllerReady;
    _Bool _financeInterruptionCalled;
    _Bool _cameraDidShow;
    _Bool _viewHasAppeared;
    _Bool _isRemoteViewControllerSetup;
    CDUnknownBlockType redeemCompletionHandler;
    id <SKAccountPageViewControllerDelegate> _delegate;
    ACAccount *_account;
    NSString *_referrer;
    long long _type;
    SKAccountPageViewController *_preWarmedViewController;
    SKAccountPageViewController *_presentingAccountPageViewController;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) SKAccountPageViewController *preWarmedViewController;
@property (weak, nonatomic) SKAccountPageViewController *presentingAccountPageViewController;
@property (weak, nonatomic) id <SKAccountPageViewControllerDelegate> delegate;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *referrer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)isCommerceUIURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)_addRemoteView;
- (void)_dismissViewControllerWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didFinishLoading;
- (void)_financeInterruptionResolved:(_Bool)arg1;
- (void)_overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)_overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setBridgedNavigationItemWithOptions:(id)arg1;
- (void)_pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)_presentBridgedViewController;
- (void)_dismissBridgedViewController;
- (void)_requestRemoteViewController;
- (id)_overrideScheme:(id)arg1;
- (void)_setupNotificationCenter;
- (void)_setupNavigationItem;
- (void)_setupRemoteViewController:(_Bool)arg1;
- (void)_setupPreWarmedViewController;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_keyboardDidChangeNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_popAllBridgedNavigationViewControllers;
- (void)_bridgedRightButtonPressed:(id)arg1;
- (id)initWithAccountURL:(id)arg1;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
