/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterLock, NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet;

@protocol FCTagRanking;

@interface FCSubscriptionList : FCPrivateDataController

{
    NSOrderedSet *_orderedSubscribedTagIDs;
    NSSet *_subscribedTagIDs;
    NSSet *_mutedTagIDs;
    NSSet *_autoFavoriteTagIDs;
    NSSet *_groupableTagIDs;
    NSSet *_ignoredTagIDs;
    id <FCTagRanking> _subscribedTagRanker;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterLock *_itemsLock;
}

@property (copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs;
@property (copy, nonatomic) NSSet *subscribedTagIDs;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (copy, nonatomic) NSSet *groupableTagIDs;
@property (copy, nonatomic) NSSet *ignoredTagIDs;
@property (retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID;
@property (retain, nonatomic) FCMTWriterLock *itemsLock;
@property (copy, nonatomic, readonly) NSSet *allSubscribedTagIDs;
@property (retain, nonatomic) id <FCTagRanking> subscribedTagRanker;
@property (copy, nonatomic, readonly) NSDictionary *subscriptionsBySubscriptionID;

+ (id)desiredKeys;
+ (_Bool)requiresPushNotificationSupport;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (void)handleSyncCompletion;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)canAddSubscription;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(_Bool)arg5 eventInitiationLevel:(long long)arg6;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2;
- (_Bool)hasNotificationsEnabledForTagID:(id)arg1;
- (_Bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5;
- (_Bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 eventInitiationLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_reconcileSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (id)_subscriptionFromRecord:(id)arg1;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (id)_newSubscriptionOrder;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 groupID:(id)arg4 notificationsEnabled:(_Bool)arg5 eventInitiationLevelProvider:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_removeRemoteSubscriptions:(id)arg1;
- (void)_removeRemoteSubscription:(id)arg1;
- (long long)_orderOfHighestRankedTagSubscription;
- (_Bool)hasSubscriptionForTagID:(id)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;

@end
