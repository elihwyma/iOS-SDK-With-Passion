/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFNetworkProfile.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WFMutableNetworkProfile : WFNetworkProfile

{
    _Bool _hidden;
    _Bool _managed;
    _Bool _adhoc;
    _Bool _captive;
    _Bool _HS20Network;
    _Bool _HS20NetworkProvisioned;
    _Bool _autoJoinEnabled;
    _Bool _autoLoginEnabled;
    _Bool _isInSaveDataMode;
    _Bool _carrierBased;
    _Bool _userProvidedPassword;
    _Bool _personalHotspot;
    _Bool _instantHotspotJoin;
    NSString *_ssid;
    NSString *_bssid;
    NSString *_username;
    NSString *_password;
    long long _securityMode;
    NSDictionary *_enterpriseProfile;
    NSArray *_certificateChain;
    NSDictionary *_scanAttributes;
    NSDate *_lastAssociationDate;
    struct __SecIdentity *_TLSIdentity;
    NSString *_originatorBundleIdentifier;
    NSString *_HS20AccountName;
    NSString *_HS20Badge;
    NSString *_previousPassword;
    NSString *_hotspotDeviceIdentifier;
}

@property (retain, nonatomic) NSArray *certificateChain;
@property (retain, nonatomic) NSDictionary *enterpriseProfile;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSDictionary *scanAttributes;
@property (nonatomic, getter=isManaged) _Bool managed;
@property (nonatomic, getter=isCaptive) _Bool captive;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isAutoJoinEnabled) _Bool autoJoinEnabled;
@property (nonatomic, getter=isAutoLoginEnabled) _Bool autoLoginEnabled;
@property (nonatomic, getter=isInSaveDataMode) _Bool isInSaveDataMode;
@property (retain, nonatomic) NSDate *lastAssociationDate;
@property (nonatomic) long long securityMode;
@property (nonatomic) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic) NSString *originatorBundleIdentifier;
@property (nonatomic, getter=isHS20Network) _Bool HS20Network;
@property (nonatomic, getter=isHS20NetworkProvisioned) _Bool HS20NetworkProvisioned;
@property (nonatomic) _Bool userProvidedPassword;
@property (retain, nonatomic) NSString *previousPassword;
@property (nonatomic, getter=isInstantHotspotJoin) _Bool instantHotspotJoin;
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier;

+ (id)mutableProfileForNetwork:(id)arg1;

- (void)dealloc;
- (id)initWithNetwork:(id)arg1;
- (void)removePassword;
- (_Bool)isAdhoc;
- (_Bool)isCarrierBased;
- (id)HS20AccountName;
- (id)HS20Badge;
- (_Bool)isPersonalHotspot;

@end
