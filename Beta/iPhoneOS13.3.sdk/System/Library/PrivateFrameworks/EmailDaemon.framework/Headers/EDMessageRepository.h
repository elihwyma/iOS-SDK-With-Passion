/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDConversationPersistence, EDFetchController, EDMailboxPersistence, EDMailboxPredictionController, EDMessageChangeManager, EDMessagePersistence, EDPersistenceHookRegistry, EDThreadPersistence, EDVIPManager, NSConditionLock, NSHashTable, NSMutableDictionary, NSString;

@protocol EDRemoteSearchProvider, EMUserProfileProvider, OS_dispatch_queue;

@interface EDMessageRepository : NSObject

{
    EDMailboxPredictionController *_mailboxPredictionController;
    struct os_unfair_lock_s _mailboxPredictionControllerLock;
    struct os_unfair_lock_s _handlersLock;
    NSMutableDictionary *_queryHandlers;
    NSMutableDictionary *_threadQueryHandlers;
    NSHashTable *_handlerTokens;
    EDPersistenceHookRegistry *_hookRegistry;
    EDMessagePersistence *_messagePersistence;
    EDConversationPersistence *_conversationPersistence;
    EDThreadPersistence *_threadPersistence;
    EDMessageChangeManager *_messageChangeManager;
    NSConditionLock *_performQueryOnSerializationQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    EDMailboxPersistence *_mailboxPersistence;
    id <EMUserProfileProvider> _userProfileProvider;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDFetchController *_fetchController;
}

@property (retain, nonatomic) NSMutableDictionary *queryHandlers;
@property (retain, nonatomic) NSMutableDictionary *threadQueryHandlers;
@property (retain, nonatomic) NSHashTable *handlerTokens;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDConversationPersistence *conversationPersistence;
@property (retain, nonatomic) EDThreadPersistence *threadPersistence;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (nonatomic, readonly) NSConditionLock *performQueryOnSerializationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serializationQueue;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) id <EMUserProfileProvider> userProfileProvider;
@property (nonatomic, readonly) EDVIPManager *vipManager;
@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (nonatomic, readonly) EDFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (void)dealloc;
- (unsigned long long)signpostID;
- (void)accountBecameActive:(id)arg1;
- (void)accountBecameInactive:(id)arg1;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)test_tearDown;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCountQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1;
- (void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1 conversationPersistence:(id)arg2 threadPersistence:(id)arg3 messageChangeManager:(id)arg4 hookRegistry:(id)arg5 mailboxPersistence:(id)arg6 remoteSearchProvider:(id)arg7 userProfileProvider:(id)arg8 vipManager:(id)arg9 fetchController:(id)arg10;
- (void)cancelAllHandlers;
- (void)_resetUpdateThrottlersWithLogMessage:(id)arg1;
- (void)_performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_triggerMigrationWithThreadScopesMatcher:(CDUnknownBlockType)arg1;
- (void)_triggerMigrationForThreadScopes:(id)arg1;
- (id)_partitionObjectIDs:(id)arg1;
- (void)_enumerateThreadsByThreadObjectIDsByScope:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_performMessageFlagChangeAllAction:(id)arg1;
- (id)_performMessageFlagChangeAction:(id)arg1 returnUndoAction:(_Bool)arg2;
- (void)_performMessageTransferAllAction:(id)arg1;
- (void)_performMessageTransferAllActionToSpecialMailbox:(id)arg1;
- (id)_performMessageTransferAction:(id)arg1 returnUndoAction:(_Bool)arg2;
- (id)_performMessageTransferActionToSpecialMailbox:(id)arg1 returnUndoAction:(_Bool)arg2;
- (void)_performMessageDeleteAction:(id)arg1;
- (void)_performMessageDeleteAllAction:(id)arg1;
- (void)_performMessageConversationFlagChangeAction:(id)arg1;
- (id)_performUndoAction:(id)arg1;
- (id)_persistedMessagesForMessageChangeAction:(id)arg1;
- (id)_changeFlagsForPersistedMessages:(id)arg1 flagChange:(id)arg2 returnUndoAction:(_Bool)arg3;
- (id)_undoActionsForMovedMessages:(id)arg1;
- (id)_persistedMessagesForObjectIDs:(id)arg1;
- (id)mailboxPredictionController;
- (void)threadQueryHandlerStateDidChange:(id)arg1;

@end
