/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation

{
    NSDictionary *_storeBagDictionary;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_produceResponseWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 storeItemMetadataResults:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)recommendationsURLWithStoreBagDictionary:(id)arg1;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1;

@end
