/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject

{
    AMSPromiseCompletionBlocks *_completionBlocks;
    AMSPromiseResult *_promiseResult;
    NSConditionLock *_stateLock;
}

@property (retain, nonatomic) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) AMSPromiseResult *promiseResult;
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
+ (void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3 previousError:(id)arg4;
+ (void)_configureFlattenedPromise:(id)arg1 withPromises:(id)arg2 results:(id)arg3 previousError:(id)arg4 currentPromiseIndex:(unsigned long long)arg5;
+ (_Bool)_errorIsCanceledError:(id)arg1;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (id)promiseWithFlattenedPromises:(id)arg1;

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
- (id)binaryPromiseAdapter;
- (void)_addBlock:(CDUnknownBlockType)arg1 orCallWithResult:(CDUnknownBlockType)arg2;
- (id)continueWithBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)boolCompletionHandlerAdapter;
- (CDUnknownBlockType)nilValueCompletionHandlerAdapter;

@end
