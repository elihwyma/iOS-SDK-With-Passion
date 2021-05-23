/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionConfiguration.h>

#import <CFNetwork/Swift-Protocol.h>

@interface __NSCFURLSessionConfiguration_Immutable : NSURLSessionConfiguration <Swift>

{
    NSURLSessionConfiguration *_target;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (_Bool)_isProxySession;
- (id)disposition;

@end
