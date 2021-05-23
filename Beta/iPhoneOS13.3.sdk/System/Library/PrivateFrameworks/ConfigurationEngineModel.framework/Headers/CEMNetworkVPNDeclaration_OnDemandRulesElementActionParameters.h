/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase

{
    NSArray *_payloadDomains;
    NSString *_payloadDomainAction;
    NSArray *_payloadRequiredDNSServers;
    NSString *_payloadRequiredURLStringProbe;
}

@property (copy, nonatomic) NSArray *payloadDomains;
@property (copy, nonatomic) NSString *payloadDomainAction;
@property (copy, nonatomic) NSArray *payloadRequiredDNSServers;
@property (copy, nonatomic) NSString *payloadRequiredURLStringProbe;

+ (id)allowedPayloadKeys;
+ (id)buildWithDomains:(id)arg1 withDomainAction:(id)arg2 withRequiredDNSServers:(id)arg3 withRequiredURLStringProbe:(id)arg4;
+ (id)buildRequiredOnlyWithDomains:(id)arg1 withDomainAction:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
