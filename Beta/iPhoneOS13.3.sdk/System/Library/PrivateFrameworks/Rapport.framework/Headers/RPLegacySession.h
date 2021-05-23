/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUMobileDeviceSession, NSMutableArray, NSString, RPDevice;

@protocol OS_dispatch_queue;

@interface RPLegacySession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableArray *_messageSendQueue;
    _Bool _messagingReady;
    int _pairVerifyState;
    _Bool _secureReady;
    _Bool _mdEnabled;
    CUMobileDeviceSession *_mdSession;
    int _mdState;
    unsigned int _securityFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    RPDevice *_peerDevice;
    NSString *_serviceType;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _promptForPINHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) RPDevice *peerDevice;
@property (nonatomic) unsigned int securityFlags;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (void)_invalidated;
- (void)_sendMessage:(id)arg1;
- (void)_run;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairSetupTryPIN:(id)arg1;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unpairWithCompletion:(CDUnknownBlockType)arg1;
- (int)_runPairVerify;
- (void)requestSystemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (int)_runMobileDeviceStart;
- (void)_sendQueuedMessages;

@end
