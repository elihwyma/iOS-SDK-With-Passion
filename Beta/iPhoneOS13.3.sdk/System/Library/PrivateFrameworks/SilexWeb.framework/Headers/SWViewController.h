/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <UIKit/UIViewController.h>

@class NSString, SWLoader, WKWebView;

@protocol SWContentRuleManager, SWDatastoreSynchronizationManager, SWDocumentStateReporting, SWErrorReporting, SWLogger, SWMessageHandlerManager, SWNavigationManager, SWProcessTerminationManager, SWReachabilityProvider, SWScriptsManager, SWSessionManager, SWSetupManager, SWTimeoutManager;

@interface SWViewController : UIViewController

{
    id <SWScriptsManager> _scriptsManager;
    id <SWMessageHandlerManager> _messageHandlerManager;
    id <SWNavigationManager> _navigationManager;
    WKWebView *_webView;
    id <SWSetupManager> _setupManager;
    id <SWErrorReporting> _errorReporter;
    id <SWDocumentStateReporting> _documentStateReporter;
    id <SWTimeoutManager> _timeoutManager;
    id <SWProcessTerminationManager> _terminationManager;
    id <SWContentRuleManager> _contentRuleManager;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SWLogger> _logger;
    SWLoader *_loader;
    id <SWSessionManager> _sessionManager;
    id <SWDatastoreSynchronizationManager> _datastoreSynchronizationManager;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) id <SWSetupManager> setupManager;
@property (nonatomic, readonly) id <SWErrorReporting> errorReporter;
@property (nonatomic, readonly) id <SWDocumentStateReporting> documentStateReporter;
@property (nonatomic, readonly) id <SWTimeoutManager> timeoutManager;
@property (nonatomic, readonly) id <SWProcessTerminationManager> terminationManager;
@property (nonatomic, readonly) id <SWContentRuleManager> contentRuleManager;
@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (retain, nonatomic) SWLoader *loader;
@property (nonatomic, readonly) id <SWSessionManager> sessionManager;
@property (nonatomic, readonly) id <SWDatastoreSynchronizationManager> datastoreSynchronizationManager;
@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (nonatomic, readonly) id <SWMessageHandlerManager> messageHandlerManager;
@property (nonatomic, readonly) id <SWNavigationManager> navigationManager;
@property (nonatomic) _Bool allowsRemoteInspection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (void)loadURL:(id)arg1;
- (id)initWithWebView:(id)arg1 setupManager:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 navigationManager:(id)arg5 errorReporter:(id)arg6 documentStateReporter:(id)arg7 timeoutManager:(id)arg8 terminationManager:(id)arg9 contentRuleManager:(id)arg10 reachabilityProvider:(id)arg11 logger:(id)arg12 sessionManager:(id)arg13 datastoreSynchronizationManager:(id)arg14;
- (void)initiateLoadingWithLoader:(id)arg1;

@end
