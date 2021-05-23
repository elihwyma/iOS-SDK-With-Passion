/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase

{
    NSString *_payloadType;
    NSString *_payloadFirst;
    NSString *_payloadLast;
}

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadFirst;
@property (copy, nonatomic) NSString *payloadLast;

+ (id)allowedPayloadKeys;
+ (id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3;
+ (id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
