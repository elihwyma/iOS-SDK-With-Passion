/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepository.h>

@class EMBlockedSenderManager, EMMailboxRepository, EMRemoteConnection, NSArray, NSCache, NSHashTable, NSMapTable, NSString;

@protocol EMVIPManager;

@interface EMMessageRepository : EMRepository

{
    NSMapTable *_observedMessageListItemCache;
    NSMapTable *_unobservedMessageListItemCache;
    NSHashTable *_actualObservers;
    NSHashTable *_recoverableObservers;
    struct os_unfair_lock_s _messageListItemCacheLock;
    struct os_unfair_lock_s _observersLock;
    EMRemoteConnection *_connection;
    id <EMVIPManager> _vipManager;
    EMBlockedSenderManager *_blockedSenderManager;
    NSCache *_queryCountCache;
    EMMailboxRepository *_mailboxRepository;
}

@property (retain) EMRemoteConnection *connection;
@property (copy, readonly) NSArray *currentObservers;
@property (nonatomic, readonly) id <EMVIPManager> vipManager;
@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (retain, nonatomic) NSCache *queryCountCache;
@property (nonatomic, readonly) EMMailboxRepository *mailboxRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (unsigned long long)signpostID;
- (id)initInternal;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (id)performMessageChangeActionReturningUndoAction:(id)arg1;
- (void)performMessageChangeAction:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCountQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4;
- (id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2;
- (void)_blockedSendersDidChange:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (void)_notifyRecoverableObservers;
- (id)_existingObservedItemForObjectID:(id)arg1;
- (id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(CDUnknownBlockType)arg3;
- (_Bool)_anyObserver:(id)arg1 containsObjectID:(id)arg2;
- (void)_updateObserversForChangeAction:(id)arg1;
- (id)_undoActionForConversationAction:(id)arg1;
- (id)_predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_broadcastMessageListItemChangesToObservers:(CDUnknownBlockType)arg1;
- (void)_applyChangesToCachedObjects:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1;
- (id)messageForObjectID:(id)arg1;
- (id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3;
- (void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2;
- (void)resetPrecomputedThreadScopesForMailboxType:(long long)arg1;
- (void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg1;
- (void)resetAllPrecomputedThreadScopes;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(CDUnknownBlockType)arg3;

@end
