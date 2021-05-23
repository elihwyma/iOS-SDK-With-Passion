/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <QuartzCore/CALayer.h>

@class WebNodeHighlightView, WebView;

__attribute__((visibility("hidden")))
@interface WebHighlightLayer : CALayer

{
    WebNodeHighlightView *_view;
    WebView *_webView;
}

- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (id)initWithHighlightView:(id)arg1 webView:(id)arg2;

@end
