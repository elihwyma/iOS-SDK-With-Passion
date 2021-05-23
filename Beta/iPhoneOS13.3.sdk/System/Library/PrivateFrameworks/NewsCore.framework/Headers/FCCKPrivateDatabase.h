/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKDatabase, FCCKPrivateDatabaseSchema, FCNetworkBehaviorMonitor, NSArray, NSData, NSDate, NSOperationQueue;

@protocol FCCKDatabaseEncryptionDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FCCKPrivateDatabase : NSObject

{
    _Bool _encryptionEnabled;
    _Bool _beganInitialStartUp;
    _Bool _finishedInitialStartUp;
    _Bool _activelyStartingUp;
    id <FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    NSData *_encryptionKey;
    NSData *_secureEncryptionKey;
    CKDatabase *_database;
    CKDatabase *_databaseWithZoneWidePCS;
    CKDatabase *_secureDatabase;
    NSArray *_containers;
    FCCKPrivateDatabaseSchema *_schema;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_serialOperationQueue;
    NSOperationQueue *_noPreflightOperationQueue;
    NSArray *_middleware;
    NSArray *_remainingStartUpMiddleware;
    NSArray *_operationMiddleware;
    NSArray *_recordMiddleware;
    NSObject<OS_dispatch_group> *_initialStartUpGroup;
    long long _startUpResult;
    unsigned long long _countOfFailedStartUpAttempts;
    NSDate *_dateOfLastFailedStartUpAttempt;
    NSArray *_zoneRestorationSources;
    NSArray *_zonePruningAssistants;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKDatabase *databaseWithZoneWidePCS;
@property (nonatomic, readonly) CKDatabase *secureDatabase;
@property (retain, nonatomic) NSArray *containers;
@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (retain, nonatomic) NSOperationQueue *noPreflightOperationQueue;
@property (retain, nonatomic) NSArray *middleware;
@property (retain, nonatomic) NSArray *remainingStartUpMiddleware;
@property (retain, nonatomic) NSArray *operationMiddleware;
@property (retain, nonatomic) NSArray *recordMiddleware;
@property (nonatomic) _Bool beganInitialStartUp;
@property (nonatomic) _Bool finishedInitialStartUp;
@property (nonatomic) _Bool activelyStartingUp;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *initialStartUpGroup;
@property (nonatomic) long long startUpResult;
@property (nonatomic) unsigned long long countOfFailedStartUpAttempts;
@property (retain, nonatomic) NSDate *dateOfLastFailedStartUpAttempt;
@property (nonatomic, readonly) NSArray *zoneRestorationSources;
@property (nonatomic, readonly) NSArray *zonePruningAssistants;
@property (nonatomic, readonly) NSArray *zoneIDsUsingSecureContainer;
@property (weak, nonatomic, readonly) id <FCCKDatabaseEncryptionDelegate> encryptionDelegate;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (getter=isEncryptionEnabled) _Bool encryptionEnabled;
@property (retain) NSData *encryptionKey;
@property (retain) NSData *secureEncryptionKey;
@property (nonatomic, readonly, getter=isStartingUp) _Bool startingUp;
@property (nonatomic, readonly, getter=isOnline) _Bool online;
@property (nonatomic, readonly, getter=isTemporarilySuspended) _Bool temporarilySuspended;

+ (id)privateDatabaseSchema;
+ (id)testingDatabase;
+ (CDUnknownBlockType)_privateDatabaseDeprecatedRecordTestBlock;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3 encryptionDelegate:(id)arg4;

- (void)addOperation:(id)arg1;
- (void)_cancelOperation:(id)arg1;
- (void)takeDatabaseOfflineDueToError:(id)arg1;
- (void)addCKOperationNoPreflight:(id)arg1 destination:(long long)arg2;
- (void)addCKOperation:(id)arg1 destination:(long long)arg2;
- (void)enumerateActiveDestinationsWithOptions:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithContainerIdentifier:(id)arg1 secureContainerIdentifier:(id)arg2 productionEnvironment:(_Bool)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(_Bool)arg6;
- (void)t_performStartUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSecureDatabaseSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(_Bool)arg4 qualityOfService:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)enumeratePayloadsWithRecordIDs:(id)arg1 records:(id)arg2 zoneIDs:(id)arg3 zones:(id)arg4 options:(long long)arg5 payloadHandler:(CDUnknownBlockType)arg6;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerZoneRestorationSources:(id)arg1;
- (void)registerZonePruningAssistants:(id)arg1;
- (id)initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4 schema:(id)arg5 middleware:(id)arg6 encryptionDelegate:(id)arg7 networkBehaviorMonitor:(id)arg8;
- (id)_queueForOperation:(id)arg1;
- (void)_beginInitialStartUpIfNeeded;
- (void)_possiblyRetryStartUp;
- (id)_clientToServerRecordZoneID:(id)arg1;
- (id)_serverRecordID:(id)arg1;
- (void)_preflightOperation:(id)arg1;
- (void)_addCKOperation:(id)arg1 destination:(long long)arg2;
- (void)_continueStartUp;
- (void)_finishStartUpWithError:(id)arg1;
- (void)reportFatalStartUpError:(id)arg1;
- (void)_preflightRecordsInModifyOperation:(id)arg1;
- (void)_preflightRecordsInFetchOperation:(id)arg1;
- (void)_preflightZoneIDsInModifyZonesOperation:(id)arg1;
- (void)_preflightZonesIDsInFetchZonesOperation:(id)arg1;
- (void)_preflightRecordsInRecordZoneChangesOperation:(id)arg1;
- (void)_preflightRecordsInDatabaseChangesOperation:(id)arg1;
- (id)_mapRecords:(id)arg1 toClient:(_Bool)arg2;
- (id)_mapRecordIDs:(id)arg1 toClient:(_Bool)arg2;
- (id)_serverToClientError:(id)arg1;
- (id)_mapRecordZoneIDs:(id)arg1 toClient:(_Bool)arg2;
- (id)_serverToClientRecord:(id)arg1;
- (id)_clientRecordID:(id)arg1;
- (id)_serverToClientRecordType:(id)arg1 withRecordID:(id)arg2;
- (id)_serverToClientRecordZoneID:(id)arg1;
- (id)_serverToClientRecordZoneID:(id)arg1 expectUnknownZones:(_Bool)arg2;
- (id)_serverToClientZone:(id)arg1;
- (id)_mapZones:(id)arg1 toClient:(_Bool)arg2;
- (id)_recordZoneIDsFromOperation:(id)arg1;
- (id)_mapObjects:(id)arg1 withRecordMiddlewareBlock:(CDUnknownBlockType)arg2;
- (id)_mapRecordZoneIDs:(id)arg1 toClient:(_Bool)arg2 expectUnknownZones:(_Bool)arg3;
- (void)_validateClientRecords:(id)arg1;
- (void)_validateClientZones:(id)arg1;
- (void)_possiblySimulateCrashForError:(id)arg1 message:(id)arg2;
- (id)pruningAssistantForZoneName:(id)arg1;
- (_Bool)_doesOperationRequireZoneWidePCS:(id)arg1;
- (_Bool)_doesOperationRequireSecureContainer:(id)arg1;
- (id)_clientToServerRecord:(id)arg1;
- (void)reportRecoverableStartUpError:(id)arg1;
- (void)reportEncryptionMigrationError:(id)arg1;
- (void)reportPostMigrationCleanupError:(id)arg1;

@end
