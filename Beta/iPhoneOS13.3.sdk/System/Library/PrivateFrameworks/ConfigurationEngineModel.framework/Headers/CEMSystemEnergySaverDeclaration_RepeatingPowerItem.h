/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase

{
    NSString *_payloadEventtype;
    NSNumber *_payloadWeekdays;
    NSNumber *_payloadTime;
}

@property (copy, nonatomic) NSString *payloadEventtype;
@property (copy, nonatomic) NSNumber *payloadWeekdays;
@property (copy, nonatomic) NSNumber *payloadTime;

+ (id)allowedPayloadKeys;
+ (id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3;
+ (id)buildRequiredOnlyWithEventtype:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
