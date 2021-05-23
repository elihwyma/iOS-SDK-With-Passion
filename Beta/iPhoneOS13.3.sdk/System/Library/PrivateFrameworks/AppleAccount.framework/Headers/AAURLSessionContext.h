/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class AAAbsintheSigner, AAAttestationSigner, AARemoteServer, AKAppleIDSession, NSString;

@protocol OS_dispatch_queue;

@interface AAURLSessionContext : NSObject <Swift>

{
    AKAppleIDSession *_appleIDSession;
    struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    _Bool _requiresSigning;
    AAAbsintheSigner *_absintheSigner;
    AAAttestationSigner *_attestationSigner;
    AARemoteServer *_remoteServer;
}

@property (retain, nonatomic) AAAbsintheSigner *absintheSigner;
@property (retain, nonatomic) AAAttestationSigner *attestationSigner;
@property (retain, nonatomic) AARemoteServer *remoteServer;
@property (nonatomic, readonly) _Bool requiresSigning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_relevantHTTPStatusCodes;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relevantHTTPStatusCodes;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initRequiringSigning:(_Bool)arg1;
- (id)_initRequiringSigning:(_Bool)arg1 appleIDSession:(id)arg2;
- (void)_additionalAbsintheHeadersForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_additionalAttestationHeadersForData:(id)arg1 withValidity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_additionalHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
