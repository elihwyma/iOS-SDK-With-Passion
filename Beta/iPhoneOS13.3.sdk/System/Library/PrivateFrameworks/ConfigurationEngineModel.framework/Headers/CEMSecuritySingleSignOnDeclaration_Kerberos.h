/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase

{
    NSString *_payloadPrincipalName;
    NSString *_payloadPayloadCertificateUUID;
    NSString *_payloadRealm;
    NSArray *_payloadURLPrefixMatches;
    NSArray *_payloadAppIdentifierMatches;
}

@property (copy, nonatomic) NSString *payloadPrincipalName;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadRealm;
@property (copy, nonatomic) NSArray *payloadURLPrefixMatches;
@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches;

+ (id)allowedPayloadKeys;
+ (id)buildWithPrincipalName:(id)arg1 withPayloadCertificateUUID:(id)arg2 withRealm:(id)arg3 withURLPrefixMatches:(id)arg4 withAppIdentifierMatches:(id)arg5;
+ (id)buildRequiredOnlyWithRealm:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
