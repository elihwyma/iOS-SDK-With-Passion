/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMNetworkVPNDeclaration_SecurityAssociationParameters, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_IKEv2 : CEMPayloadBase

{
    NSString *_payloadRemoteAddress;
    NSString *_payloadLocalIdentifier;
    NSString *_payloadRemoteIdentifier;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadPayloadCertificateUUID;
    NSString *_payloadSharedSecret;
    NSNumber *_payloadExtendedAuthEnabled;
    NSString *_payloadAuthName;
    NSNumber *_payloadDisableRedirect;
    NSNumber *_payloadDisableMOBIKE;
    NSNumber *_payloadUseConfigurationAttributeInternalIPSubnet;
    NSNumber *_payloadEnablePFS;
    NSNumber *_payloadEnableCertificateRevocationCheck;
    NSString *_payloadAuthPassword;
    NSString *_payloadDeadPeerDetectionRate;
    NSString *_payloadCertificateType;
    NSString *_payloadServerCertificateIssuerCommonName;
    NSString *_payloadServerCertificateCommonName;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadIKESecurityAssociationParameters;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters *_payloadChildSecurityAssociationParameters;
    NSString *_payloadTLSMinimumVersion;
    NSString *_payloadTLSMaximumVersion;
    NSNumber *_payloadNATKeepAliveOffloadEnable;
    NSNumber *_payloadNATKeepAliveInterval;
}

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadRemoteIdentifier;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled;
@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSNumber *payloadDisableRedirect;
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE;
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;
@property (copy, nonatomic) NSNumber *payloadEnablePFS;
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate;
@property (copy, nonatomic) NSString *payloadCertificateType;
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName;
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion;
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval;

+ (id)allowedPayloadKeys;
+ (id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withAuthName:(id)arg8 withDisableRedirect:(id)arg9 withDisableMOBIKE:(id)arg10 withUseConfigurationAttributeInternalIPSubnet:(id)arg11 withEnablePFS:(id)arg12 withEnableCertificateRevocationCheck:(id)arg13 withAuthPassword:(id)arg14 withDeadPeerDetectionRate:(id)arg15 withCertificateType:(id)arg16 withServerCertificateIssuerCommonName:(id)arg17 withServerCertificateCommonName:(id)arg18 withIKESecurityAssociationParameters:(id)arg19 withChildSecurityAssociationParameters:(id)arg20 withTLSMinimumVersion:(id)arg21 withTLSMaximumVersion:(id)arg22 withNATKeepAliveOffloadEnable:(id)arg23 withNATKeepAliveInterval:(id)arg24;
+ (id)buildRequiredOnlyWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
