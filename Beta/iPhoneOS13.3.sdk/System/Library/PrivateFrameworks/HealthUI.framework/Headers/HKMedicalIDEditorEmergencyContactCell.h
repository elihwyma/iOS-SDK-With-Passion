/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell

{
    _HKEmergencyContact *_contact;
}

@property (retain, nonatomic) _HKEmergencyContact *contact;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)formattedValue;
- (void)_labelTapped:(id)arg1;

@end
