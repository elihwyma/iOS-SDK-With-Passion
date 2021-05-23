/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterLock, NSMutableDictionary, NSSet, NSString;

@interface FCReadingHistory : FCPrivateDataController

{
    NSMutableDictionary *_itemsByIdentifier;
    NSMutableDictionary *_itemsByArticleID;
    FCMTWriterLock *_itemsLock;
}

@property (retain, nonatomic) NSMutableDictionary *itemsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *itemsByArticleID;
@property (retain, nonatomic) FCMTWriterLock *itemsLock;
@property (nonatomic, readonly) NSSet *allReadArticleIDs;
@property (nonatomic, readonly) NSSet *allSeenArticleIDs;
@property (nonatomic, readonly) NSSet *allConsumedArticleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (id)localStoreMigrator;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)clearHistory;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)_addHistoryItems:(id)arg1 addToStore:(_Bool)arg2;
- (void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2;
- (id)syncReadingHistoryItemRecords:(id)arg1 deletedArticleIDs:(id)arg2 didRemoveLastVisitedAt:(out _Bool *)arg3;
- (id)allReadingHistoryItems;
- (id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1;
- (id)_readingHistoryItemForArticleID:(id)arg1;
- (id)markArticlesAsSeenWithHeadlines:(id)arg1;
- (_Bool)_markArticleAsSeenWithHeadline:(id)arg1 historyItem:(id)arg2 modifiedHistoryFeaturesOut:(unsigned long long *)arg3;
- (_Bool)_markArticleAsSeenWithArticleID:(id)arg1 articleVersion:(long long)arg2 historyItem:(id)arg3 modifiedHistoryFeaturesOut:(unsigned long long *)arg4;
- (unsigned long long)likingStatusForArticleID:(id)arg1;
- (void)_modifyHistoryForArticleID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2;
- (_Bool)hasArticleBeenMarkedAsOffensive:(id)arg1;
- (void)markArticle:(id)arg1 asOffensive:(_Bool)arg2;
- (_Bool)hasArticleBeenConsumed:(id)arg1;
- (_Bool)markArticleAsReadWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (void)markArticleAsReadWithHeadline:(id)arg1 fromGroupType:(long long)arg2 swipedToArticle:(_Bool)arg3 onScreenChecker:(CDUnknownBlockType)arg4;
- (_Bool)canHelpPruneZoneName:(id)arg1;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (id)historyItemsForArticleIDs:(id)arg1;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1;
- (id)allSortedArticleIDsInReadingHistory;
- (id)consumedArticleIDsForTagID:(id)arg1 fromTime:(id)arg2;
- (id)lastVisitedDateForArticleID:(id)arg1;
- (_Bool)hasArticleBeenRead:(id)arg1;
- (_Bool)hasArticleBeenVisited:(id)arg1;
- (_Bool)hasArticleBeenSeen:(id)arg1;
- (_Bool)markArticleAsSeenWithHeadline:(id)arg1;
- (_Bool)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2;
- (_Bool)toggleLikeForArticleWithID:(id)arg1;
- (_Bool)toggleDislikeForArticleWithID:(id)arg1;
- (_Bool)toggleArticleHasBeenMarkedAsOffensive:(id)arg1;
- (void)markArticle:(id)arg1 asArticleConsumed:(_Bool)arg2 sourceChannelTagID:(id)arg3;
- (void)markArticleAsReadWithHeadline:(id)arg1;
- (void)removeArticleFromHistory:(id)arg1;

@end
