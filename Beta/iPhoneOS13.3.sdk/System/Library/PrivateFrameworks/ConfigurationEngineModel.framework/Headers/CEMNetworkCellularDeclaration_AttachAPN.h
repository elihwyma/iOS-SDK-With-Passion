/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase

{
    NSString *_payloadName;
    NSString *_payloadAuthenticationType;
    NSString *_payloadUsername;
    NSString *_payloadPassword;
    NSNumber *_payloadAllowedProtocolMask;
}

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadAuthenticationType;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMask;

+ (id)allowedPayloadKeys;
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withAllowedProtocolMask:(id)arg5;
+ (id)buildRequiredOnlyWithName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
