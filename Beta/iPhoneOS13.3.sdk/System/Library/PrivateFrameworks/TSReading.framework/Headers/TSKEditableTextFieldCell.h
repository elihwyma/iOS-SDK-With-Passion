/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell

{
    UITextField *mTextField;
}

@property (retain, nonatomic) UITextField *textField;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;

@end
