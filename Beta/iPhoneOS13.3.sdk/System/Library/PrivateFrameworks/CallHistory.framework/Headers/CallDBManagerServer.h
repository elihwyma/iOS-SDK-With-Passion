/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CallDBManager.h>

@interface CallDBManagerServer : CallDBManager

+ (id)getDestinationModelForVersion:(long long)arg1;
+ (long long)getNextVersionToDowngradeTo:(long long)arg1;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)arg1;
+ (long long)getNextVersionToDowngradeTo:(long long)arg1 withSourceVersion:(long long)arg2;
+ (id)getUniqueIdsForAllRecords:(id)arg1;
+ (id)getObjectIdsForAllRecords:(id)arg1;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg1 andHavingObjectIds:(id)arg2;
+ (id)getDestinationModel:(long long)arg1;
+ (id)downgradeDatabaseAtLocation:(id)arg1 toVersion:(long long)arg2;

- (id)tempDBLocation:(unsigned char *)arg1;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (void)createPermanent;
- (void)createTemporary;
- (_Bool)bootUpDBAtLocationWithRecovery:(id)arg1 isEncrypted:(_Bool)arg2;
- (_Bool)createCallDBProperties;
- (_Bool)bootUpDBAtLocation:(id)arg1 isEncrypted:(_Bool)arg2;
- (_Bool)handleBootUpFailure:(id)arg1;
- (id)createMOCForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (void)modifyCallRecordForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3 modifyCallRecord:(CDUnknownBlockType)arg4;
- (void)populateServiceProviderAndCallCategory:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (void)populateHandleType:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (void)populateRecentCallRemoteParticipantHandles:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (void)prepareDatabaseForNextStepInMigration:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (_Bool)removeDuplicatesFromDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(_Bool)arg3;
- (_Bool)handleDatabaseMigration:(id)arg1 isEncrypted:(_Bool)arg2 isRetry:(_Bool)arg3;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)arg1 fromManagedObjectContext:(id)arg2;
- (void)prepareForMigrationDBAtURL:(id)arg1 withModelAtURL:(id)arg2 andIsEncrypted:(_Bool)arg3;

@end
