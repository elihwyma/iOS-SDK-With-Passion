/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

@class EDMessageQueryHelper, EDThreadReloadSummaryHelper, EDUpdateThrottler, EDVIPManager, EMCollectionItemIDStateCapturer, EMMailboxScope, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString;

@protocol EDRemoteSearchProvider, EFScheduler, EMMessageListItemQueryResultsObserver, OS_dispatch_queue;

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler

{
    NSMutableOrderedSet *_conversationIDs;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_changesWhilePaused;
    NSMutableDictionary *_oldestThreadsByMailboxObjectIDs;
    struct os_unfair_lock_s _threadsLock;
    _Bool _didCancel;
    _Bool _isInitialized;
    _Bool _isPaused;
    _Bool _hasChangesWhilePaused;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDMessageQueryHelper *_messageQueryHelper;
    NSArray *_messageSortDescriptors;
    CDUnknownBlockType _comparator;
    EDUpdateThrottler *_updateThrottler;
    EDThreadReloadSummaryHelper *_reloadSummaryHelper;
    id <EFScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSObject<OS_dispatch_queue> *_resultQueue;
    EMMailboxScope *_mailboxScope;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (nonatomic, readonly) EDVIPManager *vipManager;
@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (nonatomic, readonly) id <EMMessageListItemQueryResultsObserver> resultsObserverIfNotPaused;
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (copy, nonatomic, readonly) NSArray *messageSortDescriptors;
@property (nonatomic, readonly) CDUnknownBlockType comparator;
@property (nonatomic, readonly) EDUpdateThrottler *updateThrottler;
@property (nonatomic, readonly) EDThreadReloadSummaryHelper *reloadSummaryHelper;
@property (nonatomic, readonly) id <EFScheduler> scheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) _Bool didCancel;
@property (nonatomic) _Bool isInitialized;
@property (nonatomic) _Bool isPaused;
@property (nonatomic) _Bool hasChangesWhilePaused;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)tearDown;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)test_tearDown;
- (id)labelForStateCapture;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (void)_blockedSendersDidChange:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (id)_inMemoryThreadSortDescriptorsForThreadSortDescriptors:(id)arg1;
- (void)_createHelperAndReconcileJournal:(_Bool)arg1;
- (void)_refreshObserver;
- (void)_notifyObserverOfOldestThreadsByMailboxObjectIDs;
- (id)_messageQueryFromThreadsQuery:(id)arg1;
- (void)_contentProtectionChangedToUnlocked;
- (void)_contentProtectionChangedToLocked;
- (void)_restartHelper;
- (_Bool)_queryHelperIsCurrent:(id)arg1;
- (void)_messagesWereAdded:(id)arg1;
- (void)_initializeOldestThreadsByMailbox;
- (id)_messagesByConversationIDForMessages:(id)arg1;
- (_Bool)_messageListItemChangeAffectsSorting:(id)arg1;
- (void)_prepareToSendUpdates;
- (_Bool)_reportChanges:(id)arg1;
- (_Bool)_mergeInThreads:(id)arg1 forMove:(_Bool)arg2;
- (void)_didSendUpdates;
- (void)_messagesWereChanged:(id)arg1 forKeyPaths:(id)arg2 deleted:(_Bool)arg3;
- (_Bool)_reportDeletes:(id)arg1;
- (_Bool)_removeThreadsForInMemoryThreads:(id)arg1 forMove:(_Bool)arg2;
- (_Bool)_didMergeInThreads:(id)arg1;
- (_Bool)_threadsWereDeleted;
- (_Bool)_updateOldestThreadsForMailboxes:(id)arg1;
- (_Bool)_updateCurrentOldestThreadWithThreadIfApplicable:(id)arg1 forMailbox:(id)arg2;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 remoteSearchProvider:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7;
- (id)threadForObjectID:(id)arg1 error:(id *)arg2;
- (id)messagesForThread:(id)arg1;

@end
