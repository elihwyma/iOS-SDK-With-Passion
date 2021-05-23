/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMNetworkVPNDeclaration_SecurityAssociationParameters, NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration : CEMPayloadBase

{
    NSString *_payloadRemoteAddress;
    NSString *_payloadLocalIdentifier;
    NSString *_payloadRemoteIdentifier;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadPayloadCertificateUUID;
    NSString *_payloadSharedSecret;
    NSNumber *_payloadExtendedAuthEnabled;
    NSNumber *_payloadDisableRedirect;
    NSNumber *_payloadDisableMOBIKE;
    NSNumber *_payloadUseConfigurationAttributeInternalIPSubnet;
    NSNumber *_payloadEnablePFS;
    NSNumber *_payloadEnableCertificateRevocationCheck;
    NSNumber *_payloadNATKeepAliveOffloadEnable;
    NSNumber *_payloadNATKeepAliveInterval;
    NSString *_payloadAuthName;
    NSString *_payloadAuthPassword;
    NSString *_payloadDeadPeerDetectionRate;
    NSString *_payloadProtocolType;
    NSString *_payloadServerCertificateIssuerCommonName;
    NSString *_payloadServerCertificateCommonName;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadIKESecurityAssociationParameters;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadChildSecurityAssociationParameters;
    NSArray *_payloadInterfaces;
}

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadRemoteIdentifier;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled;
@property (copy, nonatomic) NSNumber *payloadDisableRedirect;
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE;
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;
@property (copy, nonatomic) NSNumber *payloadEnablePFS;
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval;
@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate;
@property (copy, nonatomic) NSString *payloadProtocolType;
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName;
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (copy, nonatomic) NSArray *payloadInterfaces;

+ (id)allowedPayloadKeys;
+ (id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withDisableRedirect:(id)arg8 withDisableMOBIKE:(id)arg9 withUseConfigurationAttributeInternalIPSubnet:(id)arg10 withEnablePFS:(id)arg11 withEnableCertificateRevocationCheck:(id)arg12 withNATKeepAliveOffloadEnable:(id)arg13 withNATKeepAliveInterval:(id)arg14 withAuthName:(id)arg15 withAuthPassword:(id)arg16 withDeadPeerDetectionRate:(id)arg17 withProtocolType:(id)arg18 withServerCertificateIssuerCommonName:(id)arg19 withServerCertificateCommonName:(id)arg20 withIKESecurityAssociationParameters:(id)arg21 withChildSecurityAssociationParameters:(id)arg22 withInterfaces:(id)arg23;
+ (id)buildRequiredOnlyWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withProtocolType:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
