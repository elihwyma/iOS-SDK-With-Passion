/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, RMProtocolSupportedPayloads_Declarations;

@interface RMProtocolSupportedPayloads : RMModelPayloadBase

{
    NSArray *_payloadsCommands;
    RMProtocolSupportedPayloads_Declarations *_payloadsDeclarations;
    NSArray *_payloadsSubscriptions;
}

@property (copy, nonatomic) NSArray *payloadsCommands;
@property (copy, nonatomic) RMProtocolSupportedPayloads_Declarations *payloadsDeclarations;
@property (copy, nonatomic) NSArray *payloadsSubscriptions;

+ (id)buildWithCommands:(id)arg1 declarations:(id)arg2 subscriptions:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
