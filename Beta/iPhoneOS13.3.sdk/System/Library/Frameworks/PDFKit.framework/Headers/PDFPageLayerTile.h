/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <QuartzCore/CALayer.h>

@class PDFPageLayer, PDFTileSurface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerTile : CALayer

{
    PDFPageLayer *pageLayer;
    struct CGAffineTransform renderingTransform;
    double tileContentsScale;
    PDFTileSurface *pageSurface;
    int generationID;
    _Atomic _Bool isWorking;
    struct CGRect originalFrame;
}

- (void)dealloc;
- (void)hasStartedWork;
- (void)recievePDFTileSurface:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(struct CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5;
- (_Bool)isWorking;

@end
