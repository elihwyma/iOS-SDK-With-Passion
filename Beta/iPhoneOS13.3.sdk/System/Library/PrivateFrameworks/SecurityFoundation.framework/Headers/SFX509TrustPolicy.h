/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/Swift-Protocol.h>

@interface SFX509TrustPolicy : SFTrustPolicy <Swift>

{
    id _x509TrustPolicyInternal;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
