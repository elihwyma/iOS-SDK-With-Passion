/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKToolbarView, PDFDocument, PDFView;

@protocol PDFAKControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface PDFAKDocumentAdaptorPrivate : NSObject

{
    _Bool isTornDown;
    PDFDocument *pdfDocument;
    PDFView *pdfView;
    AKController *akController;
    id <PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
    AKToolbarView *akToolbarView;
    double modelBaseScaleFactor;
}

@end
