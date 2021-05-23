/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <Swift>

{
    id _sslClientTrustPolicyInternal;
}

@property (copy, nonatomic) NSString *clientName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1;

@end
