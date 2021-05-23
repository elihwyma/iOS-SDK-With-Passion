/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSystemEnergySaverDeclaration_RepeatingPowerItem;

@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase

{
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem *_payloadRepeatingPowerOn;
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem *_payloadRepeatingPowerOff;
}

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOn;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOff;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRepeatingPowerOn:(id)arg1 withRepeatingPowerOff:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
