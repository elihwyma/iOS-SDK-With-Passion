/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <ACAccount.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString;

@interface ACAccount (ICAccountAdditions)

@property (copy, nonatomic, setter=ic_setDSID:) NSNumber *ic_DSID;
@property (copy, nonatomic, setter=ic_setAltDSID:) NSString *ic_altDSID;
@property (copy, nonatomic, setter=ic_setFirstName:) NSString *ic_firstName;
@property (copy, nonatomic, setter=ic_setLastName:) NSString *ic_lastName;
@property (copy, nonatomic, setter=ic_setStorefront:) NSString *ic_storefront;
@property (copy, nonatomic, setter=ic_setUniqueIdentifier:) NSNumber *ic_uniqueIdentifier;
@property (nonatomic, getter=ic_isSandboxed, setter=ic_setSandboxed:) _Bool ic_sandboxed;
@property (nonatomic, getter=ic_isActiveLockerAccount, setter=ic_setActiveLockerAccount:) _Bool ic_activeLockerAccount;
@property (nonatomic, readonly, getter=ic_isCloudBackupEnabled) _Bool ic_cloudBackupEnabled;
@property (nonatomic, getter=ic_isManagedAppleID, setter=ic_setManagedAppleID:) _Bool ic_managedAppleID;
@property (copy, nonatomic, setter=ic_setAgeVerificationExpirationDate:) NSDate *ic_ageVerificationExpirationDate;
@property (copy, nonatomic, setter=ic_setMergeWithCloudLibraryPreference:) NSNumber *ic_mergeWithCloudLibraryPreference;
@property (nonatomic, getter=ic_isSubscriptionStatusEnabled, setter=ic_setSubscriptionStatusEnabled:) _Bool ic_subscriptionStatusEnabled;
@property (copy, nonatomic, readonly) NSArray *ic_homeUserIdentifiers;
@property (nonatomic, readonly, getter=ic_isLocalAccount) _Bool ic_localAccount;
@property (copy, nonatomic, setter=ic_setAutomaticDownloadKinds:) NSSet *ic_automaticDownloadKinds;
@property (copy, nonatomic, setter=ic_setPrivateListeningEnabled:) NSNumber *ic_privateListeningEnabled;
@property (copy, nonatomic, setter=ic_setCloudLibraryStateReason:) NSDictionary *ic_cloudLibraryStateReason;
@property (copy, nonatomic, readonly) NSDictionary *ic_privateListeningEnabledForHomeUsers;
@property (nonatomic, readonly, getter=ic_isManageable) _Bool ic_manageable;

@end
