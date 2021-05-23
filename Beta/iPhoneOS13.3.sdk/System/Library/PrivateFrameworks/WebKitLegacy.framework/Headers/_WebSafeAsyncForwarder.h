/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class _WebSafeForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeAsyncForwarder : NSObject

{
    _WebSafeForwarder *_forwarder;
}

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithForwarder:(id)arg1;

@end
