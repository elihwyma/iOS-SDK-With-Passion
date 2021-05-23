/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSUserDefaults;

@interface ICDefaults : NSObject

{
    NSUserDefaults *_userDefaults;
    _Bool _bypassBagSanityChecks;
    NSUserDefaults *_internalDefaults;
}

@property (nonatomic, readonly) NSUserDefaults *internalDefaults;
@property (copy, nonatomic) NSString *cloudMediaLibraryUID;
@property (nonatomic, readonly) NSString *defaultStoreFront;
@property (copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property (copy, nonatomic) NSDictionary *cachedMusicUserTokens;
@property (copy, nonatomic) NSDictionary *pushNotificationState;
@property (copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property (copy, nonatomic) NSNumber *lastActiveAccountDSID;
@property (copy, nonatomic) NSDictionary *lastCookieHeadersForRevokingMusicUserTokens;
@property (copy, nonatomic) NSDate *lastAllowedInteractiveAuthenticationTime;
@property (copy, nonatomic) NSDictionary *authServiceClientTokenCache;
@property (nonatomic) double lastAuthenticationDialogResponseTime;
@property (copy, nonatomic) NSDictionary *lastKnownLocalStoreAccountProperties;
@property (copy, nonatomic) NSDictionary *lastKnownSubscriptionStatusBaseCacheKey;
@property (nonatomic) _Bool ignoreExtendedCertificateValidation;
@property (nonatomic) _Bool bypassBagSanityChecks;
@property (copy, nonatomic, readonly) NSString *deviceModelOverride;
@property (copy, nonatomic, readonly) NSNumber *deviceClassOverride;
@property (copy, nonatomic, readonly) NSNumber *fairPlayDeviceTypeOverride;
@property (copy, nonatomic, readonly) NSString *productVersionOverride;
@property (copy, nonatomic, readonly) NSString *hardwarePlatformOverride;
@property (copy, nonatomic, readonly) NSString *productPlatformOverride;
@property (copy, nonatomic, readonly) NSNumber *networkTypeOverride;
@property (nonatomic, readonly) _Bool shouldForceiPhoneBehaviors;
@property (copy, nonatomic, readonly) NSNumber *authServiceClientTokenTimeToLive;
@property (nonatomic) _Bool shouldRunAgeVerification;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (nonatomic, getter=isExplicitContentAllowedForCurrentYear) _Bool explicitContentAllowedForCurrentYear;
@property (nonatomic, getter=isExplicitContentAllowedForExpirationYear) _Bool explicitContentAllowedForExpirationYear;
@property (nonatomic, getter=isGrazingPathEnabled) _Bool grazingPathEnabled;
@property (copy, nonatomic) NSDictionary *lastKnownUserAgeVerificationState;

+ (id)standardDefaults;

- (id)init;
- (void)synchronize;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldSpoofIPhoneRequestProperties;

@end
