/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnectionPool, ML3DatabaseStatementCache, NSMutableArray, NSString, NSUUID;

@protocol ML3DatabaseConnectionDelegate;

@interface ML3DatabaseConnection : NSObject

{
    struct sqlite3 *_sqlitedb;
    _Bool _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned int _transactionLevel;
    _Bool _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    const void *_iTunesExtensions;
    int _profilingLevel;
    NSString *_lastTracedStatement;
    int _willDeleteDatabaseNotifyToken;
    _Bool _isHandlingIOError;
    _Bool _alreadyAttemptedCorruptionRecovery;
    _Bool _isReadOnly;
    _Bool _automaticCheckpointingEnabled;
    _Bool _logQueryPlans;
    id <ML3DatabaseConnectionDelegate> _connectionDelegate;
    NSString *_databasePath;
    unsigned long long _journalingMode;
    unsigned long long _protectionLevel;
    NSUUID *_currentTransactionID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _checkpointStatementThreshold;
}

@property (weak, nonatomic) id <ML3DatabaseConnectionDelegate> connectionDelegate;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) _Bool isOpen;
@property (nonatomic, setter=setReadOnly:) _Bool isReadOnly;
@property (nonatomic) unsigned long long journalingMode;
@property (nonatomic) unsigned long long protectionLevel;
@property (nonatomic, readonly) _Bool isInTransaction;
@property (nonatomic, readonly) _Bool transactionMarkedForRollBack;
@property (nonatomic, readonly) NSUUID *currentTransactionID;
@property (nonatomic) int profilingLevel;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic) _Bool automaticCheckpointingEnabled;
@property (nonatomic) unsigned long long checkpointStatementThreshold;
@property (nonatomic) _Bool logQueryPlans;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)open;
- (_Bool)close;
- (void)flush;
- (id)_shortDescription;
- (_Bool)deleteDatabase;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)executeQuery:(id)arg1;
- (id)_databaseFilePaths;
- (_Bool)tableExists:(id)arg1;
- (id)initWithDatabasePath:(id)arg1;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (void)_finalizeAllStatements;
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (_Bool)_executeStatement:(id)arg1 withError:(id *)arg2;
- (struct sqlite3 *)_sqliteHandle;
- (id)sqliteError;
- (void)enqueueBlockForTransactionCommit:(CDUnknownBlockType)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (_Bool)pushTransaction;
- (_Bool)popTransactionAndCommit:(_Bool)arg1;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)schemaDeleteColumn:(id)arg1 inTable:(id)arg2;
- (_Bool)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3;
- (_Bool)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2;
- (_Bool)schemaDeleteColumns:(id)arg1 inTable:(id)arg2;
- (_Bool)pushTransactionUsingBehaviorType:(unsigned long long)arg1;
- (_Bool)databasePathExists;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4;
- (_Bool)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(_Bool)arg4;
- (long long)lastInsertionRowID;
- (int)_distrustQueriesDuringBlock:(CDUnknownBlockType)arg1;
- (_Bool)popToRootTransactionAndCommit:(_Bool)arg1;
- (void)setCurrentTransactionID:(id)arg1;
- (_Bool)registerModule:(id)arg1;
- (_Bool)removeModuleNamed:(id)arg1;
- (void)_ensureConnectionIsOpen;
- (_Bool)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (_Bool)_alreadyAttemptedCorruptionRecovery;
- (_Bool)_handleDiskIOError;
- (void)_setAlreadyAttemptedCorruptionRecovery:(_Bool)arg1;
- (void)_handleDatabaseCorruption;
- (void)_setOwningPool:(id)arg1;
- (_Bool)_isDeviceMediaLibraryDatabase;
- (void)_updateProfilingLevel;
- (_Bool)_openWithFlags:(int)arg1;
- (_Bool)_databaseFilesAreWritable;
- (void)_createDatabaseDirectoryIfNonexistent;
- (_Bool)_handleConnectionErrorWhileOpening:(int)arg1;
- (void)_logDatabaseFileDebugInformation;
- (_Bool)_closeAndFlushTransactionState:(_Bool)arg1;
- (_Bool)_handleZombieSQLiteConnection:(struct sqlite3 *)arg1;
- (void)_logCurrentError;
- (void)_resetUnfinalizedStatements;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (_Bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (_Bool)_internalEndTransactionAndCommit:(_Bool)arg1;
- (void)_executeTransactionCommitBlocks:(_Bool)arg1;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 usingBehaviorType:(unsigned long long)arg2;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (id)_registeredModuleNamed:(id)arg1;
- (_Bool)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (int)checkpointDatabase;
- (_Bool)_databaseFileExists;
- (_Bool)registerModuleName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;
- (id)_owningPool;
- (unsigned long long)_transactionLevel;
- (void)_setTransactionLevel:(unsigned long long)arg1;
- (void)_createDatabaseFileIfNonexistent;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_handleDatabaseTraceStatement:(const char *)arg1;
- (void)_handleDatabaseProfileStatement:(const char *)arg1 executionTimeNS:(unsigned long long)arg2;

@end
