/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WFNetworkProfile : NSObject

{
    _Bool _hidden;
    _Bool _managed;
    _Bool _captive;
    _Bool _adhoc;
    _Bool _HS20Network;
    _Bool _HS20NetworkProvisioned;
    _Bool _autoJoinEnabled;
    _Bool _autoLoginEnabled;
    _Bool _carPlay;
    _Bool _isInSaveDataMode;
    _Bool _carrierBased;
    _Bool _personalHotspot;
    _Bool _canExposeIMSI;
    _Bool _instantHotspotJoin;
    _Bool _fetchedPassword;
    _Bool _requiresPassword;
    struct __SecIdentity *_TLSIdentity;
    NSString *_password;
    NSDictionary *_scanAttributes;
    NSArray *_certificateChain;
    NSString *_username;
    NSString *_bssid;
    NSString *_ssid;
    NSString *_HS20AccountName;
    NSString *_HS20Badge;
    long long _carPlayType;
    NSString *_carPlayUUID;
    NSString *_policyUUID;
    long long _securityMode;
    NSDate *_addedDate;
    NSDate *_lastAutoJoinDate;
    NSString *_originatorBundleIdentifier;
    NSString *_previousPassword;
    NSString *_hotspotDeviceIdentifier;
    NSDictionary *_enterpriseProfile;
}

@property (retain, nonatomic) NSDictionary *enterpriseProfile;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) long long securityMode;
@property (retain, nonatomic) NSDictionary *scanAttributes;
@property (nonatomic, getter=isAdhoc) _Bool adhoc;
@property (nonatomic, getter=isCaptive) _Bool captive;
@property (nonatomic, getter=isHS20Network) _Bool HS20Network;
@property (nonatomic, getter=isAutoJoinEnabled) _Bool autoJoinEnabled;
@property (nonatomic, getter=isCarPlay) _Bool carPlay;
@property (nonatomic) long long carPlayType;
@property (copy, nonatomic) NSString *carPlayUUID;
@property (copy, nonatomic) NSString *policyUUID;
@property (copy, nonatomic) NSString *originatorBundleIdentifier;
@property (nonatomic, getter=isHS20NetworkProvisioned) _Bool HS20NetworkProvisioned;
@property (nonatomic, getter=isCarrierBased) _Bool carrierBased;
@property (nonatomic, getter=isPersonalHotspot) _Bool personalHotspot;
@property (retain, nonatomic) NSString *HS20AccountName;
@property (retain, nonatomic) NSString *HS20Badge;
@property (nonatomic) _Bool canExposeIMSI;
@property (nonatomic) struct __SecIdentity *TLSIdentity;
@property (nonatomic) _Bool fetchedPassword;
@property (nonatomic) _Bool requiresPassword;
@property (nonatomic, getter=isInstantHotspotJoin) _Bool instantHotspotJoin;
@property (nonatomic, readonly) NSArray *certificateChain;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *password;
@property (nonatomic, readonly, getter=isManaged) _Bool managed;
@property (nonatomic, readonly, getter=isAutoLoginEnabled) _Bool autoLoginEnabled;
@property (nonatomic, readonly, getter=isInSaveDataMode) _Bool isInSaveDataMode;
@property (nonatomic, readonly) _Bool requiresUsernameAndPassword;
@property (nonatomic, readonly) NSDate *addedDate;
@property (nonatomic, readonly) NSDate *lastAutoJoinDate;
@property (nonatomic, readonly) _Bool userProvidedPassword;
@property (nonatomic, readonly) NSString *previousPassword;
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier;

+ (_Bool)networkProfileRepresentSameNetwork:(id)arg1 toNetworkProfile:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithNetwork:(id)arg1;
- (_Bool)forgetable;
- (_Bool)autoLoginConfigurable;
- (_Bool)autoJoinConfigurable;
- (_Bool)saveDataModeConfigurable;
- (id)initWithNetworkRef:(struct __WiFiNetwork *)arg1;
- (id)networkAttributes;
- (_Bool)isEnterprise;
- (_Bool)canAttemptJoin;
- (_Bool)requiresTLSIdentityOnly;
- (_Bool)profileContainsCarrierEAPType:(id)arg1;
- (_Bool)profileContainsEAPSIM:(id)arg1;
- (_Bool)profileContainsEAPAKA:(id)arg1;
- (_Bool)TLSProfileCanJoin;
- (_Bool)isEqualToNetwork:(id)arg1;

@end
