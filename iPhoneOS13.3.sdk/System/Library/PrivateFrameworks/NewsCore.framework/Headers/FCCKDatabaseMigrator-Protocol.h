//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKRecord, FCCKPrivateDatabase, NSArray, NSSet, NSString;

@protocol FCCKDatabaseMigrator <NSObject>
- (void)databaseMigrationDidFinishForDatabase:(FCCKPrivateDatabase *)arg1 result:(long long)arg2;
- (CKRecord *)databaseMigrationMigrateRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2 error:(id )arg3;
- (BOOL)databaseMigrationShouldDropRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSArray *)databaseMigrationRecordNamesToMigrateInZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSSet *)databaseMigrationZoneNamesForDatabase:(FCCKPrivateDatabase *)arg1;
@end

