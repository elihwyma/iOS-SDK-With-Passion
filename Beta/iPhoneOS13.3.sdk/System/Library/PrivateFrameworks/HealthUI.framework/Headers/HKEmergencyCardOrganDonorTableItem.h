/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDEditorPickerCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDEditorPickerCell *_editableCell;
    _Bool _isEditing;
}

- (id)title;
- (void)commitEditing;
- (id)possibleValues;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)setOrganDonationStatus:(unsigned long long)arg1;
- (id)_createEditableCell;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (unsigned long long)chosenIndexForOrganDonorStatus:(id)arg1;
- (id)displayValueForOrganDonorStatus:(unsigned long long)arg1;
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(CDUnknownBlockType)arg1;

@end
