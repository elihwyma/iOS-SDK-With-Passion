/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCNotificationController, FCSubscriptionList, FCTagController, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSHashTable, NSString;

@protocol FCCoreConfigurationManager, FCPurchaseProviderType;

@interface FCSubscriptionController : NSObject

{
    FCSubscriptionList *_subscriptionList;
    FCTagController *_tagController;
    FCThreadSafeMutableDictionary *_subscribedTagsByTagID;
    FCThreadSafeMutableSet *_newlyAddedSubscriptions;
    NSHashTable *_observers;
    FCNotificationController *_notificationController;
    id <FCPurchaseProviderType> _purchaseProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (retain, nonatomic) FCSubscriptionList *subscriptionList;
@property (retain, nonatomic) FCTagController *tagController;
@property (retain, nonatomic) FCThreadSafeMutableDictionary *subscribedTagsByTagID;
@property (retain, nonatomic) FCThreadSafeMutableSet *newlyAddedSubscriptions;
@property (copy, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) FCNotificationController *notificationController;
@property (retain, nonatomic) id <FCPurchaseProviderType> purchaseProvider;
@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)subscriptions;
- (id)mutedTagIDs;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (id)autoFavoriteTagIDs;
- (_Bool)addSubscriptionToTag:(id)arg1 error:(id *)arg2 eventInitiationLevel:(long long)arg3;
- (void)activityObservingApplicationDidEnterBackground;
- (id)newlySubscribedTagIDsInDateRange:(id)arg1;
- (void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasSubscriptionToTag:(id)arg1;
- (_Bool)hasNotificationsEnabledForTag:(id)arg1;
- (id)cachedSubscribedTags;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)subscribedTagIDs;
- (void)fetchAllTagsWithCallbackQueue:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_purchaseListDidAddTagIDs:(id)arg1;
- (void)_purchaseListDidRemoveTagIDs:(id)arg1;
- (void)_fetchMissingTagsWithCompletion:(CDUnknownBlockType)arg1;
- (id)demoAutoFavoriteChannelIDs;
- (id)ignoredTagIDs;
- (id)groupableTagIDs;
- (_Bool)canAddSubscription;
- (id)subscriptionForTagID:(id)arg1;
- (_Bool)addSubscriptionToTag:(id)arg1 notificationsEnabled:(_Bool)arg2 error:(id *)arg3 eventInitiationLevel:(long long)arg4;
- (_Bool)addSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 options:(long long)arg3 error:(id *)arg4;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)_integrateTags:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2 error:(id *)arg3;
- (void)_notifyOfTagsWithNotificationSupport:(id)arg1;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTag:(id)arg2 error:(id *)arg3;
- (void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)orderedCachedSubscribedTags;
- (_Bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)hasSubscriptionToTagID:(id)arg1;
- (void)removeAutoFavoriteSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (_Bool)addIgnoredSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (id)subscriptionsWithType:(unsigned long long)arg1;
- (void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsMoved:(id)arg3 tagSubscriptionsRemoved:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_handleNonTagSubscriptionType:(unsigned long long)arg1 addedSubscriptionsByType:(id)arg2 removedSubscriptionsByType:(id)arg3 changedSubscriptionsByType:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_refreshNotificationRegistrations;
- (void)_updateNotificationsForPurchaseTagIDs:(id)arg1 isPaid:(_Bool)arg2;
- (void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsMoved:(id)arg3 tagsRemoved:(id)arg4 subscriptionType:(unsigned long long)arg5 eventInitiationLevel:(long long)arg6;
- (void)_prewarmFeedNavAssetsInOrderedSubscribedTags:(id)arg1 limit:(unsigned long long)arg2;
- (void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 moveSubscriptions:(id)arg4 removeSubscriptions:(id)arg5 eventInitiationLevel:(long long)arg6;
- (void)subscriptionListDidResetToEmpty:(id)arg1;
- (id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseProvider:(id)arg4 configurationManager:(id)arg5 appActivityMonitor:(id)arg6;
- (id)subscribedTagForTagID:(id)arg1;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (id)tagIDsWithType:(unsigned long long)arg1;
- (_Bool)canAddSubscriptionWithError:(id *)arg1;
- (id)subscriptionForTag:(id)arg1;
- (id)subscriptionForTag:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionSurfacingHeadline:(id)arg1;
- (void)refreshSubscriptionTags;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)addIgnoredSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (id)externalSignalDrivenAutoFavorites;
- (void)removeAllAutoFavoriteSubscriptions:(CDUnknownBlockType)arg1;
- (void)addAutoFavoriteSubscriptionForTagIDs:(id)arg1 groupableSubscriptionForTagIDs:(id)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addGroupableSubscriptionForTagID:(id)arg1 origin:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;

@end
