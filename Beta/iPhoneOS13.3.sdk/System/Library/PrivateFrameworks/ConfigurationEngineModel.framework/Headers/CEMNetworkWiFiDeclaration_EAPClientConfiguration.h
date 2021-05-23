/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase

{
    NSArray *_payloadAcceptEAPTypes;
    NSString *_payloadUserName;
    NSString *_payloadUserPassword;
    NSNumber *_payloadOneTimePassword;
    NSArray *_payloadPayloadCertificateAnchorUUID;
    NSArray *_payloadTLSTrustedCertificates;
    NSArray *_payloadTLSTrustedServerNames;
    NSNumber *_payloadTLSAllowTrustExceptions;
    NSNumber *_payloadTLSCertificateIsRequired;
    NSString *_payloadTTLSInnerAuthentication;
    NSString *_payloadTLSMinimumVersion;
    NSString *_payloadTLSMaximumVersion;
    NSString *_payloadOuterIdentity;
    NSNumber *_payloadEAPFASTUsePAC;
    NSNumber *_payloadEAPFASTProvisionPAC;
    NSNumber *_payloadEAPFASTProvisionPACAnonymously;
    NSNumber *_payloadEAPSIMNumberOfRANDs;
    NSString *_payloadSystemModeCredentialsSource;
    NSNumber *_payloadSystemModeUseOpenDirectoryCredentials;
    NSNumber *_payloadOneTimeUserPassword;
    NSNumber *_payloadEAPSIMAKAEncryptedIdentityEnabled;
}

@property (copy, nonatomic) NSArray *payloadAcceptEAPTypes;
@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadUserPassword;
@property (copy, nonatomic) NSNumber *payloadOneTimePassword;
@property (copy, nonatomic) NSArray *payloadPayloadCertificateAnchorUUID;
@property (copy, nonatomic) NSArray *payloadTLSTrustedCertificates;
@property (copy, nonatomic) NSArray *payloadTLSTrustedServerNames;
@property (copy, nonatomic) NSNumber *payloadTLSAllowTrustExceptions;
@property (copy, nonatomic) NSNumber *payloadTLSCertificateIsRequired;
@property (copy, nonatomic) NSString *payloadTTLSInnerAuthentication;
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion;
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion;
@property (copy, nonatomic) NSString *payloadOuterIdentity;
@property (copy, nonatomic) NSNumber *payloadEAPFASTUsePAC;
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPAC;
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPACAnonymously;
@property (copy, nonatomic) NSNumber *payloadEAPSIMNumberOfRANDs;
@property (copy, nonatomic) NSString *payloadSystemModeCredentialsSource;
@property (copy, nonatomic) NSNumber *payloadSystemModeUseOpenDirectoryCredentials;
@property (copy, nonatomic) NSNumber *payloadOneTimeUserPassword;
@property (copy, nonatomic) NSNumber *payloadEAPSIMAKAEncryptedIdentityEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildWithAcceptEAPTypes:(id)arg1 withUserName:(id)arg2 withUserPassword:(id)arg3 withOneTimePassword:(id)arg4 withPayloadCertificateAnchorUUID:(id)arg5 withTLSTrustedCertificates:(id)arg6 withTLSTrustedServerNames:(id)arg7 withTLSAllowTrustExceptions:(id)arg8 withTLSCertificateIsRequired:(id)arg9 withTTLSInnerAuthentication:(id)arg10 withTLSMinimumVersion:(id)arg11 withTLSMaximumVersion:(id)arg12 withOuterIdentity:(id)arg13 withEAPFASTUsePAC:(id)arg14 withEAPFASTProvisionPAC:(id)arg15 withEAPFASTProvisionPACAnonymously:(id)arg16 withEAPSIMNumberOfRANDs:(id)arg17 withSystemModeCredentialsSource:(id)arg18 withSystemModeUseOpenDirectoryCredentials:(id)arg19 withOneTimeUserPassword:(id)arg20 withEAPSIMAKAEncryptedIdentityEnabled:(id)arg21;
+ (id)buildRequiredOnlyWithAcceptEAPTypes:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
