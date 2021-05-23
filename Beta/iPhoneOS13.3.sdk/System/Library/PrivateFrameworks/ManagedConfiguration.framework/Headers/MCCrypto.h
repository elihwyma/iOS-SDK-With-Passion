/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCCrypto : NSObject

+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg1;
+ (id)_decryptionFailedErrorWithUnderlyingError:(id)arg1;
+ (id)storedActivationLockBypassCodeHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;
+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (_Bool)isValidPKCS12Data:(id)arg1;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate **)arg2 outError:(id *)arg3;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (id)storedActivationLockBypassCodeWithOutError:(id *)arg1;
+ (void)clearStoredActivationLockBypassCode;
+ (void)clearStoredActivationLockHash;

@end
