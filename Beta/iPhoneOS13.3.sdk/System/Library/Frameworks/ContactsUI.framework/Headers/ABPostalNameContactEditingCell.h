/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactCell.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ABPostalNameContactEditingCell : CNContactCell

{
    UITextField *_editingTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCardGroupItem:(id)arg1;
- (void)_cnui_applyContactStyle;
- (id)firstResponderItem;
- (void)textFieldDidChange:(id)arg1;

@end
