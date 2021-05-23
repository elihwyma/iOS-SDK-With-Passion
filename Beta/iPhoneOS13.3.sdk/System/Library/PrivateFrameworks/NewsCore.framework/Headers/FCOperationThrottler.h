/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FCOperationThrottler : NSObject

{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
    _Bool _suspended;
}

@property _Bool suspended;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)tickle;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCompletionForCurrentOperation:(CDUnknownBlockType)arg1;

@end
