/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter

{
    NSURL *_pdfPath;
    struct CGPDFDocument *_pdfDocRef;
    double _pdfScaleFactor;
    _Bool _rotate90;
    double _shiftUpLength;
}

- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (id)initWithPDFURL:(id)arg1;
- (id)initWithPDFData:(id)arg1;

@end
