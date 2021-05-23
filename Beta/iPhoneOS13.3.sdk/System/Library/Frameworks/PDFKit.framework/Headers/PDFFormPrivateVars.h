/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFFormPrivateVars : NSObject

{
    PDFDocument *document;
    NSMutableArray *fieldArray;
    struct CGPDFString *appearString;
}

@end
