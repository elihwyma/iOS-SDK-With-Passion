/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSString;

@protocol _PASSqliteErrorHandlerProtocol;

@interface _PASSqliteDatabase : NSObject

{
    struct sqlite3 *_db;
    int _transactionDepth;
    _Bool _transactionRolledback;
    struct atomic_flag _isClosed;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
    NSString *_filename;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_statementsToFinalizeAsync;
    _Bool _currentExclusivity;
    NSMutableDictionary *_explainedQueryForPlan;
    NSCache *_explainedQueriesLogged;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_explainedQueriesLogFile;
    _Bool _isInMemory;
    long long _contentProtectionType;
}

@property (nonatomic, readonly) struct sqlite3 *handle;
@property (nonatomic, readonly) long long contentProtectionType;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) _Bool isInMemory;

+ (_Bool)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(long long)arg1;
+ (_Bool)contentProtectionTypeRequiresDeviceToBeUnlocked:(long long)arg1;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 errorHandler:(id)arg3 error:(id *)arg4;
+ (_Bool)isInMemoryPath:(id)arg1;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(_Bool *)arg3 errorHandler:(id)arg4;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(_Bool *)arg3;
+ (id)initializeDatabase:(id)arg1 withProtection:(_Bool)arg2 newDatabaseCreated:(_Bool *)arg3;
+ (id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1 errorHandler:(id)arg2;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)inMemoryPath;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (void)runDebugCommand:(const char *)arg1 onDbWithHandle:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)clearCaches;
- (unsigned int)userVersion;
- (_Bool)setUserVersion:(unsigned int)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (void)placeCorruptionMarker;
- (id)freeSpace;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (_Bool)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (void)closePermanently;
- (_Bool)prepAndRunNonDataQueries:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (void)simulateOnDiskDatabase;
- (long long)lastInsertRowId;
- (_Bool)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2;
- (void)_logQueryPlanForQuery:(id)arg1;
- (_Bool)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (void)insertIntoTable:(id)arg1 dictionary:(id)arg2;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (_Bool)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnRollback;
- (void)_txnEnd;
- (_Bool)_transactionWithExclusivity:(_Bool)arg1 transaction:(CDUnknownBlockType)arg2;
- (_Bool)createSnapshot:(id)arg1;
- (_Bool)hasTableNamed:(id)arg1;
- (id)tablesWithColumnNamed:(id)arg1;
- (_Bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (_Bool)hasIndexNamed:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)withDbLockExecuteBlock:(CDUnknownBlockType)arg1;
- (void)finalizeLater:(struct sqlite3_stmt *)arg1;
- (id)languageForFTSTable:(id)arg1;
- (_Bool)enableQueryPlanLoggingWithPath:(id)arg1;
- (void)disableQueryPlanLogging;

@end
