/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
 */

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolManifestResponse_Declarations : RMModelPayloadBase

{
    NSArray *_responseActivations;
    NSArray *_responseConfigurations;
    NSArray *_responseAssets;
}

@property (copy, nonatomic) NSArray *responseActivations;
@property (copy, nonatomic) NSArray *responseConfigurations;
@property (copy, nonatomic) NSArray *responseAssets;

+ (id)buildRequiredOnly;
+ (id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3;
+ (id)allowedResponseKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
