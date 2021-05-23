/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIPickerView;

@protocol UIPickerViewDelegate><UIPickerViewDataSource;

@interface WFPickerViewTableViewCell : UITableViewCell

{
    UIPickerView *_pickerView;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property (weak, nonatomic) id <UIPickerViewDelegate><UIPickerViewDataSource> delegate;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
