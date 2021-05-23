/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    _Bool _suspendedPostCompletionQueue;
    _Bool _resumedPostCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(CDUnknownBlockType)arg2;

- (id)init;
- (void)whenCompleteDo:(CDUnknownBlockType)arg1;
- (void)_didCompleteInvocation;

@end
