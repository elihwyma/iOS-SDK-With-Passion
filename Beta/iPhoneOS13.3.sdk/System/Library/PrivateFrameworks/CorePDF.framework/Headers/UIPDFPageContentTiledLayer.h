/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <QuartzCore/CATiledLayer.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentTiledLayer : CATiledLayer

{
    CALayer *_selectionLayer;
}

- (id)init;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)setSelectionNeedsDisplay;

@end
