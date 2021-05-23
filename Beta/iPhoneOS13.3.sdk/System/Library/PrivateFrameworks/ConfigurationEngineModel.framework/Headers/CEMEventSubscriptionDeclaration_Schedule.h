/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase

{
    NSString *_payloadFrequency;
    NSString *_payloadLocalTime;
    NSNumber *_payloadSpread;
    NSNumber *_payloadDay;
}

@property (copy, nonatomic) NSString *payloadFrequency;
@property (copy, nonatomic) NSString *payloadLocalTime;
@property (copy, nonatomic) NSNumber *payloadSpread;
@property (copy, nonatomic) NSNumber *payloadDay;

+ (id)allowedPayloadKeys;
+ (id)buildWithFrequency:(id)arg1 withLocalTime:(id)arg2 withSpread:(id)arg3 withDay:(id)arg4;
+ (id)buildRequiredOnlyWithFrequency:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
