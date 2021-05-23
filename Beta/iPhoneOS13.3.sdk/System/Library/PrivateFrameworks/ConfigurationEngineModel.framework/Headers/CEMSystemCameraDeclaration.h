/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSystemCameraDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowCamera;
    NSNumber *_payloadAllowScreenShot;
    NSNumber *_payloadAllowScreenRecording;
}

@property (copy, nonatomic) NSNumber *payloadAllowCamera;
@property (copy, nonatomic) NSNumber *payloadAllowScreenShot;
@property (copy, nonatomic) NSNumber *payloadAllowScreenRecording;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowCamera:(id)arg2 withAllowScreenShot:(id)arg3 withAllowScreenRecording:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
