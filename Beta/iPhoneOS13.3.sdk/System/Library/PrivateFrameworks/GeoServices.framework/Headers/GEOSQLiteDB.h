/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSError, NSMapTable, NSMutableArray, NSString, NSURL;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface GEOSQLiteDB : NSObject

{
    NSObject<OS_os_log> *_log;
    struct sqlite3 *_db;
    NSError *_lastError;
    NSURL *_databaseFileURL;
    int _sqliteFlags;
    NSDictionary *_pragmas;
    CDUnknownBlockType _setupBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_externalFilesQueue;
    NSObject<OS_dispatch_group> *_externalFilesGroup;
    NSMutableArray *_externalFilesActiveChannels;
    NSMapTable *_preparedStatements;
    _Bool _isInTransaction;
    _Bool _isTemporaryInMemoryDatabase;
    _Bool _didEncounterExternalResourceErrorInTransaction;
    NSMutableArray *_filesAddedDuringTransaction;
    NSMutableArray *_filesDeletedDuringTransaction;
    NSMapTable *_virtualTables;
    union {
        struct atomic_flag flag;
        int dummy;
    } _didTearDown;
}

@property (nonatomic, readonly) struct sqlite3 *sqliteDB;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, readonly) NSString *dbFilePath;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) _Bool isDBReady;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSDictionary *pragmas;
@property (nonatomic) long long user_version;

+ (_Bool)renameAllDBFilesFrom:(id)arg1 to:(id)arg2;
+ (id)defaultPragmas;
+ (id)_findAllDBFilesForURL:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)vacuum;
- (long long)lastInsertRowID;
- (_Bool)dropAllTables;
- (void)_closeDB;
- (void)tearDown;
- (id)initWithQueueName:(const char *)arg1 logFacility:(const char *)arg2 dbFilePath:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(CDUnknownBlockType)arg6;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (long long)int64ForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (id)stringForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (_Bool)reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id *)arg3;
- (_Bool)statementForKey:(id)arg1 statementBlock:(CDUnknownBlockType)arg2;
- (_Bool)createTable:(const char *)arg1 withDrop:(const char *)arg2;
- (_Bool)prepareStatement:(const char *)arg1 forKey:(id)arg2;
- (_Bool)bindInt64Parameter:(const char *)arg1 toValue:(long long)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)executeStatement:(id)arg1 statementBlock:(CDUnknownBlockType)arg2;
- (_Bool)bindTextParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)executeInTransaction:(CDUnknownBlockType)arg1;
- (void)executeAsync:(CDUnknownBlockType)arg1;
- (id)initWithQueueName:(const char *)arg1 log:(id)arg2 databaseFileURL:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(CDUnknownBlockType)arg6;
- (int)intForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (id)UUIDForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (_Bool)deleteExternalResourceAtURL:(id)arg1 error:(id *)arg2;
- (void)executeAsync:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)bindIntParameter:(const char *)arg1 toValue:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (id)blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (_Bool)moveExternalResourceAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)bindBlobNoCopyParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)bindParameter:(const char *)arg1 toUUID:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)bindNullParameter:(const char *)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;
- (_Bool)deleteAllDBFiles;
- (_Bool)setup;
- (void)_execute:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)executeSync:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)_openAndConfigureWithRetryIfCorrupt;
- (void)_debug_unlockDB:(id)arg1;
- (void)_debug_lockDB:(id)arg1;
- (int)_openAndConfigure;
- (_Bool)_deleteAllDatabaseFilesIfCorrupt:(int)arg1;
- (int)_openDatabaseFile;
- (int)_setPragmas;
- (void)_createParentDirectory;
- (_Bool)_deleteAllDBFiles;
- (id)getTablesLike:(id)arg1;
- (_Bool)dropTablesLike:(id)arg1;
- (void)_deleteAndReopenDatabaseIfCorrupt:(int)arg1;
- (_Bool)_bindParameter:(const char *)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(id *)arg3 withBinder:(CDUnknownBlockType)arg4;
- (_Bool)_waitForAllTransactionExternalResources;
- (id)_blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2 noCopy:(_Bool)arg3;
- (void)_writeTransactionExternalResourceWithData:(id)arg1 toURL:(id)arg2;
- (_Bool)registerVirtualTable:(id)arg1;
- (_Bool)unregisterVirtualTable:(id)arg1;
- (id)getAllTables;
- (void)clearStatement:(id)arg1;
- (struct sqlite3_stmt *)statementForKey:(id)arg1;
- (_Bool)bindBlobParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)bindZeroBlobParameter:(const char *)arg1 length:(unsigned long long)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)bindRealParameter:(const char *)arg1 toValue:(double)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (_Bool)executeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (double)doubleForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (id)noCopyBlobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (_Bool)writeExternalResourceWithData:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)writeBlobData:(id)arg1 toTable:(const char *)arg2 column:(const char *)arg3 rowID:(long long)arg4 error:(id *)arg5;
- (void)_channelCleanupFailedWithError:(int)arg1;
- (void)_channelEncounteredError:(int)arg1;
- (void)_doneWritingToChannel:(id)arg1;

@end
