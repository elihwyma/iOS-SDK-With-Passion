/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle, NSObject;

@protocol OS_dispatch_queue;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable

{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
    NSObject<OS_dispatch_queue> *_recentCallQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentCallQueue;
@property (nonatomic, readonly) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForClient;
+ (id)createForServer;

- (id)init;
- (void)dealloc;
- (id)manager;
- (void)registerForNotifications;
- (void)resetTimers;
- (id)init:(_Bool)arg1;
- (_Bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchAllNoLimit;
- (_Bool)deleteAll:(id *)arg1;
- (_Bool)resetAllTimers;
- (void)unRegisterForNotifications;
- (id)fetchAll;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (_Bool)deleteObjectWithUniqueId:(id)arg1;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1;
- (_Bool)deleteAll;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (id)timerLastReset;
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (long long)deleteCallsWithPredicate:(id)arg1;
- (_Bool)createCallRecord:(id)arg1;
- (_Bool)createCallRecords:(id)arg1;
- (id)updateCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 error:(id *)arg3;
- (_Bool)saveDatabase:(id *)arg1;
- (id)updateCallRecords:(id)arg1;
- (id)updateAllCallRecords:(id)arg1;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(_Bool *)arg2 isOriginated:(_Bool *)arg3;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (_Bool)createCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (id)updateCallRecords_sync:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (id)updateAllCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id *)arg2;
- (_Bool)willHandleNotification_sync:(id)arg1;
- (_Bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;

@end
