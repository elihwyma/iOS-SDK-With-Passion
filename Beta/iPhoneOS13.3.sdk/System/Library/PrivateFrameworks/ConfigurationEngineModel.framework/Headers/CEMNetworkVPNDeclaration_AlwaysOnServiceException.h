/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase

{
    NSString *_payloadServiceName;
    NSString *_payloadAction;
}

@property (copy, nonatomic) NSString *payloadServiceName;
@property (copy, nonatomic) NSString *payloadAction;

+ (id)allowedPayloadKeys;
+ (id)buildWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
