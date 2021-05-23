/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class WKWebView;

@protocol WFWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFWebViewController : UIViewController

{
    id <WFWebViewControllerDelegate> _delegate;
    WKWebView *_webView;
}

@property (retain, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id <WFWebViewControllerDelegate> delegate;

- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)done;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)updateNavigationItems;

@end
