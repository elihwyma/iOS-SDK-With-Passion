/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase

{
    NSNumber *_payloadHTTPEnable;
    NSNumber *_payloadHTTPPort;
    NSString *_payloadHTTPProxy;
    NSString *_payloadHTTPProxyPassword;
    NSString *_payloadHTTPProxyUsername;
    NSNumber *_payloadHTTPSEnable;
    NSNumber *_payloadHTTPSPort;
    NSString *_payloadHTTPSProxy;
    NSNumber *_payloadProxyAutoConfigEnable;
    NSNumber *_payloadProxyAutoDiscoveryEnable;
    NSString *_payloadProxyAutoConfigURLString;
    NSArray *_payloadSupplementalMatchDomains;
}

@property (copy, nonatomic) NSNumber *payloadHTTPEnable;
@property (copy, nonatomic) NSNumber *payloadHTTPPort;
@property (copy, nonatomic) NSString *payloadHTTPProxy;
@property (copy, nonatomic) NSString *payloadHTTPProxyPassword;
@property (copy, nonatomic) NSString *payloadHTTPProxyUsername;
@property (copy, nonatomic) NSNumber *payloadHTTPSEnable;
@property (copy, nonatomic) NSNumber *payloadHTTPSPort;
@property (copy, nonatomic) NSString *payloadHTTPSProxy;
@property (copy, nonatomic) NSNumber *payloadProxyAutoConfigEnable;
@property (copy, nonatomic) NSNumber *payloadProxyAutoDiscoveryEnable;
@property (copy, nonatomic) NSString *payloadProxyAutoConfigURLString;
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithHTTPEnable:(id)arg1 withHTTPPort:(id)arg2 withHTTPProxy:(id)arg3 withHTTPProxyPassword:(id)arg4 withHTTPProxyUsername:(id)arg5 withHTTPSEnable:(id)arg6 withHTTPSPort:(id)arg7 withHTTPSProxy:(id)arg8 withProxyAutoConfigEnable:(id)arg9 withProxyAutoDiscoveryEnable:(id)arg10 withProxyAutoConfigURLString:(id)arg11 withSupplementalMatchDomains:(id)arg12;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
