/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class CLSFeederPrefetchOptions, NSArray, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder

{
    unsigned long long _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _numberOfAllPeople;
    PHAssetCollection *_assetCollection;
    PHFetchOptions *_assetFetchOptions;
    CLSFeederPrefetchOptions *_prefetchOptions;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) _Bool hasPeople;
@property (nonatomic, readonly) _Bool hasFavoritedAssets;
@property (nonatomic, readonly) _Bool hasBestScoringAssets;
@property (nonatomic, readonly) _Bool hasNonJunkAssets;
@property (nonatomic, readonly) unsigned long long numberOfShinyGemItems;
@property (nonatomic, readonly) unsigned long long numberOfRegularGemItems;
@property (nonatomic, readonly) double behavioralScore;
@property (nonatomic, readonly) unsigned long long numberOfAllPeople;
@property (copy, nonatomic, readonly) PHFetchOptions *assetFetchOptions;
@property (copy, nonatomic, readonly) CLSFeederPrefetchOptions *prefetchOptions;

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;

- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localStartDate;
- (id)localEndDate;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)allItems;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (id)initWithFeederWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3;
- (_Bool)_shouldPrefetchCurationInformation;

@end
