/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class CKRecordZoneID, FCCKPrivateDatabase, NSMutableArray, NSMutableSet;

@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation

{
    FCCKPrivateDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    id <FCCKDatabaseMigrator> _migrator;
    id <FCCKZonePruningAssistant> _pruningAssistant;
    CDUnknownBlockType _migrationCompletionHandler;
    NSMutableSet *_createdZones;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

@property (retain, nonatomic) NSMutableSet *createdZones;
@property (retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion;
@property (retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) id <FCCKDatabaseMigrator> migrator;
@property (retain, nonatomic) id <FCCKZonePruningAssistant> pruningAssistant;
@property (copy, nonatomic) CDUnknownBlockType migrationCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)_migrateEntireZoneWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrateIndividualRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrateAndUpdateRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_gatherRecordsToMigrateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrateRecordIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_pruneRecords:(id)arg1;
- (void)_continueGatheringRecordsWithPreviousServerChangeToken:(id)arg1 recordsAlreadyFetched:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldStopGatheringAfterFetchingRecords:(id)arg1 cumulativeRecords:(id)arg2;
- (id)_uncreatedZonesInRecords:(id)arg1;
- (void)_saveMigratedRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createZones:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_migratedRecord:(id)arg1 error:(id *)arg2;

@end
