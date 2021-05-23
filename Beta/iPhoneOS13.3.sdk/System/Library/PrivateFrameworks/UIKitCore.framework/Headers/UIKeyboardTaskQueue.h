/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskEntry, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject

{
    _Bool _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    UIKeyboardTaskEntry *_mainThreadContinuation;
    NSArray *_activeOriginator;
}

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;
@property (retain, nonatomic) NSArray *activeOriginator;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)addTask:(CDUnknownBlockType)arg1;
- (void)performSingleTask:(CDUnknownBlockType)arg1;
- (void)waitUntilAllTasksAreFinished;
- (void)performTask:(CDUnknownBlockType)arg1;
- (void)addDeferredTask:(CDUnknownBlockType)arg1;
- (_Bool)isMainThreadExecutingTask;
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3;
- (void)finishExecution;
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)continueExecutionOnMainThread;
- (_Bool)tryLockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)lockWhenReadyForMainThread;
- (void)promoteDeferredTaskIfIdle;
- (id)addAndReturnTask:(CDUnknownBlockType)arg1;
- (void)waitUntilTaskIsFinished:(id)arg1;

@end
