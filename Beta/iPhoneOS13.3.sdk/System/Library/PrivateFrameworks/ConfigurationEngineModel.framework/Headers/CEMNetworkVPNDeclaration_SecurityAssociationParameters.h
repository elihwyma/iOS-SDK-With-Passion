/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase

{
    NSString *_payloadEncryptionAlgorithm;
    NSString *_payloadIntegrityAlgorithm;
    NSNumber *_payloadDiffieHellmanGroup;
    NSNumber *_payloadLifeTimeInMinutes;
}

@property (copy, nonatomic) NSString *payloadEncryptionAlgorithm;
@property (copy, nonatomic) NSString *payloadIntegrityAlgorithm;
@property (copy, nonatomic) NSNumber *payloadDiffieHellmanGroup;
@property (copy, nonatomic) NSNumber *payloadLifeTimeInMinutes;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithEncryptionAlgorithm:(id)arg1 withIntegrityAlgorithm:(id)arg2 withDiffieHellmanGroup:(id)arg3 withLifeTimeInMinutes:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
