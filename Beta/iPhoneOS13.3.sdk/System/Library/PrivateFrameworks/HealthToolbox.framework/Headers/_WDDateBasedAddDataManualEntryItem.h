/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDDateBasedAddDataManualEntryItem

{
    UIDatePicker *_datePicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    _Bool _highlightWhenEditing;
    NSDateFormatter *_dateFormatter;
    long long _datePickerMode;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) long long datePickerMode;

- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableViewCells;
- (id)generateValue;
- (id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(_Bool)arg2;
- (void)_datePickerDidChange:(id)arg1;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_generateValue:(CDUnknownBlockType)arg1;

@end
