/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <UIKit/UIViewController.h>

@class NSData, NSString, NSURL, UIActivityIndicatorView, UIWebView;

@interface TPSCloudCallingWebViewController : UIViewController

{
    long long _type;
    UIWebView *_webView;
    CDUnknownBlockType _completionBlock;
    UIActivityIndicatorView *_activityIndicator;
    NSURL *_url;
    NSData *_body;
}

@property (nonatomic) long long type;
@property (retain, nonatomic, readonly) UIWebView *webView;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *body;
@property (nonatomic, readonly, getter=isPresentingURL) _Bool presentingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)_cancelButtonClicked:(id)arg1;
- (void)cancelWebView;
- (void)loadWebViewWithSpinner:(CDUnknownBlockType)arg1;
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doWebViewTimedOut;
- (void)doProvisioningCanceled;
- (void)doProvisioningFailed;
- (void)setupControllerInWebFrame:(id)arg1;
- (void)doProvisioningDone;

@end
