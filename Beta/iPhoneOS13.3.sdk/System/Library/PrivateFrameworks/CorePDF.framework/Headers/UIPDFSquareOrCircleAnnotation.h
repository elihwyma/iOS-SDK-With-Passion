/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/UIPDFAnnotation.h>

__attribute__((visibility("hidden")))
@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation

{
    double _W;
    unsigned short _S;
    struct CGPDFArray *_D;
    double _SE;
    double _I;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)strokePath:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

@end
