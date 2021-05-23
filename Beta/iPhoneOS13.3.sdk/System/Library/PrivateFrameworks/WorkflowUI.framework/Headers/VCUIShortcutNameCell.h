/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

@interface VCUIShortcutNameCell : UITableViewCell

{
    UITextField *_textField;
}

@property (nonatomic, readonly) UITextField *textField;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
