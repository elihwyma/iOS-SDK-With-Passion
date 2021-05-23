/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolPushMessage : RMModelPayloadBase

{
    NSString *_messageEnrollmentToken;
}

@property (copy, nonatomic) NSString *messageEnrollmentToken;

+ (id)requestWithEnrollmentToken:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
