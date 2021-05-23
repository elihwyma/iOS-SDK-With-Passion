/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabase, EDPersistenceDatabaseJournalManager, EDPersistenceHookRegistry, NSString;

@protocol OS_dispatch_queue;

@interface EDProtectedDatabasePersistence : NSObject

{
    struct os_unfair_lock_s _initializationLock;
    struct os_unfair_lock_s _reconciliationLock;
    EDPersistenceDatabase *_database;
    _Bool _isInitialized;
    _Bool _isReconciling;
    EDPersistenceDatabaseJournalManager *_journalManager;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_reconciliationQueue;
}

@property (nonatomic, readonly) EDPersistenceDatabaseJournalManager *journalManager;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *reconciliationQueue;
@property (nonatomic) _Bool isInitialized;
@property (nonatomic) _Bool isReconciling;
@property (nonatomic, readonly) _Bool supportsJournaling;
@property (nonatomic, readonly) _Bool protectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)log;
+ (id)signpostLog;
+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (void)setDatabase:(id)arg1;
- (id)database;
- (_Bool)_isRecoverableError:(id)arg1;
- (void)scheduleRecurringActivity;
- (id)initWithBasePath:(id)arg1 hookRegistry:(id)arg2;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg1 withSchema:(id)arg2;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg1;
- (void)reconcileJournalsWithSchema:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithJournalManager:(id)arg1 hookRegistry:(id)arg2;
- (_Bool)_performOnDemandReconciliationForConnection:(id)arg1 withSchema:(id)arg2;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_ensureJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (_Bool)_attachProtectedDatabaseToConnection:(id)arg1 withSchema:(id)arg2 error:(id *)arg3;
- (void)_attachJournalDatabaseToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_detachProtectedDatabaseFromConnection:(id)arg1;
- (void)_detachJournalDatabaseFromConnection:(id)arg1;
- (_Bool)_initializeDatabase:(id)arg1 withConnection:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (_Bool)_updateSqliteSequenceForDatabase:(id)arg1 schema:(id)arg2 withConnection:(id)arg3 error:(id *)arg4;
- (id)_allReferencingColumnsForTable:(id)arg1;
- (long long)_maxRowIDForColumn:(id)arg1 withConnection:(id)arg2;
- (unsigned long long)_reconcileJournalsWithSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_runReconciliationWithSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_resultForConnection:(id)arg1 success:(_Bool)arg2 error:(id)arg3 errorMessage:(id)arg4;
- (unsigned long long)_mergeSchema:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long *)arg3 newRows:(unsigned long long *)arg4;
- (_Bool)_isJournalMalformedForSchema:(id)arg1 connection:(id)arg2;
- (unsigned long long)_mergeTable:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long *)arg3 newRows:(unsigned long long *)arg4;
- (unsigned long long)_executeStatementString:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (unsigned long long)_deleteRowIDs:(id)arg1 fromJournal:(id)arg2 withConnection:(id)arg3;
- (id)_databaseIDsToDeleteForTable:(id)arg1;
- (void)_deleteDatabaseIDs:(id)arg1 fromTable:(id)arg2;
- (_Bool)_removeExistingDatabaseIDs:(id)arg1 withColumn:(id)arg2 connection:(id)arg3;
- (unsigned long long)_executeUpdateStatement:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;

@end
