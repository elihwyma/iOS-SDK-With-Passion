/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetReference.h>

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSourceAssetReference : PUAssetReference

{
    PUAssetReference *_originalAssetReference;
}

@property (nonatomic, readonly) PUAssetReference *originalAssetReference;

- (id)description;
- (id)initWithOriginalAssetReference:(id)arg1 asset:(id)arg2 dataSourceIdentifier:(id)arg3;

@end
