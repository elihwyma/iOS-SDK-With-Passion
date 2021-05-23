/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UITextPosition.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextPosition : UITextPosition

{
    PDFPage *_page;
    long long _offset;
}

- (id)description;
- (long long)offset;
- (id)page;
- (id)initWithOffset:(long long)arg1 onPage:(id)arg2;

@end
