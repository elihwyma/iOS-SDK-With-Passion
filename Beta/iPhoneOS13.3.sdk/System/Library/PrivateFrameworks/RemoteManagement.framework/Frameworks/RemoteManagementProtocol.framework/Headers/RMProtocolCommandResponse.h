/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolCommandResponse : RMModelPayloadBase

{
    NSString *_responseType;
    NSString *_responseIdentifier;
    NSString *_responseDescription;
    RMModelAnyPayload *_responsePayload;
}

@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) NSString *responseDescription;
@property (copy, nonatomic) RMModelAnyPayload *responsePayload;

+ (id)requestWithType:(id)arg1 identifier:(id)arg2 description:(id)arg3 payload:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
