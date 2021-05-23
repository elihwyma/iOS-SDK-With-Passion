/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIToolbar, UIWebView, _UIBackdropView;

@protocol RemoteUIWebViewControllerDelegate;

@interface RemoteUIWebViewController : UIViewController

{
    UIWebView *_webView;
    UIToolbar *_toolbar;
    CDUnknownBlockType _loadCompletion;
    _UIBackdropView *_statusBarBackdrop;
    _Bool _scalesPageToFit;
    id <RemoteUIWebViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <RemoteUIWebViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) UIWebView *webView;
@property (nonatomic) _Bool scalesPageToFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1;

@end
