/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMMediaSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowBookstore;
    NSNumber *_payloadAllowBookstoreErotica;
    NSNumber *_payloadAllowEnterpriseBookBackup;
    NSNumber *_payloadAllowEnterpriseBookMetadataSync;
}

@property (copy, nonatomic) NSNumber *payloadAllowBookstore;
@property (copy, nonatomic) NSNumber *payloadAllowBookstoreErotica;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookBackup;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookMetadataSync;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowBookstore:(id)arg2 withAllowBookstoreErotica:(id)arg3 withAllowEnterpriseBookBackup:(id)arg4 withAllowEnterpriseBookMetadataSync:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
