/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@class MISSING_TYPE;

@protocol SEKeyXPCInterface

- (MISSING_TYPE *)createSEKey:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteSEKey:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)signWithSEKey:data:algorithm:laExternalizedContext:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sharedSecretWithSEKey:publicKey:algorithm:laExternalizedContext:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)encryptWithSEKey:plainText:publicKey:algorithm:laExternalizedContext:sharedInfo:authenticationData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)decryptWithSEKey:cipherText:publicKey:algorithm:laExternalizedContext:sharedInfo:authenticationData:authenticationTag:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)rewrapWithSEKey:cipherText:publicKey:decryptAlgorithm:decryptSharedInfo:encryptAlgorithm:encryptSharedInfo:certificate:laExternalizedContext:decryptAuthenticationData:decryptAuthenticationTag:encryptAuthenticationData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createSEABAASCertificate:subjectIdentifier:nonce:OIDs:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createCertificateForKeyData:withKeyData:subjectIdentifier:authorityIdentifier:laExternalizedContext:nonce:OIDs:reply: /* Error: Ran out of types for this method. */;

@end
