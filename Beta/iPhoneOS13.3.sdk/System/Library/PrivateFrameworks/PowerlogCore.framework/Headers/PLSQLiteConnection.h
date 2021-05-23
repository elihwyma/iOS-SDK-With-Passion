/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PLSQLiteConnection : NSObject

{
    int _transactionInProgress;
    int _entryCacheStorageSize;
    NSString *_filePath;
    struct sqlite3 *_dbConnection;
    NSObject<OS_dispatch_semaphore> *_dbSem;
    NSMutableDictionary *_preparedStatements;
    NSMutableDictionary *_preparedUpdateStatements;
    NSMutableDictionary *_preparedDynamicStatements;
    NSString *_transactionLock;
    NSString *_cachedClassName;
    long long _cacheSize;
}

@property struct sqlite3 *dbConnection;
@property (retain) NSObject<OS_dispatch_semaphore> *dbSem;
@property (retain) NSMutableDictionary *preparedStatements;
@property (retain) NSMutableDictionary *preparedUpdateStatements;
@property (retain) NSMutableDictionary *preparedDynamicStatements;
@property int transactionInProgress;
@property (retain) NSString *transactionLock;
@property (retain) NSString *cachedClassName;
@property int entryCacheStorageSize;
@property long long cacheSize;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *filePath;

+ (id)sharedSQLiteConnection;
+ (double)periodicIntegrityCheckInterval;
+ (id)tableHasTimestampColumnSem;
+ (id)tableHasTimestampColumn;
+ (id)masterTableForTable:(id)arg1 andType:(id)arg2;
+ (id)versionForTable:(id)arg1;
+ (void)removeDBAtFilePath:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)beginTransaction;
- (void)endTransaction;
- (void)vacuum;
- (id)initWithFilePath:(id)arg1;
- (void)closeConnection;
- (void)updateEntry:(id)arg1;
- (void)moveToPath:(id)arg1;
- (id)entriesForKey:(id)arg1 withQuery:(id)arg2;
- (id)performQuery:(id)arg1;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (long long)writeEntry:(id)arg1;
- (id)initWithFilePath:(id)arg1 withFlags:(id)arg2;
- (_Bool)tableExistsForTableName:(id)arg1;
- (void)createTableName:(id)arg1 withColumns:(id)arg2;
- (void)setSchemaVersion:(double)arg1 forTableName:(id)arg2;
- (void)createIndexOnTable:(id)arg1 forColumn:(id)arg2;
- (void)removeIDIndexes;
- (void)removeEmptyOldTables;
- (double)schemaVersionForTable:(id)arg1;
- (id)tableInfo:(id)arg1;
- (void)createCoveringIndexOnTable:(id)arg1 forColumns:(id)arg2;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)loadArrayValuesIntoEntry:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2;
- (_Bool)copyDatabaseToPath:(id)arg1;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3;
- (void)clearTableHasTimestampColumnCache;
- (_Bool)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(_Bool)arg5 withCacheSize:(long long)arg6;
- (_Bool)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(_Bool)arg5;
- (void)dropTables:(id)arg1;
- (void)hashEntryKeyKeys:(id)arg1;
- (id)initWithFilePath:(id)arg1 withCacheSize:(long long)arg2;
- (id)initWithFilePath:(id)arg1 withCacheSize:(long long)arg2 withFlags:(id)arg3;
- (_Bool)commonInitProcessWithFilePath:(id)arg1 withCacheSize:(long long)arg2;
- (_Bool)openCurrentFileWithCacheSize:(long long)arg1;
- (_Bool)passesIntegrityCheck;
- (void)scheduleIntegrityCheck;
- (void)setJournalMode:(short)arg1;
- (_Bool)openCurrentFileWithCacheSize:(long long)arg1 withFlags:(id)arg2;
- (id)getIntegrityCheckCriteria;
- (id)sqlFormatedColumnNamesForTable:(id)arg1 withQuoteChar:(BOOL)arg2;
- (_Bool)checkEmptyMasterTable:(id)arg1;
- (void)dropTable:(id)arg1;
- (void)runTrimQuery:(id)arg1;
- (_Bool)tableHasTimestampColumn:(id)arg1;
- (void)trimTable:(id)arg1 fromDate:(id)arg2 withFilter:(id)arg3 withTrimLimit:(long long)arg4;
- (id)performStatement:(id)arg1;
- (_Bool)isTransactionInProgress;
- (void)buildColumnInsert:(id *)arg1 andValueInsert:(id *)arg2 forEntry:(id)arg3;
- (void)displaySchema:(id)arg1;
- (int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3;
- (void)writeDynamicEntries:(id)arg1;
- (void)writeArrayEntries:(id)arg1;
- (void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (_Bool)openCurrentFile;
- (void)printDBStatusString;
- (int)rowCountForTable:(id)arg1;
- (id)sqlFormatedColumnNamesForTableInsert:(id)arg1;
- (id)sqlFormatedColumnNamesForTableSelect:(id)arg1;
- (void)removeTableNameFromMergeDB:(id)arg1;
- (void)enumerateAllTablesWithBlock:(CDUnknownBlockType)arg1;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2;
- (_Bool)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;

@end
