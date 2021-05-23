/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface UIPDFPageContentLayer : CALayer

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
