/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@class CallDBManager, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger

{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) CallDBManager *callDBManager;

+ (id)createForClient;
+ (id)createWithDBManager:(id)arg1;
+ (id)createForServer;

- (void)dealloc;
- (_Bool)save:(id *)arg1;
- (void)resetTimers;
- (void)registerForNotifications:(id)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)initWithDBManager:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (_Bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (id)createCallRecord;
- (_Bool)handleSaveForCallRecordContext:(id)arg1 error:(id *)arg2;
- (void)postTimersChangedNotification;
- (id)callDBProperties;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(_Bool)arg3;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (long long)deleteManagedCalls:(id)arg1;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchAllNoLimit;
- (void)updateCallDBProperties;
- (_Bool)saveTimers:(CDUnknownBlockType)arg1;
- (_Bool)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id *)arg2;
- (_Bool)resetAllTimers;
- (void)unRegisterForNotifications;
- (id)callRecordContext;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (long long)deleteManagedCallsWithPredicate:(id)arg1;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2;
- (id)fetchAll;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteAll;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (id)timerLastReset;

@end
