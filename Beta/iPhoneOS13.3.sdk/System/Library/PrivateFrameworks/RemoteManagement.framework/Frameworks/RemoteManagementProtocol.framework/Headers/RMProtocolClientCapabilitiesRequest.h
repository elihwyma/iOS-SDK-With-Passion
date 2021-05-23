/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, RMProtocolSupportedFeatures, RMProtocolSupportedPayloads;

@interface RMProtocolClientCapabilitiesRequest : RMModelPayloadBase

{
    NSArray *_requestSupportedVersions;
    RMProtocolSupportedFeatures *_requestSupportedFeatures;
    RMProtocolSupportedPayloads *_requestSupportedPayloads;
}

@property (copy, nonatomic) NSArray *requestSupportedVersions;
@property (copy, nonatomic) RMProtocolSupportedFeatures *requestSupportedFeatures;
@property (copy, nonatomic) RMProtocolSupportedPayloads *requestSupportedPayloads;

+ (id)requestWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
