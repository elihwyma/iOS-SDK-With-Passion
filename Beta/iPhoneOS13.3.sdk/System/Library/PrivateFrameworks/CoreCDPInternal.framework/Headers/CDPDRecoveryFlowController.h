/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

#import <CoreCDPInternal/Swift-Protocol.h>

@class CDPDCircleController, CDPDRecoveryFlowContext, CDPDSecureBackupController, NSString;

@protocol CDPRemoteDeviceSecretValidatorProtocol, CDPStateUIProviderInternal;

@interface CDPDRecoveryFlowController : NSObject <Swift>

{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;
    CDPDRecoveryFlowContext *_recoveryContext;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    id <CDPStateUIProviderInternal> _uiProvider;
}

@property (retain, nonatomic) CDPDRecoveryFlowContext *recoveryContext;
@property (retain, nonatomic) CDPDCircleController *circleController;
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id <CDPRemoteDeviceSecretValidatorProtocol> validator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(_Bool)arg2 usingValidator:(id)arg3;
- (void)retrieveInflatedDevices:(CDUnknownBlockType)arg1;
- (void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 secureBackupController:(id)arg3 circleProxy:(id)arg4;
- (void)beginRecovery:(CDUnknownBlockType)arg1;

@end
