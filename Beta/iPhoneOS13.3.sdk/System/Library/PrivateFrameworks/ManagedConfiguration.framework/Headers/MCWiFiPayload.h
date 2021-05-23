/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCWiFiPayload : MCPayload

{
    _Bool _isHidden;
    _Bool _captiveBypass;
    _Bool _isWEP;
    _Bool _isWPA;
    _Bool _passwordRequired;
    _Bool _usernameRequired;
    _Bool _autoJoin;
    _Bool _proxyPACFallbackAllowed;
    _Bool _isHotspot;
    _Bool _serviceProviderRoamingEnabled;
    int _proxyType;
    NSString *_ssid;
    NSString *_encryptionType;
    NSDictionary *_eapClientConfig;
    NSDictionary *_qosMarkingConfig;
    NSString *_password;
    NSString *_username;
    NSNumber *_isFirstAutoJoinRestricted;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_priority;
    NSString *_domainName;
    NSString *_HESSID;
    NSArray *_roamingConsortiumOIs;
    NSArray *_NAIRealmNames;
    NSArray *_MCCAndMNCs;
    NSString *_displayedOperatorName;
    NSNumber *_isHiddenNum;
    NSNumber *_autoJoinNum;
    NSNumber *_captiveBypassNum;
    NSNumber *_proxyPACFallbackAllowedNum;
    NSNumber *_isHotspotNum;
    NSNumber *_serviceProviderRoamingEnabledNum;
}

@property (retain, nonatomic) NSNumber *isHiddenNum;
@property (retain, nonatomic) NSNumber *autoJoinNum;
@property (retain, nonatomic) NSNumber *captiveBypassNum;
@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber *isHotspotNum;
@property (retain, nonatomic) NSNumber *serviceProviderRoamingEnabledNum;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) _Bool isHidden;
@property (nonatomic) _Bool captiveBypass;
@property (retain, nonatomic) NSString *encryptionType;
@property (nonatomic) _Bool isWEP;
@property (nonatomic) _Bool isWPA;
@property (retain, nonatomic) NSDictionary *eapClientConfig;
@property (retain, nonatomic) NSDictionary *qosMarkingConfig;
@property (nonatomic) _Bool passwordRequired;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) _Bool usernameRequired;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) _Bool autoJoin;
@property (nonatomic) NSNumber *isFirstAutoJoinRestricted;
@property (retain, nonatomic) NSString *certificateUUID;
@property (retain, nonatomic) NSArray *payloadCertificateAnchorUUID;
@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyServerPort;
@property (retain, nonatomic) NSString *proxyUsername;
@property (retain, nonatomic) NSString *proxyPassword;
@property (retain, nonatomic) NSString *proxyPACURLString;
@property (nonatomic) _Bool proxyPACFallbackAllowed;
@property (retain, nonatomic) NSString *credentialUUID;
@property (nonatomic) _Bool isHotspot;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *HESSID;
@property (nonatomic, getter=isServiceProviderRoamingEnabled) _Bool serviceProviderRoamingEnabled;
@property (retain, nonatomic) NSArray *roamingConsortiumOIs;
@property (retain, nonatomic) NSArray *NAIRealmNames;
@property (retain, nonatomic) NSArray *MCCAndMNCs;
@property (retain, nonatomic) NSString *displayedOperatorName;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)filterForUserEnrollmentOutError:(id *)arg1;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (_Bool)_eapConfigIsValid:(id)arg1 error:(id *)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(_Bool *)arg2;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(_Bool *)arg2;
- (_Bool)_qosMarkingConfigIsValid:(id)arg1 error:(id *)arg2;
- (id)_localizedEncryptionTypeString;
- (_Bool)_isEAPSIMConfig:(id)arg1;
- (id)userInputFields;

@end
