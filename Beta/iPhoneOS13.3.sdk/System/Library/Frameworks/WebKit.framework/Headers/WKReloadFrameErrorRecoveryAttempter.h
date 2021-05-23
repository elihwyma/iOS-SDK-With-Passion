/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKReloadFrameErrorRecoveryAttempter : NSObject

{
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<_WKFrameHandle> _frameHandle;
    struct String _urlString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const struct String *)arg3;
- (_Bool)attemptRecovery;

@end
