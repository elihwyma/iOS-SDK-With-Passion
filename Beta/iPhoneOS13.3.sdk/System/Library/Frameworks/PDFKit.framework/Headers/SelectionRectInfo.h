/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFSelection;

__attribute__((visibility("hidden")))
@interface SelectionRectInfo : NSObject

{
    PDFSelection *selection;
    struct CGRect rect;
    struct CGAffineTransform transform;
}

@end
