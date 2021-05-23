/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, STCoreOrganization, STCoreOrganizationSettings, STFamilyOrganizationSettings, STLocalOrganizationSettings, STUserDeviceState, STiCloudOrganizationSettings;

@interface STCoreUser : NSManagedObject

@property (readonly) _Bool screenTimeEnabled;
@property (readonly) _Bool syncingEnabled;
@property (readonly) _Bool allLimitsEnabled;
@property (copy, nonatomic, readonly) NSString *localizedFullName;
@property (readonly) STCoreOrganization *managingOrganization;
@property (readonly) _Bool canSetUpFamily;
@property (readonly, getter=isManaged) _Bool managed;
@property (readonly, getter=isManaging) _Bool managing;
@property (readonly) _Bool shareWebUsage;
@property (copy, readonly) NSString *effectivePasscode;
@property (copy, readonly) NSString *effectiveRecoveryAltDSID;
@property (readonly) _Bool needsToSetPasscode;
@property (readonly) NSString *organizationIdentifier;
@property (readonly) long long communicationPolicy;
@property (readonly) long long communicationWhileLimitedPolicy;
@property (readonly) _Bool contactsEditable;
@property _Bool screenTimeEnabled;
@property _Bool syncingEnabled;
@property _Bool allLimitsEnabled;
@property _Bool shareWebUsage;
@property (copy) NSString *effectivePasscode;
@property (copy) NSString *effectiveRecoveryAltDSID;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) _Bool contactsEditable;
@property (readonly) _Bool unmodeledParticipatesInSharedLedger;
@property (readonly) STCoreOrganizationSettings *unmodeledManagingOrganizationSettings;
@property (copy, readonly) NSString *alwaysAllowActivationIdentifier;
@property (copy, readonly) NSString *alwaysAllowConfigurationIdentifier;
@property (copy, readonly) NSString *managedUserActivationIdentifier;
@property (copy, readonly) NSString *iCloudLogoutConfigurationIdentifier;
@property (copy, readonly) NSString *automaticDateTimeConfigurationIdentifier;
@property (copy, nonatomic, readonly) NSString *phoneticGivenName;
@property (copy, nonatomic, readonly) NSString *phoneticFamilyName;
@property (nonatomic) _Bool isFamilyOrganizer;
@property (retain, nonatomic) STLocalOrganizationSettings *localSettings;
@property (retain, nonatomic) STiCloudOrganizationSettings *cloudSettings;
@property (retain, nonatomic) STFamilyOrganizationSettings *familySettings;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *familyMemberType;
@property (nonatomic) _Bool isParent;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (nonatomic) long long passcodeEntryAttemptCount;
@property (copy, nonatomic) NSDate *passcodeEntryTimeoutEndDate;
@property (nonatomic) _Bool supportsEncryption;
@property (copy, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSSet *blueprints;

+ (id)fetchRequestForUsersWithDSID:(id)arg1;
+ (id)fetchUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)fetchLocalUserInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestMatchingLocalUser;
+ (id)fetchRequestMatchingAppleID:(id)arg1;
+ (id)fetchUserWithAppleID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestForFamilyMembers;
+ (id)keyPathsForValuesAffectingLocalizedFullName;
+ (id)keyPathsForValuesAffectingSyncingEnabled;
+ (id)keyPathsForValuesAffectingAllLimitsEnabled;
+ (id)keyPathsForValuesAffectingManaged;
+ (id)keyPathsForValuesAffectingManaging;
+ (id)keyPathsForValuesAffectingEffectivePasscode;
+ (id)keyPathsForValuesAffectingEffectiveRecoveryAltDSID;
+ (id)keyPathsForValuesAffectingNeedsToSetPasscode;
+ (id)keyPathsForValuesAffectingShareWebUsage;
+ (id)keyPathsForValuesAffectingCommunicationPolicy;
+ (id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+ (id)keyPathsForValuesAffectingContactManagementState;

- (void)didChangeValueForKey:(id)arg1;
- (void)updateWithDescription:(id)arg1;
- (void)notifyServerOfScreenTimeEnabled:(_Bool)arg1;
- (id)_contactStoreForUser;
- (id)_primaryContainerInContactStore:(id)arg1 withError:(id *)arg2;

@end
