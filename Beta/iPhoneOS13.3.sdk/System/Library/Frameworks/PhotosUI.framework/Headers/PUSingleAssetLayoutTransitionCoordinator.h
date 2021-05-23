/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator

{
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;
}

@property (retain, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem;

- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;

@end
