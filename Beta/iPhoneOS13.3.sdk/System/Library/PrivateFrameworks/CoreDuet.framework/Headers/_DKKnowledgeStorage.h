/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSURL, NSUUID, _DKCoreDataStorage, _DKPreferences, _DKTombstonePolicy;

@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    unsigned long long _insertsAndDeletesObserverCount;
    NSUUID *_deviceUUID;
    _Bool _localOnly;
    _DKCoreDataStorage *_syncStorage;
    _DKTombstonePolicy *_tombstonePolicy;
    _DKCoreDataStorage *_storage;
    _DKPreferences *_defaults;
}

@property (nonatomic, readonly) unsigned long long finalMigrationVersion;
@property (retain) _DKTombstonePolicy *tombstonePolicy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, readonly) _Bool localOnly;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;
@property (nonatomic, readonly) _DKCoreDataStorage *syncStorage;
@property (nonatomic, readonly) _DKPreferences *defaults;

+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)sourceDeviceIdentityFromDeviceID:(id)arg1;
+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;
+ (id)sourceDeviceIdentityFromObject:(id)arg1;

- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteOrphanedEntities;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)keyValueStoreForDomain:(id)arg1;
- (id)deviceUUID;
- (void)addKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (void)incrementInsertsAndDeletesObserverCount;
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (void)decrementInsertsAndDeletesObserverCount;
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (id)syncStorageAssertion;
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id *)arg2;
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id *)arg2;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (_Bool)saveChangeSetsForSync:(id)arg1 error:(id *)arg2;
- (void)closeSyncStorage;
- (_Bool)deleteSyncStorage;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)errorForException:(id)arg1;
- (void)closeStorage;
- (_Bool)deleteStorage;
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;
- (void)_sendEventsNotificationName:(id)arg1 withObjects:(id)arg2;
- (_Bool)_saveObjects:(id)arg1 error:(id *)arg2;
- (id)nilArrayError;
- (id)removeBadObjects:(id)arg1;
- (void)_sendInsertEventsNotificationWithObjects:(id)arg1;
- (_Bool)_deleteObjects:(id)arg1 error:(id *)arg2;
- (void)_tombstoneObjects:(id)arg1 error:(id *)arg2;
- (void)_sendTombstoneNotificationsWithStreamNameCounts:(id)arg1;
- (void)_sendTombstoneNotificationsForRequirementIdentifiers:(id)arg1;
- (unsigned long long)_deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)_tombstoneObjectsMatchingPredicate:(id)arg1 batchSize:(unsigned long long)arg2 error:(id *)arg3;
- (id)_executeQuery:(id)arg1 error:(id *)arg2;
- (id)versionsRequiringManualSetup;
- (id)versionsRequiringManualMigration;
- (_Bool)updateDataBeforeAutoMigrationFromVersion:(unsigned long long)arg1 inStoreAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)updateDataAfterAutoMigrationToVersion:(unsigned long long)arg1 inPersistentStore:(id)arg2 error:(id *)arg3;
- (id)_requestForChangeSinceDate:(id)arg1;
- (id)syncStorageIfAvailable;
- (void)_databaseChangedWithNotification:(id)arg1;
- (void)configureDeviceUUID;
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)eventCount;
- (id)eventCountPerStreamName;
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteHistogram:(id)arg1;
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (id)sourceDeviceIdentity;
- (id)syncPeersWithError:(id *)arg1;
- (_Bool)saveSyncPeer:(id)arg1 error:(id *)arg2;
- (void)removeSyncPeer:(id)arg1;
- (id)keyValueObjectForKey:(id)arg1 domain:(id)arg2;
- (void)setKeyValueObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)removeKeyValueObjectForKey:(id)arg1 domain:(id)arg2;
- (void)updateToFinalMetadata:(id)arg1;
- (_Bool)copyValueToManagedObject:(id)arg1;

@end
