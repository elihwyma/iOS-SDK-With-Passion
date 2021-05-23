/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingLayout.h>

@class PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUSingleAssetLayout : PUTilingLayout

{
    PUAssetReference *_assetReference;
    struct CGRect _assetRect;
    struct UIEdgeInsets _cropInsets;
    struct CGRect _contentsRect;
}

@property (retain, nonatomic) PUAssetReference *assetReference;
@property (nonatomic) struct CGRect assetRect;
@property (nonatomic) struct UIEdgeInsets cropInsets;
@property (nonatomic) struct CGRect contentsRect;

- (struct CGRect)contentBounds;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (void)_invalidateSingleAssetLayout;

@end
