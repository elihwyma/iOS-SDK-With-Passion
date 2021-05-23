/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSString;

@interface CEMSecurityFDERecoveryKeyEscrowDeclaration : CEMConfigurationBase

{
    NSString *_payloadLocation;
    NSString *_payloadEncryptCertPayloadUUID;
    NSString *_payloadDeviceKey;
}

@property (copy, nonatomic) NSString *payloadLocation;
@property (copy, nonatomic) NSString *payloadEncryptCertPayloadUUID;
@property (copy, nonatomic) NSString *payloadDeviceKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3 withDeviceKey:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
