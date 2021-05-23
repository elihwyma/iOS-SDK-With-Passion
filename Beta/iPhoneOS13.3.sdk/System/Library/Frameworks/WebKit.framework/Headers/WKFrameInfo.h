/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest, WKSecurityOrigin, WKWebView, _WKFrameHandle;

@interface WKFrameInfo : NSObject

{
    struct ObjectStorage<API::FrameInfo> _frameInfo;
}

@property (nonatomic, readonly) _WKFrameHandle *_handle;
@property (nonatomic, readonly, getter=isMainFrame) _Bool mainFrame;
@property (copy, nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) WKSecurityOrigin *securityOrigin;
@property (weak, nonatomic, readonly) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
