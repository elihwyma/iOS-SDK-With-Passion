/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMPredicateCompositeBudget_TimeBudgetItem : CEMPayloadBase

{
    NSNumber *_payloadSeconds;
    NSArray *_payloadDays;
}

@property (copy, nonatomic) NSNumber *payloadSeconds;
@property (copy, nonatomic) NSArray *payloadDays;

+ (id)buildWithSeconds:(id)arg1 withDays:(id)arg2;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSeconds:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
