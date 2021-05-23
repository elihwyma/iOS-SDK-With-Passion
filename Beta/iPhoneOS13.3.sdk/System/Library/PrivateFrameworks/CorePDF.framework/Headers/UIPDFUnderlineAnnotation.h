/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (Class)viewClass;
- (int)annotationType;
- (_Bool)recognizeGestures;
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;
- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;

@end
