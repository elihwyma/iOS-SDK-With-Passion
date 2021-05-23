/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSKeychain : NSObject

+ (_Bool)deleteCertificateChainWithOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteKeyPairWithOptions:(id)arg1 error:(id *)arg2;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)certificateChainForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id *)arg2;
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (id)_primaryConstraints;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraintsForWatch;
+ (_Bool)storePrimaryCert:(struct __SecCertificate *)arg1 extendedCert:(struct __SecCertificate *)arg2 privateKey:(struct __SecKey *)arg3 options:(id)arg4 error:(id *)arg5;

@end
