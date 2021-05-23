/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMNetworkWiFiDeclaration_EAPClientConfiguration, CEMNetworkWiFiDeclaration_QoSMarkingPolicy, NSArray, NSNumber, NSString;

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAutoJoin;
    NSString *_payloadSSIDSTR;
    NSNumber *_payloadHIDDENNETWORK;
    NSString *_payloadProxyType;
    NSString *_payloadEncryptionType;
    NSString *_payloadPassword;
    NSString *_payloadPayloadCertificateUUID;
    CEMNetworkWiFiDeclaration_EAPClientConfiguration *_payloadEAPClientConfiguration;
    NSString *_payloadDisplayedOperatorName;
    NSString *_payloadDomainName;
    NSArray *_payloadRoamingConsortiumOIs;
    NSNumber *_payloadServiceProviderRoamingEnabled;
    NSNumber *_payloadIsHotspot;
    NSString *_payloadHESSID;
    NSArray *_payloadNAIRealmNames;
    NSArray *_payloadMCCAndMNCs;
    NSNumber *_payloadCaptiveBypass;
    CEMNetworkWiFiDeclaration_QoSMarkingPolicy *_payloadQoSMarkingPolicy;
    NSString *_payloadInterface;
    NSArray *_payloadSetupModes;
    NSNumber *_payloadPriority;
    NSNumber *_payloadEnableIPv6;
    NSNumber *_payloadTLSCertificateRequired;
    NSString *_payloadProxyServer;
    NSNumber *_payloadProxyServerPort;
    NSString *_payloadProxyUsername;
    NSString *_payloadProxyPassword;
    NSString *_payloadProxyPACURL;
    NSNumber *_payloadProxyPACFallbackAllowed;
}

@property (copy, nonatomic) NSNumber *payloadAutoJoin;
@property (copy, nonatomic) NSString *payloadSSIDSTR;
@property (copy, nonatomic) NSNumber *payloadHIDDENNETWORK;
@property (copy, nonatomic) NSString *payloadProxyType;
@property (copy, nonatomic) NSString *payloadEncryptionType;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration;
@property (copy, nonatomic) NSString *payloadDisplayedOperatorName;
@property (copy, nonatomic) NSString *payloadDomainName;
@property (copy, nonatomic) NSArray *payloadRoamingConsortiumOIs;
@property (copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled;
@property (copy, nonatomic) NSNumber *payloadIsHotspot;
@property (copy, nonatomic) NSString *payloadHESSID;
@property (copy, nonatomic) NSArray *payloadNAIRealmNames;
@property (copy, nonatomic) NSArray *payloadMCCAndMNCs;
@property (copy, nonatomic) NSNumber *payloadCaptiveBypass;
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy;
@property (copy, nonatomic) NSString *payloadInterface;
@property (copy, nonatomic) NSArray *payloadSetupModes;
@property (copy, nonatomic) NSNumber *payloadPriority;
@property (copy, nonatomic) NSNumber *payloadEnableIPv6;
@property (copy, nonatomic) NSNumber *payloadTLSCertificateRequired;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyServerPort;
@property (copy, nonatomic) NSString *payloadProxyUsername;
@property (copy, nonatomic) NSString *payloadProxyPassword;
@property (copy, nonatomic) NSString *payloadProxyPACURL;
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAutoJoin:(id)arg2 withSSIDSTR:(id)arg3 withHIDDENNETWORK:(id)arg4 withProxyType:(id)arg5 withEncryptionType:(id)arg6 withPassword:(id)arg7 withPayloadCertificateUUID:(id)arg8 withEAPClientConfiguration:(id)arg9 withDisplayedOperatorName:(id)arg10 withDomainName:(id)arg11 withRoamingConsortiumOIs:(id)arg12 withServiceProviderRoamingEnabled:(id)arg13 withIsHotspot:(id)arg14 withHESSID:(id)arg15 withNAIRealmNames:(id)arg16 withMCCAndMNCs:(id)arg17 withCaptiveBypass:(id)arg18 withQoSMarkingPolicy:(id)arg19 withInterface:(id)arg20 withSetupModes:(id)arg21 withPriority:(id)arg22 withEnableIPv6:(id)arg23 withTLSCertificateRequired:(id)arg24 withProxyServer:(id)arg25 withProxyServerPort:(id)arg26 withProxyUsername:(id)arg27 withProxyPassword:(id)arg28 withProxyPACURL:(id)arg29 withProxyPACFallbackAllowed:(id)arg30;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
