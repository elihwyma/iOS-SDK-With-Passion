/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <Swift>

{
    id _sslServerTrustPolicyInternal;
}

@property (copy, nonatomic) NSString *serverName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerName:(id)arg1;

@end
