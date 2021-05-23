/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDEditorDateCell, NSCalendar;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDEditorDateCell *_editableCell;
    NSCalendar *_gregorianCalendar;
}

- (id)title;
- (id)initInEditMode:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (id)_cachedCalendar;
- (id)_createEditableCell;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;

@end
