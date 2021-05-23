/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolErrorResponse : RMModelPayloadBase

{
    NSString *_responseCode;
    NSString *_responseDescription;
    RMModelAnyPayload *_responseDetails;
}

@property (copy, nonatomic) NSString *responseCode;
@property (copy, nonatomic) NSString *responseDescription;
@property (copy, nonatomic) RMModelAnyPayload *responseDetails;

+ (id)requestWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
