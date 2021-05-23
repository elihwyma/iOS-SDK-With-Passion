/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

#import <WebKit/Swift-Protocol.h>

@class NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface WKScrollViewDelegateForwarder : NSObject <Swift>

{
    WKWebView *_internalDelegate;
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id).cxx_construct;
- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;

@end
