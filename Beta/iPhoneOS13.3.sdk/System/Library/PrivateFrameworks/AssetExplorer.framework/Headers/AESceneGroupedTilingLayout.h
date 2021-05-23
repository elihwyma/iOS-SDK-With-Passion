/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXAssetsTilingLayout.h>

@class AEProgressViewModelSnapshot;

@protocol AEBrowserLayoutDelegate, AETileLayoutInfo;

__attribute__((visibility("hidden")))
@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout

{
    struct CGRect *_sectionBounds;
    struct CGSize _cachedGradientOverlaySize;
    _Bool _portraitOrientation;
    AEProgressViewModelSnapshot *_progressSnapshot;
    id <AEBrowserLayoutDelegate> _delegate;
    long long _layoutStyle;
    id <AETileLayoutInfo> __gradientTileLayoutInfo;
}

@property (nonatomic, readonly) id <AETileLayoutInfo> _gradientTileLayoutInfo;
@property (retain, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
@property (weak, nonatomic) id <AEBrowserLayoutDelegate> delegate;
@property (nonatomic, readonly) long long layoutStyle;
@property (nonatomic, getter=isPortraitOrientation) _Bool portraitOrientation;

- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setVisibleOrigin:(struct CGPoint)arg1;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)setSelectedIndexPaths:(id)arg1;
- (id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 gradientTileInfo:(id)arg3 orientation:(long long)arg4;
- (long long)_thumbnailRowsForCurrentLayoutStyle;
- (struct CGSize)_safeReferenceSize;
- (void)_invalidateBadgeDecorations;
- (struct PXTileGeometry)_geometryWithFrame:(struct CGRect)arg1 alpha:(double)arg2 zPosition:(double)arg3;
- (struct CGPoint)_boundedVisibleOrigin;
- (double)_zPositionForDecorativeTileSubitem:(unsigned long long)arg1;
- (struct CGRect)_gradientShadowFrameForItemFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForGridTile:(long long)arg1 inSection:(long long)arg2;
- (struct CGRect)_progressFrameForGridTileFrame:(struct CGRect)arg1;
- (id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 orientation:(long long)arg3;

@end
