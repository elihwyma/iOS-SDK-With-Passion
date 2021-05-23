/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepositoryObject.h>

@class EFFuture, EFPromise, EFQuery, NSMutableOrderedSet, NSOrderedSet, NSString;

@protocol EFCancelable, EFScheduler, EMCollectionChangeObserver;

@interface EMCollection : EMRepositoryObject

{
    NSMutableOrderedSet *_itemIDs;
    NSOrderedSet *_recoveringItemIDs;
    EFPromise *_allItemIDsPromise;
    struct os_unfair_lock_s _itemIDsLock;
    _Bool _foundAllItemIDs;
    EFQuery *_query;
    id <EFCancelable> _cancelationToken;
    id <EMCollectionChangeObserver> _changeObserver;
    id <EFScheduler> _queryScheduler;
    id <EFScheduler> _observerScheduler;
}

@property (retain, nonatomic) id <EFCancelable> cancelationToken;
@property (weak, nonatomic) id <EMCollectionChangeObserver> changeObserver;
@property (nonatomic, readonly) id <EFScheduler> queryScheduler;
@property (nonatomic, readonly) id <EFScheduler> observerScheduler;
@property (nonatomic, readonly) EFQuery *query;
@property (nonatomic, readonly) EFFuture *allItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (_Bool)supportsSecureCoding;
+ (id)log;
+ (id)signpostLog;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)stopObserving:(id)arg1;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (void)beginObserving:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (void)_commonInitWithQuery:(id)arg1;
- (void)_performQueryIfNeeded;
- (void)_cancelQuery;
- (void)_performQuery;
- (_Bool)isRecovering;
- (void)insertItemIDs:(id)arg1 before:(id)arg2;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)_filterAndTransformObjectIDs:(id)arg1 before:(_Bool)arg2 existingObjectID:(id)arg3 batchBlock:(CDUnknownBlockType)arg4;
- (void)insertItemIDs:(id)arg1 after:(id)arg2;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (id)_itemIDsForObjectIDs:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (void)removeItemIDs:(id)arg1;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (void)finishRecovery;
- (void)_cancelQueryIfNeeded;
- (_Bool)objectIDBelongsToCollection:(id)arg1;
- (_Bool)containsItemID:(id)arg1 includeRecovery:(_Bool)arg2;
- (id)objectIDForItemID:(id)arg1;
- (id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)queryDidStartRecovery;
- (void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedChangesByObjectIDs:(id)arg1;
- (void)queryMatchedDeletedObjectIDs:(id)arg1;
- (void)queryDidFinishInitialLoad;
- (void)queryDidFinishRemoteSearch;
- (_Bool)observerContainsObjectID:(id)arg1;
- (void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2;

@end
