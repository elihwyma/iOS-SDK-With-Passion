/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsScene.h>

@class NSMapTable, NSMutableSet, NSString, PXDebugAssetBadgeManager, PXUIMediaProvider, PXUIScrollViewController;

@interface PXUIAssetsScene : PXAssetsScene

{
    NSMutableSet *_tilesInUse;
    NSMapTable *_imageRequesterByAssetReference;
    struct {
        _Bool preheating;
    } _needsUpdateFlags;
    _Bool __supressingColorSettings;
    PXDebugAssetBadgeManager *__debugBadgeManager;
    double _contentTileCornerRadius;
    struct CGSize _maximumImageSize;
}

@property (nonatomic, setter=_setSupressingColorSettings:) _Bool _supressingColorSettings;
@property (retain, nonatomic, setter=_setDebugBadgeManager:) PXDebugAssetBadgeManager *_debugBadgeManager;
@property (nonatomic) struct CGSize maximumImageSize;
@property (nonatomic) double contentTileCornerRadius;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)preloadResources;

- (void)dealloc;
- (_Bool)needsUpdate;
- (void)updateIfNeeded;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)badgeManager;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (void)_registerDefaultTiles;
- (id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (id)_imageRequesterForAssetReference:(id)arg1;
- (void)_transitionImageRequestersToDataSource:(id)arg1;
- (void)_invalidatePreheating;
- (void)_updatePreheatingIfNeeded;
- (void)willTransitionToDataSource:(id)arg1;

@end
