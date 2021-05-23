/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

#import <Silex/Swift-Protocol.h>

@class NFMultiDelegate, NSMutableSet, NSString, SWCrashRetryThrottler, SXEmbedResource, SXRelatedWebViewCache, UIActivityIndicatorView, UILabel, WKNavigation, WKWebView, WKWebsiteDataStore;

@protocol SWReachabilityProvider, SXComponentActionHandler, SXEmbedService, SXEmbedType, SXLayoutInvalidator;

@interface SXEmbedComponentView : SXComponentView <Swift>

{
    _Bool _failedLoading;
    _Bool _isCurrentlyLoadingEmbedData;
    _Bool _hasRegisteredScriptMessageHandlers;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SXEmbedService> _embedService;
    id <SXComponentActionHandler> _actionHandler;
    id <SXLayoutInvalidator> _layoutInvalidator;
    id <SXEmbedType> _embedConfiguration;
    SXEmbedResource *_embedResource;
    WKWebView *_webView;
    SWCrashRetryThrottler *_webCrashRetryThrottler;
    WKWebView *_webViewPresentingInFullscreen;
    UILabel *_errorLabel;
    NSString *_HTML;
    NSString *_userScript;
    NSMutableSet *_expectedMessages;
    UIActivityIndicatorView *_activityIndicator;
    WKNavigation *_initialNavigation;
    NFMultiDelegate *_scriptMessageHandler;
    WKWebsiteDataStore *_dataStore;
    SXRelatedWebViewCache *_relatedWebViewCache;
    struct CGSize _currentlyLayoutingForSize;
    struct CGSize _currentLayoutSize;
    struct CGSize _currentViewportSize;
}

@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (nonatomic, readonly) id <SXEmbedService> embedService;
@property (nonatomic, readonly) id <SXComponentActionHandler> actionHandler;
@property (nonatomic, readonly) id <SXLayoutInvalidator> layoutInvalidator;
@property (retain, nonatomic) id <SXEmbedType> embedConfiguration;
@property (retain, nonatomic) SXEmbedResource *embedResource;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (retain, nonatomic) WKWebView *webViewPresentingInFullscreen;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) NSString *HTML;
@property (retain, nonatomic) NSString *userScript;
@property (retain, nonatomic) NSMutableSet *expectedMessages;
@property (nonatomic) _Bool failedLoading;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) struct CGSize currentlyLayoutingForSize;
@property (nonatomic) struct CGSize currentLayoutSize;
@property (nonatomic) struct CGSize currentViewportSize;
@property (nonatomic) _Bool isCurrentlyLoadingEmbedData;
@property (retain, nonatomic) WKNavigation *initialNavigation;
@property (nonatomic) _Bool hasRegisteredScriptMessageHandlers;
@property (nonatomic, readonly) NFMultiDelegate *scriptMessageHandler;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (nonatomic, readonly) SXRelatedWebViewCache *relatedWebViewCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)handleError:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (double)initialScale;
- (void)discardContents;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (id)enclosingHTML;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (_Bool)allowHierarchyRemoval;
- (void)loadComponent:(id)arg1;
- (void)willPresentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 reachabilityProvider:(id)arg5 embedService:(id)arg6 actionHandler:(id)arg7 layoutInvalidator:(id)arg8 websiteDataStore:(id)arg9 relatedWebViewCache:(id)arg10;
- (void)removeScriptMessageHandlers;
- (void)prewarmWebView;
- (void)loadEmbedIfNeeded;
- (_Bool)shouldLayoutWebView;
- (_Bool)hasLoadedEmbedData;
- (void)loadEmbedData;
- (void)displayEmbedIfNeeded;
- (void)loadWebViewIfNeeded;
- (void)layoutWebViewForSize:(struct CGSize)arg1;
- (void)showActivityIndicator:(_Bool)arg1;
- (void)reloadEmbed;
- (_Bool)shouldShowWebView;
- (void)loadWebView;
- (unsigned long long)userActionMediaTypes;
- (void)addScriptMessageHandlers;
- (id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2;
- (void)finalizeLayoutForSize:(struct CGSize)arg1;
- (id)unableToLoadMessage;
- (_Bool)shouldAllowRequestToURL:(id)arg1;

@end
