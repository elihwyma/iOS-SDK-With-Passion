/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SWCrashRetryThrottler, UIActivityIndicatorView, WKWebView, WKWebsiteDataStore;

@protocol SXComponentActionHandler;

@interface SXEmbedVideoComponentView : SXMediaComponentView <Swift>

{
    _Bool _webViewIsLoaded;
    _Bool _isPresentingFullscreen;
    id <SXComponentActionHandler> _actionHandler;
    WKWebView *_webView;
    SWCrashRetryThrottler *_webCrashRetryThrottler;
    WKWebsiteDataStore *_dataStore;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic, readonly) id <SXComponentActionHandler> actionHandler;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic) _Bool webViewIsLoaded;
@property (nonatomic) _Bool isPresentingFullscreen;
@property (nonatomic, readonly) WKWebsiteDataStore *dataStore;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConfiguration;

- (void)handleError:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)visibleFrame;
- (void)discardContents;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (struct CGRect)transitionContentFrame;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7 websiteDataStore:(id)arg8;
- (unsigned long long)analyticsVideoType;
- (_Bool)shouldAllowRequestToURL:(id)arg1;
- (void)updateWebViewToWidth:(double)arg1;
- (void)initializeWebViewWithURL:(id)arg1;

@end
