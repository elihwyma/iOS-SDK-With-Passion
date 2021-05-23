/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase

{
    NSString *_payloadCertServer;
    NSString *_payloadCertTemplate;
    NSString *_payloadDescription;
    NSNumber *_payloadCertificateRenewalTimeInterval;
    NSString *_payloadCertificateAuthority;
    NSString *_payloadCertificateAcquisitionMechanism;
    NSNumber *_payloadAllowAllAppsAccess;
    NSNumber *_payloadPromptForCredentials;
    NSNumber *_payloadKeyIsExtractable;
    NSNumber *_payloadKeysize;
    NSNumber *_payloadEnableAutoRenewal;
}

@property (copy, nonatomic) NSString *payloadCertServer;
@property (copy, nonatomic) NSString *payloadCertTemplate;
@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSNumber *payloadCertificateRenewalTimeInterval;
@property (copy, nonatomic) NSString *payloadCertificateAuthority;
@property (copy, nonatomic) NSString *payloadCertificateAcquisitionMechanism;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess;
@property (copy, nonatomic) NSNumber *payloadPromptForCredentials;
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (copy, nonatomic) NSNumber *payloadKeysize;
@property (copy, nonatomic) NSNumber *payloadEnableAutoRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 withDescription:(id)arg4 withCertificateRenewalTimeInterval:(id)arg5 withCertificateAuthority:(id)arg6 withCertificateAcquisitionMechanism:(id)arg7 withAllowAllAppsAccess:(id)arg8 withPromptForCredentials:(id)arg9 withKeyIsExtractable:(id)arg10 withKeysize:(id)arg11 withEnableAutoRenewal:(id)arg12;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
