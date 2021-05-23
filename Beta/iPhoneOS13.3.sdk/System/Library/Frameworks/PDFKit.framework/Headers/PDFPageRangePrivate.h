/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFPageRangePrivate : NSObject

{
    PDFPage *page;
    struct _NSRange range;
}

@end
