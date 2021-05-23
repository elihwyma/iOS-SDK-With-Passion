/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails, RMProtocolSupportedFeatures;

@interface RMProtocolEnrollResponse : RMModelPayloadBase

{
    NSString *_responsePushTopic;
    NSString *_responsePushEnvironment;
    NSString *_responseOrganizationDetailsToken;
    RMProtocolOrganizationDetails *_responseOrganizationDetails;
    NSString *_responseCapabilitiesToken;
    NSString *_responseVersion;
    RMProtocolSupportedFeatures *_responseSupportedFeatures;
}

@property (copy, nonatomic) NSString *responsePushTopic;
@property (copy, nonatomic) NSString *responsePushEnvironment;
@property (copy, nonatomic) NSString *responseOrganizationDetailsToken;
@property (copy, nonatomic) RMProtocolOrganizationDetails *responseOrganizationDetails;
@property (copy, nonatomic) NSString *responseCapabilitiesToken;
@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) RMProtocolSupportedFeatures *responseSupportedFeatures;

+ (id)requestWithPushTopic:(id)arg1 pushEnvironment:(id)arg2 organizationDetailsToken:(id)arg3 organizationDetails:(id)arg4 capabilitiesToken:(id)arg5 version:(id)arg6 supportedFeatures:(id)arg7;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
