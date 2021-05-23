/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (HKMedicalIDAddressBookBridge)

+ (id)contactKeysToLoadForMedicalID;

- (void)loadDataFromCNContact:(id)arg1;
- (id)_contactKeysToFetch;
- (_Bool)_updateExistingEmergencyContacts;
- (_Bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (_Bool)updateEmergencyContacts;

@end
