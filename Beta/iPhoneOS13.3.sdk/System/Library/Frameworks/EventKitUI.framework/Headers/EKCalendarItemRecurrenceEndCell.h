/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSDate, UIButton, UIDatePicker;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell

{
    UIButton *_neverButton;
    UIDatePicker *_datePicker;
}

@property (nonatomic, readonly) UIButton *neverButton;
@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDate *date;

- (id)init;
- (void)layoutSubviews;

@end
