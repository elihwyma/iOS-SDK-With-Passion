/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <Swift>

{
    NSURLProtectionSpaceInternal *_internal;
}

@property (copy, readonly) NSString *realm;
@property (readonly) _Bool receivesCredentialSecurely;
@property (readonly) _Bool isProxy;
@property (copy, readonly) NSString *host;
@property (readonly) long long port;
@property (copy, readonly) NSString *proxyType;
@property (copy, readonly) NSString *protocol;
@property (copy, readonly) NSString *authenticationMethod;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __SecTrust *)serverTrust;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
- (id)_internalInit;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)distinguishedNames;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;

@end
