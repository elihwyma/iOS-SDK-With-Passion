/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class AKPageModelController, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptorPrivate : NSObject

{
    _Bool isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    _Bool isObservingPageModel;
    _Bool isSyncingFromPDFPage;
    _Bool isSyncingFromAKPageModel;
}

@end
