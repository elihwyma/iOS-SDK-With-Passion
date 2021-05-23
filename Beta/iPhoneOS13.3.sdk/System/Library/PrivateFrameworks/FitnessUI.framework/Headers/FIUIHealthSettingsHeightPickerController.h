/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController

{
    NSLengthFormatter *_heightFormatter;
    CDUnknownBlockType _heightUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType heightUpdateHandler;

- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)setHeightQuantity:(id)arg1;

@end
