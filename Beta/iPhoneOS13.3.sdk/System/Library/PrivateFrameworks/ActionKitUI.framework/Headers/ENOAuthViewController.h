/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, NSURL, UIActivityIndicatorView, UIWebView;

@protocol ENOAuthViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ENOAuthViewController : UIViewController

{
    _Bool _isSwitchingAllowed;
    id <ENOAuthViewControllerDelegate> _delegate;
    NSURL *_authorizationURL;
    NSString *_oauthCallbackPrefix;
    UIWebView *_webView;
    NSString *_currentProfileName;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSString *oauthCallbackPrefix;
@property (retain, nonatomic) UIWebView *webView;
@property (copy, nonatomic) NSString *currentProfileName;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) _Bool isSwitchingAllowed;
@property (weak, nonatomic) id <ENOAuthViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)cancel:(id)arg1;
- (void)loadWebView;
- (id)initWithAuthorizationURL:(id)arg1 oauthCallbackPrefix:(id)arg2 profileName:(id)arg3 allowSwitching:(_Bool)arg4 delegate:(id)arg5;
- (void)switchProfile:(id)arg1;
- (void)updateUIForNewProfile:(id)arg1 withAuthorizationURL:(id)arg2;

@end
