/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface WebTiledBackingLayer : CALayer

{
    struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController>> _tileController;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (_Bool)isOpaque;
- (void)setBounds:(struct CGRect)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setBorderColor:(struct CGColor *)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setBorderWidth:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (double)contentsScale;
- (void)setDrawsAsynchronously:(_Bool)arg1;
- (id)actionForKey:(id)arg1;
- (_Bool)drawsAsynchronously;
- (struct TileController *)createTileController:(struct PlatformCALayer *)arg1;
- (void)setWantsDeepColorBackingStore:(_Bool)arg1;
- (void)setSupportsSubpixelAntialiasedText:(_Bool)arg1;
- (struct TiledBacking *)tiledBacking;
- (_Bool)wantsDeepColorBackingStore;
- (_Bool)supportsSubpixelAntialiasedText;

@end
