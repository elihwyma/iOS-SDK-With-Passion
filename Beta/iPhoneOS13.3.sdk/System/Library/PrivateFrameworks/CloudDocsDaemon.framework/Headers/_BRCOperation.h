/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSOperation.h>

@class BRCSyncContext, BRCThrottle, CKOperationGroup, NSDate, NSError, NSMutableArray, NSObject, NSUUID;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_os_activity, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _BRCOperation : NSOperation

{
    BRCSyncContext *_syncContext;
    unsigned char _operationUUID[16];
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_transaction> *_executionTransaction;
    NSDate *_startDate;
    NSDate *_finishDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    NSError *_lastError;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_os_activity> *_Activity;
    NSMutableArray *_associatedEventMetrics;
    _Bool _finished;
    _Bool _nonDiscretionary;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BRCThrottle *_operationThrottle;
    BRCThrottle *_operationFailureThrottle;
    CDUnknownBlockType _mainBlock;
    CDUnknownBlockType _finishBlock;
    unsigned long long _logSections;
    CKOperationGroup *_operationGroup;
}

@property (nonatomic, getter=isExecuting) _Bool executing;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic) _Bool nonDiscretionary;
@property (nonatomic, readonly) NSUUID *operationID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) BRCSyncContext *syncContext;
@property (retain, nonatomic) CKOperationGroup *group;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long logSections;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BRCThrottle *operationThrottle;
@property (nonatomic) BRCThrottle *operationFailureThrottle;
@property (nonatomic, readonly) _Bool usesBackgroundSession;
@property (copy, nonatomic) CDUnknownBlockType mainBlock;
@property (copy, nonatomic) CDUnknownBlockType finishBlock;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)cancel;
- (void)start;
- (void)main;
- (_Bool)isConcurrent;
- (void)schedule;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)_finishIfCancelled;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishIfCancelled;
- (void)_main;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (id)descriptionWithContext:(id)arg1;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;
- (void)addSubOperation:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)stateWithContext:(id)arg1;
- (void)_executeWithPreviousError:(id)arg1;
- (void)_scheduleExecutionWithPreviousError:(id)arg1;
- (void)addSubOperation:(id)arg1 overrideContext:(id)arg2 allowsCellularAccess:(id)arg3;
- (void)associateCKOperationsToEventMetric:(id)arg1;

@end
