/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UITextView.h>

@class PKTiledView;

@interface UITextView (IC)

@property (nonatomic, readonly) PKTiledView *ic_pkTiledView;
@property (nonatomic, readonly) struct CGPoint ic_textContainerOrigin;

- (id)ic_selectedRanges;
- (void)setIc_SelectedRanges:(id)arg1;
- (struct CGRect)ic_rectForRange:(struct _NSRange)arg1;
- (id)ic_imageForRange:(struct _NSRange)arg1;
- (id)ic_textRangeFromCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)ic_characterRangeFromTextRange:(id)arg1;
- (void)ic_scrollRangeToVisible:(struct _NSRange)arg1 consideringInsets:(_Bool)arg2 animated:(_Bool)arg3;
- (void)ic_scrollRangeToTop:(struct _NSRange)arg1;
- (struct _NSRange)ic_characterRangeFromTextPosition:(id)arg1;
- (struct _NSRange)ic_visibleRange;
- (struct _NSRange)ic_rangeFromRect:(struct CGRect)arg1;

@end
