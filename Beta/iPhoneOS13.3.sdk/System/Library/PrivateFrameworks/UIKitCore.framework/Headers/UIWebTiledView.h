/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView

{
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    _Bool _didFirstTileLayout;
    _Bool _layoutTilesInMainThread;
    _Bool _tilingModeIsLocked;
    _Bool _allowsPaintingAndScriptsWhilePanning;
    _Bool _editingTilingModeEnabled;
}

- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)visibleRect;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)_didScroll;
- (void)setNeedsDisplay;
- (void)willMoveToWindow:(id)arg1;
- (void)setInGesture:(int)arg1;
- (void)setEditingTilingModeEnabled:(_Bool)arg1;
- (void)setTilingEnabled:(_Bool)arg1;
- (_Bool)isTilingEnabled;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect)arg1;
- (void)setAllowsPaintingAndScriptsWhilePanning:(_Bool)arg1;
- (void)removeAllNonVisibleTiles;
- (void)setTilingArea:(int)arg1;
- (void)removeAllTiles;
- (void)setTilesOpaque:(_Bool)arg1;
- (void)removeForegroundTiles;
- (int)tilingArea;
- (void)_updateForScreen:(id)arg1;
- (void)_screenChanged:(id)arg1;
- (void)updateTilingMode;
- (_Bool)tilesOpaque;
- (void)setKeepsZoomedOutTiles:(_Bool)arg1;
- (_Bool)keepsZoomedOutTiles;
- (void)dumpTiles;
- (void)setWAKWindow:(id)arg1;
- (void)layoutTilesNowOnWebThread;
- (void)drawImageIntoTiles:(struct CGImage *)arg1;
- (void)lockTilingMode;
- (void)unlockTilingMode;
- (_Bool)allowsPaintingAndScriptsWhilePanning;
- (void)setTileSize:(struct CGSize)arg1;
- (struct CGSize)tileSize;
- (void)setDrawsGrid:(_Bool)arg1;
- (_Bool)drawsGrid;
- (void)setMaxTileCount:(unsigned int)arg1;
- (unsigned int)maxTileCount;
- (unsigned int)adjustedMaxTileCount;
- (void)setLogsTilingChanges:(_Bool)arg1;
- (_Bool)logsTilingChanges;
- (void)setTileDrawingEnabled:(_Bool)arg1;
- (_Bool)editingTilingModeEnabled;
- (_Bool)tileDrawingEnabled;
- (_Bool)layoutTilesInMainThread;
- (void)setLayoutTilesInMainThread:(_Bool)arg1;
- (id)wakWindow;

@end
