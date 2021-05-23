/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <QuartzCore/CALayer.h>

@class NSString, PDFPageLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayer : CALayer

{
    PDFPageLayerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)isVisible;
- (id)page;
- (void)layoutSublayers;
- (void)clearTiles;
- (long long)displayBox;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (id)renderingProperties;
- (void)setNeedsTilesUpdate;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (void)tileDrawingComplete:(id)arg1;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (void)_setEnablePageShadows:(_Bool)arg1;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (void)_forceTileUpdate;
- (void)_releaseTiles;
- (void)_releasePageLayerEffects;
- (void)_updateTiles;
- (void)_tileUpdateComplete;
- (void)updatePageLayerEffectForID:(id)arg1;
- (id)pageLayerEffectForID:(id)arg1;
- (struct CGAffineTransform)layerEffectTransform;
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform)arg2;
- (id)_pageLayerEffects;
- (_Bool)_isTile:(id)arg1 occludedByTiles:(id)arg2;
- (struct CGRect)_layerTileToRootViewBounds:(id)arg1;
- (id)_subtractRectB:(struct CGRect)arg1 fromRectA:(struct CGRect)arg2;
- (void)updatePageLayerEffects;
- (_Bool)_hasTileWithFrameInLayer:(struct CGRect)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)scalePageLayerEffects:(double)arg1;
- (_Bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:(double)arg1;
- (void)willStartLiveResize;
- (void)willEndStartLiveResize;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)_hideTileLayer:(_Bool)arg1;
- (struct CGRect)_pageLayerVisibleRect;
- (void)_printRectsArray:(id)arg1;

@end
