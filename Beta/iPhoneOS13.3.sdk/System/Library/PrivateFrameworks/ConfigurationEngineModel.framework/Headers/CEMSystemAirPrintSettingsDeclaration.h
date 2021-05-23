/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowAirPrint;
    NSNumber *_payloadForceAirPrintTrustedTLSRequirement;
    NSNumber *_payloadAllowAirPrintiBeaconDiscovery;
    NSNumber *_payloadAllowAirPrintCredentialsStorage;
}

@property (copy, nonatomic) NSNumber *payloadAllowAirPrint;
@property (copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
