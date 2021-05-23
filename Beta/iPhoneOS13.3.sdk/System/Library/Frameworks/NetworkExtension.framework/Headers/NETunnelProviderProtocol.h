/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NETunnelProviderProtocol : NEVPNProtocol

{
    int _reassertTimeout;
    NSDictionary *_providerConfiguration;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
    NSString *_designatedRequirement;
    NSString *_authenticationPluginType;
    NSDictionary *_vendorInfo;
    long long _authenticationMethod;
}

@property (readonly) NSString *pluginType;
@property (copy) NSString *designatedRequirement;
@property (copy) NSString *authenticationPluginType;
@property (copy) NSDictionary *vendorInfo;
@property long long authenticationMethod;
@property int reassertTimeout;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isLegacyPluginType:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)setPluginType:(id)arg1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (id)initWithPluginType:(id)arg1;
- (void)initFromLegacyDictionaryExtra:(id)arg1;
- (struct __SCNetworkInterface *)createInterface;
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;

@end
