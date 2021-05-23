/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2Crypto : NSObject

+ (struct NSMutableData *)createHMACFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3;
+ (id)createHashFromData:(id)arg1 algorithm:(unsigned long long)arg2;
+ (unsigned long long)signHashTypeForAuthentication:(id)arg1;
+ (id)createSignHashProtocolForAuth:(id)arg1;
+ (id)copySignHashDataForSet:(id)arg1;
+ (id)createRandomWithSize:(unsigned int)arg1;
+ (id)createHashFromData:(id)arg1;
+ (id)createBase16EncodedDataForString:(const char *)arg1;
+ (id)prototypeDHKeysForGroup:(unsigned long long)arg1;
+ (id)copyAllCertIdentities;
+ (id)copyPersistentDataForIdentity:(struct __SecIdentity *)arg1;
+ (id)copyAllCertificates;
+ (id)copyPersistentDataForCertificate:(struct __SecCertificate *)arg1;
+ (id)createHashFromData:(id)arg1 hashAlgorithm:(unsigned long long)arg2;
+ (_Bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey *)arg4 padding:(unsigned int)arg5 sha2:(_Bool)arg6;
+ (_Bool)encryptGCMWithContext:(id)arg1 aad:(const char *)arg2 aadLen:(int)arg3 plaintext:(const char *)arg4 len:(int)arg5 output:(char *)arg6 outputLen:(int)arg7;
+ (_Bool)encryptChaChaPolyWithContext:(id)arg1 key:(id)arg2 iv:(id)arg3 aad:(const char *)arg4 aadLen:(int)arg5 plaintext:(const char *)arg6 len:(int)arg7 output:(char *)arg8 outputLen:(int)arg9;
+ (_Bool)decryptGCMWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;
+ (_Bool)decryptChaChaPolyWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;
+ (struct NSMutableData *)createHMACFromData:(id)arg1 key:(id)arg2 integrityAlgorithm:(unsigned long long)arg3;
+ (struct NSMutableData *)createPRFPlusFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3 outputLength:(unsigned int)arg4;
+ (id)copyAuthenticationProtocolForAuthMethod:(unsigned long long)arg1 authData:(id)arg2;
+ (id)copySignHashDataForSet:(id)arg1 authentication:(id)arg2;
+ (id)createIVForEncryptionAlgorithm:(id)arg1 encryptContext:(id)arg2;
+ (id)createNATDetectionHashForInitiatorSPI:(id)arg1 responderSPI:(id)arg2 address:(id)arg3;
+ (id)copyDHKeys:(unsigned long long)arg1;
+ (struct __SecCertificate *)copyCertificateFromPersistentData:(id)arg1;
+ (id)createCertificateAuthorityPublicKeyHash:(struct __SecCertificate *)arg1;
+ (struct __SecKey *)copyTrustedKeyForCertificate:(id)arg1 remoteCAArray:(id)arg2 policyRef:(void *)arg3 enableRevocationCheck:(_Bool)arg4 strictRevocationCheck:(_Bool)arg5;
+ (id)copyPersistentIdentityDataForCommonName:(id)arg1;
+ (id)copyDataFromPersistentReference:(id)arg1;
+ (id)copyPersistentCertificateDataForCommonName:(id)arg1 matchingCertificateHash:(id)arg2;
+ (struct __SecPolicy *)createPolicyWithHostname:(id)arg1;
+ (_Bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey *)arg4 padding:(unsigned int)arg5;
+ (id)createEncryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 encryptionContext:(id)arg5 aad:(id)arg6 padDataToKeyLength:(_Bool)arg7;
+ (id)createDecryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 aad:(id)arg5 padDataToKeyLength:(_Bool)arg6;
+ (struct __SecIdentity *)copySecIdentity:(struct NSMutableData *)arg1;

@end
