/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AKAttestationSigner : NSObject

{
    NSObject<OS_dispatch_queue> *_attestationQueue;
}

+ (id)sharedSigner;

- (id)init;
- (id)_signatureForData:(id)arg1 withReferenceKey:(struct __SecKey *)arg2 error:(id *)arg3;
- (id)_attestationWithCertificates:(id)arg1 error:(id *)arg2;
- (void)signatureForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
