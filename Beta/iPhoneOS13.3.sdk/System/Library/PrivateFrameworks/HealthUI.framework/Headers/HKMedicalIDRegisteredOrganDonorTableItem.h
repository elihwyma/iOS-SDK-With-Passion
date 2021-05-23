/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKOrganDonationCallToActionTableViewCell;

@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem

{
    long long _organization;
    id <HKMedicalIDRegisteredOrganDonorTableItemDelegate> _delegate;
    HKOrganDonationCallToActionTableViewCell *_notRegisteredCell;
}

@property (retain, nonatomic) HKOrganDonationCallToActionTableViewCell *notRegisteredCell;
@property (weak, nonatomic) id <HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate;

- (id)title;
- (struct UIEdgeInsets)separatorInset;
- (id)titleForFooter;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (id)initInEditMode:(_Bool)arg1 organDonationOrganization:(long long)arg2;
- (void)presentDonateLifeRegistrationSequence;
- (id)organizationLogo;

@end
