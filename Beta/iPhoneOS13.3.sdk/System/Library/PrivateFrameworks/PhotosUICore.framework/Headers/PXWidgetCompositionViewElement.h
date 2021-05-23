/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXWidgetCompositionElement.h>

@class NSMutableSet, NSString, PXBasicTileAnimator, PXTilingController, PXWidgetCompositionViewElementLayout;

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement

{
    PXBasicTileAnimator *__tileAnimator;
    PXWidgetCompositionViewElementLayout *__layout;
    NSMutableSet *__tilesInUse;
    PXTilingController *__tilingController;
    struct CGPoint __anchorOffset;
}

@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXWidgetCompositionViewElementLayout *_layout;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, setter=_setAnchorOffset:) struct CGPoint _anchorOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGPoint)_anchorPoint;
- (id)contentTilingController;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)saveAnchoring;
- (void)_loadTilingController;
- (id)checkOutViewTile;
- (void)checkInViewTile:(id)arg1;

@end
