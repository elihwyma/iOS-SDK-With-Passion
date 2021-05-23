/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase

{
    NSNumber *_payloadOverridePrimary;
}

@property (copy, nonatomic) NSNumber *payloadOverridePrimary;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithOverridePrimary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
