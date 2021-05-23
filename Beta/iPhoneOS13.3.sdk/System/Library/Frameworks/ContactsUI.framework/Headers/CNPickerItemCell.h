/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface CNPickerItemCell : UITableViewCell

{
    _Bool _placeholder;
    UITextField *_textField;
}

@property (retain, nonatomic) UITextField *textField;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;

- (void)beginEditing;
- (void)endEditing;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTextFieldHidden:(_Bool)arg1;

@end
