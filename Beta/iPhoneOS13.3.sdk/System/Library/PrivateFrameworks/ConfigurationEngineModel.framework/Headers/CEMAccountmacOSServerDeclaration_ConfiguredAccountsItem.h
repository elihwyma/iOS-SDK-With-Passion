/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase

{
    NSString *_payloadType;
    NSNumber *_payloadPort;
}

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSNumber *payloadPort;

+ (id)allowedPayloadKeys;
+ (id)buildWithType:(id)arg1 withPort:(id)arg2;
+ (id)buildRequiredOnlyWithType:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
