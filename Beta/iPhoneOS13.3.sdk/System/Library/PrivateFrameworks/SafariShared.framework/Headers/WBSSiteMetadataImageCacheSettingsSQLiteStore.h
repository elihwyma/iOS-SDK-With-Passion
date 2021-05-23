/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSURL, WBSSQLiteDatabase;

@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject

{
    WBSSQLiteDatabase *_database;
    _Bool _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
    NSURL *_databaseURL;
}

@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) NSURL *databaseURL;

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;

- (void)dealloc;
- (void)close;
- (id)allEntries;
- (id)initWithDatabaseURL:(id)arg1;
- (void)_closeDatabase;
- (_Bool)_checkDatabaseIntegrity;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (_Bool)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;
- (id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2;
- (_Bool)_migrateToCurrentSchemaVersionifNeeded;
- (_Bool)_createNewDatabaseSchema;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (_Bool)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2;
- (id)_createNewDatabaseSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (id)_selectAllEntriesSQLiteStatement;
- (int)_updateEntry:(id)arg1;
- (int)_insertEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)entryWithHost:(id)arg1;
- (_Bool)saveEntry:(id)arg1;
- (_Bool)deleteEntryWithHost:(id)arg1;
- (_Bool)deleteAllEntries;

@end
