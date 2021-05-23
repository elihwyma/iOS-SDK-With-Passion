/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CKContextClient, NSArray, NSCache, NSString, UABestAppSuggestion, UABestAppSuggestionManager, WBSForYouDataSourceWeightManager, WBSForYouPerSitePreferenceManager, WBSForYouTopicManager, WBSFoundInRecommendationManager;

@protocol OS_dispatch_queue;

@interface WBSForYouRecommendationMediator : NSObject

{
    WBSForYouTopicManager *_topicManager;
    WBSFoundInRecommendationManager *_foundInManager;
    WBSForYouDataSourceWeightManager *_dataSourceWeightManager;
    WBSForYouPerSitePreferenceManager *_perSitePreferenceManager;
    UABestAppSuggestionManager *_appSuggestionManager;
    UABestAppSuggestion *_currentAppSuggestion;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_messagesMetadataCache;
    CKContextClient *_contextClient;
    CDUnknownBlockType _historyProvider;
    _Bool _ignoreMinimumNumberOfRecommendationsPerTopic;
    _Bool _suppressHistoryDeduplication;
}

@property (copy, nonatomic, readonly) NSArray *dataSources;
@property (nonatomic) _Bool ignoreMinimumNumberOfRecommendationsPerTopic;
@property (nonatomic) _Bool suppressHistoryDeduplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)areSiriSuggestionsEnabled;
+ (id)_adjustedTopicsWithTopics:(id)arg1;
+ (void)_rankRecommendationsInPlace:(id)arg1 history:(id)arg2 weightManager:(id)arg3 suppressHistoryDeduplication:(_Bool)arg4;
+ (id)_titleForRecommendationSource:(unsigned long long)arg1;
+ (id)_titleForRecommendationTopicSource:(unsigned long long)arg1;
+ (double)scoreForRecommendation:(id)arg1 weightManager:(id)arg2 simplifiedURLStringToLastVisitedDateMap:(id)arg3;

- (void)dealloc;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)downvoteSource:(unsigned long long)arg1;
- (void)_didUpdateFoundInSuggestions:(id)arg1;
- (void)banURLsOfSameDomainAsURL:(id)arg1 postingChangeNotificationWhenDone:(_Bool)arg2;
- (void)_createPreferenceManagerIfNecessary;
- (void)_fetchImagesForRecommendations:(id)arg1 recommendationsDispatchGroup:(id)arg2;
- (void)_retrieveFoundInRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_dataSourceWeightManager;
- (void)obtainMessagesImagesWherePossibleForRecommendations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchImageForRecommendation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createAppSuggestionsManagerIfNecessary;
- (void)beginListeningForURLSuggestionChanges;
- (void)stopListeningForURLSuggestionChanges;
- (void)downvoteSource:(unsigned long long)arg1 postingChangeNotificationWhenDone:(_Bool)arg2;
- (id)initWithContextClient:(id)arg1 historyProvider:(CDUnknownBlockType)arg2;
- (void)updatedTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)banURLsOfSameDomainAsURL:(id)arg1;
- (void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)retrieveHandoffRecommendationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginListeningForHandoffActivity;
- (void)endListeningForHandoffActivity;
- (void)clearDataSourceWeights;
- (id)analyticsMetadataForRecommendation:(id)arg1;
- (id)recommendationFromDictionary:(id)arg1;

@end
