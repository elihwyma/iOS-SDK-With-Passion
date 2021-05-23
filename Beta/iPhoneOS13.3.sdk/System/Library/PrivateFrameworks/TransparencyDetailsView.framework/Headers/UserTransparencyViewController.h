/*
 Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

#import <UIKit/UIViewController.h>

@class ADUserTransparencyResponse, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, WKWebView;

@protocol UserTransparencyViewControllerDelegate;

@interface UserTransparencyViewController : UIViewController

{
    UIActivityIndicatorView *activityIndicator;
    id <UserTransparencyViewControllerDelegate> _delegate;
    _Bool _isiPad;
    NSString *_userTransparencyDetails;
    ADUserTransparencyResponse *_userTransparencyResponseData;
    NSString *_userTransparencyDetailsUnavailableMessage;
    NSString *_userTransparencyRendererPayload;
    NSString *_userTransparencyRendererURL;
    UILabel *_errorLabel;
    UINavigationBar *_transparencyNavBar;
    WKWebView *_myUserPrivacyWebView;
}

@property (copy, nonatomic) NSString *userTransparencyDetails;
@property (retain, nonatomic) ADUserTransparencyResponse *userTransparencyResponseData;
@property (retain, nonatomic) NSString *userTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *userTransparencyRendererPayload;
@property (retain, nonatomic) NSString *userTransparencyRendererURL;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (retain, nonatomic) WKWebView *myUserPrivacyWebView;
@property (nonatomic) _Bool isiPad;
@property (retain, nonatomic) id <UserTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_commonInit;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_showErrorMessage:(id)arg1;
- (id)initWithUserTransparencyDetails:(id)arg1;
- (void)loadWebView;
- (void)errorDelegate;
- (void)immediatelyLoadViewControllerBeforeNetworkRequest;
- (void)presentViewDelegate;
- (void)requestUserTransparencyDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)normalizeChineseLanguage:(id)arg1;
- (void)_reportUserTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)bundleForTransparencyDetailsViewFramework;
- (void)_hideErrorMessage;
- (void)_closeViewController:(id)arg1;

@end
