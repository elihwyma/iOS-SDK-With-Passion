/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSString, WKUserContentController, WKWebView;

@protocol HUInlineWebContainerViewDelegate;

@interface HUInlineWebContainerView : UIView

{
    WKWebView *_webView;
    NSString *_HTMLContent;
    id <HUInlineWebContainerViewDelegate> _delegate;
    double _estimatedHeight;
    WKUserContentController *_contentController;
}

@property (nonatomic) double estimatedHeight;
@property (nonatomic, readonly) WKUserContentController *contentController;
@property (nonatomic, readonly) WKWebView *webView;
@property (copy, nonatomic) NSString *HTMLContent;
@property (weak, nonatomic) id <HUInlineWebContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_defaultFont;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (double)heightForWidth:(double)arg1;
- (void)setUserStyleSheet;

@end
