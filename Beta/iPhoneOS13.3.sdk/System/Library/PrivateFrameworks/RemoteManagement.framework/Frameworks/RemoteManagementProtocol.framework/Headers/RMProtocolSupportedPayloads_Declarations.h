/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolSupportedPayloads_Declarations : RMModelPayloadBase

{
    NSArray *_payloadsActivations;
    NSArray *_payloadsAssets;
    NSArray *_payloadsConfigurations;
    NSArray *_payloadsPredicates;
}

@property (copy, nonatomic) NSArray *payloadsActivations;
@property (copy, nonatomic) NSArray *payloadsAssets;
@property (copy, nonatomic) NSArray *payloadsConfigurations;
@property (copy, nonatomic) NSArray *payloadsPredicates;

+ (id)buildRequiredOnly;
+ (id)allowedPayloadsKeys;
+ (id)buildWithActivations:(id)arg1 assets:(id)arg2 configurations:(id)arg3 predicates:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
