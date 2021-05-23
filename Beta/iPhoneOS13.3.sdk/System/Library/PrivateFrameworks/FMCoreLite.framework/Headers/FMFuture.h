/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface FMFuture : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
    NSString *_descriptor;
}

@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)futureWithResult:(id)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)futureWithNoResult;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(_Bool)arg2 scheduler:(id)arg3;
+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)futureWithCompletionHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)cancel;
- (id)addCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithError:(id)arg1;
- (void)_flushCompletionBlocks;
- (void)didCancel;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)addFailureBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (id)recover:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)_queue_isCancelled;
- (_Bool)finishWithNoResult;
- (id)reschedule:(id)arg1;
- (id)recoverIgnoringError;

@end
