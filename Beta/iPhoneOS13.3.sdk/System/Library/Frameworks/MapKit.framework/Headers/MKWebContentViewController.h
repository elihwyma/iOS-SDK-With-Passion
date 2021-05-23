/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKWebBridge, MKWebViewFactoryItem, NSLayoutConstraint, NSString, NSURL, UIActivityIndicatorView, WKNavigation, WKWebView;

@protocol MKWebContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKWebContentViewController : MKPlaceSectionViewController

{
    NSLayoutConstraint *_heightConstraint;
    MKWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MKWebBridge *_bridge;
    UIActivityIndicatorView *_activityIndicatorView;
    NSURL *_resolvedURL;
    WKNavigation *_currentWebNavigation;
    _Bool _loading;
    id <MKWebContentViewControllerDelegate> _delegate;
    NSURL *_url;
}

@property (weak, nonatomic) id <MKWebContentViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)resolvedURLForRelativeURL:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_cancel;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)infoCardThemeChanged;
- (void)_startLoading;
- (void)_addLoadingSpinner;
- (void)_removeLoadingSpinner;
- (void)_setHeight:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(CDUnknownBlockType)arg1;
- (void)_removeModuleWithCallbackHandler:(CDUnknownBlockType)arg1;
- (void)_resetBridge;
- (void)_finishLoading;
- (void)_setHeight:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webBridgeDidConnect:(id)arg1;

@end
