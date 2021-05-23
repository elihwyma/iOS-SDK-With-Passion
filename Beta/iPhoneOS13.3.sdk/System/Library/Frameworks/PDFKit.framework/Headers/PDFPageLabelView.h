/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIView.h>

@class PDFPageLabelViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLabelView : UIView

{
    PDFPageLabelViewPrivate *_private;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCurrentPageNumber:(unsigned long long)arg1 forPageCount:(unsigned long long)arg2;
- (void)updateEffect;
- (void)_startFade;

@end
