/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPDPCSController, CDPDSecureBackupController, NSString;

@protocol CDPAuthProviderInternal, CDPDAuthProviderInternal, CDPDCircleProxy, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDRecoveryKeyController : NSObject

{
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPDCircleProxy> _circleProxy;
    id <CDPDSecureBackupProxy> _sbProxy;
    id <CDPAuthProviderInternal> _recoveryAuthProvider;
    id <CDPDAuthProviderInternal> _internalAuthProvider;
}

@property (retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id <CDPDCircleProxy> circleProxy;
@property (retain, nonatomic) id <CDPDSecureBackupProxy> sbProxy;
@property (retain, nonatomic) id <CDPAuthProviderInternal> recoveryAuthProvider;
@property (retain, nonatomic) id <CDPDAuthProviderInternal> internalAuthProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (void)generateRandomRecoveryKey:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 pcsProxy:(id)arg6;
- (void)enableBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recoverState:(CDUnknownBlockType)arg1;
- (void)recoverAndSynchronizeStateWithServer:(CDUnknownBlockType)arg1;
- (void)recoverDataUsingMasterKeyWithCompletion:(CDUnknownBlockType)arg1;

@end
