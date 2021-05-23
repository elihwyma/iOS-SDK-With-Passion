/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer

{
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;

- (id)UUID;
- (void)update;
- (id)annotation;
- (void)addSelection:(id)arg1;
- (struct CGRect)pageFrame;
- (_Bool)shouldRotateContent;
- (void)setSelections:(id)arg1;
- (id)pdfResult;
- (id)initWithPDFPageLayer:(id)arg1;
- (void)updateColor:(unsigned long long)arg1;
- (void)setPageFrame:(struct CGRect)arg1;

@end
