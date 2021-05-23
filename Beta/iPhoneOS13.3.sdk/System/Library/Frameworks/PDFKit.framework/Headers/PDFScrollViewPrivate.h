/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSDate, PDFDocument, PDFDocumentView, PDFTimer, PDFView;

__attribute__((visibility("hidden")))
@interface PDFScrollViewPrivate : NSObject

{
    PDFView *pdfView;
    PDFDocument *document;
    PDFDocumentView *documentView;
    double oldMagnification;
    PDFTimer *boundsUpdateTimer;
    struct CGRect oldBounds;
    _Bool isZooming;
    _Bool scheduledPageSync;
    NSDate *pageSyncDate;
    _Bool forcesTopAlignment;
}

@end
