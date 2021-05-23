/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMPasscodeScreensaverDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAskForPassword;
    NSNumber *_payloadAskForPasswordDelay;
    NSNumber *_payloadLoginWindowIdleTime;
    NSString *_payloadLoginWindowModulePath;
}

@property (copy, nonatomic) NSNumber *payloadAskForPassword;
@property (copy, nonatomic) NSNumber *payloadAskForPasswordDelay;
@property (copy, nonatomic) NSNumber *payloadLoginWindowIdleTime;
@property (copy, nonatomic) NSString *payloadLoginWindowModulePath;
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
+ (id)buildWithIdentifier:(id)arg1 withAskForPassword:(id)arg2 withAskForPasswordDelay:(id)arg3 withLoginWindowIdleTime:(id)arg4 withLoginWindowModulePath:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
