/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLock, _UIViewServiceReplyAwaitingTrampoline, _UIViewServiceReplyControlTrampoline;

__attribute__((visibility("hidden")))
@interface _UIViewServiceReplyControlProxy : NSObject

{
    id _target;
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_awaitingReply;
- (id)_deliveringRepliesAsynchronously;

@end
