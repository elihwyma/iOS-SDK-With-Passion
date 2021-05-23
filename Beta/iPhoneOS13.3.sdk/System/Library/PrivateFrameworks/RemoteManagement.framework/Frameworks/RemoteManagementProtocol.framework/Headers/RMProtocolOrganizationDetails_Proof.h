/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolOrganizationDetails_Proof : RMModelPayloadBase

{
    NSString *_detailsIdentityToken;
}

@property (copy, nonatomic) NSString *detailsIdentityToken;

+ (id)buildRequiredOnly;
+ (id)allowedDetailsKeys;
+ (id)buildWithIdentityToken:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
