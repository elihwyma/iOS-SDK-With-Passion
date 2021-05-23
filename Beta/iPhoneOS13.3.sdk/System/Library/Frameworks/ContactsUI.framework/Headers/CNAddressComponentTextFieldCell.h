/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDictionary, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentTextFieldCell : UITableViewCell

{
    UITextField *_textFieldForChevron;
    NSArray *_componentConstraints;
    UITextField *_textField;
    UIImageView *_chevron;
}

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIImageView *chevron;
@property (nonatomic, readonly) NSArray *textFields;
@property (weak, nonatomic) UITextField *textFieldForChevron;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) NSArray *componentConstraints;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupTextFields;
- (id)currentConstraintsForMetrics:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)addTextField;

@end
