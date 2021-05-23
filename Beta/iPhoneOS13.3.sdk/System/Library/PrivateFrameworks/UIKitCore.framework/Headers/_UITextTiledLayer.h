/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, UIBezierPath;

@protocol _UITextTiledLayerDelegate;

__attribute__((visibility("hidden")))
@interface _UITextTiledLayer : CALayer <Swift>

{
    NSMutableArray *_visibleTiles;
    NSMutableArray *_unusedTiles;
    NSTimer *_unusedTilesCleanupTimer;
    struct CGSize _tileSize;
    CALayer *_viewportLayer;
    double _viewportLayerExtraWidthFactor;
    struct CGRect _visibleViewportBounds;
    UIBezierPath *_clip;
    struct {
        unsigned int disableTiling:1;
        unsigned int ditchAllTiles:1;
        unsigned int suspendLayout:4;
        unsigned int delegateSupportsMaskedRects:1;
        unsigned int delegateImplementsWillDraw:1;
    } _tcTiledLayerFlags;
    double _maxTileHeight;
    double _maxPrefetchedTiles;
}

@property (weak) id <_UITextTiledLayerDelegate> delegate;
@property (nonatomic) _Bool usesTiledLayers;
@property (nonatomic) double maxTileHeight;
@property (nonatomic) double maxPrefetchedTiles;
@property (copy, nonatomic, readonly) NSArray *tiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)layerWillDraw:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;
- (void)setDrawsAsynchronously:(_Bool)arg1;
- (void)_updateTilingViewportWindow:(id)arg1;
- (void)suspendTiling;
- (void)resumeTiling;
- (void)_drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 clip:(struct CGPath *)arg3;
- (void)_didSetDelegate;
- (void)setUnsafeUnretainedDelegate:(id)arg1;
- (void)setContentsFormat:(id)arg1;
- (id)_preparedTileForFrame:(struct CGRect)arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(_Bool)arg4;
- (id)_prepareTilesForVisibleBounds:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (id)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (void)layoutSublayers;

@end
