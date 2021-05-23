/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class DDScannerResult, NSArray, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFScannerResultPrivate : NSObject

{
    DDScannerResult *ddResult;
    PDFPage *page;
    struct CGRect bounds;
    NSArray *rects;
    _Bool resultIsPastDate;
    _Bool hasRunActionsForResult;
    _Bool hasActionsForResult;
    struct __DDHighlight *highlightRef;
}

@end
