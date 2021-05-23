/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptorPrivate : NSObject

{
    _Bool isTornDown;
    PDFView *pdfView;
    PDFDocument *pdfDocument;
    NSMutableIndexSet *observedPageIndices;
}

@end
