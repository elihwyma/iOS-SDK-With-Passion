/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFWebResource, WKNavigation, WKWebView;

@interface WFWKWebViewCapturer : NSObject

{
    WKWebView *_webView;
    WKNavigation *_pageNavigation;
    WFWebResource *_webResource;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKNavigation *pageNavigation;
@property (retain, nonatomic) WFWebResource *webResource;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)loadWebResource:(id)arg1 withSize:(struct CGSize)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 configuration:(id)arg2;
- (void)loadWebResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
