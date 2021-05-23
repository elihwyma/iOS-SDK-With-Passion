/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase

{
    NSString *_payloadRfc822Name;
    NSString *_payloadDNSName;
    NSString *_payloadUniformResourceIdentifier;
    NSString *_payloadNtPrincipalName;
}

@property (copy, nonatomic) NSString *payloadRfc822Name;
@property (copy, nonatomic) NSString *payloadDNSName;
@property (copy, nonatomic) NSString *payloadUniformResourceIdentifier;
@property (copy, nonatomic) NSString *payloadNtPrincipalName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
