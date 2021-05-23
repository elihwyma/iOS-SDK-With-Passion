/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPModelForYouRecommendationsRequest.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest

{
    _Bool _nms_useCachedDataOnly;
    NSArray *_nms_cachedRecommendationsArray;
    NSDictionary *_nms_cachedStoreItemMetadataResults;
}

@property (nonatomic) _Bool nms_useCachedDataOnly;
@property (retain, nonatomic) NSArray *nms_cachedRecommendationsArray;
@property (retain, nonatomic) NSDictionary *nms_cachedStoreItemMetadataResults;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
