/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, TMTumblrAuthenticator, WKWebView;

@protocol WFTumblrViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFTumblrViewController : UIViewController

{
    WKWebView *_webView;
    id <WFTumblrViewControllerDelegate> _delegate;
    TMTumblrAuthenticator *_authenticator;
}

@property (retain, nonatomic) TMTumblrAuthenticator *authenticator;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id <WFTumblrViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2;

@end
