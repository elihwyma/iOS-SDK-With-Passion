/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleMediaServices)

@property (nonatomic, readonly) NSString *ams_altDSID;
@property (nonatomic, readonly) NSArray *ams_cookies;
@property (nonatomic, readonly) NSString *ams_creditsString;
@property (nonatomic, readonly) NSNumber *ams_DSID;
@property (nonatomic, readonly) NSString *ams_firstName;
@property (nonatomic, readonly, getter=ams_isDemoAccount) _Bool ams_demoAccount;
@property (nonatomic, setter=ams_setFreePasswordPromptSetting:) unsigned long long ams_freePasswordPromptSetting;
@property (nonatomic, readonly) NSString *ams_fullName;
@property (nonatomic, readonly, getter=ams_isHSA2) _Bool ams_HSA2;
@property (nonatomic, readonly, getter=ams_isiCloudAccount) _Bool ams_iCloudAccount;
@property (nonatomic, readonly, getter=ams_isIDMSAccount) _Bool ams_IDMSAccount;
@property (nonatomic, readonly, getter=ams_isiTunesAccount) _Bool ams_iTunesAccount;
@property (nonatomic, readonly) NSString *ams_lastName;
@property (nonatomic, readonly, getter=ams_isLocalAccount) _Bool ams_localAccount;
@property (nonatomic, readonly, getter=ams_isManagedAppleID) _Bool ams_managedAppleID;
@property (nonatomic, setter=ams_setMergedPrivacyAcknowledgement:) _Bool ams_mergedPrivacyAcknowledgement;
@property (nonatomic, setter=ams_setPaidPasswordPromptSetting:) unsigned long long ams_paidPasswordPromptSetting;
@property (nonatomic, readonly, getter=ams_isPrivateListeningEnabled) _Bool ams_privateListeningEnabled;
@property (nonatomic, readonly) NSDictionary *ams_privacyAcknowledgement;
@property (nonatomic, readonly, getter=ams_isSandboxAccount) _Bool ams_sandboxAccount;
@property (nonatomic, readonly) unsigned long long ams_securityLevel;
@property (nonatomic, readonly) NSString *ams_storefront;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *hashedDescription;

+ (id)_defaultValueForAccountFlag:(id)arg1;
+ (_Bool)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2;
+ (_Bool)_isAccountFlagWritable:(id)arg1;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;

- (void)ams_setAgreedToTerms:(_Bool)arg1;
- (void)ams_setInGoodStanding:(_Bool)arg1;
- (void)ams_setiCloudFamily:(_Bool)arg1;
- (void)ams_setValidPayment:(_Bool)arg1;
- (id)ams_lastAuthenticationServerResponse;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (_Bool)ams_isActiveForMediaType:(id)arg1;
- (id)ams_homeUserIdentifiers;
- (id)ams_cookiesForURL:(id)arg1;
- (id)ams_secureToken;
- (void)ams_removeCookiesMatchingProperties:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResponse:(id)arg1;
- (_Bool)ams_addCookiesForResponse:(id)arg1;
- (void)ams_setPassword:(id)arg1;
- (void)ams_setActive:(_Bool)arg1 forMediaType:(id)arg2;
- (id)ams_homeIdentifier;
- (id)ams_password;
- (void)ams_setHomeIdentifier:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (long long)ams_mergePrivacyAcknowledgement:(id)arg1;
- (void)ams_setBiometricsState:(long long)arg1;
- (long long)ams_biometricsState;
- (void)ams_setStorefront:(id)arg1;
- (id)ams_storefrontForMediaType:(id)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setStorefront:(id)arg1 forMediaType:(id)arg2;
- (id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(unsigned long long)arg2 expectedClasses:(id)arg3 error:(id *)arg4;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(unsigned long long)arg3 expectedClass:(Class)arg4;
- (id)ams_accountFlags;
- (void)ams_setAccountFlags:(id)arg1;
- (_Bool)_updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2;
- (_Bool)ams_addCookies:(id)arg1;
- (id)_cookiesMatchingProperties:(id)arg1;
- (void)ams_removeCookies:(id)arg1;
- (id)_hashedIdentifiers;
- (id)_hashedMultiUserIdentifiers;
- (id)_hashedActiveState;
- (id)_hashedStorefront;
- (void)ams_addHomeUserIdentifier:(id)arg1;
- (void)ams_removeHomeUserIdentifier:(id)arg1;
- (void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2;
- (id)ams_accountFlagValueForAccountFlag:(id)arg1;
- (id)ams_allStorefronts;
- (_Bool)ams_didAgreeToTerms;
- (_Bool)ams_isiCloudFamily;
- (_Bool)ams_isInGoodStanding;
- (_Bool)ams_isValidPayment;
- (id)ams_rawPassword;
- (id)ams_registerSuccessCriteria;
- (_Bool)ams_requiresAuthKitUpdate;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setManagedAppleID:(_Bool)arg1;
- (void)ams_setRegisterSuccessCriteria:(id)arg1;
- (void)ams_setServerResponse:(id)arg1;
- (id)ams_delta:(id)arg1;
- (_Bool)ams_encryptAccountFlags;
- (_Bool)ams_isDuplicate:(id)arg1;
- (_Bool)ams_isPrivateListeningEnabledForHomeUserIdentifier:(id)arg1;
- (void)ams_setPrivateListeningEnabled:(_Bool)arg1 forHomeUserIdentifier:(id)arg2;
- (_Bool)ams_addCookiesForResult:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResult:(id)arg1;
- (void)ams_removeAllCookies;
- (id)_createCookieStorage;
- (id)ams_homeID;
- (id)ams_homeUserID;
- (_Bool)ams_postAccountFlagsWithBagContract:(id)arg1;
- (void)ams_setHomeID:(id)arg1;
- (void)ams_setHomeUserID:(id)arg1;
- (void)ams_setValue:(_Bool)arg1 forAccountFlag:(id)arg2;
- (_Bool)ams_valueForAccountFlag:(id)arg1;

@end
