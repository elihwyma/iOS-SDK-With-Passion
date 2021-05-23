/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPageRangePrivate;

__attribute__((visibility("hidden")))
@interface PDFPageRange : NSObject

{
    PDFPageRangePrivate *_private;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)initWithPage:(id)arg1 range:(struct _NSRange)arg2;

@end
