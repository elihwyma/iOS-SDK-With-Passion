/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableSet, NSString, _UISceneDisplayLink, _UITextTiledLayer;

@protocol _UITextCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView : UIView

{
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
    id <_UITextCanvasViewContext> _context;
}

@property (nonatomic, readonly) _UITextTiledLayer *layer;
@property (weak, nonatomic) id <_UITextCanvasViewContext> context;
@property (nonatomic, getter=isTilingEnabled) _Bool tilingEnabled;
@property (nonatomic) double maxTileHeight;
@property (nonatomic, setter=_setDrawsDebugBaselines:) _Bool _drawsDebugBaselines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (void)removeAllGhostedRanges;
- (_Bool)_enableAutoConstraining;
- (void)_windowDidMoveToScreen;
- (void)_updateTilingViewportBookkeeping;
- (void)_updateTilingViewportLayer;
- (void)suspendTiling;
- (void)resumeTiling;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;
- (void)addInvisibleRange:(struct _NSRange)arg1;
- (void)removeInvisibleRange:(struct _NSRange)arg1;

@end
