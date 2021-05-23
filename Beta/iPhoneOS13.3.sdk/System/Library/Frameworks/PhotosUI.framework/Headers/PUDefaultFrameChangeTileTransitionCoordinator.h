/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class NSSet, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

{
    _Bool _shouldCrossFadeTiles;
    PUTilingView *_tilingView;
    NSSet *__invisibleTileControllers;
}

@property (copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers;
@property (nonatomic) _Bool shouldCrossFadeTiles;
@property (weak, nonatomic) PUTilingView *tilingView;

- (void)prepare;
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)_layoutInfoForDisappearedInvisibleTile:(id)arg1;
- (_Bool)_isLayoutInfoVisible:(id)arg1;

@end
