/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITextView.h>

@interface _CNAtomFieldEditor : UITextView

- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputTraits;
- (id)_textInputTraits;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)undoManager;
- (void)_share:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_define:(id)arg1;
- (id)_hostView;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
- (id)_enclosingScrollView;

@end
