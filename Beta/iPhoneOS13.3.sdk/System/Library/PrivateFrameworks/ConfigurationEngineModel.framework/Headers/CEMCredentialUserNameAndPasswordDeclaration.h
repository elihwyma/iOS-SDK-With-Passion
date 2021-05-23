/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMAssetBase.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMCredentialUserNameAndPasswordDeclaration : CEMAssetBase

{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    CEMAssetBaseReference *_payloadReference;
}

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) CEMAssetBaseReference *payloadReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
