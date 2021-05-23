/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase

{
    NSData *_payloadCertificate;
}

@property (copy, nonatomic) NSData *payloadCertificate;

+ (id)allowedPayloadKeys;
+ (id)buildWithCertificate:(id)arg1;
+ (id)buildRequiredOnlyWithCertificate:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
