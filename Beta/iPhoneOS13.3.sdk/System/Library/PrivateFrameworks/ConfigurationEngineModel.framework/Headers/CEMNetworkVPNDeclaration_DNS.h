/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_DNS : CEMPayloadBase

{
    NSArray *_payloadServerAddresses;
    NSArray *_payloadSearchDomains;
    NSString *_payloadDomainName;
    NSArray *_payloadSupplementalMatchDomains;
    NSNumber *_payloadSupplementalMatchDomainsNoSearch;
}

@property (copy, nonatomic) NSArray *payloadServerAddresses;
@property (copy, nonatomic) NSArray *payloadSearchDomains;
@property (copy, nonatomic) NSString *payloadDomainName;
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains;
@property (copy, nonatomic) NSNumber *payloadSupplementalMatchDomainsNoSearch;

+ (id)allowedPayloadKeys;
+ (id)buildWithServerAddresses:(id)arg1 withSearchDomains:(id)arg2 withDomainName:(id)arg3 withSupplementalMatchDomains:(id)arg4 withSupplementalMatchDomainsNoSearch:(id)arg5;
+ (id)buildRequiredOnlyWithServerAddresses:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
