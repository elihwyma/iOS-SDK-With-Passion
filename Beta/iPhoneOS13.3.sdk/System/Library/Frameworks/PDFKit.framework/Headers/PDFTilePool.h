/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject

{
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;

- (id)init;
- (void)dealloc;
- (void)_renderTileForRequest:(id)arg1;
- (int)tileSurfaceType;
- (int)tileSurfaceSize;
- (id)_createTileSurfaceForRequest:(id)arg1;
- (struct CGContext *)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;
- (void)setTileSurfaceType:(int)arg1;
- (void)saveBitmapFiles;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6;
- (void)releasePDFTileSurface:(id)arg1;
- (int)activeTileCount;

@end
