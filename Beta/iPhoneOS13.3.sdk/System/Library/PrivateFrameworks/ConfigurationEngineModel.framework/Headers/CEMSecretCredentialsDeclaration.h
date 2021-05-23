/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase

{
    NSString *_payloadSecret;
}

@property (copy, nonatomic) NSString *payloadSecret;

+ (id)allowedPayloadKeys;
+ (id)buildWithSecret:(id)arg1;
+ (id)buildRequiredOnlyWithSecret:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
