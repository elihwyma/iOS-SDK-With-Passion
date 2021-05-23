/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase

{
    NSString *_payloadMode;
    NSNumber *_payloadDuration;
    NSString *_payloadStartTime;
    NSString *_payloadEndTime;
}

@property (copy, nonatomic) NSString *payloadMode;
@property (copy, nonatomic) NSNumber *payloadDuration;
@property (copy, nonatomic) NSString *payloadStartTime;
@property (copy, nonatomic) NSString *payloadEndTime;

+ (id)allowedPayloadKeys;
+ (id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;
+ (id)buildRequiredOnlyWithMode:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
