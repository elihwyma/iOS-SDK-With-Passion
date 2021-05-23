/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationAdaptorPrivate : NSObject

{
    _Bool isTornDown;
    PDFAnnotation *pdfAnnotation;
    AKAnnotation *akAnnotation;
    _Bool isObservingAKAnnotation;
    _Bool isSyncingFromPDFAnnotation;
    _Bool isSyncingFromAKAnnotation;
}

@end
