/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDMessagePersistence, EDMessageQueryEvaluator, EDPersistenceHookRegistry, EFCancelationToken, EFQuery, NSMutableSet, NSString;

@protocol EDMessageQueryHelperDelegate, EDRemoteSearchProvider, EFScheduler;

@interface EDMessageQueryHelper : NSObject <Swift>

{
    struct atomic_flag _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    struct os_unfair_lock_s _noLongerMatchingMessagesLock;
    _Bool _shouldReconcileJournal;
    EFQuery *_query;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    id <EFScheduler> _scheduler;
    id <EDMessageQueryHelperDelegate> _delegate;
    EDMessageQueryEvaluator *_queryEvaluator;
    EFCancelationToken *_cancelationToken;
    NSString *_pendingFlagChangesKey;
    NSString *_pendingConversationIDChangesKey;
    NSString *_pendingJournaledMessageAddsKey;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (nonatomic, readonly) id <EFScheduler> scheduler;
@property (weak, nonatomic, readonly) id <EDMessageQueryHelperDelegate> delegate;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (nonatomic) _Bool shouldReconcileJournal;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingJournaledMessageAddsKey;
@property (nonatomic, readonly) EFQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillChangeConversationID:(long long)arg1 messages:(id)arg2;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMessages:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidReconcileJournaledMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 scheduler:(id)arg5 delegate:(id)arg6 shouldReconcileJournal:(_Bool)arg7;
- (id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;
- (void)_getInitialResults;
- (id)_transformAndFilterMessages:(id)arg1 includeDeleted:(_Bool)arg2;
- (void)_foundMessages:(id)arg1;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(_Bool)arg2;
- (void)remoteSearchDidFindMessages:(id)arg1;
- (void)remoteSearchDidFinish;

@end
