/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSString, RMProtocolManifestResponse_Declarations;

@interface RMProtocolManifestResponse : RMModelPayloadBase

{
    NSArray *_responseCommands;
    RMProtocolManifestResponse_Declarations *_responseDeclarations;
    NSArray *_responseSubscriptions;
    NSString *_responseOrganizationDetailsToken;
    NSString *_responseCapabilitiesToken;
}

@property (copy, nonatomic) NSArray *responseCommands;
@property (copy, nonatomic) RMProtocolManifestResponse_Declarations *responseDeclarations;
@property (copy, nonatomic) NSArray *responseSubscriptions;
@property (copy, nonatomic) NSString *responseOrganizationDetailsToken;
@property (copy, nonatomic) NSString *responseCapabilitiesToken;

+ (id)requestWithCommands:(id)arg1 declarations:(id)arg2 subscriptions:(id)arg3 organizationDetailsToken:(id)arg4 capabilitiesToken:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
