/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSForYouRecommendationMediatorDataSource.h>

@class NSArray, NSCache, NSObject;

@protocol OS_dispatch_queue;

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource

{
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (copy, nonatomic, readonly) NSArray *recentRecommendations;

+ (id)recommendationsMatchingTopic:(id)arg1 fromArray:(id)arg2;

- (void)_createInternalQueueIfNecessary;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(_Bool)arg2;
- (_Bool)_hasPermissibleResultTypeForResult:(id)arg1;
- (id)_bestAcceptableImageForSFResult:(id)arg1;
- (id)_cacheEnsuringExistence;
- (void)appendResultsIfApplicable:(id)arg1;
- (void)clearAllResults;

@end
