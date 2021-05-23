/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNAddressComponentTextFieldCell.h>

@class CNRepeatingGradientSeparatorView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell

{
    UITextField *_textFieldLeft;
    UITextField *_textFieldRight;
    CNRepeatingGradientSeparatorView *_separator;
}

@property (retain, nonatomic) UITextField *textFieldLeft;
@property (retain, nonatomic) UITextField *textFieldRight;
@property (retain, nonatomic) CNRepeatingGradientSeparatorView *separator;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)textFields;
- (id)textAttributes;
- (void)setTextAttributes:(id)arg1;
- (void)setupTextFields;
- (id)currentConstraintsForMetrics:(id)arg1;

@end
