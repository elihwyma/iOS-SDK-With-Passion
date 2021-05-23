/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

#import <NewsUI/Swift-Protocol.h>

@class FCArticle, NSString, SWCrashRetryThrottler, WKWebView;

@protocol NULoadingDelegate;

@interface NUArticleWebViewController : UIViewController <Swift>

{
    id <NULoadingDelegate> _loadingDelegate;
    FCArticle *_article;
    WKWebView *_webView;
    SWCrashRetryThrottler *_webCrashRetryThrottler;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;

+ (id)webViewConfiguration;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)initWithArticle:(id)arg1;

@end
