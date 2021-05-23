/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSDictionary;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource

{
    PUAssetsDataSource *__originalDataSource;
    NSDictionary *__substitutedAssetsByUUID;
    NSCache *__assetReferenceByIndexPathCache;
}

@property (nonatomic, readonly) PUAssetsDataSource *_originalDataSource;
@property (nonatomic, readonly) NSDictionary *_substitutedAssetsByUUID;
@property (nonatomic, readonly) NSCache *_assetReferenceByIndexPathCache;

- (id)identifier;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)initWithDataSource:(id)arg1 substitutedAssets:(id)arg2;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;

@end
