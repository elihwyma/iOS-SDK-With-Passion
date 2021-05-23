/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFPageLayerEffect.h>

__attribute__((visibility("hidden")))
@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect

- (void)update;
- (void)addSelection:(id)arg1;
- (void)setSelections:(id)arg1;
- (id)initWithPDFPageLayer:(id)arg1;
- (void)_generateRects;
- (void)updateColor:(unsigned long long)arg1;

@end
