/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNFutureResult, CNSuspendableSchedulerDecorator, NSConditionLock, NSString;

@interface _CNBlockFutureImpl : NSObject

{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNSuspendableSchedulerDecorator *_blockScheduler;
    _Bool _queueSuspended;
    _Bool _workBlockScheduled;
}

@property (nonatomic, readonly) NSConditionLock *stateLock;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) _Bool workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implWithSchedulerProvider:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)lazyImplWithSchedulerProvider:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)implWithBlock:(CDUnknownBlockType)arg1;
+ (id)lazyImplWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)cancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (_Bool)_nts_isFinished;
- (void)_flushCompletionBlocks;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)updateDescriptionWithBuilder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)resumeQueue;
- (void)addWriterBlock:(CDUnknownBlockType)arg1;
- (_Bool)nts_mayResumeQueue;
- (void)nts_resumeQueue;
- (void)implicitlyResumeQueue;
- (id)futureResultFromImmediateLookup;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)arg1 error:(id *)arg2;
- (_Bool)nts_isFinished;
- (id)futureResult;

@end
