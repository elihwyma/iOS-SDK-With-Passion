/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse

{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_publicKeyHash;
    NSData *_nonceSignature;
}

@property (copy, nonatomic, readonly) NSArray *certificates;
@property (copy, nonatomic, readonly) NSData *nonce;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *nonceSignature;

- (id)initWithData:(id)arg1;

@end
