/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMAccountMailDeclaration : CEMConfigurationBase

{
    NSString *_payloadEmailAccountDescription;
    NSString *_payloadEmailAccountName;
    NSString *_payloadEmailAccountType;
    NSString *_payloadEmailAddress;
    NSString *_payloadIncomingMailServerAuthentication;
    NSString *_payloadIncomingMailServerHostName;
    NSNumber *_payloadIncomingMailServerPortNumber;
    NSNumber *_payloadIncomingMailServerUseSSL;
    NSNumber *_payloadOutgoingPasswordSameAsIncomingPassword;
    NSString *_payloadOutgoingMailServerAuthentication;
    NSNumber *_payloadOutgoingMailServerPortNumber;
    NSNumber *_payloadOutgoingMailServerUseSSL;
    NSString *_payloadOutgoingMailServerUsername;
    NSNumber *_payloadPreventMove;
    NSNumber *_payloadPreventAppSheet;
    NSNumber *_payloadSMIMEEnabled;
    NSNumber *_payloadSMIMESigningEnabled;
    NSString *_payloadSMIMESigningCertificateUUID;
    NSNumber *_payloadSMIMEEncryptionEnabled;
    NSString *_payloadSMIMEEncryptionCertificateUUID;
    NSNumber *_payloadSMIMEEnablePerMessageSwitch;
    NSNumber *_payloadDisableMailRecentsSyncing;
    NSNumber *_payloadAllowMailDrop;
    NSString *_payloadIncomingMailServerIMAPPathPrefix;
    NSString *_payloadIncomingCredentials;
    NSString *_payloadOutgoingCredentials;
    NSNumber *_payloadSMIMESigningOverrideable;
    NSNumber *_payloadSMIMESigningCertificateUUIDOverrideable;
    NSNumber *_payloadSMIMEEncryptByDefault;
    NSNumber *_payloadSMIMEEncryptByDefaultOverrideable;
    NSNumber *_payloadSMIMEEncryptionCertificateUUIDOverrideable;
    NSNumber *_payloadSMIMEEnableEncryptionPerMessageSwitch;
}

@property (copy, nonatomic) NSString *payloadEmailAccountDescription;
@property (copy, nonatomic) NSString *payloadEmailAccountName;
@property (copy, nonatomic) NSString *payloadEmailAccountType;
@property (copy, nonatomic) NSString *payloadEmailAddress;
@property (copy, nonatomic) NSString *payloadIncomingMailServerAuthentication;
@property (copy, nonatomic) NSString *payloadIncomingMailServerHostName;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL;
@property (copy, nonatomic) NSNumber *payloadOutgoingPasswordSameAsIncomingPassword;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerUsername;
@property (copy, nonatomic) NSNumber *payloadPreventMove;
@property (copy, nonatomic) NSNumber *payloadPreventAppSheet;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnabled;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningEnabled;
@property (copy, nonatomic) NSString *payloadSMIMESigningCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionEnabled;
@property (copy, nonatomic) NSString *payloadSMIMEEncryptionCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnablePerMessageSwitch;
@property (copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing;
@property (copy, nonatomic) NSNumber *payloadAllowMailDrop;
@property (copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix;
@property (copy, nonatomic) NSString *payloadIncomingCredentials;
@property (copy, nonatomic) NSString *payloadOutgoingCredentials;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningCertificateUUIDOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefault;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefaultOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionCertificateUUIDOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnableEncryptionPerMessageSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withEmailAccountDescription:(id)arg2 withEmailAccountName:(id)arg3 withEmailAccountType:(id)arg4 withEmailAddress:(id)arg5 withIncomingMailServerAuthentication:(id)arg6 withIncomingMailServerHostName:(id)arg7 withIncomingMailServerPortNumber:(id)arg8 withIncomingMailServerUseSSL:(id)arg9 withOutgoingPasswordSameAsIncomingPassword:(id)arg10 withOutgoingMailServerAuthentication:(id)arg11 withOutgoingMailServerPortNumber:(id)arg12 withOutgoingMailServerUseSSL:(id)arg13 withOutgoingMailServerUsername:(id)arg14 withPreventMove:(id)arg15 withPreventAppSheet:(id)arg16 withSMIMEEnabled:(id)arg17 withSMIMESigningEnabled:(id)arg18 withSMIMESigningCertificateUUID:(id)arg19 withSMIMEEncryptionEnabled:(id)arg20 withSMIMEEncryptionCertificateUUID:(id)arg21 withSMIMEEnablePerMessageSwitch:(id)arg22 withDisableMailRecentsSyncing:(id)arg23 withAllowMailDrop:(id)arg24 withIncomingMailServerIMAPPathPrefix:(id)arg25 withIncomingCredentials:(id)arg26 withOutgoingCredentials:(id)arg27 withSMIMESigningOverrideable:(id)arg28 withSMIMESigningCertificateUUIDOverrideable:(id)arg29 withSMIMEEncryptByDefault:(id)arg30 withSMIMEEncryptByDefaultOverrideable:(id)arg31 withSMIMEEncryptionCertificateUUIDOverrideable:(id)arg32 withSMIMEEnableEncryptionPerMessageSwitch:(id)arg33;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAccountType:(id)arg2 withIncomingMailServerAuthentication:(id)arg3 withIncomingMailServerHostName:(id)arg4 withOutgoingMailServerAuthentication:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
