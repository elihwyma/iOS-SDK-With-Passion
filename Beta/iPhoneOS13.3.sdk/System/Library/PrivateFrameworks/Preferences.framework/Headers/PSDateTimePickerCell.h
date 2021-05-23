/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIDatePicker;

@interface PSDateTimePickerCell

{
    UIDatePicker *_datePicker;
}

+ (double)preferredHeight;

- (void)dealloc;
- (void)layoutSubviews;
- (id)datePicker;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)timeZoneChanged:(id)arg1;

@end
