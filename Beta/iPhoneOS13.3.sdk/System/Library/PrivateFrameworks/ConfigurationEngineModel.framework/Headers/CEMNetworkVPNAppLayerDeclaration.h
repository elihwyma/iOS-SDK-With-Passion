/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase

{
    NSString *_payloadVPNUUID;
    NSArray *_payloadSafariDomains;
    NSNumber *_payloadOnDemandMatchAppEnabled;
    NSArray *_payloadSMBDomains;
    NSString *_payloadProviderType;
}

@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSArray *payloadSafariDomains;
@property (copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled;
@property (copy, nonatomic) NSArray *payloadSMBDomains;
@property (copy, nonatomic) NSString *payloadProviderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withSafariDomains:(id)arg3 withOnDemandMatchAppEnabled:(id)arg4 withSMBDomains:(id)arg5 withProviderType:(id)arg6;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
