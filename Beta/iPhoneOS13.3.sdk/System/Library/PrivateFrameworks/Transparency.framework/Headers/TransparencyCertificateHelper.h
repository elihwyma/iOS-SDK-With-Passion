/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@interface TransparencyCertificateHelper : NSObject

+ (_Bool)verifyCertificates:(id)arg1 intermediates:(id)arg2 policy:(struct __SecPolicy *)arg3 error:(id *)arg4;
+ (struct __SecCertificate *)certificateFromData:(id)arg1 error:(id *)arg2;
+ (id)copyTrustedKeysFromDataArray:(id)arg1 error:(id *)arg2;
+ (_Bool)addTrustedCertificate:(id)arg1 trustedKeys:(id)arg2 error:(id *)arg3;
+ (id)createCACertificatesArray:(id)arg1 error:(id *)arg2;
+ (_Bool)verifyLeaf:(id)arg1 intermediates:(id)arg2 policy:(struct __SecPolicy *)arg3 error:(id *)arg4;

@end
