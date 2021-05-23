/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMAccountCardDAVDeclaration_CommunicationServiceRules, NSNumber, NSString;

@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase

{
    NSString *_payloadCardDAVAccountDescription;
    NSString *_payloadCardDAVHostName;
    NSString *_payloadCardDAVPrincipalURL;
    NSNumber *_payloadCardDAVUseSSL;
    NSNumber *_payloadCardDAVPort;
    CEMAccountCardDAVDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
    NSString *_payloadCardDAVCredentials;
}

@property (copy, nonatomic) NSString *payloadCardDAVAccountDescription;
@property (copy, nonatomic) NSString *payloadCardDAVHostName;
@property (copy, nonatomic) NSString *payloadCardDAVPrincipalURL;
@property (copy, nonatomic) NSNumber *payloadCardDAVUseSSL;
@property (copy, nonatomic) NSNumber *payloadCardDAVPort;
@property (copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (copy, nonatomic) NSString *payloadCardDAVCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withCardDAVAccountDescription:(id)arg2 withCardDAVHostName:(id)arg3 withCardDAVPrincipalURL:(id)arg4 withCardDAVUseSSL:(id)arg5 withCardDAVPort:(id)arg6 withCommunicationServiceRules:(id)arg7 withCardDAVCredentials:(id)arg8;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCardDAVHostName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
