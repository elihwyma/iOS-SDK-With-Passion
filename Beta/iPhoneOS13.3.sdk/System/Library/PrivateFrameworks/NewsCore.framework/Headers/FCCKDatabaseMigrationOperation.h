/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSMutableArray;

@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation

{
    FCCKPrivateDatabase *_database;
    id <FCCKDatabaseMigrator> _migrator;
    CDUnknownBlockType _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

@property (retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion;
@property (retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) id <FCCKDatabaseMigrator> migrator;
@property (copy, nonatomic) CDUnknownBlockType migrationCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)_migrateZoneIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
