/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKFrameInfo, WKWebView;

@interface WKScriptMessage : NSObject

{
    struct RetainPtr<id> _body;
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<WKFrameInfo> _frameInfo;
    struct RetainPtr<NSString> _name;
}

@property (copy, nonatomic, readonly) id body;
@property (weak, nonatomic, readonly) WKWebView *webView;
@property (copy, nonatomic, readonly) WKFrameInfo *frameInfo;
@property (copy, nonatomic, readonly) NSString *name;

- (id).cxx_construct;
- (id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4;

@end
