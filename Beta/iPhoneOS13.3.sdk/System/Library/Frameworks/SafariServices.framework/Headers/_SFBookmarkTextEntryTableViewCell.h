/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell

{
    NSLayoutConstraint *_leadingConstraint;
    UITextField *_textField;
}

@property (nonatomic, readonly) UITextField *editableTextField;

- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (void)safeAreaInsetsDidChange;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3;

@end
