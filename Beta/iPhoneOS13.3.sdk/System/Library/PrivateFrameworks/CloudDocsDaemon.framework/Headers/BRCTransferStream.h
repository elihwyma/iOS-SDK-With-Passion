/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCDeadlineSource, BRCSyncContext, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCTransferStream : NSObject <Swift>

{
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    long long _nextFire;
    NSMutableDictionary *_inFlightOpByID;
    BRCDeadlineSource *_schedulingSource;
    NSObject<OS_dispatch_queue> *_transferQueue;
    unsigned long long _inFlightSize;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    _Bool _isWaitingForTransferBatch;
    _Bool _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
    _Bool _isCancelled;
    CDUnknownBlockType _streamDidBecomeReadyToTransferRecords;
    unsigned long long _maxCountOfBatchesInFlight;
}

@property (copy, nonatomic) CDUnknownBlockType streamDidBecomeReadyToTransferRecords;
@property (nonatomic) unsigned long long maxCountOfBatchesInFlight;
@property (readonly) NSArray *operations;
@property (nonatomic, readonly) unsigned long long inFlightSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)close;
- (void)cancel;
- (void)resume;
- (void)signal;
- (void)suspend;
- (void)_schedule;
- (void)signalWithDeadline:(long long)arg1;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)forceSchedulingPendingInteractiveTransfers;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)addBatchOperation:(id)arg1;
- (void)_scheduleOneBatchWithQoS:(long long)arg1;
- (void)_setReachedCap:(_Bool)arg1;
- (void)_evaluateCap;
- (void)_addBatchOperation:(id)arg1;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
- (void)startSchedulingMultipleItemsInteractively;
- (void)endSchedulingMultipleItemsInteractively;

@end
