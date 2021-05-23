/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingDataSource.h>

@class NSIndexPath;

@interface PUAssetsDataSource : PUTilingDataSource

@property (nonatomic, readonly) _Bool containsMultipleAssets;
@property (nonatomic, readonly) NSIndexPath *firstItemIndexPath;
@property (nonatomic, readonly) NSIndexPath *lastItemIndexPath;

+ (id)emptyDataSource;

- (_Bool)isEmpty;
- (id)assetAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (_Bool)couldAssetReferenceAppear:(id)arg1;

@end
