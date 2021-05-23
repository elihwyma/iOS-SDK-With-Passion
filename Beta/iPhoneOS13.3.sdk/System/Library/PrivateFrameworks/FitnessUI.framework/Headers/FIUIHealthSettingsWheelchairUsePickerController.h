/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController

{
    CDUnknownBlockType _wheelchairUseUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType wheelchairUseUpdateHandler;

- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setWheelchairUse:(long long)arg1;
- (long long)_wheelchairUseForRow:(long long)arg1;

@end
