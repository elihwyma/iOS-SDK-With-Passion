/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase

{
    NSString *_responseVersion;
    NSString *_responseBaseURL;
    NSArray *_responsePinnedCertificates;
    NSNumber *_responsePinningRevocationCheckRequired;
}

@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) NSString *responseBaseURL;
@property (copy, nonatomic) NSArray *responsePinnedCertificates;
@property (copy, nonatomic) NSNumber *responsePinningRevocationCheckRequired;

+ (id)allowedResponseKeys;
+ (id)buildWithVersion:(id)arg1 baseURL:(id)arg2 pinnedCertificates:(id)arg3 pinningRevocationCheckRequired:(id)arg4;
+ (id)buildRequiredOnlyWithVersion:(id)arg1 baseURL:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
