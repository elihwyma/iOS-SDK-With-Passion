/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@class MISSING_TYPE;

@protocol SEEndPointXPCInterface

- (MISSING_TYPE *)listEndPointCertificateAuthorities: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createEndPointCertificateAuthority:subjectIdentifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteEndPointCertificateAuthority:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)listEndPoints: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createEndPointWithIdentifier:authorityIdentifier:subjectIdentifer:configuration:readerIdentifier:readerPublicKey:startDate:endDate:keyIdentifier:authorizedKeys:confidentialMailBoxSize:privateMailBoxSize:counter:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)revokeEndPointWithIdentifier:nonce:metaData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteEndPointWithIdentifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteEndPointWithPublicKey:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deleteEndPointWithPublicKeyIdentifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)signatureWithEndPointIdentifier:metaData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)configureEndPointWithIdentifier:privateData:confidentialData:contaclessVolatileVisibility:contaclessPersistentVisibility:wiredVolatileVisibility:wiredPersistentVisibility:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setMetaDataEndPointWithIdentifier:metaData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPrivateDataEndPointWithIdentifier:privateData:privateDataOffset:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getPrivateDataEndPointWithIdentifier:privateDataOffset:privateDataLength:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createEncryptionKeyEndPointWithIdentifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setConfidentialDataEndPointWithIdentifier:senderEphemeralPublicKey:encryptedData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)authorizeEndPointWithIdentifier:certificates:confidentialDataOffset:confidentialDataLength:metaData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPrivacyKeyEndPointWithIdentifier:publicKeyData:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)privacyDecryptDataWithEndPoint:data:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)privacyEncryptDataWithEndPoint:data:reply: /* Error: Ran out of types for this method. */;

@end
