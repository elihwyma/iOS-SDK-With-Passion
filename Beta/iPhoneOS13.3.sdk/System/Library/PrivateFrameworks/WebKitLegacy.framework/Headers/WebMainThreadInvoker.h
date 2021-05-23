/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy

{
    id target;
    id exception;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)handleException:(id)arg1;

@end
