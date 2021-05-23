/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSource.h>

@class PXAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSource : PUAssetsDataSource

{
    PXAssetsDataSource *_underlyingDataSource;
}

@property (nonatomic, readonly) PXAssetsDataSource *underlyingDataSource;

- (id)init;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)initWithUnderlyingDataSource:(id)arg1;

@end
