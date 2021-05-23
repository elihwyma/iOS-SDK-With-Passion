/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <QuartzCore/CALayer.h>

@class WebView;

__attribute__((visibility("hidden")))
@interface WebIndicateLayer : CALayer

{
    WebView *_webView;
}

- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (id)initWithWebView:(id)arg1;

@end
