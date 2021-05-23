/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface WBSAnalyticsLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    NSMutableDictionary *_pageLoadStartTimes;
    AWDServerConnection *_awdServer;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

+ (id)sharedLogger;

- (id)initWithQueue:(id)arg1;
- (void)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(_Bool)arg1 showingPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(_Bool)arg1;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1;
- (void)didModifyPerSitePreferenceWithIdentifier:(id)arg1 modificationLevel:(long long)arg2 type:(long long)arg3 method:(long long)arg4;
- (void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(_Bool)arg5;
- (void)performOnAnalyticsQueueWithDelay:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(_Bool)arg4;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(_Bool)arg3;
- (void)didToggleGloballyUseAutomaticReader:(_Bool)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(_Bool)arg1;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 error:(id)arg2;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)userDidSharePasswordWithOutcome:(int)arg1;
- (void)userDidReceiveSharedPasswordWithOutcome:(int)arg1;
- (void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)arg1 searchProviderIdentifier:(id)arg2 isReferredByUnifiedField:(_Bool)arg3;
- (void)reportWeakPasswordWarningEvent:(long long)arg1;
- (void)didRevealDownloadWithMIMEType:(id)arg1 uti:(id)arg2 result:(long long)arg3;
- (void)didSetDownloadFolderToProviderWithIdentifier:(id)arg1 isDefaultFolder:(_Bool)arg2;
- (void)didDownvoteDataSourceWithMetadata:(id)arg1;
- (void)didBanWebsiteWithMetadata:(id)arg1;
- (void)didRetrieveNumberOfRecommendations:(unsigned long long)arg1 numberOfTopics:(unsigned long long)arg2;
- (void)didOpenRecommendationWithMetadata:(id)arg1 withPosition:(long long)arg2;
- (void)didToggleShowMoreButtonForSection:(long long)arg1;
- (void)didToggleShowLessButtonForSection:(long long)arg1;
- (void)didRetrieveNumberOfFavorites:(unsigned long long)arg1;
- (void)didRetrieveNumberOfFrequentlyVisitedSites:(unsigned long long)arg1;
- (void)_sendEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
