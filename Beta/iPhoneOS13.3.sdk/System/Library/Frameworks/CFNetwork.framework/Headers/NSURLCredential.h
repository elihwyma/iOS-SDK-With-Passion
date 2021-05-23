/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <Swift>

{
    NSURLCredentialInternal *_internal;
}

@property (readonly) unsigned long long persistence;

+ (_Bool)supportsSecureCoding;
+ (id)credentialWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialForTrust:(struct __SecTrust *)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)user;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (id)certificates;
- (struct __SecIdentity *)identity;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (id)_initWithCFURLCredential:(struct _CFURLCredential *)arg1;
- (const struct _CFURLCredential *)_cfurlcredential;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
- (const struct _CFURLCredential *)_CFURLCredential;
- (_Bool)hasPassword;
- (_Bool)_hasSWCACreatorAttribute;
- (void)_removeSWCACreatorAttribute;

@end
