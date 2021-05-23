/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_identity : NSObject

{
    struct __SecIdentity *identity;
    struct __CFArray *certs;
    CDUnknownBlockType sign_block;
    CDUnknownBlockType decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity *)arg1 certificates:(struct __CFArray *)arg2;
- (id)initWithCertificates:(struct __CFArray *)arg1 signBlock:(CDUnknownBlockType)arg2 decryptBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;

@end
