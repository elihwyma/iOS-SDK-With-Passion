/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFAppleIDClient : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_syncXPCCnx;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_xpcAuthCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)ensureSyncXPCStarted;
- (id)syncRemoteProxyWithError:(id *)arg1;
- (void)_myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureAuthXPCStarted;
- (void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1 error:(id *)arg2;
- (id)myAccountWithError:(id *)arg1;

@end
