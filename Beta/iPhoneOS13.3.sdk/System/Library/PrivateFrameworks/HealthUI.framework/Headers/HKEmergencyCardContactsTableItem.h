/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKCoreTelephonyUtilities, UITableViewCell, _HKEmergencyContact, _HKEmergencyContactPicker;

@protocol HKEmergencyCardContactUpdateDelegate;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem

{
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    _HKEmergencyContactPicker *_contactPicker;
    _Bool _selectedContactIsBeingAdded;
    id <HKEmergencyCardContactUpdateDelegate> _delegate;
    HKCoreTelephonyUtilities *_coreTelephonyUtilities;
}

@property (retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (weak, nonatomic) id <HKEmergencyCardContactUpdateDelegate> delegate;

- (id)title;
- (long long)numberOfRows;
- (id)initInEditMode:(_Bool)arg1;
- (id)titleForHeader;
- (id)titleForFooter;
- (void)emergencyContactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)emergencyContactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (_Bool)refreshFromData;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (long long)itemTypeForRowIndex:(long long)arg1;
- (long long)contactIndexForRowIndex:(long long)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (void)callEmergencyContact:(id)arg1;
- (void)_presentEmergencyContactPicker;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (id)viewOnlyTitle;

@end
