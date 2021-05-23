/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterLock, NSArray, NSMutableDictionary, NSString;

@interface FCIssueReadingHistory : FCPrivateDataController

{
    NSMutableDictionary *_itemsByID;
    FCMTWriterLock *_itemsLock;
}

@property (retain, nonatomic) NSMutableDictionary *itemsByID;
@property (nonatomic, readonly) FCMTWriterLock *itemsLock;
@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;
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

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)clearHistory;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)_modifyHistoryForIssueID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)bookmarkForLastVisitToIssueWithID:(id)arg1;
- (id)_historyItemForIssueID:(id)arg1;
- (id)_allHistoryItems;
- (void)_didChangeForIssueIDs:(id)arg1;
- (void)_addHistoryItems:(id)arg1;
- (id)_historyItemForID:(id)arg1;
- (void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;
- (void)markIssueAsBadgedWithID:(id)arg1;
- (void)markIssueAsEngagedWithID:(id)arg1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;
- (_Bool)hasIssueWithIDBeenVisited:(id)arg1;
- (_Bool)hasIssueWithIDBeenBadged:(id)arg1;
- (_Bool)hasIssueWithIDBeenEngaged:(id)arg1;
- (id)lastVisitedDateForIssueWithID:(id)arg1;
- (id)lastEngagedDateForIssueWithID:(id)arg1;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;

@end
