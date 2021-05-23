/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseJournal, EFSQLConnection, NSString;

@protocol EDPersistenceDatabaseConnectionDelegate;

@interface EDPersistenceDatabaseConnection : NSObject

{
    _Bool _isWriter;
    id <EDPersistenceDatabaseConnectionDelegate> _delegate;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
    EFSQLConnection *_sqlConnection;
    NSString *_basePath;
}

@property (weak, nonatomic, readonly) id <EDPersistenceDatabaseConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *protectedDatabaseName;
@property (copy, nonatomic) NSString *journalDatabaseName;
@property (retain, nonatomic) EDPersistenceDatabaseJournal *journal;
@property (nonatomic, readonly) EFSQLConnection *sqlConnection;
@property (nonatomic, readonly) NSString *basePath;
@property (nonatomic, readonly) NSString *fullPath;
@property (copy, nonatomic, readonly) NSString *protectedDatabasePath;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool protectedDatabaseAttached;
@property (nonatomic, readonly) _Bool journalDatabaseAttached;
@property (nonatomic, readonly) struct sqlite3 *sqlDB;
@property (nonatomic, readonly) _Bool isWriter;
@property (nonatomic, readonly) long long lastInsertedDatabaseID;
@property (nonatomic, readonly) long long transactionGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)dealloc;
- (void)open;
- (void)close;
- (void)setIsWriter:(_Bool)arg1;
- (_Bool)tableExists:(id)arg1;
- (id)preparedStatementForQueryString:(id)arg1;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (void)handleError:(id)arg1 message:(id)arg2;
- (_Bool)executeInsertStatement:(id)arg1 error:(id *)arg2;
- (_Bool)checkForConnectionErrorWithMessage:(id)arg1;
- (_Bool)executeDeleteStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executeUpdateStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executeStatementString:(id)arg1 errorMessage:(id)arg2;
- (_Bool)executeSelectStatement:(id)arg1 withBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)performUsingTransaction:(_Bool)arg1 isWriter:(_Bool)arg2 transactionError:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)databaseIsAttached:(id)arg1;
- (_Bool)columnExists:(id)arg1 inTable:(id)arg2 type:(unsigned long long *)arg3;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 isWriter:(_Bool)arg3 delegate:(id)arg4;
- (_Bool)attachProtectedDatabaseWithName:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (_Bool)detachProtectedDatabase;
- (int)configureSQLConnection;
- (long long)transactionTypeForWriting;
- (_Bool)executeInsertStatement:(id)arg1 rowsChanged:(unsigned long long *)arg2;
- (id)_databasePathForFileName:(id)arg1;
- (long long)_adjustedDatabaseTypeForType:(long long)arg1;
- (_Bool)_executePreparedStatement:(id)arg1 withBlock:(CDUnknownBlockType)arg2 description:(id)arg3 error:(id *)arg4;
- (_Bool)executeUpsertStatement:(id)arg1 error:(id *)arg2;
- (void)_fixFilePermissionForPath:(const char *)arg1;
- (_Bool)detachJournalDatabase;
- (_Bool)_startTransactionWithSQLConnection:(id)arg1 forWriting:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_finishTransactionWithSQLConnection:(id)arg1 afterSuccess:(_Bool)arg2 transactionError:(id *)arg3;
- (_Bool)_fetchTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long *)arg2;
- (_Bool)_storeTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long)arg2;
- (_Bool)tableExists:(id)arg1 inDatabase:(id)arg2;
- (_Bool)columnExists:(id)arg1 inTable:(id)arg2 database:(id)arg3 type:(unsigned long long *)arg4;
- (_Bool)_attachDatabaseWithName:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (_Bool)attachProtectedDatabaseWithName:(id)arg1 error:(id *)arg2;
- (_Bool)_detachDatabaseWithName:(id)arg1;
- (_Bool)attachJournalDatabase:(id)arg1 withName:(id)arg2 error:(id *)arg3;
- (id)initForInMemoryDatabaseIsWriter:(_Bool)arg1 delegate:(id)arg2;
- (id)initWithSQLDB:(struct sqlite3 *)arg1 isWriter:(_Bool)arg2 delegate:(id)arg3;
- (_Bool)executeUpdateStatement:(id)arg1 rowsChanged:(unsigned long long *)arg2;
- (_Bool)executeUpsertStatement:(id)arg1 rowsChanged:(unsigned long long *)arg2;
- (_Bool)executeDeleteStatement:(id)arg1 rowsChanged:(unsigned long long *)arg2;
- (void)clearLastInsertedDatabaseID;
- (_Bool)attachProtectedDatabaseWithName:(id)arg1;
- (_Bool)attachJournalDatabase:(id)arg1 withName:(id)arg2;

@end
