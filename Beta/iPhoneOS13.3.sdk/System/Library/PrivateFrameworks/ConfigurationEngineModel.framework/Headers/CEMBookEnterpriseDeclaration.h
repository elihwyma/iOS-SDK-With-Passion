/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMAssetBase.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMBookEnterpriseDeclaration : CEMAssetBase

{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    CEMAssetBaseReference *_payloadReference;
    NSString *_payloadKind;
    NSString *_payloadVersion;
    NSString *_payloadAuthor;
    NSString *_payloadTitle;
}

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) CEMAssetBaseReference *payloadReference;
@property (copy, nonatomic) NSString *payloadKind;
@property (copy, nonatomic) NSString *payloadVersion;
@property (copy, nonatomic) NSString *payloadAuthor;
@property (copy, nonatomic) NSString *payloadTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 withKind:(id)arg4 withVersion:(id)arg5 withAuthor:(id)arg6 withTitle:(id)arg7;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
