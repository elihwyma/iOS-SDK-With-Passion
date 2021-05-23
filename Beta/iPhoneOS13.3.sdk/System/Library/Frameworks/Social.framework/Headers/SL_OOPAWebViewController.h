/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class NSObject, NSString, NSURL, SL_OOPASpinnerTitle, UIWebView, WKWebView;

@protocol SL_OOPAWebViewControllerDelegate, SL_OOPAuthFlowDelegate;

@interface SL_OOPAWebViewController : UIViewController

{
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    SL_OOPASpinnerTitle *_spinnerTitleView;
    struct __CFURLStorageSession *_storageSession;
    _Bool _hidingWebView;
    _Bool _didLoadWebView;
    _Bool _didFinish;
    id <SL_OOPAWebViewControllerDelegate> _delegate;
    NSObject<SL_OOPAuthFlowDelegate> *_authFlowDelegate;
    NSURL *_authURL;
    NSString *_username;
}

@property (weak, nonatomic) id <SL_OOPAWebViewControllerDelegate> delegate;
@property (retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate;
@property (copy, nonatomic) NSURL *authURL;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_loadWebViewIfReady;
- (void)_didFinishWithSuccess:(_Bool)arg1 response:(id)arg2 error:(id)arg3;
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;
- (void)_loadWebView;
- (void)_evaluateDocumentTitleForUIWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_evaluateDocumentTitleForWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
