/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController

{
    CDUnknownBlockType _sexUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType sexUpdateHandler;

- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setBiologicalSex:(long long)arg1;
- (long long)_biologicalSexForRow:(long long)arg1;
- (void)_updateWithBiologicalSex:(long long)arg1;

@end
