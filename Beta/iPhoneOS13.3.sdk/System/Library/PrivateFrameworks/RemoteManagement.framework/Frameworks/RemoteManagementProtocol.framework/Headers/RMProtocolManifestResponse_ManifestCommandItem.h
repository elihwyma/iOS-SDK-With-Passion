/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolManifestResponse_ManifestCommandItem : RMModelPayloadBase

{
    NSString *_responseIdentifier;
}

@property (copy, nonatomic) NSString *responseIdentifier;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1;
+ (id)allowedResponseKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
