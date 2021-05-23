/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class CEMNetworkVPNDeclaration_AlwaysOn, CEMNetworkVPNDeclaration_DNS, CEMNetworkVPNDeclaration_IKEv2, CEMNetworkVPNDeclaration_IPSec, CEMNetworkVPNDeclaration_IPv4, CEMNetworkVPNDeclaration_PPP, CEMNetworkVPNDeclaration_Proxies, CEMNetworkVPNDeclaration_VPN, CEMNetworkVPNDeclaration_VendorConfig, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration : CEMConfigurationBase

{
    NSString *_payloadVPNType;
    NSString *_payloadVPNSubType;
    NSString *_payloadUserDefinedName;
    CEMNetworkVPNDeclaration_VendorConfig *_payloadVendorConfig;
    CEMNetworkVPNDeclaration_VPN *_payloadVPN;
    CEMNetworkVPNDeclaration_IPv4 *_payloadIPv4;
    CEMNetworkVPNDeclaration_PPP *_payloadPPP;
    CEMNetworkVPNDeclaration_IPSec *_payloadIPSec;
    CEMNetworkVPNDeclaration_IKEv2 *_payloadIKEv2;
    CEMNetworkVPNDeclaration_Proxies *_payloadProxies;
    CEMNetworkVPNDeclaration_AlwaysOn *_payloadAlwaysOn;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
    CEMNetworkVPNDeclaration_DNS *_payloadDNS;
}

@property (copy, nonatomic) NSString *payloadVPNType;
@property (copy, nonatomic) NSString *payloadVPNSubType;
@property (copy, nonatomic) NSString *payloadUserDefinedName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VendorConfig *payloadVendorConfig;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VPN *payloadVPN;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPv4 *payloadIPv4;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_PPP *payloadPPP;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPSec *payloadIPSec;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IKEv2 *payloadIKEv2;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_Proxies *payloadProxies;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_AlwaysOn *payloadAlwaysOn;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_DNS *payloadDNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withVPNType:(id)arg2 withVPNSubType:(id)arg3 withUserDefinedName:(id)arg4 withVendorConfig:(id)arg5 withVPN:(id)arg6 withIPv4:(id)arg7 withPPP:(id)arg8 withIPSec:(id)arg9 withIKEv2:(id)arg10 withProxies:(id)arg11 withAlwaysOn:(id)arg12 withDisconnectOnIdle:(id)arg13 withDisconnectOnIdleTimer:(id)arg14 withDNS:(id)arg15;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNType:(id)arg2 withUserDefinedName:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
