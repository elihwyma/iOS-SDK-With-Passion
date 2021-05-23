/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase

{
    NSString *_payloadEnable;
    NSNumber *_payloadDefer;
    NSNumber *_payloadUserEntersMissingInfo;
    NSNumber *_payloadUseRecoveryKey;
    NSNumber *_payloadShowRecoveryKey;
    NSString *_payloadOutputPath;
    NSString *_payloadUsername;
    NSString *_payloadPassword;
    NSNumber *_payloadUseKeychain;
    NSNumber *_payloadDeferForceAtUserLoginMaxBypassAttempts;
    NSNumber *_payloadDeferDontAskAtUserLogout;
    NSString *_payloadCertificateIdentifier;
}

@property (copy, nonatomic) NSString *payloadEnable;
@property (copy, nonatomic) NSNumber *payloadDefer;
@property (copy, nonatomic) NSNumber *payloadUserEntersMissingInfo;
@property (copy, nonatomic) NSNumber *payloadUseRecoveryKey;
@property (copy, nonatomic) NSNumber *payloadShowRecoveryKey;
@property (copy, nonatomic) NSString *payloadOutputPath;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSNumber *payloadUseKeychain;
@property (copy, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts;
@property (copy, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout;
@property (copy, nonatomic) NSString *payloadCertificateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withDefer:(id)arg3 withUserEntersMissingInfo:(id)arg4 withUseRecoveryKey:(id)arg5 withShowRecoveryKey:(id)arg6 withOutputPath:(id)arg7 withUsername:(id)arg8 withPassword:(id)arg9 withUseKeychain:(id)arg10 withDeferForceAtUserLoginMaxBypassAttempts:(id)arg11 withDeferDontAskAtUserLogout:(id)arg12 withCertificateIdentifier:(id)arg13;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
