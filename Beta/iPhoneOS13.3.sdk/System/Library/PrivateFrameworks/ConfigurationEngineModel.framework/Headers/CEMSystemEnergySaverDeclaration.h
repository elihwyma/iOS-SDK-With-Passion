/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMSystemEnergySaverDeclaration_EnergySaverSchedule, CEMSystemEnergySaverDeclaration_PowerSettings, NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase

{
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverdesktopACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableBatteryPower;
    CEMSystemEnergySaverDeclaration_EnergySaverSchedule *_payloadComappleEnergySaverdesktopSchedule;
    NSNumber *_payloadSleepDisabled;
    NSNumber *_payloadDestroyFVKeyOnStandby;
}

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule;
@property (copy, nonatomic) NSNumber *payloadSleepDisabled;
@property (copy, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby;
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
+ (id)buildWithIdentifier:(id)arg1 withComappleEnergySaverdesktopACPower:(id)arg2 withComappleEnergySaverportableACPower:(id)arg3 withComappleEnergySaverportableBatteryPower:(id)arg4 withComappleEnergySaverdesktopSchedule:(id)arg5 withSleepDisabled:(id)arg6 withDestroyFVKeyOnStandby:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
