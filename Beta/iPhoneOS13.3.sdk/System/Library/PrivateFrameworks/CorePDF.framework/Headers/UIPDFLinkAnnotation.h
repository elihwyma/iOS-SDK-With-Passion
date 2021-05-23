/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation

- (id)url;
- (unsigned long long)pageNumber;
- (_Bool)recognizeGestures;
- (_Bool)shouldRecognizeTapOrPress:(struct CGPoint)arg1;
- (id)newBaseURL;
- (unsigned long long)getDestination:(struct CGPDFDictionary *)arg1;
- (unsigned long long)getNamedDestination:(struct CGPDFDictionary *)arg1;
- (_Bool)quadPoints:(struct CGPDFArray *)arg1 within:(struct CGRect)arg2;
- (struct CGRect)linkRectangle;

@end
