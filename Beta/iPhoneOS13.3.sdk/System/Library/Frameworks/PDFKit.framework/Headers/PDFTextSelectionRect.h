/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UITextSelectionRect.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextSelectionRect : UITextSelectionRect

{
    PDFPage *_page;
    struct CGRect _rect;
    _Bool _isStartingRect;
    _Bool _isEndingRect;
}

- (id)description;
- (_Bool)isVertical;
- (_Bool)containsStart;
- (_Bool)containsEnd;
- (struct CGRect)rect;
- (long long)writingDirection;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;
- (void)setIsStartingRect:(_Bool)arg1;
- (void)setIsEndingRect:(_Bool)arg1;

@end
