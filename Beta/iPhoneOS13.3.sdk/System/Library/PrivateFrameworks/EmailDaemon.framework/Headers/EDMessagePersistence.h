/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMailboxPersistence, EDPersistenceDatabase, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface EDMessagePersistence : NSObject

{
    int _cachedMetadataUpdatesSinceLastCheck;
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_cachedMetadataIsolation;
    NSNumber *_cachedMetadataEstimatedRowCount;
    EDPersistenceDatabase *_database;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cachedMetadataIsolation;
@property (retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount;
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (weak, nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)messagesTableName;
+ (id)_messageReferencesTableSchema;
+ (id)recipientsTableSchemaAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)attachmentsTableSchemaAndForeignKeysToResolve:(id *)arg1;
+ (id)partialMessagesTableSchemaAndAssociationsToResolve:(id *)arg1;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)bitExpressionForConversationFlag:(unsigned long long)arg1;
+ (id)bitExpressionForAttachments;
+ (id)_cachedMetadataTableSchema;
+ (id)attachmentsTableName;
+ (id)addressesTableSchema;
+ (id)subjectsTableSchema;
+ (id)summariesTableSchema;
+ (id)protectedMessageDataTableSchema;
+ (id)addressesTableName;
+ (id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)arg1;

- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)enabledAccountMailboxesExpression;
- (id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg1;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2;
- (id)queryWithExpandedMailboxesFromQuery:(id)arg1;
- (id)persistedMessagesForMessageObjectIDs:(id)arg1 requireProtectedData:(_Bool)arg2 temporarilyUnavailableMessageObjectIDs:(id *)arg3;
- (long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(_Bool)arg2 temporarilyUnavailableDatabaseIDs:(id *)arg3;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(_Bool)arg2;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)cachedDatabaseIDsDictionaryForMessageIDHashes:(id)arg1;
- (id)validMailboxesForPrediction;
- (void)performDatabaseReadBlock:(CDUnknownBlockType)arg1;
- (id)databaseIDsDictionaryForMessageObjectIDs:(id)arg1;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3;
- (id)_groupMessageObjectIDsByMailboxScope:(id)arg1;
- (id)_databaseIDsDictionaryForMessageIDHashes:(id)arg1 mailboxScope:(id)arg2;
- (id)_threadQueryForThreadObjectID:(id)arg1;
- (id)persistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (id)_cachedMetadataJSONForKey:(id)arg1 messageIDHash:(id)arg2;
- (void)_setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageIDHash:(id)arg3;
- (void)_checkCachedMetadataRowLimitWithConnection:(id)arg1;
- (id)messagesMatchingQuery:(id)arg1;
- (id)persistedMessagesForObjectIDs:(id)arg1 requireProtectedData:(_Bool)arg2;
- (id)messagesForMessageObjectIDs:(id)arg1 missedMessageObjectIDs:(id *)arg2;

@end
