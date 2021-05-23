/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase

{
    NSNumber *_payloadDisplaySleepTimer;
    NSNumber *_payloadDiskSleepTimer;
    NSNumber *_payloadSystemSleepTimer;
    NSNumber *_payloadReduceProcessorSpeed;
    NSNumber *_payloadDynamicPowerStep;
    NSNumber *_payloadWakeOnLAN;
    NSNumber *_payloadWakeOnModemRing;
    NSNumber *_payloadAutomaticRestartOnPowerLoss;
}

@property (copy, nonatomic) NSNumber *payloadDisplaySleepTimer;
@property (copy, nonatomic) NSNumber *payloadDiskSleepTimer;
@property (copy, nonatomic) NSNumber *payloadSystemSleepTimer;
@property (copy, nonatomic) NSNumber *payloadReduceProcessorSpeed;
@property (copy, nonatomic) NSNumber *payloadDynamicPowerStep;
@property (copy, nonatomic) NSNumber *payloadWakeOnLAN;
@property (copy, nonatomic) NSNumber *payloadWakeOnModemRing;
@property (copy, nonatomic) NSNumber *payloadAutomaticRestartOnPowerLoss;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDisplaySleepTimer:(id)arg1 withDiskSleepTimer:(id)arg2 withSystemSleepTimer:(id)arg3 withReduceProcessorSpeed:(id)arg4 withDynamicPowerStep:(id)arg5 withWakeOnLAN:(id)arg6 withWakeOnModemRing:(id)arg7 withAutomaticRestartOnPowerLoss:(id)arg8;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
