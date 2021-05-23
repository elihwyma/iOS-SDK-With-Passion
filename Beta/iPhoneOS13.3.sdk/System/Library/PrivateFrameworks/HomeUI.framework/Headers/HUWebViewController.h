/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHTMLDocument, NAFuture, NSString, NSURL, WKWebView;

@interface HUWebViewController : UIViewController <Swift>

{
    _Bool _showsShareButton;
    _Bool _zoomEnabled;
    _Bool _scrollEnabled;
    NSURL *_URL;
    HMHTMLDocument *_document;
    WKWebView *_webView;
    NAFuture *_loadingFuture;
}

@property (nonatomic, readonly) NAFuture *loadingFuture;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) HMHTMLDocument *document;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic) _Bool showsShareButton;
@property (nonatomic) _Bool zoomEnabled;
@property (nonatomic) _Bool scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_share:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (id)hu_preloadContent;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (_Bool)_shouldShare;

@end
