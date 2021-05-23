/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEAOVPN, NEContentFilter, NEDNSProxy, NEPathController, NEProfileIngestionPayloadInfo, NEVPN, NEVPNApp, NSString, NSUUID;

@interface NEConfiguration : NSObject

{
    long long _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
    NEPathController *_pathController;
    NEDNSProxy *_dnsProxy;
}

@property (readonly) NSString *pluginType;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;

+ (_Bool)supportsSecureCoding;
+ (void)addError:(id)arg1 toList:(id)arg2;
+ (id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2;
+ (id)configurationWithProfilePayload:(id)arg1;
+ (_Bool)setConfiguration:(struct __CFDictionary *)arg1 forProtocol:(struct __CFString *)arg2 inService:(struct __SCNetworkService *)arg3;
+ (struct __CFDictionary *)copyConfigurationForProtocol:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;
+ (_Bool)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences *)arg2;
+ (_Bool)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)setSMBDomains:(id)arg1;
- (_Bool)setMailDomains:(id)arg1;
- (_Bool)setCalendarDomains:(id)arg1;
- (_Bool)setContactsDomains:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (_Bool)setCertificates:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)descriptionWithOptions:(unsigned long long)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1;
- (_Bool)needToUpdateKeychain;
- (void)clearKeychainInDomain:(long long)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (id)generateSignature;
- (void)syncWithSystemKeychain;
- (void)syncWithUserKeychain;
- (void)clearSystemKeychain;
- (void)clearUserKeychain;
- (void)copyPasswordsFromSystemKeychain;
- (_Bool)setConfigurationVPNPassword:(id)arg1;
- (_Bool)ingestDisconnectOptions:(id)arg1;
- (id)getConfigurationProtocol;
- (_Bool)ingestPPPDict:(id)arg1;
- (_Bool)configurePPPCommon:(id)arg1;
- (_Bool)configureVpnOnDemandRules:(id)arg1;
- (_Bool)configureL2TPWithPPPOptions:(id)arg1;
- (_Bool)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (_Bool)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (_Bool)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (_Bool)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (_Bool)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (_Bool)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (_Bool)ingestDNSOptions:(id)arg1;
- (_Bool)ingestProxyOptions:(id)arg1;
- (_Bool)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4;
- (_Bool)setCertificatesVPN:(id)arg1;
- (_Bool)setCertificatesAppVPN:(id)arg1;
- (_Bool)setCertificatesAOVpn:(id)arg1;
- (_Bool)setCertificateContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsInternal:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (_Bool)setConfigurationSharedSecret:(id)arg1;
- (_Bool)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (_Bool)setPayloadInfoIdentityProxy:(id)arg1;
- (_Bool)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (_Bool)setPayloadInfoIdentityPIN:(id)arg1;
- (id)mergeArray:(id)arg1 withArray:(id)arg2;
- (_Bool)setRestrictDomains:(_Bool)arg1;
- (id)getCertificates;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)getPendingCertificateInfo:(id)arg1;
- (id)getConfigurationIdentifier;
- (_Bool)setPayloadInfoIdentity:(id)arg1;
- (_Bool)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (_Bool)setProfileInfo:(id)arg1;
- (_Bool)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (id)initWithDNSProxyPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (_Bool)isSupportedBySC;
- (_Bool)updateFromSCService:(struct __SCNetworkService *)arg1;
- (_Bool)applyChangesToSCServiceInPreferences:(struct __SCPreferences *)arg1;
- (id)initFromSCService:(struct __SCNetworkService *)arg1;

@end
