/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKNavigationAction, WKWebView;

@interface _SFSyntheticClickContext : NSObject

{
    WKWebView *_webView;
    WKNavigationAction *_navigationAction;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) WKNavigationAction *navigationAction;

- (id)initWithWebView:(id)arg1 navigationAction:(id)arg2;

@end
