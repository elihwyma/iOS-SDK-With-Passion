/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <UIKitCore/UIViewController.h>

@class BCInvalidCertificatView, BCProgressIndicatorView, BCServerErrorView, NSString, NSURL, WKWebView;

@protocol BCWebViewControllerDelegate;

@interface BCWebViewController : UIViewController

{
    _Bool _wasCallbackCaptured;
    id <BCWebViewControllerDelegate> _delegate;
    WKWebView *_webkitView;
    NSString *_callbackURI;
    BCInvalidCertificatView *_invalidCertificatView;
    BCProgressIndicatorView *_progressIndicatorView;
    BCServerErrorView *_serverErrorView;
    NSURL *_originURL;
}

@property (retain, nonatomic) BCInvalidCertificatView *invalidCertificatView;
@property (retain, nonatomic) BCProgressIndicatorView *progressIndicatorView;
@property (retain, nonatomic) BCServerErrorView *serverErrorView;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) _Bool wasCallbackCaptured;
@property (weak, nonatomic) id <BCWebViewControllerDelegate> delegate;
@property (retain, nonatomic) WKWebView *webkitView;
@property (retain, nonatomic) NSString *callbackURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reload;
- (void)loadView;
- (void)viewDidLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)setupObservers;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)loadURL:(id)arg1;
- (void)removeObservers;
- (void)dismissErrorViews;
- (void)setupProgressIndicator;
- (_Bool)isCertificatRelatedError:(id)arg1;
- (void)presentCertificatErrorForHost:(id)arg1;
- (void)presentServerError;
- (id)initWithCallbackURI:(id)arg1;
- (void)viewWillDisappear;

@end
