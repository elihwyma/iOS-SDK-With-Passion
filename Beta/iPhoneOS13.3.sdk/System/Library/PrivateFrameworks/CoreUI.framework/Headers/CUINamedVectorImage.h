/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedVectorImage : CUINamedLookup

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGPDFDocument *pdfDocument;

- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;

@end
