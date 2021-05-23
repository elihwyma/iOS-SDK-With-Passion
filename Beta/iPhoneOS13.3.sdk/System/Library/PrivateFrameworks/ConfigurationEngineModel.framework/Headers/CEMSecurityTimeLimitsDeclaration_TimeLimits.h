/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityTimeLimitsDeclaration_Allowance;

@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase

{
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekdayAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekdayCurfew;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekendAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance *_payloadWeekendCurfew;
}

@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayAllowance;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayCurfew;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendAllowance;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendCurfew;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithWeekdayAllowance:(id)arg1 withWeekdayCurfew:(id)arg2 withWeekendAllowance:(id)arg3 withWeekendCurfew:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
