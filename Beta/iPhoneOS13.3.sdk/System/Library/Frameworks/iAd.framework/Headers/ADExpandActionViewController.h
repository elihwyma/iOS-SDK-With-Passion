/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/ADActionViewController.h>

@class ADCountdownButton, ADHomeButtonHandler, ADWebView, ADWebViewGestureRecognizer, NSString, NSURL, _WKRemoteObjectInterface;

@protocol ADWebProcessProxy;

@interface ADExpandActionViewController : ADActionViewController

{
    id <ADWebProcessProxy> _webProcessProxy;
    _Bool _adIsDismissing;
    _Bool _visible;
    _Bool _browserContextControllerDidLoad;
    _Bool _shouldBlockNavigation;
    _Bool _tapWasRecognized;
    ADWebView *_webView;
    ADCountdownButton *_dismissButton;
    NSURL *_URL;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ADWebViewGestureRecognizer *_gestureRecognizer;
    NSString *_creativeIdentifier;
    ADHomeButtonHandler *_homeButtonHandler;
    id _notificationObserver;
    struct CGSize _maximumExpandedSize;
}

@property (retain, nonatomic) ADWebView *webView;
@property (retain, nonatomic) ADCountdownButton *dismissButton;
@property (nonatomic) _Bool adIsDismissing;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) struct CGSize maximumExpandedSize;
@property (nonatomic, readonly) struct CGRect webViewFrame;
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface;
@property (retain, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer;
@property (copy, nonatomic) NSString *creativeIdentifier;
@property (nonatomic) _Bool browserContextControllerDidLoad;
@property (nonatomic) _Bool shouldBlockNavigation;
@property (nonatomic) _Bool tapWasRecognized;
@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_dismissKeyboard;
- (void)_registerExportedObjectInterface;
- (void)_dismissWithSystemEvent:(int)arg1;
- (void)_unregisterExportedObjectInterface;
- (void)_updateWebViewFrame;
- (id)_incrementCreativeIdentifier;
- (void)_dismissButtonTapped;
- (void)_updateJSOExpandedSize;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (_Bool)_navigationIsBlocked;
- (void)_resetGestureFlags;
- (void)_requestOpenURL:(id)arg1;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

@end
