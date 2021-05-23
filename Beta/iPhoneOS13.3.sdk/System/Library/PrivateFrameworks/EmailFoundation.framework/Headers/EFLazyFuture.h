/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFFuture.h>

@class EFPromise, NSConditionLock;

@protocol EFScheduler;

@interface EFLazyFuture : EFFuture

{
    NSConditionLock *_stateLock;
    id <EFScheduler> _scheduler;
    CDUnknownBlockType _block;
    EFPromise *_promise;
}

- (_Bool)run;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)onScheduler:(id)arg1 addSuccessBlock:(CDUnknownBlockType)arg2;
- (void)onScheduler:(id)arg1 addFailureBlock:(CDUnknownBlockType)arg2;
- (id)initWithScheduler:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)resultIfAvailable:(id *)arg1;
- (_Bool)tryCancel;

@end
