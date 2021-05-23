/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRules, NSString;

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase

{
    NSString *_payloadAccountDescription;
    NSString *_payloadAccountName;
    NSString *_payloadEmailAddress;
    CEMAccountGoogleDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
}

@property (copy, nonatomic) NSString *payloadAccountDescription;
@property (copy, nonatomic) NSString *payloadAccountName;
@property (copy, nonatomic) NSString *payloadEmailAddress;
@property (copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
