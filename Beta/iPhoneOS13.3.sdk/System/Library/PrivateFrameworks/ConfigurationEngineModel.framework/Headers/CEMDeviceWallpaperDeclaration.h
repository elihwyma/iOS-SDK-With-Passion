/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMDeviceWallpaperDeclaration : CEMConfigurationBase

{
    NSString *_payloadLockScreenAsset;
    NSString *_payloadHomeScreenAsset;
    NSNumber *_payloadAllowWallpaperModification;
}

@property (copy, nonatomic) NSString *payloadLockScreenAsset;
@property (copy, nonatomic) NSString *payloadHomeScreenAsset;
@property (copy, nonatomic) NSNumber *payloadAllowWallpaperModification;
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
+ (id)buildWithIdentifier:(id)arg1 withLockScreenAsset:(id)arg2 withHomeScreenAsset:(id)arg3 withAllowWallpaperModification:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
