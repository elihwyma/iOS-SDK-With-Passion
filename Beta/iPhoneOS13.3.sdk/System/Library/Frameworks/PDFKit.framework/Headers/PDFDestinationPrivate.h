/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFDocument, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFDestinationPrivate : NSObject

{
    PDFDocument *document;
    PDFPage *page;
    int type;
    double left;
    double top;
    double right;
    double bottom;
    double zoom;
}

@end
