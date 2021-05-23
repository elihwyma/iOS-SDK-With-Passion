/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabase, NSError, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface HDExtendedDatabaseTransaction : NSObject

{
    _Bool _pendingWorkDidSucceed;
    NSUUID *_transactionIdentifier;
    HDDatabase *_database;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    CDUnknownBlockType _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
    double _transactionTimeout;
    double _continuationTimeout;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *automaticRollbackTimer;
@property (copy, nonatomic) CDUnknownBlockType pendingWork;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSError *lastError;
@property (nonatomic) _Bool pendingWorkDidSucceed;
@property (nonatomic, readonly) double transactionTimeout;
@property (nonatomic, readonly) double continuationTimeout;
@property (copy, nonatomic, readonly) NSUUID *transactionIdentifier;
@property (weak, nonatomic, readonly) HDDatabase *database;

- (void)dealloc;
- (id)initWithDatabase:(id)arg1 context:(id)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id *)arg5;
- (_Bool)rollbackDueToError:(id)arg1 errorOut:(id *)arg2;
- (void)_enableAutomaticRollbackTimer;
- (void)_transaction_runTransactionWithContext:(id)arg1;
- (_Bool)performInTransactionWithErrorOut:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)commitWithErrorOut:(id *)arg1;

@end
