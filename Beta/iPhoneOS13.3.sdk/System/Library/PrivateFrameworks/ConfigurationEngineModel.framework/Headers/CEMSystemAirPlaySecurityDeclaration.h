/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSString;

@interface CEMSystemAirPlaySecurityDeclaration : CEMConfigurationBase

{
    NSString *_payloadSecurityType;
    NSString *_payloadAccessType;
    NSString *_payloadPassword;
}

@property (copy, nonatomic) NSString *payloadSecurityType;
@property (copy, nonatomic) NSString *payloadAccessType;
@property (copy, nonatomic) NSString *payloadPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3 withPassword:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
