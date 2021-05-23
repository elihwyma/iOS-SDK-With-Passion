/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSString;

@interface CEMSecurityIdentityPreferenceDeclaration : CEMConfigurationBase

{
    NSString *_payloadName;
    NSString *_payloadIdentityIdentifier;
}

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadIdentityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withIdentityIdentifier:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2 withIdentityIdentifier:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
