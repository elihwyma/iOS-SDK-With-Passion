/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUAssetReference, PUTilingLayout, PUTilingLayoutTransitionContext;

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

{
    _Bool __isZoomingIn;
    _Bool __needsUpdateZoomingIn;
    PUTilingLayout *_fromLayout;
    PUTilingLayout *_toLayout;
    PUAssetReference *_anchorAssetReference;
    PUTilingLayoutTransitionContext *_context;
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;
}

@property (nonatomic, setter=_setZoomingIn:) _Bool _isZoomingIn;
@property (nonatomic, setter=_setNeedsUpdateZoomingIn:) _Bool _needsUpdateZoomingIn;
@property (retain, nonatomic) PUTilingLayout *fromLayout;
@property (retain, nonatomic) PUTilingLayout *toLayout;
@property (retain, nonatomic) PUAssetReference *anchorAssetReference;
@property (retain, nonatomic) PUTilingLayoutTransitionContext *context;
@property (retain, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem;

- (id)description;
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (_Bool)_isCenterTileLayoutInfo:(id)arg1;
- (id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3;
- (void)_invalidateIsZoomingIn;
- (void)_updateIsZoomingInIfNeeded;
- (long long)_zoomLevelForLayout:(id)arg1;

@end
