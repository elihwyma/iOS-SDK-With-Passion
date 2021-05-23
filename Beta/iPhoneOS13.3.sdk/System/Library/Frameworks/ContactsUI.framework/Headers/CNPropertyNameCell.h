/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactCell.h>

@class CNPropertyGroupItem, UIResponder, UITextField;

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyNameCell : CNContactCell

{
    UITextField *_textField;
    UIResponder *_firstResponderItem;
    id <CNPropertyCellDelegate> _delegate;
}

@property (retain, nonatomic) CNPropertyGroupItem *propertyItem;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldIndentWhileEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (double)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;

@end
