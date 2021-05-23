/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@protocol FCCKDatabaseMigrator <Swift>

- (unsigned short)databaseMigrationShouldMigrateEntireZone:database: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseMigrationRecordNamesToMigrateInZone:database: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseMigrationShouldDropRecord:database: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseMigrationMigrateRecord:database:error: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseMigrationZoneNamesForDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseMigrationDidFinishForDatabase:result: /* Error: Ran out of types for this method. */;

@end
