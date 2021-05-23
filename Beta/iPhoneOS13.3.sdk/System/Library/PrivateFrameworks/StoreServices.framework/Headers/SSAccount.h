/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class ACAccount, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface SSAccount : NSObject

{
    ACAccount *_backingAccount;
    NSData *_bioToken;
    _Bool _didFallbackToPassword;
    NSObject<OS_dispatch_queue> *_backingAccountAccessQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingAccountAccessQueue;
@property long long accountSource;
@property (copy, nonatomic) NSArray *automaticDownloadKinds;
@property (nonatomic, readonly) ACAccount *backingAccount;
@property (nonatomic, readonly, getter=isDemoAccount) _Bool demoAccount;
@property (copy, nonatomic) NSString *demoAccountRawPassword;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;
@property (nonatomic, readonly) _Bool hasBrokenDSID;
@property (nonatomic, readonly, getter=isLocalAccount) _Bool localAccount;
@property (copy, nonatomic) NSString *secureToken;
@property _Bool didFallbackToPassword;
@property (getter=isActive) _Bool active;
@property (getter=isActiveLockerAccount) _Bool activeLockerAccount;
@property (copy) NSString *ITunesPassSerialNumber;
@property (getter=isNewCustomer) _Bool newCustomer;
@property (getter=isManagedAppleID) _Bool managedAppleID;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (copy, nonatomic) NSString *rawPassword;
@property long long accountKind;
@property (copy) NSString *accountName;
@property long long accountScope;
@property (copy) NSString *altDSID;
@property (getter=isAuthenticated) _Bool authenticated;
@property (copy) NSString *creditsString;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSDictionary *privacyAcknowledgement;
@property (getter=isSocialEnabled) _Bool socialEnabled;
@property (copy) NSString *storeFrontIdentifier;
@property (retain) NSNumber *uniqueIdentifier;
@property long long availableServiceTypes;
@property long long enabledServiceTypes;
@property long long freeDownloadsPasswordSetting;
@property long long paidPurchasesPasswordSetting;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_displayedServerPromptKeyWithIdentifier:(id)arg1;
+ (id)_lastAttemptForServerPromptKeyWithIdentifier:(id)arg1;
+ (_Bool)backingAccountIsDemoAccount:(id)arg1;
+ (id)secureTokenForIdentifier:(id)arg1;
+ (id)_countryCodeFromStorefrontIdentifier:(id)arg1;
+ (id)_valueForFirstAvailableKeyPath:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)backingAccountIsLocalAccount:(id)arg1;
+ (long long)accountKindFromAuthenticationResponseDictionary:(id)arg1;
+ (id)accountNameFromAuthenticationResponseDictionary:(id)arg1;
+ (id)altDSIDFromAuthenticationResponseDictionary:(id)arg1;
+ (id)creditsStringFromAuthenticationResponseDictionary:(id)arg1;
+ (id)DSIDFromAuthenticationResponseDictionary:(id)arg1;
+ (id)firstNameFromAuthenticationResponseDictionary:(id)arg1;
+ (_Bool)isManagedAppleIDFromAuthenticationResponseDictionary:(id)arg1;
+ (_Bool)isNewCustomerFromAuthenticationResponseDictionary:(id)arg1;
+ (id)lastNameFromAuthenticationResponseDictionary:(id)arg1;
+ (id)storeFrontIdentifierFromURLResponse:(id)arg1;
+ (id)serverValueForAccountPasswordSettingValue:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (id)hashedDescription;
- (void)_sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setLockdownDictionary:(id)arg1;
- (id)initWithBackingAccount:(id)arg1;
- (id)_backingAccount;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)_addAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2;
- (void)_removeAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2;
- (void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3;
- (void)_setBackingAccount:(id)arg1;
- (id)eligibilityForService:(long long)arg1;
- (void)setEligibility:(id)arg1 forServiceType:(long long)arg2;
- (void)updateAccountPasswordSettingsWithRequestProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)displayedServerPromptWithIdentifier:(id)arg1;
- (id)lastAttemptDateForServerPromptWithIdentifier:(id)arg1;
- (_Bool)isDuplicate:(id)arg1;
- (void)setDisplayedServerPrompt:(_Bool)arg1 withIdentifier:(id)arg2;
- (void)setLastAttemptDate:(id)arg1 forServerPromptWithIdentifier:(id)arg2;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(CDUnknownBlockType)arg1;
- (void)getEligibilityForService:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTermsAndConditionsWithBlock:(CDUnknownBlockType)arg1;
- (void)addAvailableServiceTypes:(long long)arg1;
- (void)addEnabledServiceTypes:(long long)arg1;
- (void)getITunesMatchStatusWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getKeybagSyncDataWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAvailableServiceTypes:(long long)arg1;
- (void)removeEnabledServiceTypes:(long long)arg1;
- (void)resetTransientData;
- (id)copyLockdownRepresentation;
- (_Bool)mergeValuesFromAccount:(id)arg1;
- (id)popBiometricToken;
- (void)setBiometricToken:(id)arg1;
- (void)updateAccountPasswordSettings:(CDUnknownBlockType)arg1;
- (void)_sendBlockingXPCMessage:(id)arg1;

@end
