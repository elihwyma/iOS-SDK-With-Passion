/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKWebBridgeConfiguration, MKWebViewMessageHandlerProxy, WKWebView;

__attribute__((visibility("hidden")))
@interface MKWebViewFactoryItem : NSObject

{
    MKWebBridgeConfiguration *_bridgeConfiguration;
    WKWebView *_webView;
    MKWebViewMessageHandlerProxy *_messageHandlerProxy;
}

@property (copy, nonatomic, readonly) MKWebBridgeConfiguration *bridgeConfiguration;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) MKWebViewMessageHandlerProxy *messageHandlerProxy;

- (id)initWithBridgeConfiguration:(id)arg1 webView:(id)arg2 messageHandlerProxy:(id)arg3;

@end
