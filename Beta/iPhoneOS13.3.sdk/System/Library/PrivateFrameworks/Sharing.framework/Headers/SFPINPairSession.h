/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, SFDevice, SFService, SFSession;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFPINPairSession : NSObject

{
    _Bool _activateCalled;
    _Bool _clientStarted;
    NSData *_clientSessionUUID;
    _Bool _invalidateCalled;
    unsigned long long _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    _Bool _heartbeatSending;
    _Bool _pairSetupDone;
    struct PairingSessionPrivate *_pairSetupSession;
    _Bool _pairSetupWaitingForUser;
    _Bool _pairVerifyDone;
    struct PairingSessionPrivate *_pairVerifySession;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    unsigned long long _startTicks;
    NSObject<OS_os_transaction> *_transaction;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    SFService *_sfService;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) SFService *sfService;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_completed:(int)arg1;
- (void)_hearbeatTimer;
- (void)_clientRun;
- (void)_clientHeartbeatSend;
- (void)_clientSFSessionStart;
- (void)_clientPairVerify:(id)arg1 start:(_Bool)arg2;
- (void)_clientPairSetup:(id)arg1 start:(_Bool)arg2;
- (void)_clientTryPIN:(id)arg1;
- (void)_handleServerRequest:(id)arg1;
- (void)handleServerHeartbeat:(id)arg1;
- (void)handleServerPairVerify:(id)arg1 reset:(_Bool)arg2;
- (void)handleServerPairSetup:(id)arg1 reset:(_Bool)arg2;
- (void)clientTryPIN:(id)arg1;
- (void)handleServerRequest:(id)arg1;

@end
