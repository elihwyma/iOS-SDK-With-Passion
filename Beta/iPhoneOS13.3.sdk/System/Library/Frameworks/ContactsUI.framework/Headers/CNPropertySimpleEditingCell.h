/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyEditingCell.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell : CNPropertyEditingCell

{
    UITextField *_textField;
}

@property (nonatomic, readonly) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)textFieldChanged:(id)arg1;
- (id)valueView;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)firstResponderItem;
- (void)updateValueWithPropertyItem:(id)arg1;

@end
