/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedVectorImage.h>

@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (nonatomic, readonly) struct CGPDFDocument *pdfDocument;

- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;

@end
