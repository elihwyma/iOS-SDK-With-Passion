/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, EDPersistenceDatabase, EDPersistenceHookRegistry, EDThreadScopeManager, EFDebouncer, EMBlockedSenderManager, NSMutableArray, NSMutableSet, NSString;

@protocol EFScheduler, EMVIPManager;

@interface EDThreadPersistence : NSObject

{
    NSMutableSet *_threadObjectIDsToRecompute;
    struct os_unfair_lock_s _threadRecomputationLock;
    NSMutableArray *_migratingThreadScopes;
    struct os_unfair_lock_s _migratingThreadScopesLock;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceDatabase *_database;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMVIPManager> _vipManager;
    EMBlockedSenderManager *_blockedSenderManager;
    EDThreadScopeManager *_threadScopeManager;
    id <EFScheduler> _reconciliationCleanupScheduler;
    id <EFScheduler> _threadRecomputationScheduler;
    EFDebouncer *_threadRecomputationDebouncer;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) id <EMVIPManager> vipManager;
@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (nonatomic, readonly) EDThreadScopeManager *threadScopeManager;
@property (retain, nonatomic) id <EFScheduler> reconciliationCleanupScheduler;
@property (retain, nonatomic) id <EFScheduler> threadRecomputationScheduler;
@property (retain, nonatomic) EFDebouncer *threadRecomputationDebouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)log;
+ (id)signpostLog;
+ (id)threadSendersTableSchema;
+ (id)threadRecipientsTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)threadScopesTableSchema;
+ (id)threadsTableSchema;
+ (id)threadMailboxesTableSchema;

- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMessages:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsDeletingAllMessagesInMailboxWithURL:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillReplaceDatabaseID:(long long)arg1 with:(long long)arg2 forTable:(id)arg3 column:(id)arg4;
- (void)persistenceDidReconcileProtectedData;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;
- (id)initWithMessagePersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 blockedSenderManager:(id)arg5;
- (void)persistenceIsInitializingDatabaseWithConnection:(id)arg1;
- (void)resetThreadScopedForActivatedAccount:(id)arg1;
- (CDUnknownBlockType)threadScopeMatcherForActivatedAccount:(id)arg1;
- (id)resetThreadScopesForDeactivatedAccount:(id)arg1;
- (void)setNeedsUpdateForThreadScope:(id)arg1;
- (void)resetThreadScopesForMailboxScope:(id)arg1;
- (void)updateLastViewedDateForThreadScope:(id)arg1;
- (void)threadObjectIDsForThreadScope:(id)arg1 sortDescriptors:(id)arg2 initialBatchSize:(unsigned long long)arg3 journaledObjectIDs:(id)arg4 batchBlock:(CDUnknownBlockType)arg5;
- (id)threadForObjectID:(id)arg1 originatingQuery:(id)arg2 error:(id *)arg3;
- (id)threadObjectIDBeforeThreadObjectID:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3;
- (id)threadObjectIDsByNextExistingForThreadObjectIDs:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3;
- (id)changeForThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;
- (id)oldestThreadObjectIDForMailbox:(id)arg1 threadScope:(id)arg2;
- (_Bool)beginMigratingThreadScope:(id)arg1;
- (_Bool)addThreads:(id)arg1;
- (_Bool)endMigratingThreadScope:(id)arg1;
- (_Bool)deleteThreadsWithObjectIDs:(id)arg1;
- (void)_recomputeThreads;
- (_Bool)_isThreadScopePrecomputed:(id)arg1 shouldMigrate:(_Bool *)arg2;
- (_Bool)_enumerateThreadObjectIDsForThreadScope:(id)arg1 filterClause:(id)arg2 sortDescriptors:(id)arg3 batchBlock:(CDUnknownBlockType)arg4;
- (void)_addOrderByToThreadSelect:(id)arg1 forSortDescriptors:(id)arg2;
- (long long)_databaseIDForThreadObjectID:(id)arg1;
- (id)_mailboxesForThreadDatabaseID:(id)arg1;
- (id)_sendersForThreadDatabaseID:(id)arg1;
- (id)_sendersFromMessagesForThreadObjectID:(id)arg1;
- (id)_recipientsOfType:(unsigned long long)arg1 forThreadDatabaseID:(id)arg2;
- (id)_recipientsOfType:(unsigned long long)arg1 fromMessagesForThreadObjectID:(id)arg2;
- (void)_scheduleRecomputationForThread:(id)arg1 reason:(id)arg2;
- (id)_nonJournaledSubjectForThreadWithObjectID:(id)arg1 connection:(id)arg2;
- (id)_flagColorsFromRow:(id)arg1;
- (id)_messageThreadExpressionForThreadObjectID:(id)arg1;
- (id)_addressesFromSelectStatement:(id)arg1;
- (id)_senderAddressesExpressionForMessages:(id)arg1;
- (id)_addressesFromMessageAddressesStatement:(id)arg1;
- (id)_recipientAddressesExpressionForRecipientType:(unsigned long long)arg1 messages:(id)arg2;
- (id)_threadExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;
- (id)_comparisonExpressionForSortDescriptors:(id)arg1 conversationID:(long long)arg2 threadExpression:(id)arg3 threadScopeDatabaseID:(long long)arg4 connection:(id)arg5;
- (id)_senderDatabaseIDsAndDatesForMessages:(id)arg1;
- (id)_recipientDatabaseIDsAndDatesForMessages:(id)arg1 recipientType:(unsigned long long)arg2;
- (id)_threadDatabaseIDExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;
- (id)_messageThreadExpressionForThreadScope:(id)arg1 objectIDs:(id)arg2;
- (id)_persistedMessagesForMailboxScope:(id)arg1 messageExpression:(id)arg2;
- (void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 writeBlock:(CDUnknownBlockType)arg2;
- (_Bool)_addThreadScopeToDatabaseWithMailboxType:(id)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3 connection:(id)arg4;
- (id)_threadScopedToResetForActivatedAccount:(id)arg1;
- (void)_resetThreadScope:(id)arg1 withDatabaseID:(id)arg2;
- (void)_enumerateThreadScopesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_addedMailboxObjectIDsForActivatedAccount:(id)arg1;
- (void)_getIndividualMailboxScopes:(id *)arg1 unifiedMailboxThreadScopes:(id *)arg2 forAccount:(id)arg3;
- (_Bool)_addThreadScopeToDatabase:(id)arg1 withMailboxDatabaseID:(long long)arg2 needsUpdate:(_Bool)arg3 connection:(id)arg4;
- (void)_addPersistedMessages:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;
- (id)_filteredPersistedMessagesForPersistedMessages:(id)arg1;
- (void)_persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;
- (void)_persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (id)_persistenceIsChangingFlags:(id)arg1 wrappedMessages:(id)arg2 threadObjectID:(id)arg3 threadScopeDatabaseID:(long long)arg4;
- (void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_updateNewestReadMessageWithWrappedMessage:(id)arg1 threadExpression:(id)arg2;
- (id)_recalculateDisplayMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;
- (_Bool)_recalculateNewestReadMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;
- (id)_deleteWrappedMessages:(id)arg1 fromThreadWithObjectID:(id)arg2 threadScopeDatabaseID:(long long)arg3 generationWindow:(id)arg4;
- (id)_updateThreadForDeleteWithObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 generationWindow:(id)arg3;
- (_Bool)_deleteMailboxesFromWrappedMessages:(id)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3;
- (id)_updateBasicPropertiesAfterDeleteForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2;
- (_Bool)_deleteSendersFromThreadWithDatabaseID:(id)arg1 messageThreadExpression:(id)arg2;
- (_Bool)_deleteRecipientsOfType:(unsigned long long)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3;
- (id)_upsertForThreadsWithThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2;
- (id)_countMessagesForExpression:(id)arg1;
- (void)_addKeyPathsForBasicPropertiesChangeToKeyPaths:(id)arg1;
- (id)_mailboxDatabaseIDsForWrappedMessages:(id)arg1;
- (void)_deleteAllMessagesInThreadScope:(id)arg1 withDatabaseID:(id)arg2 generationWindow:(id)arg3;
- (void)_updateAllThreadsAfterDeleteInThreadScope:(id)arg1 withDatabaseID:(id)arg2 generationWindow:(id)arg3;
- (id)_threadForWrappedMessages:(id)arg1 objectID:(id)arg2;
- (_Bool)_messagesAreJournaledForThreadWithObjectID:(id)arg1;
- (_Bool)_setPriorityForDisplayMessageSenderForThreadObjectID:(id)arg1;
- (id)_wrappedMessagesByThreadScopeForPersistedMessages:(id)arg1;
- (id)_expressionForThreadScope:(id)arg1;
- (id)_persistedMessagesByPossibleThreadScopeForPersistedMessages:(id)arg1;
- (id)_wrappedMessageForPersistedMessages:(id)arg1 threadScope:(id)arg2;
- (id)_threadQueryForThreadScope:(id)arg1;
- (void)_addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;
- (id)_messageThreadExpressionForThreadScope:(id)arg1 conversationExpression:(id)arg2;
- (id)_messageMailboxesExpressionForMailboxScope:(id)arg1;
- (id)_messageFilterExpressionForFilterPredicate:(id)arg1;
- (id)_statementForOldestThreadInMailbox:(id)arg1 threadScope:(id)arg2 createMailboxDatabaseIDIfNecessary:(_Bool)arg3;
- (_Bool)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2;
- (_Bool)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2;
- (void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(CDUnknownBlockType)arg2;
- (void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)persistenceStateForThreadScope:(id)arg1;
- (id)_senderDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1;
- (id)_senderDatabaseIDsAndDatesForWrappedMessages:(id)arg1;
- (id)_recipientDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1 recipientType:(unsigned long long)arg2;
- (id)_recipientDatabaseIDsAndDatesForWrappedMessages:(id)arg1 recipientType:(unsigned long long)arg2;
- (id)_inactiveMailboxDatabaseIDsForMailboxScope:(id)arg1 forThreadScopeDatabaseID:(id)arg2;
- (_Bool)_updateDisplayMessageWithUnreadWrappedMessages:(id)arg1 threadExpression:(id)arg2;

@end
