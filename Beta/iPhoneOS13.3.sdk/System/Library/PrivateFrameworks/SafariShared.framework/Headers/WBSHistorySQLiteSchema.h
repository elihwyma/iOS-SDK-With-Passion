/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, WBSHistoryCrypto, WBSSQLiteDatabase;

@interface WBSHistorySQLiteSchema : NSObject

{
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
    NSDate *_migrateVisitsAfterDate;
}

@property (nonatomic, readonly) NSDictionary *legacyDatabase;

- (id)init;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (id)initWithDatabase:(id)arg1 crypto:(id)arg2 migrateVisitsAfterDate:(id)arg3;
- (int)migrateToCurrentSchemaVersionIfNeeded;
- (void)_migrateLegacyDatabase;
- (long long)_migrateLegacyItem:(id)arg1 dailyVisitCounts:(Vector_3b5d2a9f *)arg2 weeklyVisitCounts:(Vector_3b5d2a9f *)arg3;
- (long long)_migrateLegacyVisitWithItemID:(long long)arg1 visitTime:(double)arg2 title:(id)arg3 score:(unsigned long long)arg4 loadSuccessful:(_Bool)arg5 httpNonGet:(_Bool)arg6 synthesized:(_Bool)arg7;
- (void)_removeLegacyHistoryDatabaseIfNeeded;
- (id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)arg1 outVisitsToUseForRedirectChains:(id)arg2;
- (_Bool)migrateLegacyDatabaseCreatingRedirectChains:(id)arg1 urlsToItemAndLastVisitID:(id)arg2 visitsToUseForRedirectChains:(id)arg3;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemaVersion_8;
- (int)_migrateToSchemaVersion_9;
- (int)_migrateToSchemaVersion_10;
- (int)_migrateToSchemaVersion_11;
- (int)_migrateToSchemaVersion_12;
- (int)_migrateToSchemaVersion_13;
- (int)_migrateToSchemaVersion_14;
- (int)_migrateToSchemaVersion_15;

@end
