/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMAccountLDAPDeclaration_CommunicationServiceRules, NSArray, NSNumber, NSString;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase

{
    NSString *_payloadLDAPAccountDescription;
    NSString *_payloadLDAPAccountHostName;
    NSNumber *_payloadLDAPAccountUseSSL;
    NSArray *_payloadLDAPSearchSettings;
    CEMAccountLDAPDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
    NSString *_payloadLDAPCredentials;
}

@property (copy, nonatomic) NSString *payloadLDAPAccountDescription;
@property (copy, nonatomic) NSString *payloadLDAPAccountHostName;
@property (copy, nonatomic) NSNumber *payloadLDAPAccountUseSSL;
@property (copy, nonatomic) NSArray *payloadLDAPSearchSettings;
@property (copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (copy, nonatomic) NSString *payloadLDAPCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withLDAPAccountDescription:(id)arg2 withLDAPAccountHostName:(id)arg3 withLDAPAccountUseSSL:(id)arg4 withLDAPSearchSettings:(id)arg5 withCommunicationServiceRules:(id)arg6 withLDAPCredentials:(id)arg7;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLDAPAccountHostName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
