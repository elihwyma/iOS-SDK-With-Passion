/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase

{
    NSString *_payloadIdentifier;
    NSString *_payloadVPNUUID;
    NSString *_payloadDesignatedRequirement;
    NSString *_payloadSigningIdentifier;
}

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSString *payloadDesignatedRequirement;
@property (copy, nonatomic) NSString *payloadSigningIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
