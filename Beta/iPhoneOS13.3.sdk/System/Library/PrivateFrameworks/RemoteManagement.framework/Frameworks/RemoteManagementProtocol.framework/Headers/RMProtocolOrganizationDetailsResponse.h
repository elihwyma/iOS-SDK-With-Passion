/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase

{
    NSString *_responseOrganizationDetailsToken;
    RMProtocolOrganizationDetails *_responseOrganizationDetails;
}

@property (copy, nonatomic) NSString *responseOrganizationDetailsToken;
@property (copy, nonatomic) RMProtocolOrganizationDetails *responseOrganizationDetails;

+ (id)requestWithOrganizationDetailsToken:(id)arg1 organizationDetails:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
