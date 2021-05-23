/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolManifestResponse_ManifestDeclarationItem : RMModelPayloadBase

{
    NSString *_responseIdentifier;
    NSString *_responseServerToken;
}

@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) NSString *responseServerToken;

+ (id)allowedResponseKeys;
+ (id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
