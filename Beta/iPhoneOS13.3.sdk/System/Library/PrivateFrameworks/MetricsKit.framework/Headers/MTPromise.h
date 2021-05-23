/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTPromiseCompletionBlocks, MTPromiseResult, NSConditionLock;

@interface MTPromise : NSObject

{
    MTPromiseCompletionBlocks *_completionBlocks;
    MTPromiseResult *_promiseResult;
    NSConditionLock *_stateLock;
}

@property (retain, nonatomic) MTPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) MTPromiseResult *promiseResult;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithResult:(id)arg1;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4;
+ (_Bool)_errorIsCanceledError:(id)arg1;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (id)promiseWithComposition:(id)arg1;
+ (id)_resultOfComposition:(id)arg1 errors:(id)arg2;
+ (id)_findUnfinishedPromise:(id)arg1;
+ (void)_setupCompositePromise:(id)arg1 composition:(id)arg2;
+ (void)cancelPromisesInComposition:(id)arg1;
+ (void)_configureAnyPromise:(id)arg1 withPromises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3;

- (id)init;
- (void)waitUntilFinished;
- (_Bool)cancel;
- (_Bool)_isFinished;
- (id)resultWithError:(id *)arg1;
- (_Bool)finishWithError:(id)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (id)thenWithBlock:(CDUnknownBlockType)arg1;
- (void)_addBlock:(CDUnknownBlockType)arg1 orCallWithResult:(CDUnknownBlockType)arg2;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)boolCompletionHandlerAdapter;
- (CDUnknownBlockType)nilValueCompletionHandlerAdapter;

@end
