/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell

{
    UIPickerView *_picker;
    long long _chosenValueIndex;
    NSArray *_possibleValues;
}

@property (nonatomic) long long chosenValueIndex;
@property (retain, nonatomic) NSArray *possibleValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)beginEditing;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)commitEditing;
- (id)formattedValue;
- (void)_showPicker;
- (void)_hidePicker;

@end
