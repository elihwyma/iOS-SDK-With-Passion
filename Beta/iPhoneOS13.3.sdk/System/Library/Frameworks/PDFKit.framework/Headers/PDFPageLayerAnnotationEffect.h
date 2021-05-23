/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <PDFKit/PDFPageLayerEffect.h>

__attribute__((visibility("hidden")))
@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)update;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)annotation;
- (struct CGRect)pageFrame;

@end
