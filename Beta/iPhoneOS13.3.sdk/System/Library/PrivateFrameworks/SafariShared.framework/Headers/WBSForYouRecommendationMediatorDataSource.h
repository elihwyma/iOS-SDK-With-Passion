/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSForYouRecommendationMediatorDataSource : NSObject

- (void)recommendationsWithTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)notifyImageWasUpdatedForRecommendation:(id)arg1;
- (void)notifyContentsDidChangeFromSource:(unsigned long long)arg1;

@end
