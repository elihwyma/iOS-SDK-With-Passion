/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

#import <UIKitCore/UIViewController.h>

@class NDOWarranty, NSString, UIActivityIndicatorView, UINavigationBar, UINavigationItem, WKWebView;

@protocol NDOAppleCareWebViewPresenterProtocol;

@interface NDOAppleCareWebViewController : UIViewController

{
    _Bool _initialLoadCompleted;
    int _retriesRemaining;
    id <NDOAppleCareWebViewPresenterProtocol> _presenter;
    NDOWarranty *_warranty;
    NSString *_serialNumber;
    WKWebView *_webview;
    UINavigationBar *_headerView;
    UINavigationItem *_navigationItem;
    UIActivityIndicatorView *_spinner;
}

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property (weak) WKWebView *webview;
@property (weak) UINavigationBar *headerView;
@property (retain) UINavigationItem *navigationItem;
@property (weak, nonatomic) UIActivityIndicatorView *spinner;
@property _Bool initialLoadCompleted;
@property int retriesRemaining;
@property (weak) id <NDOAppleCareWebViewPresenterProtocol> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)setIsLoading:(_Bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)cancelTapped:(id)arg1;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2;
- (void)loadWebview:(_Bool)arg1;

@end
