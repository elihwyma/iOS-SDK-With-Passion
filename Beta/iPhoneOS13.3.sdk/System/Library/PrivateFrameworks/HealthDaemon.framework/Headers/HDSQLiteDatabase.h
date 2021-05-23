/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteStatementCache, NSMutableArray, NSMutableDictionary, NSNumber, NSURL;

@protocol HDSQLiteDatabaseDelegate;

@interface HDSQLiteDatabase : NSObject

{
    struct sqlite3 *_db;
    _Bool _isInTransaction;
    _Bool _requiresRollback;
    long long _transactionType;
    NSMutableDictionary *_attachedDatabaseURLsByName;
    _Bool _isHandlingTransactionEnd;
    NSMutableArray *_beforeCommitBlocks;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    _Bool _writer;
    _Bool _checkpointRequired;
    _Bool _hasEncounteredCorruptionError;
    int _corruptionResultCode;
    id <HDSQLiteDatabaseDelegate> _delegate;
    NSURL *_fileURL;
    long long _cacheScope;
    HDSQLiteStatementCache *_statementCache;
}

@property (nonatomic, readonly) long long statementCacheScope;
@property (nonatomic) long long cacheScope;
@property (nonatomic, readonly) HDSQLiteStatementCache *statementCache;
@property (nonatomic, readonly) _Bool hasEncounteredCorruptionError;
@property (nonatomic, readonly) int corruptionResultCode;
@property (weak, nonatomic) id <HDSQLiteDatabaseDelegate> delegate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (nonatomic, getter=isWriter) _Bool writer;
@property (nonatomic) _Bool checkpointRequired;
@property (copy, nonatomic, readonly) NSNumber *lastInsertRowID;

+ (id)virtualFilesystemModule;
+ (id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1;

- (void)dealloc;
- (void)close;
- (int)openWithError:(id *)arg1;
- (void)accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (id)_statementCache;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (int)_openForWriting:(_Bool)arg1 additionalFlags:(int)arg2 error:(id *)arg3;
- (int)_copyContentsFromDatabase:(struct sqlite3 *)arg1 toDatabase:(struct sqlite3 *)arg2;
- (_Bool)_executeUncachedSQL:(id)arg1 error:(id *)arg2 retryIfBusy:(_Bool)arg3;
- (_Bool)_verifyDatabaseOpenAndReturnError:(id *)arg1;
- (id)getLastErrorWithResultCode:(int)arg1;
- (_Bool)_executeUncachedSQL:(id)arg1 error:(id *)arg2;
- (_Bool)_executeSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (_Bool)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)_prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id *)arg4;
- (_Bool)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long *)arg3 error:(id *)arg4;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)isDatabaseWithNameAttached:(id)arg1;
- (id)_tableNamesForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)initMemoryDatabaseWithDelegate:(id)arg1;
- (id)initMemoryDatabaseFromURL:(id)arg1 delegate:(id)arg2;
- (id)initWithDatabaseURL:(id)arg1 copyingDatabase:(id)arg2 delegate:(id)arg3;
- (int)openForReadingWithError:(id *)arg1;
- (int)openWithFileProtectionCompleteUnlessOpenWithError:(id *)arg1;
- (int)getChangesCount;
- (_Bool)performTransactionWithType:(long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQLStatements:(id)arg1 error:(id *)arg2;
- (_Bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id *)arg3;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id *)arg2;
- (void)onCommit:(CDUnknownBlockType)arg1 orRollback:(CDUnknownBlockType)arg2;
- (void)beforeCommit:(CDUnknownBlockType)arg1;
- (void)requireRollback;
- (long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id *)arg3;
- (_Bool)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id *)arg5;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (_Bool)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (_Bool)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (_Bool)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id *)arg2;
- (_Bool)performIntegrityCheckWithError:(id *)arg1 integrityErrorHandler:(CDUnknownBlockType)arg2;
- (id)queryPlanForSQL:(id)arg1 error:(id *)arg2;
- (_Bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id *)arg3;
- (_Bool)detachDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)dumpSchemaWithError:(id *)arg1;
- (id)highFrequencyDatabaseURL;
- (_Bool)accessHFDForReadingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)accessHFDForWritingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;
- (_Bool)isProtectedDatabaseAttached;
- (_Bool)attachProtectedDatabaseWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)detachProtectedDatabaseWithError:(id *)arg1;
- (_Bool)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;
- (id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id *)arg3;
- (_Bool)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long *)arg2 error:(id *)arg3;

@end
