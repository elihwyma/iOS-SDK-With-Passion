/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIButton.h>

@class PDFMarkupMenuButtonPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupMenuButton : UIButton

{
    PDFMarkupMenuButtonPrivate *_private;
}

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 markupIcon:(int)arg2;

@end
