/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIView.h>

@class PDFMarkupMenuViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupMenuView : UIView

{
    PDFMarkupMenuViewPrivate *_private;
}

- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)hide;
- (void)_updateAppearance;
- (void)_setupViews;
- (id)_newMaskView:(long long)arg1;
- (id)_menuControls;
- (_Bool)_shouldShowCompactMenu;
- (void)_setControls:(id)arg1;
- (struct CGSize)_sizeThatFitsControls:(id)arg1;
- (void)_setBlurDisabled:(_Bool)arg1;
- (void)_handleDeleteButtonTap;
- (struct CGRect)_dividerLineRectForControl:(long long)arg1;
- (int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (int)_noteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (int)_colorMenuIconForMarkupStyle:(unsigned long long)arg1;
- (void)useColorOf:(id)arg1;
- (void)showColorControlsMenu:(id)arg1;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleAddNoteButton:(id)arg1;
- (void)handleRightArrowButton:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1;
- (void)setMarkupNoteStyle:(unsigned long long)arg1;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2 visibleRect:(struct CGRect)arg3;

@end
