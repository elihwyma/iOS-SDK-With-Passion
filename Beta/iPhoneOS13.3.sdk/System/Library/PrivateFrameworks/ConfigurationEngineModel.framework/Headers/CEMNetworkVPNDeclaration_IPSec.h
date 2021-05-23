/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSData, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase

{
    NSString *_payloadRemoteAddress;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadXAuthName;
    NSString *_payloadXAuthPassword;
    NSNumber *_payloadXAuthEnabled;
    NSString *_payloadXAuthPasswordEncryption;
    NSString *_payloadLocalIdentifier;
    NSString *_payloadLocalIdentifierType;
    NSData *_payloadSharedSecret;
    NSString *_payloadPayloadCertificateUUID;
    NSNumber *_payloadPromptForVPNPIN;
    NSNumber *_payloadOnDemandEnabled;
    NSArray *_payloadOnDemandMatchDomainsAlways;
    NSArray *_payloadOnDemandMatchDomainsNever;
    NSArray *_payloadOnDemandMatchDomainsOnRetry;
    NSArray *_payloadOnDemandRules;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
}

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadXAuthName;
@property (copy, nonatomic) NSString *payloadXAuthPassword;
@property (copy, nonatomic) NSNumber *payloadXAuthEnabled;
@property (copy, nonatomic) NSString *payloadXAuthPasswordEncryption;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadLocalIdentifierType;
@property (copy, nonatomic) NSData *payloadSharedSecret;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadPromptForVPNPIN;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRemoteAddress:(id)arg1 withAuthenticationMethod:(id)arg2 withXAuthName:(id)arg3 withXAuthPassword:(id)arg4 withXAuthEnabled:(id)arg5 withXAuthPasswordEncryption:(id)arg6 withLocalIdentifier:(id)arg7 withLocalIdentifierType:(id)arg8 withSharedSecret:(id)arg9 withPayloadCertificateUUID:(id)arg10 withPromptForVPNPIN:(id)arg11 withOnDemandEnabled:(id)arg12 withOnDemandMatchDomainsAlways:(id)arg13 withOnDemandMatchDomainsNever:(id)arg14 withOnDemandMatchDomainsOnRetry:(id)arg15 withOnDemandRules:(id)arg16 withDisconnectOnIdle:(id)arg17 withDisconnectOnIdleTimer:(id)arg18;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
