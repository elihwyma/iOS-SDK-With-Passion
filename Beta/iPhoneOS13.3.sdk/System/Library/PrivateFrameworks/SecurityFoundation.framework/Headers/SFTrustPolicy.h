/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@interface SFTrustPolicy : NSObject <Swift>

{
    id _trustPolicyInternal;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluateCertificateChain:(id)arg1 error:(id *)arg2;

@end
