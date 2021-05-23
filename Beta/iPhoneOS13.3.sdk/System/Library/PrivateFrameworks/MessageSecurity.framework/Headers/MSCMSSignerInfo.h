/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSAlgorithmIdentifier, MSCMSMutableAttributeArray, MSCMSSignedData, NSData, NSNumber;

@interface MSCMSSignerInfo : NSObject

{
    MSAlgorithmIdentifier *_signatureAlgorithm;
    struct __SecCertificate *_signerCertificate;
    MSCMSMutableAttributeArray *_protectedAttributes;
    NSData *_signature;
    MSCMSMutableAttributeArray *_unprotectedAttributes;
    NSData *_LAContext;
    struct __SecKey *_signerPrivKey;
    struct SignerInfo *_encodedSignerInfo;
    NSData *_signerSerialNumber;
    NSData *_signerIssuerSequence;
    NSNumber *_version;
    MSCMSSignedData *_containingSignedData;
    MSAlgorithmIdentifier *_digestAlgorithm;
    struct SignerInfo_signedAttrs _signedAttrsStruct;
    struct SignerInfo_unsignedAttrs _unsignedAttrsStruct;
}

@property struct __SecKey *signerPrivKey;
@property struct SignerInfo *encodedSignerInfo;
@property (retain) NSData *signature;
@property struct __SecCertificate *signerCertificate;
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm;
@property (retain) NSData *signerSerialNumber;
@property (retain) NSData *signerIssuerSequence;
@property struct SignerInfo_signedAttrs signedAttrsStruct;
@property struct SignerInfo_unsignedAttrs unsignedAttrsStruct;
@property (retain) NSNumber *version;
@property (weak) MSCMSSignedData *containingSignedData;
@property (retain) MSAlgorithmIdentifier *digestAlgorithm;
@property (retain) MSCMSMutableAttributeArray *protectedAttributes;
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes;
@property (retain) NSData *LAContext;

+ (id)decodeSignerInfo:(struct SignerInfo *)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id *)arg4;

- (void)dealloc;
- (_Bool)verifySignature:(id *)arg1;
- (_Bool)verifyCountersignatures:(id *)arg1;
- (_Bool)verifyTimestamps:(id *)arg1;
- (_Bool)verifySignatureAndSignerWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id *)arg3;
- (_Bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id *)arg3;
- (_Bool)encodeSignerInfo:(struct SignerInfo *)arg1 error:(id *)arg2;
- (id)getAttributesWithType:(id)arg1;
- (struct __SecTrust *)createTrustObjectWithPolicies:(id)arg1 error:(id *)arg2;
- (id)verifyTime:(id)arg1;
- (id)calculateSignedAttributesDigest:(id *)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1 signatureAlgorithm:(id)arg2 error:(id *)arg3;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 signatureAlgorithm:(id)arg2 error:(id *)arg3;
- (id)initWithEmail:(id)arg1 signatureAlgorithm:(id)arg2 LAContext:(id)arg3 error:(id *)arg4;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id *)arg3;
- (_Bool)verifyContentTypeAttribute:(id *)arg1;
- (_Bool)verifyMessageDigestAttribute:(id)arg1 error:(id *)arg2;
- (id)calculateSignerInfoDigest:(id *)arg1;
- (_Bool)sign:(id *)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1 error:(id *)arg2;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 error:(id *)arg2;
- (id)initWithEmail:(id)arg1 LAContext:(id)arg2 error:(id *)arg3;
- (id)initWithCertificate:(struct __SecCertificate *)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id *)arg3;
- (id)initWithEmail:(id)arg1 recipientsAlgorithmCapabilities:(id)arg2 LAContext:(id)arg3 error:(id *)arg4;

@end
