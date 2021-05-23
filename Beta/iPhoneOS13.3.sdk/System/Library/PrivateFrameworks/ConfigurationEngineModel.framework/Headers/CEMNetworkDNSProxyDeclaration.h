/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMAnyPayload, NSString;

@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase

{
    NSString *_payloadAppBundleIdentifier;
    NSString *_payloadProviderBundleIdentifier;
    CEMAnyPayload *_payloadProviderConfiguration;
}

@property (copy, nonatomic) NSString *payloadAppBundleIdentifier;
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier;
@property (copy, nonatomic) CEMAnyPayload *payloadProviderConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 withProviderBundleIdentifier:(id)arg3 withProviderConfiguration:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
