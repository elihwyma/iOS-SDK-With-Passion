/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Accounts/ACAccount.h>

@class AARegionInfo, AASuspensionInfo, NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleID)

@property (nonatomic, readonly) NSString *aa_formattedUsername;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSString *aa_appleId;
@property (nonatomic, readonly) NSArray *aa_appleIDAliases;
@property (nonatomic, readonly) NSString *aa_personID;
@property (nonatomic, readonly) NSString *aa_altDSID;
@property (copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property (copy, nonatomic, setter=aa_setMiddleName:) NSString *aa_middleName;
@property (copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property (copy, nonatomic, setter=aa_setAccountClass:) NSString *aa_accountClass;
@property (copy, nonatomic, readonly) AARegionInfo *aa_regionInfo;
@property (nonatomic, setter=aa_setPrimaryAccount:) _Bool aa_isPrimaryAccount;
@property (nonatomic, setter=aa_setPrimaryEmailVerified:) _Bool aa_isPrimaryEmailVerified;
@property (nonatomic, setter=aa_setNeedsToVerifyTerms:) _Bool aa_needsToVerifyTerms;
@property (nonatomic, setter=aa_setUsesCloudDocs:) _Bool aa_isUsingCloudDocs;
@property (nonatomic, setter=aa_setCloudDocsMigrationComplete:) _Bool aa_isCloudDocsMigrationComplete;
@property (nonatomic, readonly) _Bool aa_isUsingiCloud;
@property (nonatomic, readonly) _Bool aa_needsEmailConfiguration;
@property (nonatomic, readonly) _Bool aa_isManagedAppleID;
@property (nonatomic, readonly) _Bool aa_isNotesMigrated;
@property (nonatomic, readonly) _Bool aa_isRemindersMigrated;
@property (nonatomic, readonly) _Bool aa_isSandboxAccount;
@property (nonatomic, readonly) _Bool aa_isAuthKitAccount;
@property (nonatomic, readonly) _Bool aa_hasOptionalTerms;
@property (copy, nonatomic, setter=aa_setLastKnownQuota:) NSNumber *aa_lastKnownQuota;
@property (nonatomic, setter=aa_setRepairState:) NSNumber *aa_repairState;
@property (nonatomic, readonly) _Bool aa_isSuspended;
@property (copy, nonatomic, readonly) AASuspensionInfo *aa_suspensionInfo;
@property (nonatomic, readonly) _Bool aa_isFamilyEligible;
@property (nonatomic, readonly) ACAccount *aa_fmfAccount;
@property (nonatomic, readonly) ACAccount *aa_fmipAccount;
@property (nonatomic, readonly) ACAccount *aa_cloudKitAccount;
@property (nonatomic, readonly) ACAccount *aa_childMailAccount;
@property (copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
@property (copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
@property (nonatomic, readonly) NSString *aa_fmipToken;
@property (nonatomic, readonly) NSString *aa_mapsToken;
@property (nonatomic, readonly) NSString *aa_mdmServerToken;
@property (nonatomic, setter=aa_setSyncedAccount:) _Bool aa_isSyncedAccount;
@property (nonatomic, readonly) _Bool aa_needsRegistration;
@property (nonatomic, readonly) _Bool aa_serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *aa_serviceUnavailableInfo;
@property (nonatomic, readonly) NSString *aa_protocolVersion;
@property (nonatomic, readonly) NSString *aa_displayName;
@property (nonatomic, readonly) NSString *aa_syncStoreIdentifier;
@property (nonatomic, readonly) NSString *aa_accountTypeString;
@property (nonatomic, readonly) NSString *aa_accountFooterText;
@property (nonatomic, readonly) NSDictionary *aa_accountFooterButton;
@property (nonatomic, readonly) NSDictionary *aa_accountFirstDisplayAlert;
@property (copy, nonatomic, setter=_aa_setRawPassword:) NSString *_aa_rawPassword;

- (id)dsid;
- (id)appleID;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)setDSID:(id)arg1;
- (id)_registeredBundles;
- (id)normalizedDSID;
- (_Bool)canRemoveAccount;
- (void)storeOriginalUsername;
- (_Bool)aa_isAccountClass:(id)arg1;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (_Bool)_hasMailDataclassProperties;
- (_Bool)aa_updateTokensWithProvisioningResponse:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (void)aa_setMDMServerToken:(id)arg1;
- (_Bool)aa_updateAccountClassIfNecessary;
- (id)aa_authTokenWithError:(id *)arg1;
- (id)aa_hsaTokenWithError:(id *)arg1;
- (_Bool)aa_useCellularForDataclass:(id)arg1;
- (void)aa_setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;
- (void)_aa_setAppleID:(id)arg1;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setPrimaryEmail:(id)arg1;
- (void)_aa_clearRawPassword;

@end
