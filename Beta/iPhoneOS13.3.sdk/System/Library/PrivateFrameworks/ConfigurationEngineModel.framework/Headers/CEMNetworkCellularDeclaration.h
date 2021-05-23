/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMNetworkCellularDeclaration_AttachAPN, NSArray, NSString;

@interface CEMNetworkCellularDeclaration : CEMConfigurationBase

{
    CEMNetworkCellularDeclaration_AttachAPN *_payloadAttachAPN;
    NSArray *_payloadAPNs;
}

@property (copy, nonatomic) CEMNetworkCellularDeclaration_AttachAPN *payloadAttachAPN;
@property (copy, nonatomic) NSArray *payloadAPNs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAttachAPN:(id)arg2 withAPNs:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
