/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIWebView, VSViewModel, VSWebAuthenticationViewModel;

@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationViewController : UIViewController

{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSWebAuthenticationViewModel *_viewModel;
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UIWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, readonly) struct CGSize preferredLogoSize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_sendMessage:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)_cancelButtonPressed:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_sendMessages:(id)arg1;
- (void)_didBeginActivity;
- (void)_didEndActivity;
- (void)_retrieveMessages;
- (id)_canonicalRequestForRequest:(id)arg1;

@end
