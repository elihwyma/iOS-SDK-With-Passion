/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolSupportedFeatures;

@interface RMProtocolServerCapabilitiesResponse : RMModelPayloadBase

{
    NSString *_responseCapabilitiesToken;
    NSString *_responseVersion;
    RMProtocolSupportedFeatures *_responseSupportedFeatures;
}

@property (copy, nonatomic) NSString *responseCapabilitiesToken;
@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) RMProtocolSupportedFeatures *responseSupportedFeatures;

+ (id)requestWithCapabilitiesToken:(id)arg1 version:(id)arg2 supportedFeatures:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
