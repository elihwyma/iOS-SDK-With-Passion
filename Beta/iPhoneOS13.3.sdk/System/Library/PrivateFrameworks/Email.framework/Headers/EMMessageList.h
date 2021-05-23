/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMCollection.h>

#import <Email/Swift-Protocol.h>

@class EFLazyCache, EMCollectionItemIDStateCapturer, EMMailboxScope, EMMessageListChangeObserverHelper, EMMessageRepository, EMObjectID, EMThreadScope, NSMapTable, NSMutableDictionary, NSObject, NSSet, NSString;

@protocol EFScheduler, OS_dispatch_queue;

@interface EMMessageList : EMCollection <Swift>

{
    NSMutableDictionary *_expandedThreads;
    NSMapTable *_messageListItemsForRetry;
    struct os_unfair_lock_s _expandedThreadsLock;
    EMMailboxScope *_mailboxScope;
    EMThreadScope *_threadScope;
    EFLazyCache *_cache;
    id <EFScheduler> _observerScheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    EMMessageList *_unfilteredMessageList;
    EMMessageListChangeObserverHelper *_changeObserverHelper;
    NSSet *_recentlyCollapsedItemIDs;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (nonatomic, readonly) EMMessageRepository *repository;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) EFLazyCache *cache;
@property (nonatomic, readonly) id <EFScheduler> observerScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (retain, nonatomic) EMMessageList *unfilteredMessageList;
@property (retain, nonatomic) EMMessageListChangeObserverHelper *changeObserverHelper;
@property (retain, nonatomic) NSSet *recentlyCollapsedItemIDs;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (nonatomic, readonly) _Bool isThreaded;
@property (copy, readonly) NSSet *expandedThreadItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) EMObjectID *objectID;

+ (id)log;
+ (id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(_Bool)arg3;
+ (id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(_Bool)arg3;

- (void)dealloc;
- (void)stopObserving:(id)arg1;
- (id)ef_publicDescription;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (id)messageListItemForItemID:(id)arg1;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;
- (void)collectionDidFinishInitialLoad:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (id)itemIDForObjectID:(id)arg1;
- (void)removeItemIDs:(id)arg1;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (void)finishRecovery;
- (_Bool)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedChangesByObjectIDs:(id)arg1;
- (id)labelForStateCapture;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)initWithMailboxes:(id)arg1 repository:(id)arg2 targetClass:(Class)arg3 shouldTrackOldestItems:(_Bool)arg4 labelPrefix:(id)arg5;
- (void)_commonInitWithRepository:(id)arg1;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2 itemIDsWithCountChanges:(id)arg3;
- (id)_unreadItemIDsFromExtraInfo:(id)arg1;
- (id)messageListItemsForItemIDs:(id)arg1;
- (void)expandThread:(id)arg1;
- (id)messageListItemForItemID:(id)arg1 ifAvailable:(_Bool)arg2;
- (id)messageListItemsForItemIDs:(id)arg1 ifAvailable:(_Bool)arg2;
- (id)_availableMessageListItemsForItemIDs:(id)arg1;
- (void)_attemptToFinishRetryingPromisesByItemID:(id)arg1;
- (_Bool)_threadIsExpanded:(id)arg1;
- (id)_nextThreadItemIDAfterThreadItemID:(id)arg1;
- (id)_expandedObjectIDsForObjectIDs:(id)arg1;
- (void)collapseThread:(id)arg1;
- (_Bool)_threadIsExpandedForItemID:(id)arg1;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)arg1;
- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2 repository:(id)arg3;
- (id)filteredMessageListWithPredicate:(id)arg1;
- (void)expandThreadsFromThreadItemIDs:(id)arg1;
- (_Bool)anyExpandedThreadContainsItemID:(id)arg1;
- (_Bool)recentlyCollapsedThreadContainsItemID:(id)arg1;
- (void)clearRecentlyCollapsedThread;
- (void)invalidateCacheForItemIDs:(id)arg1;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg1;

@end
