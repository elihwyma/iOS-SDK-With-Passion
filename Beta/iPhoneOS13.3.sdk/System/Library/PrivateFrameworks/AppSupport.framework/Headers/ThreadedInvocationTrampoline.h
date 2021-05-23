/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/InvocationTrampoline.h>

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline

{
    NSThread *_thread;
    _Bool _immediateForMatchingThread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;

@end
