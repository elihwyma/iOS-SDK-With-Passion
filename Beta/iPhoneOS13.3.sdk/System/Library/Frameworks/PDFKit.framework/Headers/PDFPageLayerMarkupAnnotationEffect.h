/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFPageLayerEffect.h>

__attribute__((visibility("hidden")))
@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)update;
- (void)removeFromSuperlayer;
- (id)annotation;
- (void)_updateNoteLayer;

@end
