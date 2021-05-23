/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface BSFuture : NSObject

{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (id)init;
- (_Bool)cancel;
- (_Bool)finishWithError:(id)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (_Bool)_nts_isFinished;
- (void)_flushCompletionBlocks;
- (void)didCancel;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)result:(id *)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithResult:(id)arg1;

@end
