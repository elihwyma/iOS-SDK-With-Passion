/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class ACAccount, ISURLRequestPerformance, NSDictionary, NSLock, NSMapTable, NSMutableSet, NSSet, NSString, SSAuthenticationContext, SUClientInterface, SUScriptWindowContext, SUWebScriptReloadContext, UIWebView;

@protocol SUWebViewManagerDelegate;

@interface SUWebViewManager : NSObject <Swift>

{
    _Bool _initialLoadReported;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUWebViewManagerDelegate> _delegate;
    ISURLRequestPerformance *_initialRequestPerformance;
    NSLock *_lock;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    SUScriptWindowContext *_scriptWindowContext;
    _Bool _shouldSignRequests;
    NSSet *_suppressCookiesHosts;
    long long _usingNetworkCount;
    struct __CFSet *_webFramesPendingInitialRequest;
    UIWebView *_webView;
    ACAccount *_account;
    NSDictionary *_tidHeaders;
}

@property (retain, nonatomic) id originalFrameLoadDelegate;
@property (retain, nonatomic) id originalPolicyDelegate;
@property (retain, nonatomic) id originalResourceLoadDelegate;
@property (retain, nonatomic) id originalUIDelegate;
@property (weak, nonatomic, readonly) UIWebView *webView;
@property (nonatomic) id <SUWebViewManagerDelegate> delegate;
@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance;
@property (retain, nonatomic) SUScriptWindowContext *scriptWindowContext;
@property (nonatomic) _Bool shouldSignRequests;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultLocalStoragePath;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_delegate;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)_userIdentifier;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned long long)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (id)initWithClientInterface:(id)arg1;
- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect)arg2;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (void)disconnectFromWebView;
- (void)connectToWebView:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(_Bool)arg3;
- (void)_cancelUsingNetwork;
- (void)_enumerateScriptInterfacesWithBlock:(CDUnknownBlockType)arg1;
- (void)_endUsingNetwork;
- (void)_beginUsingNetwork;
- (id)_locateStorePageViewController;
- (_Bool)_presentModalAlertWithMessage:(id)arg1 includingCancelButton:(_Bool)arg2 configurationHandler:(CDUnknownBlockType)arg3;

@end
