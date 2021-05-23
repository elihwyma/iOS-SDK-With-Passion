/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMSystemAllowedMediaDeclaration_MediaItems, NSString;

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase

{
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadLogoutEject;
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadMountControls;
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadUnmountControls;
}

@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadLogoutEject;
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadMountControls;
@property (copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadUnmountControls;
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
+ (id)buildWithIdentifier:(id)arg1 withLogoutEject:(id)arg2 withMountControls:(id)arg3 withUnmountControls:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
