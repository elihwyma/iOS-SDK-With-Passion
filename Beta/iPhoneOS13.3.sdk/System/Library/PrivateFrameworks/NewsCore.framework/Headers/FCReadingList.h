/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCloudContext, FCMTWriterLock, FCReadingListContentController, NSMutableDictionary, NSString;

@protocol FCOperationThrottler;

@interface FCReadingList : FCPrivateDataController <Swift>

{
    NSMutableDictionary *_entriesByArticleID;
    FCReadingListContentController *_readingListContentController;
    FCCloudContext *_cloudContext;
    id <FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
    FCMTWriterLock *_itemsLock;
}

@property (retain, nonatomic) NSMutableDictionary *entriesByArticleID;
@property (retain, nonatomic) FCReadingListContentController *readingListContentController;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (retain, nonatomic) id <FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler;
@property (retain, nonatomic) FCMTWriterLock *itemsLock;
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

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (id)allSortedArticleIDsInReadingList;
- (_Bool)isArticleOnReadingList:(id)arg1;
- (id)_readingListEntryForArticleID:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (id)_allSortedEntriesInReadingList;
- (id)_allEntriesInReadingList;
- (id)allNonConsumedArticleIDsInReadingList;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (_Bool)isArticleAvailableForOfflineReading:(id)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1;
- (_Bool)shouldHideHeadline:(id)arg1;
- (void)addArticleToReadingList:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (id)dateArticleWasAdded:(id)arg1;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)allNonConsumedArticleIDsInReadingListForOfflineReading;

@end
