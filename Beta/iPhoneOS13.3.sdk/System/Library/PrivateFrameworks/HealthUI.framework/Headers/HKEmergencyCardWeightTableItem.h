/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDEditorWeightCell;

@interface HKEmergencyCardWeightTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDEditorWeightCell *_editableCell;
}

- (id)title;
- (void)commitEditing;
- (void)localeDidChange:(id)arg1;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)_createEditableCell;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;

@end
