/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

{
    CNPostalAddressEditorView *_addressEditor;
}

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutMarginsDidChange;
- (id)valueView;
- (id)variableConstraints;
- (void)setPresentingDelegate:(id)arg1;
- (id)firstResponderItem;
- (void)updateWithPropertyItem:(id)arg1;
- (double)leftValueMargin;
- (void)valueChanged:(id)arg1;
- (void)layoutChanged:(id)arg1;

@end
