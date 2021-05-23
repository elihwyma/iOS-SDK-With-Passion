/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject

{
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long long asyncForwarderPred;
}

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)asyncForwarder;
- (void)clearTarget;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;

@end
