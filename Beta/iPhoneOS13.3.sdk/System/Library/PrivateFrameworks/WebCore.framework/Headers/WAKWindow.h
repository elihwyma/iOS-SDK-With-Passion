/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder

{
    CALayer *_hostLayer;
    struct LegacyTileCache *_tileCache;
    struct CGRect _frozenVisibleRect;
    CALayer *_rootLayer;
    struct CGSize _screenSize;
    struct CGSize _availableScreenSize;
    double _screenScale;
    struct CGRect _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    _Bool _visible;
    _Bool _isInSnapshottingPaint;
    _Bool _useOrientationDependentFontAntialiasing;
    _Bool _entireWindowVisibleForTesting;
    struct Lock _exposedScrollViewRectLock;
    struct CGRect _exposedScrollViewRect;
}

@property (nonatomic) _Bool useOrientationDependentFontAntialiasing;
@property (nonatomic) struct CGImage *contentReplacementImage;

+ (id)currentEvent;
+ (void)setOrientationProvider:(id)arg1;
+ (_Bool)hasLandscapeOrientation;

- (void)dealloc;
- (id)description;
- (void)close;
- (id).cxx_construct;
- (struct CGRect)frame;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (struct CGRect)visibleRect;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)makeKeyWindow;
- (id)firstResponder;
- (void)setNeedsDisplay;
- (id)rootLayer;
- (id)recursiveDescription;
- (_Bool)isKeyWindow;
- (id)initWithLayer:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)willRotate;
- (void)didRotate;
- (void)sendEvent:(id)arg1;
- (void)layoutTilesNow;
- (double)screenScale;
- (void)layoutTilesNowForRect:(struct CGRect)arg1;
- (void)sendEventSynchronously:(id)arg1;
- (struct CGRect)exposedScrollViewRect;
- (void)setContentRect:(struct CGRect)arg1;
- (void)setCurrentTileScale:(float)arg1;
- (void)setZoomedOutTileScale:(float)arg1;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)setTilesOpaque:(_Bool)arg1;
- (void)setTilingDirection:(int)arg1;
- (void)setExposedScrollViewRect:(struct CGRect)arg1;
- (void)displayRect:(struct CGRect)arg1;
- (void)removeForegroundTiles;
- (_Bool)makeFirstResponder:(id)arg1;
- (void)setAcceleratedDrawingEnabled:(_Bool)arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int *)arg2;
- (void)setScreenSize:(struct CGSize)arg1;
- (void)setAvailableScreenSize:(struct CGSize)arg1;
- (void)layoutTiles;
- (void)setTilingMode:(int)arg1;
- (_Bool)tilesOpaque;
- (void)setKeepsZoomedOutTiles:(_Bool)arg1;
- (_Bool)keepsZoomedOutTiles;
- (void)dumpTiles;
- (void)setRootLayer:(id)arg1;
- (id)hostLayer;
- (struct CGRect)extendedVisibleRect;
- (void)setIsInSnapshottingPaint:(_Bool)arg1;
- (struct CGSize)screenSize;
- (struct CGSize)availableScreenSize;
- (struct LegacyTileCache *)tileCache;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertScreenToBase:(struct CGPoint)arg1;
- (struct CGRect)_visibleRectRespectingMasksToBounds:(_Bool)arg1;
- (void)freezeVisibleRect;
- (void)unfreezeVisibleRect;
- (id)_newFirstResponderAfterResigning;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (int)keyViewSelectionDirection;
- (void)setFrame:(struct CGRect)arg1 display:(_Bool)arg2;
- (_Bool)isInSnapshottingPaint;
- (void)setEntireWindowVisibleForTesting:(_Bool)arg1;
- (int)tilingMode;
- (int)tilingDirection;
- (float)zoomedOutTileScale;
- (float)currentTileScale;
- (_Bool)hasPendingDraw;
- (void)setTileBordersVisible:(_Bool)arg1;
- (void)setTilePaintCountsVisible:(_Bool)arg1;
- (void)setTileControllerShouldUseLowScaleTiles:(_Bool)arg1;

@end
