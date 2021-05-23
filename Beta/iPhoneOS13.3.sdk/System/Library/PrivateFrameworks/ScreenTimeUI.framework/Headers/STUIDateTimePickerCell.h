/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSTableCell.h>

@class UIDatePicker;

__attribute__((visibility("hidden")))
@interface STUIDateTimePickerCell : PSTableCell

{
    UIDatePicker *_datePicker;
}

@property (readonly) UIDatePicker *datePicker;

+ (double)preferredHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)timeZoneChanged:(id)arg1;

@end
