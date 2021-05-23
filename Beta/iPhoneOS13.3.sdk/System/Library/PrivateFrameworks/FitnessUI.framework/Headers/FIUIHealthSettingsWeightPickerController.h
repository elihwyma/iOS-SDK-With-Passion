/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSString;

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController

{
    long long numberOfComponents;
    long long numberOfRows;
    CDUnknownBlockType _weightUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType weightUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)_weightQuantityForRow:(long long)arg1;
- (void)_updateWithWeightQuantity:(id)arg1;
- (id)_weightDisplayStringForRow:(long long)arg1;
- (double)_weightInLocaleUnitForRow:(long long)arg1;
- (void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg1;
- (void)setWeightQuantity:(id)arg1;

@end
