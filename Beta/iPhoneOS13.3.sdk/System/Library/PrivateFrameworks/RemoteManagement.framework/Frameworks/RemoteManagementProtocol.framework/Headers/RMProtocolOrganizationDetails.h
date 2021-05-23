/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails_Proof;

@interface RMProtocolOrganizationDetails : RMModelPayloadBase

{
    NSString *_detailsName;
    NSString *_detailsEmail;
    NSString *_detailsURL;
    RMProtocolOrganizationDetails_Proof *_detailsProof;
}

@property (copy, nonatomic) NSString *detailsName;
@property (copy, nonatomic) NSString *detailsEmail;
@property (copy, nonatomic) NSString *detailsURL;
@property (copy, nonatomic) RMProtocolOrganizationDetails_Proof *detailsProof;

+ (id)requestWithName:(id)arg1 email:(id)arg2 URL:(id)arg3 proof:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
