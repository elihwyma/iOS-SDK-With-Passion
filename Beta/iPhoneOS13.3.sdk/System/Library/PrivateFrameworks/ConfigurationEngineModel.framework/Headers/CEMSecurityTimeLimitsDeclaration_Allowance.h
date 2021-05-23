/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase

{
    NSNumber *_payloadEnabled;
    NSNumber *_payloadRangeType;
    NSString *_payloadStart;
    NSString *_payloadEnd;
    NSNumber *_payloadSecondsPerDay;
}

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSNumber *payloadRangeType;
@property (copy, nonatomic) NSString *payloadStart;
@property (copy, nonatomic) NSString *payloadEnd;
@property (copy, nonatomic) NSNumber *payloadSecondsPerDay;

+ (id)allowedPayloadKeys;
+ (id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5;
+ (id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
