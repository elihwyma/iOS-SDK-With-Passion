/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKPDFDocumentWrapper : NSObject

{
    struct CGPDFDocument *_pdfDocument;
}

- (id)init;
- (void)dealloc;
- (struct CGPDFDocument *)pdfDocument;
- (id)initWithPDF:(struct CGPDFDocument *)arg1;

@end
