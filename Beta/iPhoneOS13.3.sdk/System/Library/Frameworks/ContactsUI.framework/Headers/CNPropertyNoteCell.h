/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyCell.h>

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface CNPropertyNoteCell : CNPropertyCell

{
    UITextView *_textView;
    UILabel *_labelLabel;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (retain, nonatomic) UITextView *textView;

- (void)dealloc;
- (_Bool)shouldIndentWhileEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAllowsEditing:(_Bool)arg1;
- (id)labelView;
- (void)setProperty:(id)arg1;
- (id)valueView;
- (_Bool)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)setValueTextAttributes:(id)arg1;
- (_Bool)supportsTintColorValue;
- (_Bool)allowsCellSelection;
- (_Bool)displaysCellSelectionState;
- (double)valueViewBottomMargin;
- (void)textViewChanged:(id)arg1;
- (void)textViewEditingDidEnd:(id)arg1;

@end
