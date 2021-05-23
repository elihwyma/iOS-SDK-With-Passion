/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSString;

@interface CEMNetworkDomainsDeclaration : CEMConfigurationBase

{
    NSArray *_payloadEmailDomains;
    NSArray *_payloadWebDomains;
    NSArray *_payloadSafariPasswordAutoFillDomains;
}

@property (copy, nonatomic) NSArray *payloadEmailDomains;
@property (copy, nonatomic) NSArray *payloadWebDomains;
@property (copy, nonatomic) NSArray *payloadSafariPasswordAutoFillDomains;
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
+ (id)buildWithIdentifier:(id)arg1 withEmailDomains:(id)arg2 withWebDomains:(id)arg3 withSafariPasswordAutoFillDomains:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
