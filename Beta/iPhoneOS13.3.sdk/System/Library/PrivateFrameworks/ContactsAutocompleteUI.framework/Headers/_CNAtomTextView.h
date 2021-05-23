/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITextView.h>

@class CNComposeRecipientTextView, NSArray;

@interface _CNAtomTextView : UITextView

{
    unsigned long long _textStorageEditingDepth;
    CNComposeRecipientTextView *_hostRecipientView;
}

@property (readonly) NSArray *atoms;
@property (weak) CNComposeRecipientTextView *hostRecipientView;

- (long long)baseWritingDirection;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)undoManager;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
- (void)enumerateAtoms:(CDUnknownBlockType)arg1;
- (void)enumerateAtomAttachments:(CDUnknownBlockType)arg1;
- (void)batchTextStorageUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isEditingTextStorage;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_delegateSupportsKeyboardEvents;

@end
