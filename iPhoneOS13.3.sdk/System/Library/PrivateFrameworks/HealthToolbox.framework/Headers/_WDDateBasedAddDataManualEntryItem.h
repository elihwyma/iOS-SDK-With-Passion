//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataManualEntryItem.h>

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem
{
    UIDatePicker *_datePicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    BOOL _highlightWhenEditing;
    NSDateFormatter *_dateFormatter;
    long long _datePickerMode;
}

@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
// - (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)_generateValue:(id /* CDUnknownBlockType */)arg1;
- (id)generateValue;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_datePickerDidChange:(id)arg1;
- (id)tableViewCells;
- (id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(BOOL)arg2;

@end
