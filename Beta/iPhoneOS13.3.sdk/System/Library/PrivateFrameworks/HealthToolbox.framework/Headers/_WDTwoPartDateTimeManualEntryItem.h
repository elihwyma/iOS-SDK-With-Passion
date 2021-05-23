/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDTwoPartDateTimeManualEntryItem

{
    UIDatePicker *_datePicker;
    UIDatePicker *_timePicker;
    WDManualDataEntryTableViewCell *_dateTableViewCell;
    WDManualDataEntryTableViewCell *_timeTableViewCell;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
}

- (void)beginEditing;
- (void)setValue:(id)arg1;
- (id)tableViewCells;
- (id)generateValue;
- (id)initWithMaximumDate:(id)arg1;
- (void)_datePickerDidChange:(id)arg1;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_generateValue:(CDUnknownBlockType)arg1;
- (void)_setupTableViewCells;
- (void)_timePickerDidChange:(id)arg1;
- (void)_updateCellLabels;

@end
