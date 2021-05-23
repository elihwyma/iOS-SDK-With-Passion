/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters, NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase

{
    NSArray *_payloadDNSDomainMatch;
    NSArray *_payloadDNSServerAddressMatch;
    NSString *_payloadURLStringProbe;
    NSString *_payloadAction;
    CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *_payloadActionParameters;
    NSString *_payloadInterfaceTypeMatch;
    NSArray *_payloadSSIDMatch;
}

@property (copy, nonatomic) NSArray *payloadDNSDomainMatch;
@property (copy, nonatomic) NSArray *payloadDNSServerAddressMatch;
@property (copy, nonatomic) NSString *payloadURLStringProbe;
@property (copy, nonatomic) NSString *payloadAction;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *payloadActionParameters;
@property (copy, nonatomic) NSString *payloadInterfaceTypeMatch;
@property (copy, nonatomic) NSArray *payloadSSIDMatch;

+ (id)allowedPayloadKeys;
+ (id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4 withActionParameters:(id)arg5 withInterfaceTypeMatch:(id)arg6 withSSIDMatch:(id)arg7;
+ (id)buildRequiredOnlyWithAction:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
