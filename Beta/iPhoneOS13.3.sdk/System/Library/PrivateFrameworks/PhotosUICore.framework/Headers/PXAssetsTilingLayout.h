/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayout.h>

@class NSIndexSet, PXAssetsDataSource, PXBasicTileUserData, PXIndexPathSet, PXOverlayBadgeTileUserData, PXSelectionBadgeTileUserData;

@interface PXAssetsTilingLayout : PXTilingLayout

{
    PXOverlayBadgeTileUserData *_overlayBadgeTileUserData;
    PXAssetsDataSource *_dataSource;
    PXIndexPathSet *_hiddenIndexPaths;
    PXIndexPathSet *_selectedIndexPaths;
    PXIndexPathSet *_draggingIndexPaths;
    unsigned long long _selectionBadgeOptions;
    unsigned long long _badgeOptions;
    unsigned long long _animatedOverlayBehavior;
    PXSelectionBadgeTileUserData *__selectedUserData;
    PXSelectionBadgeTileUserData *__unselectedUserData;
    PXBasicTileUserData *__highlightedDimmingUserData;
    PXBasicTileUserData *__selectedDimmingUserData;
    PXBasicTileUserData *__draggingDimmingUserData;
    NSIndexSet *_additionalAccessoryTileKinds;
    struct PXSimpleIndexPath _highlightedIndexPath;
    struct PXSimpleIndexPath _focusedIndexPath;
}

@property (nonatomic, readonly) PXSelectionBadgeTileUserData *_selectedUserData;
@property (nonatomic, readonly) PXSelectionBadgeTileUserData *_unselectedUserData;
@property (nonatomic, readonly) PXBasicTileUserData *_highlightedDimmingUserData;
@property (nonatomic, readonly) PXBasicTileUserData *_selectedDimmingUserData;
@property (nonatomic, readonly) PXBasicTileUserData *_draggingDimmingUserData;
@property (retain, nonatomic, setter=_setContentTileUserData:) PXOverlayBadgeTileUserData *_overlayBadgeTileUserData;
@property (retain, nonatomic) NSIndexSet *additionalAccessoryTileKinds;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (retain, nonatomic) PXIndexPathSet *hiddenIndexPaths;
@property (nonatomic) struct PXSimpleIndexPath highlightedIndexPath;
@property (nonatomic) struct PXSimpleIndexPath focusedIndexPath;
@property (retain, nonatomic) PXIndexPathSet *selectedIndexPaths;
@property (retain, nonatomic) PXIndexPathSet *draggingIndexPaths;
@property (nonatomic) unsigned long long selectionBadgeOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long animatedOverlayBehavior;

- (id)init;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forContentTileWithIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGSize)playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 contentTileSize:(struct CGSize)arg2;
- (struct CGSize)_preferredSelectionBadgeSize;
- (_Bool)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const struct PXTileGeometry *)arg6 indexPath:(struct PXSimpleIndexPath)arg7;
- (double)zPositionOffsetForKind:(unsigned long long)arg1;
- (void)enumerateAccessoryTilesForContentTileWithIndexPath:(struct PXSimpleIndexPath)arg1 geometry:(const struct PXTileGeometry *)arg2 withOptions:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_getSelectionBadgeTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getPlayButtonTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getLivePhotoOverlayTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getVideoOverlayTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getLoopingVideoOverlayTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getAnimatedImageOverlayTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getDimmingTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getOverlayBadgeTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (void)_invalidateAllSelectionTiles;
- (void)_invalidateAllAnimatedOverlayTiles;

@end
