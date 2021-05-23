/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase

{
    NSArray *_payloadAppIdentifierMatches;
    NSNumber *_payloadAllowRoamingCellularData;
    NSNumber *_payloadAllowCellularData;
}

@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches;
@property (copy, nonatomic) NSNumber *payloadAllowRoamingCellularData;
@property (copy, nonatomic) NSNumber *payloadAllowCellularData;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAppIdentifierMatches:(id)arg1 withAllowRoamingCellularData:(id)arg2 withAllowCellularData:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
