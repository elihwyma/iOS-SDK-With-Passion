/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSString, UIPickerView, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDHeightPickerManualEntryItem

{
    UIPickerView *_heightPicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSString *_feetUnitString;
    NSString *_inchUnitString;
}

@property (retain, nonatomic) NSString *feetUnitString;
@property (retain, nonatomic) NSString *inchUnitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (void)setTitle:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)tableViewCells;
- (id)generateValue;
- (id)_setupHeightPicker;
- (void)_updateTableViewCell;

@end
