//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    BOOL _suspendedPostCompletionQueue;
    BOOL _resumedPostCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(id /* CDUnknownBlockType */)arg2;
// - (void).cxx_destruct;
- (void)whenCompleteDo:(id /* CDUnknownBlockType */)arg1;
- (void)_didCompleteInvocation;
- (id)init;

@end

