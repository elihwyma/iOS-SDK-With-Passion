/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIActivitySettingsController, FIUIHealthSettingsBirthDatePickerController, FIUIHealthSettingsHeightPickerController, FIUIHealthSettingsSexPickerController, FIUIHealthSettingsTableViewCell, FIUIHealthSettingsWeightPickerController, FIUIHealthSettingsWheelchairUsePickerController, NSString;

@interface FIUIHealthSettingsDataSource : NSObject

{
    FIUIHealthSettingsTableViewCell *_birthDateCell;
    FIUIHealthSettingsTableViewCell *_biologicalSexCell;
    FIUIHealthSettingsTableViewCell *_heightCell;
    FIUIHealthSettingsTableViewCell *_weightCell;
    FIUIHealthSettingsTableViewCell *_wheelchairUseCell;
    FIActivitySettingsController *_preEditSettingsController;
    _Bool _showWheelchair;
    FIActivitySettingsController *_settingsController;
    FIUIHealthSettingsBirthDatePickerController *_birthDatePickerController;
    FIUIHealthSettingsHeightPickerController *_heightPickerController;
    FIUIHealthSettingsWeightPickerController *_weightPickerController;
    FIUIHealthSettingsSexPickerController *_sexPickerController;
    FIUIHealthSettingsWheelchairUsePickerController *_wheelchairUsePickerController;
}

@property (retain, nonatomic) FIActivitySettingsController *settingsController;
@property (retain, nonatomic) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (retain, nonatomic) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWeightPickerController *weightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWheelchairUsePickerController *wheelchairUsePickerController;
@property (nonatomic, readonly) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)startEditing;
- (void)_updateCells;
- (void)_updateBirthDateCell;
- (void)_updateBiologicalSexCell;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (void)_updateWheelchairUseCell;
- (id)birthDateCell;
- (id)biologicalSexCell;
- (id)heightCell;
- (id)weightCell;
- (id)wheelchairUseCell;
- (id)initWithActivitySettingsController:(id)arg1 showWheelchair:(_Bool)arg2;
- (void)cellDidBecomeFirstResponder:(id)arg1;
- (void)cellDidResignFirstResponder:(id)arg1;
- (void)endEditingAndDiscardChanges:(_Bool)arg1;

@end
