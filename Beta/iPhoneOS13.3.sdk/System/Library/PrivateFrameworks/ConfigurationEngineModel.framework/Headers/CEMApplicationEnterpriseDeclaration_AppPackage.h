/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase

{
    NSString *_payloadDataURL;
    NSString *_payloadContentType;
    NSNumber *_payloadSize;
    NSString *_payloadHashSHA256;
    NSArray *_payloadCertificatePinningIdentifiers;
}

@property (copy, nonatomic) NSString *payloadDataURL;
@property (copy, nonatomic) NSString *payloadContentType;
@property (copy, nonatomic) NSNumber *payloadSize;
@property (copy, nonatomic) NSString *payloadHashSHA256;
@property (copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers;

+ (id)allowedPayloadKeys;
+ (id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5;
+ (id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
