/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetReference.h>

__attribute__((visibility("hidden")))
@interface PUJoiningAssetReference : PUAssetReference

{
    long long _hintDataSourceIndex;
    PUAssetReference *_containedAssetReference;
}

@property (nonatomic, readonly) long long hintDataSourceIndex;
@property (nonatomic, readonly) PUAssetReference *containedAssetReference;

- (id)description;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(long long)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end
