/*
 Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, WKWebView;

@protocol ADTransparencyViewControllerDelegate;

@interface ADTransparencyViewController : UIViewController

{
    UIActivityIndicatorView *activityIndicator;
    id <ADTransparencyViewControllerDelegate> _delegate;
    _Bool _isiPad;
    NSString *_transparencyDetailsUnavailableMessage;
    NSString *_transparencyRendererPayload;
    NSString *_transparencyRendererURL;
    NSString *_transparencyDetails;
    NSDictionary *_transparencyDetailsData;
    UILabel *_errorLabel;
    WKWebView *_myWebView;
    UINavigationBar *_transparencyNavBar;
}

@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;
@property (copy, nonatomic) NSString *transparencyDetails;
@property (retain, nonatomic) NSDictionary *transparencyDetailsData;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myWebView;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (nonatomic) _Bool isiPad;
@property (retain, nonatomic) id <ADTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_commonInit;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_showErrorMessage:(id)arg1;
- (void)loadWebView;
- (void)errorDelegate;
- (void)presentViewDelegate;
- (void)_hideErrorMessage;
- (void)_closeViewController:(id)arg1;
- (void)requestViewWithTransparencyDetailsDictionary:(id)arg1;
- (void)requestViewWithTransparencyDetails:(id)arg1;
- (id)bundleForTransparencyDetailsView;
- (void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTransparencyDetails:(id)arg1;

@end
