/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSUUID, PDFDocument, UIColor;

__attribute__((visibility("hidden")))
@interface PDFSelectionPrivate : NSObject

{
    PDFDocument *document;
    UIColor *color;
    NSMutableArray *pageRanges;
    _Bool forceBreaks;
    struct __CFArray *cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}

@end
