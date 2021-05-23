/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSNumberFormatter, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDNumberBasedAddDataManualEntryItem

{
    WDManualDataEntryTableViewCell *_tableViewCell;
    unsigned long long _manualEntryType;
    NSNumberFormatter *_numberFormatter;
}

@property (nonatomic) unsigned long long manualEntryType;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;

- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableViewCells;
- (id)generateValue;
- (void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2;

@end
