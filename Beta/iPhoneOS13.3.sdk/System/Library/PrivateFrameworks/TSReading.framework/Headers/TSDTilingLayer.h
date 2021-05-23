/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@protocol TSDTileGeometryProviding;

@interface TSDTilingLayer : CALayer

{
    int mTilingMode;
    struct CGSize mTileSize;
    struct {
        unsigned int tiled:1;
        unsigned int hasCustomContents:1;
        unsigned int drawsInBackground:1;
        unsigned int forceTiling:1;
        unsigned int needsTileLayout:1;
        unsigned int needsTileDisplay:1;
        unsigned int needsSelfDisplay:1;
    } mFlags;
    struct CGRect mLastVisibleBounds;
    struct CGSize mLastBoundsSize;
    CALayer *mProviderContentLayer;
    NSMutableArray *mDirtyTiles;
    _Bool mHasEverHadTileLayout;
    id <TSDTileGeometryProviding> _geometryProvider;
}

@property (nonatomic) int tilingMode;
@property (nonatomic) _Bool drawsInBackground;
@property (nonatomic) _Bool forceTiling;
@property (retain, nonatomic) id <TSDTileGeometryProviding> geometryProvider;

+ (struct CGSize)defaultTileSize;
+ (struct CGImage *)p_newCheckerboardImage;
+ (struct CGImage *)p_newGeneratedCheckerboardImage;

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setContents:(id)arg1;
- (void)setNeedsLayout;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setContentsScale:(double)arg1;
- (void)layoutSublayers;
- (void)display;
- (void)setNeedsLayoutForTilingLayers;
- (void)tilingSafeSetSublayers:(id)arg1;
- (_Bool)tilingSafeHasContents;
- (id)p_tileLayers;
- (unsigned long long)p_tilesWide;
- (_Bool)p_updateTileSizeWithLayerSize:(struct CGSize)arg1;
- (unsigned long long)p_tilesHigh;
- (void)setTileContents:(id)arg1;
- (void)p_updateTileIndexes:(id)arg1 visibleBounds:(struct CGRect)arg2;
- (void)i_setNeedsTileDisplayForTile:(id)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (id)p_nonTileAndContentLayers;
- (id)p_tileAndContentLayers;
- (void)i_drawRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 inBackground:(_Bool)arg3;
- (void)i_drawTile:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)i_drawTileInBackground:(id)arg1 inRect:(struct CGRect)arg2;

@end
