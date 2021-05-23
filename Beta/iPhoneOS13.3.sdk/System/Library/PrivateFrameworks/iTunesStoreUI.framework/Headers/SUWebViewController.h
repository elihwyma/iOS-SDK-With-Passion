/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class ACAccount, ISURLRequestPerformance, NSDictionary, NSString, NSURL, SSAuthenticationContext, SSMutableAuthenticationContext, SUDelayedNavigationItem, SUMescalSession, SUObjectPool, SUStorePageProtocol, SUWebView, SUWebViewManager;

@interface SUWebViewController : SUViewController

{
    SUWebView *_webView;
    SSMutableAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    NSURL *_displayedURL;
    _Bool _hasEverAppeared;
    long long _lastKnownOrientation;
    CDUnknownBlockType _loadBlock;
    SUMescalSession *_mescalSession;
    SUObjectPool *_objectPool;
    ISURLRequestPerformance *_performanceMetrics;
    long long _scheduledOrientation;
    _Bool _shouldSignRequests;
    SUStorePageProtocol *_storePageProtocol;
    long long _style;
    NSURL *_url;
    _Bool _viewIsReady;
    SUWebViewManager *_webViewManager;
    ACAccount *_account;
    NSDictionary *_tidHeaders;
}

@property (nonatomic) _Bool viewIsReady;
@property (retain, nonatomic, getter=_mescalSession, setter=_setMescalSession:) SUMescalSession *_mescalSession;
@property (retain, nonatomic, getter=_performanceMetrics, setter=_setPerformanceMetrics:) ISURLRequestPerformance *_performanceMetrics;
@property (nonatomic) long long style;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic, readonly) SUWebView *webView;
@property (nonatomic) _Bool shouldSignRequests;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (struct CGRect)documentBounds;
- (id)_defaultBackgroundColor;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)copyScriptProperties;
- (void)setScriptProperties:(id)arg1;
- (id)displayedURL;
- (id)navigationItemForScriptInterface;
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)parentViewControllerHierarchyDidChange;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (id)newRotationController;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)_loadWithURLOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)storePageCleanupBeforeTearDown;
- (void)setStorePageProtocol:(id)arg1;
- (id)newScriptInterface;
- (void)_applyScriptProperties:(id)arg1;
- (struct CGSize)minimumViewSize;
- (id)_placeholderBackgroundView;
- (void)_reloadPlaceholderBackgroundView;
- (void)_prepareToLoadURL:(id)arg1;
- (void)_reloadUI;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(long long)arg1;
- (void)_removePlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_loadURLRequest:(id)arg1;
- (void)_getURLRequestForOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1;
- (void)_addPlaceholderBackgroundView;
- (void)_reloadObjectPool;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (id)viewControllerForWebViewManager:(id)arg1;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManagerDidStartLoad:(id)arg1;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect)arg2;
- (void)_setLastKnownOrientation:(long long)arg1;

@end
