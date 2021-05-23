/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMNetworkGlobalHTTPProxyDeclaration : CEMConfigurationBase

{
    NSString *_payloadProxyType;
    NSString *_payloadProxyServer;
    NSNumber *_payloadProxyServerPort;
    NSString *_payloadProxyUsername;
    NSString *_payloadProxyPassword;
    NSString *_payloadProxyPACURL;
    NSNumber *_payloadProxyPACFallbackAllowed;
    NSNumber *_payloadProxyCaptiveLoginAllowed;
}

@property (copy, nonatomic) NSString *payloadProxyType;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyServerPort;
@property (copy, nonatomic) NSString *payloadProxyUsername;
@property (copy, nonatomic) NSString *payloadProxyPassword;
@property (copy, nonatomic) NSString *payloadProxyPACURL;
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed;
@property (copy, nonatomic) NSNumber *payloadProxyCaptiveLoginAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withProxyType:(id)arg2 withProxyServer:(id)arg3 withProxyServerPort:(id)arg4 withProxyUsername:(id)arg5 withProxyPassword:(id)arg6 withProxyPACURL:(id)arg7 withProxyPACFallbackAllowed:(id)arg8 withProxyCaptiveLoginAllowed:(id)arg9;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProxyServer:(id)arg2 withProxyServerPort:(id)arg3 withProxyPACURL:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
