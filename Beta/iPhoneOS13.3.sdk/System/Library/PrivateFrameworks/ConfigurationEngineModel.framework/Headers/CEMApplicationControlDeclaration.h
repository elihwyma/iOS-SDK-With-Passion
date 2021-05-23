/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMApplicationControlDeclaration_InstallSchedule, CEMApplicationControlDeclaration_UpdateSchedule, NSString;

@interface CEMApplicationControlDeclaration : CEMConfigurationBase

{
    CEMApplicationControlDeclaration_InstallSchedule *_payloadInstallSchedule;
    NSString *_payloadUpdatePolicy;
    CEMApplicationControlDeclaration_UpdateSchedule *_payloadUpdateSchedule;
}

@property (copy, nonatomic) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule;
@property (copy, nonatomic) NSString *payloadUpdatePolicy;
@property (copy, nonatomic) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule;
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
+ (id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
