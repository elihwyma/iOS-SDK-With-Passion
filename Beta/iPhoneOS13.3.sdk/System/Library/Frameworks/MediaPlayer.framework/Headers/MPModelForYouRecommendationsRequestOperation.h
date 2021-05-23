/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2;
- (void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;
- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;

@end
