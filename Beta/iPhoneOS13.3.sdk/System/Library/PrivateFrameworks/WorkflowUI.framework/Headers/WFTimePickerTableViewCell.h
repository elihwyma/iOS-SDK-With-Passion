/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIDatePicker;

@interface WFTimePickerTableViewCell : UITableViewCell

{
    UIDatePicker *_datePicker;
}

@property (nonatomic, readonly) UIDatePicker *datePicker;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
