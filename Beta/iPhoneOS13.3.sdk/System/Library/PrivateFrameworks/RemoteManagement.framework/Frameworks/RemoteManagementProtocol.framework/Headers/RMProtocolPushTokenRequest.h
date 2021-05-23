/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSData, NSString;

@interface RMProtocolPushTokenRequest : RMModelPayloadBase

{
    NSString *_requestPushTopic;
    NSData *_requestPushToken;
}

@property (copy, nonatomic) NSString *requestPushTopic;
@property (copy, nonatomic) NSData *requestPushToken;

+ (id)requestWithPushTopic:(id)arg1 pushToken:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
