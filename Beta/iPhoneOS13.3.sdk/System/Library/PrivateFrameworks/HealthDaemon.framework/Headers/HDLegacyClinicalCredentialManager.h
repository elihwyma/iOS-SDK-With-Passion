/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSData;

@protocol OS_dispatch_queue;

@interface HDLegacyClinicalCredentialManager : NSObject

{
    NSData *__cachedCredentialKey;
    NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}

@property (copy, nonatomic, setter=_setCachedCredentialKey:) NSData *_cachedCredentialKey;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *credentialKeyQueue;

- (id)init;
- (id)decryptTokenData:(id)arg1 error:(out id *)arg2;
- (_Bool)deleteCredentialKeyFromKeychainWithError:(id *)arg1;
- (id)_encryptToken:(id)arg1 error:(out id *)arg2;
- (id)_tokenDataFromToken:(id)arg1 error:(out id *)arg2;
- (id)_generateInitializationVectorWithError:(out id *)arg1;
- (id)_encryptTokenData:(id)arg1 initializationVector:(id)arg2 operation:(unsigned int)arg3 error:(out id *)arg4;
- (id)_encryptedTokenDataWithInitializationVector:(id)arg1 payload:(id)arg2;
- (id)_decryptTokenData:(id)arg1 error:(out id *)arg2;
- (id)_initializationVectorFromEncryptedTokenData:(id)arg1 error:(out id *)arg2;
- (id)_payloadFromEncryptedTokenData:(id)arg1 error:(out id *)arg2;
- (id)_tokenFromTokenData:(id)arg1 error:(out id *)arg2;
- (id)_credentialKeyWithError:(out id *)arg1;
- (_Bool)_shouldProceedWithEncryptionAfterStatus:(int)arg1 error:(out id *)arg2;
- (_Bool)_assignCredentialManagerError:(out id *)arg1 code:(long long)arg2 format:(id)arg3;
- (_Bool)_encryptedTokenDataHasInitializationVector:(id)arg1 error:(out id *)arg2;
- (id)_tokenByStrippingPaddingFromToken:(id)arg1;
- (_Bool)_assignCredentialManagerError:(out id *)arg1 code:(long long)arg2 description:(id)arg3;
- (_Bool)_validateToken:(id)arg1 error:(out id *)arg2;
- (id)_credentialKeyFingerprintWithError:(out id *)arg1;
- (id)_retrieveCredentialKeyFromKeychainWithError:(out id *)arg1;
- (id)_credentialKeyBaseAttributes;
- (id)_credentialKeyQuery;
- (id)_attributesForCredentialKey:(id)arg1;
- (_Bool)_storeCredentialKeyInKeychain:(id)arg1 error:(out id *)arg2;
- (id)_generateRandomBytesOfLength:(long long)arg1 error:(out id *)arg2;
- (id)encryptToken:(id)arg1 error:(out id *)arg2;
- (id)credentialKeyFingerprintWithError:(out id *)arg1;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id *)arg1;
- (_Bool)unitTesting_storeCredentialKeyInKeychain:(id)arg1 error:(id *)arg2;
- (id)_generateCredentialKeyWithError:(out id *)arg1;
- (_Bool)_error:(id)arg1 isCredentialManagerErrorWithCode:(long long)arg2;

@end
