/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@protocol EFFutureDelegate, EFObserver;

@interface EFFuture : NSObject

{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
    id <EFFutureDelegate> _delegate;
}

@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) id resultIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) CDUnknownBlockType completionHandlerAdapter;
@property (readonly) CDUnknownBlockType boolErrorCompletionHandlerAdapter;
@property (readonly) CDUnknownBlockType errorOnlyCompletionHandlerAdapter;
@property (readonly) id <EFObserver> firstResultObserverAdapter;
@property (readonly) id <EFObserver> resultsObserverAdapter;
@property (weak) id <EFFutureDelegate> delegate;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

+ (id)join:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)chain:(id)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)sequence:(id)arg1;
+ (id)combine:(id)arg1;
+ (id)nullFuture;
+ (id)onScheduler:(id)arg1 futureWithBlock:(CDUnknownBlockType)arg2;
+ (id)onScheduler:(id)arg1 lazyFutureWithBlock:(CDUnknownBlockType)arg2;
+ (id)_join:(id)arg1 ignoreFailures:(_Bool)arg2;
+ (void)_always:(id)arg1 withBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
+ (id)_then:(id)arg1 withBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
+ (id)_recover:(id)arg1 withBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;

- (id)init;
- (void)cancel;
- (_Bool)finishWithError:(id)arg1;
- (id)then:(CDUnknownBlockType)arg1;
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
- (id)recover:(CDUnknownBlockType)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)map:(CDUnknownBlockType)arg1;
- (void)onScheduler:(id)arg1 addSuccessBlock:(CDUnknownBlockType)arg2;
- (void)onScheduler:(id)arg1 addFailureBlock:(CDUnknownBlockType)arg2;
- (void)always:(CDUnknownBlockType)arg1;
- (void)finishWithFuture:(id)arg1;
- (void)_finishWithFuture:(id)arg1;
- (id)resultIfAvailable:(id *)arg1;
- (_Bool)tryCancel;
- (void)onScheduler:(id)arg1 always:(CDUnknownBlockType)arg2;
- (id)onScheduler:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)onScheduler:(id)arg1 recover:(CDUnknownBlockType)arg2;
- (id)onScheduler:(id)arg1 map:(CDUnknownBlockType)arg2;

@end
