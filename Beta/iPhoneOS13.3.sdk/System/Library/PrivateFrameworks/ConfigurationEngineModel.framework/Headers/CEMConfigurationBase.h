/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@interface CEMConfigurationBase : CEMDeclarationBase

+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)declarationClass;

- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (id)synthesizeProfilePayloadOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;
- (id)profilePayloadsByTypeWithAssetProviders:(id)arg1;
- (id)payloadUUIDWithIdentifier:(id)arg1 outUUIDs:(id)arg2 oldUUIDs:(id)arg3;
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;

@end
