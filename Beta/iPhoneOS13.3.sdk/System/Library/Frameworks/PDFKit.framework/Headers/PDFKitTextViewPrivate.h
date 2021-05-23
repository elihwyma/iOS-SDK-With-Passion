/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFAnnotation, PDFPageView, PDFView, UITextView;

__attribute__((visibility("hidden")))
@interface PDFKitTextViewPrivate : NSObject

{
    UITextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

@end
