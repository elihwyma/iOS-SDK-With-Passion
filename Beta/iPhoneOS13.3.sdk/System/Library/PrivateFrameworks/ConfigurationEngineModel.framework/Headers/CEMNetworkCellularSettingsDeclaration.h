/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowDataRoaming;
    NSNumber *_payloadAllowVoiceRoaming;
    NSNumber *_payloadAllowPersonalHotspot;
    NSNumber *_payloadAllowGlobalBackgroundFetchWhenRoaming;
    NSNumber *_payloadAllowCellularPlanModification;
    NSNumber *_payloadAllowAppCellularDataModification;
}

@property (copy, nonatomic) NSNumber *payloadAllowDataRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowVoiceRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowPersonalHotspot;
@property (copy, nonatomic) NSNumber *payloadAllowGlobalBackgroundFetchWhenRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowCellularPlanModification;
@property (copy, nonatomic) NSNumber *payloadAllowAppCellularDataModification;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowDataRoaming:(id)arg2 withAllowVoiceRoaming:(id)arg3 withAllowPersonalHotspot:(id)arg4 withAllowGlobalBackgroundFetchWhenRoaming:(id)arg5 withAllowCellularPlanModification:(id)arg6 withAllowAppCellularDataModification:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
