/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, UITextField;

@interface FPUIAuthenticationTextInputCell : UITableViewCell

{
    UIStackView *_stackView;
    UILabel *_label;
    UITextField *_textField;
}

@property (weak, nonatomic, readonly) UILabel *label;
@property (weak, nonatomic, readonly) UITextField *textField;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)_isLargeTextTraitCollection:(id)arg1;

@end
