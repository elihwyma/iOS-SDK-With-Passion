/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITargetedProxy.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy

{
    struct os_unfair_lock_s _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    CDUnknownBlockType _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(CDUnknownBlockType)arg2;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)_dispatchSuspendedMessages;
- (void)removeAllEnqueuedInvocations;

@end
