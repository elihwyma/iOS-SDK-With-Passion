/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSString, UIPickerView, WDManualDataEntryTableViewCell;

@protocol WDAddDataManualEntrySpinnerDataSource;

__attribute__((visibility("hidden")))
@interface WDAddDataManualEntrySpinner

{
    UIPickerView *_pickerView;
    WDManualDataEntryTableViewCell *_tableViewCell;
    long long _selectedPickerViewIndex;
    id <WDAddDataManualEntrySpinnerDataSource> _dataSource;
}

@property (nonatomic) long long _wd_deliveryReason;
@property (weak, nonatomic) id <WDAddDataManualEntrySpinnerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)tableViewCells;
- (id)generateValue;
- (void)_updateTableViewCellValue;

@end
