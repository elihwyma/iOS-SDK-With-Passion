/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSString, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource

{
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
    NSString *_changeFromDataSourceIdentifier;
    NSCache *__assetReferenceByIndexPathCache;
}

@property (nonatomic, readonly) PXPhotosDataSourceChange *change;
@property (nonatomic, readonly) NSString *changeFromDataSourceIdentifier;
@property (nonatomic, readonly) NSCache *_assetReferenceByIndexPathCache;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;

- (_Bool)isEmpty;
- (id)assetAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (_Bool)couldAssetReferenceAppear:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;

@end
