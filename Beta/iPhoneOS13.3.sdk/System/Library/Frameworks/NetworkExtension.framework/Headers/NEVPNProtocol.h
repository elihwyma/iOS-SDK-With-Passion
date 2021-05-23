/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEDNSSettings, NEIdentityKeychainItem, NEKeychainItem, NEProxySettings, NSData, NSString, NSUUID;

@interface NEVPNProtocol : NSObject

{
    _Bool _disconnectOnSleep;
    _Bool _includeAllNetworks;
    _Bool _excludeLocalNetworks;
    _Bool _disconnectOnWake;
    _Bool _identityDataImported;
    _Bool _disconnectOnIdle;
    _Bool _disconnectOnUserSwitch;
    _Bool _disconnectOnLogout;
    int _disconnectOnWakeTimeout;
    int _disconnectOnIdleTimeout;
    NSString *_serverAddress;
    NSString *_username;
    NSData *_passwordReference;
    NSString *_identityDataPassword;
    NEProxySettings *_proxySettings;
    long long _keychainDomain;
    NSString *_keychainAccessGroup;
    NEIdentityKeychainItem *_identity;
    NSUUID *_identifier;
    long long _type;
    NEKeychainItem *_passwordKeychainItem;
    NSString *_passwordEncryption;
    NSData *_identityDataInternal;
    NSData *_identityDataHash;
    NEKeychainItem *_identityDataPasswordKeychainItem;
    NEDNSSettings *_DNSSettings;
}

@property long long keychainDomain;
@property (retain) NSString *keychainAccessGroup;
@property (retain) NEIdentityKeychainItem *identity;
@property (copy) NSUUID *identifier;
@property (readonly) long long type;
@property _Bool disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property (copy) NEKeychainItem *passwordKeychainItem;
@property (copy) NSString *passwordEncryption;
@property (copy) NSData *identityReferenceInternal;
@property (copy) NSData *identityDataInternal;
@property _Bool identityDataImported;
@property (copy) NSData *identityDataHash;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (copy) NEDNSSettings *DNSSettings;
@property _Bool disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property _Bool disconnectOnUserSwitch;
@property _Bool disconnectOnLogout;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSData *identityData;
@property (copy) NSString *identityDataPassword;
@property _Bool disconnectOnSleep;
@property (copy) NEProxySettings *proxySettings;
@property _Bool includeAllNetworks;
@property _Bool excludeLocalNetworks;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (_Bool)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (struct __SCNetworkInterface *)createInterface;
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (id)type2str;
- (void)addDisconnectOptions:(id)arg1;
- (void)initDisconnectOptions:(id)arg1;
- (void)syncWithKeychainInDomainCommon:(long long)arg1;

@end
