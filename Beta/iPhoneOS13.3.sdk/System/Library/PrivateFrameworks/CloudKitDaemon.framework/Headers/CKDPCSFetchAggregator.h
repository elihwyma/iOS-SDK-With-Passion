/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, NSMutableArray, NSOperationQueue;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSFetchAggregator : NSObject

{
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSOperationQueue *_queue;
    NSMutableArray *_queuedFetches;
    NSMutableArray *_runningFetches;
    NSObject<OS_dispatch_source> *_fetchSource;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (weak, nonatomic) CKDClientContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *queuedFetches;
@property (retain, nonatomic) NSMutableArray *runningFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;

- (id)init;
- (void)dealloc;
- (void)cancelAllOperations;
- (id)initWithContext:(id)arg1;
- (_Bool)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2;
- (void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_lockedFetchesAreReady;
- (void)_lockedRescheduleFetchTimer;
- (void)_lockedTearDownFetchTimer;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;

@end
