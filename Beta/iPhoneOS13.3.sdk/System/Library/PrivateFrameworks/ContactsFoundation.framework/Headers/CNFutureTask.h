/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNFutureCompletionBlocks, CNFutureResult, CNTask, NSConditionLock, NSString;

@interface CNFutureTask : NSObject

{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (id)init;
- (_Bool)run;
- (_Bool)cancel;
- (_Bool)finishWithError:(id)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)_flushCompletionBlocks;
- (void)didCancel;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)result:(id *)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (id)initWithTask:(id)arg1;
- (id)recover:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (_Bool)nts_isFinished;
- (id)futureResult;

@end
