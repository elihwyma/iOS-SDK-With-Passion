/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline

{
    NSOperationQueue *_queue;
    long long _priority;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;

@end
