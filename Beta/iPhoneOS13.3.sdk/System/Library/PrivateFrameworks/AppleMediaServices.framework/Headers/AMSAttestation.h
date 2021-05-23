/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSAttestation : NSObject

+ (id)_certChainStringsWithOptions:(id)arg1 error:(id *)arg2;
+ (id)attestationWithOptions:(id)arg1 error:(id *)arg2;
+ (id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id *)arg4;
+ (_Bool)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(_Bool)arg2 error:(id *)arg3;
+ (id)ACLVersionForOptions:(id)arg1;
+ (id)ACLVersionOnDiskForOptions:(id)arg1;
+ (_Bool)clearAttestationWithOptions:(id)arg1 error:(id *)arg2;

@end
