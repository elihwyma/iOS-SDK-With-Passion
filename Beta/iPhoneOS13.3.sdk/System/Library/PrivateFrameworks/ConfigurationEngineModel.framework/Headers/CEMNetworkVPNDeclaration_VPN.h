/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase

{
    NSString *_payloadAuthName;
    NSString *_payloadAuthPassword;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadPayloadCertificateUUID;
    NSNumber *_payloadOnDemandEnabled;
    NSArray *_payloadOnDemandMatchDomainsAlways;
    NSArray *_payloadOnDemandMatchDomainsNever;
    NSArray *_payloadOnDemandMatchDomainsOnRetry;
    NSArray *_payloadOnDemandRules;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
    NSString *_payloadRemoteAddress;
    NSString *_payloadPassword;
    NSString *_payloadProviderBundleIdentifier;
}

@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;
@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withOnDemandEnabled:(id)arg5 withOnDemandMatchDomainsAlways:(id)arg6 withOnDemandMatchDomainsNever:(id)arg7 withOnDemandMatchDomainsOnRetry:(id)arg8 withOnDemandRules:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11 withRemoteAddress:(id)arg12 withPassword:(id)arg13 withProviderBundleIdentifier:(id)arg14;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
