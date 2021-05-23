/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell

{
    UIPickerView *_picker;
    long long _localWeightUnit;
    long long _numberOfRowsForPicker;
    NSNumber *_kilogramValue;
}

@property (retain, nonatomic) NSNumber *kilogramValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultKilogramValue;

- (void)dealloc;
- (void)beginEditing;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)commitEditing;
- (void)_localeDidChange:(id)arg1;
- (id)formattedValue;
- (void)_showPicker;
- (void)_hidePicker;

@end
