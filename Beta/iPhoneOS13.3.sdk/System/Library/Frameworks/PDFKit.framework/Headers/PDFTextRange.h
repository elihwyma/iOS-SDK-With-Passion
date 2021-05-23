/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UITextRange.h>

@class PDFTextPosition;

__attribute__((visibility("hidden")))
@interface PDFTextRange : UITextRange

{
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

- (id)description;
- (_Bool)isEmpty;
- (id)start;
- (id)end;
- (id)initFromPos:(id)arg1 toPos:(id)arg2;

@end
