/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPModelForYouRecommendationsResponse.h>

@class NSArray, NSDictionary;

@interface MPModelForYouRecommendationsResponse (NMSModelForYouRecommendationsRequest)

@property (nonatomic, readonly) NSArray *nms_cachedRecommendationsArray;
@property (nonatomic, readonly) NSDictionary *nms_cachedStoreItemMetadataResults;

- (void)nms_setCachedRecommendationsArray:(id)arg1;
- (void)nms_setCachedStoreItemMetadataResults:(id)arg1;

@end
