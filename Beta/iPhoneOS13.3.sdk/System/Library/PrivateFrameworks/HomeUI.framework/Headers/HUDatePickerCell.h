/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSDateComponents, UIDatePicker;

@protocol HUDatePickerCellDelegate;

@interface HUDatePickerCell : UITableViewCell

{
    id <HUDatePickerCellDelegate> _delegate;
    UIDatePicker *_datePicker;
}

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (weak, nonatomic) id <HUDatePickerCellDelegate> delegate;
@property (retain, nonatomic) NSDateComponents *timeComponents;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_valueChanged:(id)arg1;

@end
