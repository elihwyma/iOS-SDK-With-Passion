/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PHFetchResult;

@interface PXPhotosDataSourceSectionCache : NSObject

{
    PHFetchResult *_collectionListFetchResult;
    NSDictionary *_assetCollectionToSection;
    long long _estimatedPhotosCount;
    long long _estimatedVideosCount;
    long long _estimatedOtherCount;
    long long _numberOfEnrichmentStateNotEnrichedAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
    long long _numberOfEnrichmentStateCompleteAssetCollections;
    long long _estimatedAssetCountWithEnrichmentStateNotEnriched;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
    long long _estimatedAssetCountWithEnrichmentStateComplete;
}

@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) NSDictionary *assetCollectionToSection;
@property (nonatomic, readonly) long long estimatedPhotosCount;
@property (nonatomic, readonly) long long estimatedVideosCount;
@property (nonatomic, readonly) long long estimatedOtherCount;
@property (nonatomic, readonly) long long numberOfEnrichmentStateNotEnrichedAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
@property (nonatomic, readonly) long long numberOfEnrichmentStateCompleteAssetCollections;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateNotEnriched;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
@property (nonatomic, readonly) long long estimatedAssetCountWithEnrichmentStateComplete;

- (id)initWithCollectionListFetchResult:(id)arg1;

@end
