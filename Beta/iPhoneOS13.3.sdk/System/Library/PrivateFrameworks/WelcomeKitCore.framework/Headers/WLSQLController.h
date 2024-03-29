/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface WLSQLController : NSObject

{
    struct sqlite3 *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSString *_databasePath;
}

@property (retain, nonatomic) NSString *databasePath;

+ (long long)persistentValueForDate:(id)arg1;

- (void)dealloc;
- (long long)_schemaVersion;
- (void)closeDatabase;
- (void)_openDatabase;
- (void)updateStatistics:(id)arg1;
- (id)messagePhoneNumberIccForCcAcNumber:(id)arg1;
- (void)_deleteSummaries;
- (void)_deleteAccounts;
- (int)_sqlite3_bind_NSDate:(id)arg1 forStatement:(struct sqlite3_stmt *)arg2 position:(int)arg3;
- (unsigned long long)_totalSummarySegmentCountForAccounts:(id)arg1 migrationStateComparisonOperator:(id)arg2 migrationState:(long long)arg3;
- (void)_onDatabaseQueue_updateMigrationState:(int)arg1 forSummary:(id)arg2 removeData:(_Bool)arg3;
- (id)summariesForAccounts:(id)arg1 sortedByModifiedDate:(_Bool)arg2;
- (id)_sqlite3_column_NSDateForStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)_migratableAppsForDevice:(id)arg1;
- (_Bool)_foundHandleIDs:(id)arg1 representSameGroupMessageAsHandleIDs:(id)arg2 handleIDsAreComplete:(_Bool)arg3;
- (void)_insertStatistics_onDatabaseQueue:(id)arg1;
- (long long)_performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;
- (void)_ensureCorrectSchema;
- (id)initWithDataCoordinator:(id)arg1;
- (void)deleteMetadataForAllDevices;
- (void)deleteAccountsAndSummariesForAllDevices;
- (void)deleteMigratableAppsForAllDevices;
- (void)deleteSummaryDataForAllDevices;
- (unsigned long long)insertAccount:(id)arg1 migrator:(id)arg2 device:(id)arg3;
- (id)accountsForMigrator:(id)arg1 device:(id)arg2;
- (_Bool)deleteAccountsAndSummariesForMigrator:(id)arg1 device:(id)arg2;
- (unsigned long long)insertRecordSummary:(id)arg1 account:(id)arg2;
- (unsigned long long)totalSummaryDownloadedSegmentCountForAccounts:(id)arg1;
- (void)totalSummaryItemSizeForAccounts:(id)arg1 addOverhead:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)totalSummaryDownloadSegmentCountForAccounts:(id)arg1;
- (void)setData:(id)arg1 forSummary:(id)arg2;
- (id)dataForSummary:(id)arg1;
- (void)setDidDownloadForSummary:(id)arg1 forSourceDevice:(id)arg2;
- (void)setWillImportForSummary:(id)arg1;
- (void)removeDataAndSetDidImportForSummary:(id)arg1;
- (void)setMigrationError:(id)arg1 forSummary:(id)arg2;
- (id)migrationErrors;
- (void)updateModifiedDateForSummary:(id)arg1;
- (id)summariesForAccount:(id)arg1;
- (id)migrationMetadataForSourceDevice:(id)arg1 strictMatch:(_Bool)arg2;
- (void)insertMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)setMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)insertMigratableApp:(id)arg1 forDevice:(id)arg2;
- (id)migratableAppsForAllDevices;
- (void)insertMessagePhoneNumberWithIcc:(id)arg1 ccAcNumber:(id)arg2;
- (void)deleteMessagePhoneNumbersForAllDevices;
- (id)groupMessageInfoMatchingSourceThreadID:(id)arg1;
- (id)groupMessageInfoMatchingSortedHandleIDs:(id)arg1 handleIDsAreComplete:(_Bool)arg2 didMatchExactly:(_Bool *)arg3;
- (void)insertGroupMessageInfoWithSourceThreadID:(id)arg1 roomName:(id)arg2 groupID:(id)arg3;
- (void)insertGroupMessageInfoWithSortedHandleIDs:(id)arg1 handleIDsAreComplete:(_Bool)arg2 roomName:(id)arg3 groupID:(id)arg4;
- (void)deleteGroupMessageInfoForAllDevices;
- (id)statisticsForContentType:(id)arg1;
- (void)deleteStatisticsForAllDevices;

@end
