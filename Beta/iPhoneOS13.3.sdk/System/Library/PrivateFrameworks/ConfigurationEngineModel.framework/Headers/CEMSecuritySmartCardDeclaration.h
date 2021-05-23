/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSecuritySmartCardDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadUserPairing;
    NSNumber *_payloadAllowSmartCard;
    NSNumber *_payloadCheckCertificateTrust;
    NSNumber *_payloadOneCardPerUser;
    NSNumber *_payloadTokenRemovalAction;
    NSNumber *_payloadEnforceSmartCard;
}

@property (copy, nonatomic) NSNumber *payloadUserPairing;
@property (copy, nonatomic) NSNumber *payloadAllowSmartCard;
@property (copy, nonatomic) NSNumber *payloadCheckCertificateTrust;
@property (copy, nonatomic) NSNumber *payloadOneCardPerUser;
@property (copy, nonatomic) NSNumber *payloadTokenRemovalAction;
@property (copy, nonatomic) NSNumber *payloadEnforceSmartCard;
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
+ (id)buildWithIdentifier:(id)arg1 withUserPairing:(id)arg2 withAllowSmartCard:(id)arg3 withCheckCertificateTrust:(id)arg4 withOneCardPerUser:(id)arg5 withTokenRemovalAction:(id)arg6 withEnforceSmartCard:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
