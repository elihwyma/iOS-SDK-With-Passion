/*
 Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, WKWebView;

@protocol NewsTransparencyViewControllerDelegate;

@interface NewsTransparencyViewController : UIViewController

{
    UIActivityIndicatorView *activityIndicator;
    id <NewsTransparencyViewControllerDelegate> _delegate;
    _Bool _isiPad;
    _Bool _isClientTodayWidget;
    NSString *_transparencyDetailsUnavailableMessage;
    NSString *_transparencyRendererPayload;
    NSString *_transparencyRendererURL;
    NSDictionary *_transparencyDetailsDictionary;
    UILabel *_errorLabel;
    WKWebView *_myNewsPrivacyWebView;
    UINavigationBar *_transparencyNavBar;
}

@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;
@property (retain, nonatomic) NSDictionary *transparencyDetailsDictionary;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myNewsPrivacyWebView;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (nonatomic) _Bool isiPad;
@property (nonatomic) _Bool isClientTodayWidget;
@property (retain, nonatomic) id <NewsTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isDeviceLocked;
- (void)_commonInit;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_showErrorMessage:(id)arg1;
- (id)initWithNewsTransparencyDetailsDictionary:(id)arg1;
- (void)loadWebView;
- (void)errorDelegate;
- (void)presentViewDelegate;
- (id)normalizeChineseLanguage:(id)arg1;
- (id)bundleForTransparencyDetailsViewFramework;
- (void)_hideErrorMessage;
- (void)_closeViewController:(id)arg1;
- (void)requestUserPassCodeUnlockUIWithBlock:(CDUnknownBlockType)arg1;

@end
