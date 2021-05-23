/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSString, PPSQLDatabaseHandlePool;

@interface PPSQLDatabase : NSObject

{
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    unsigned char _migrationCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)tableNameForTable:(unsigned char)arg1;
+ (id)nonMigratingToolsInstance;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1;
+ (void)dropTableWithName:(id)arg1 txnWitness:(id)arg2;

- (id)init;
- (_Bool)isInMemory;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;
- (id)databaseHandle;
- (id)stats;
- (_Bool)_removeCorruptionMarker;
- (_Bool)migrateToVersion:(unsigned int)arg1;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(_Bool)arg1;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(_Bool)arg1;
- (id)initWithParentDirectory:(id)arg1 performMigrations:(_Bool)arg2;
- (id)_initWithPath:(id)arg1 performMigrations:(_Bool)arg2;
- (id)_openFreshHandleForClient:(unsigned char)arg1;
- (void)_enableQueryLoggingForHandle:(id)arg1;
- (void)_disableQueryLoggingForHandle:(id)arg1;
- (id)_nullableHandleWithClient:(unsigned char)arg1;
- (id)handleWithClient:(unsigned char)arg1;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1;
- (void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2;
- (void)readTransactionWithClient:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (void)writeTransactionWithClient:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (id)checkWithError:(id *)arg1;
- (id)_allTables;
- (_Bool)_isCorruptionMarkerPresent;
- (_Bool)_handleCorruption;
- (_Bool)unmigrate;
- (unsigned long long)maxSchemaVersion;
- (_Bool)_prepareDatabaseHandleForMigration;

@end
