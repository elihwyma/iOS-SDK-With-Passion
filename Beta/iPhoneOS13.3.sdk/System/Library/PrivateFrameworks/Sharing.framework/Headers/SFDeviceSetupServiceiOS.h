/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSUUID, RPFileTransferSession, SFClient, SFService, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupServiceiOS : NSObject

{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSUUID *_peer;
    _Bool _pinShowing;
    SFClient *_preventExitForLocaleClient;
    NSData *_resumeAuthTag;
    NSString *_resumePassword;
    int _resumeState;
    SFService *_sfService;
    _Bool _sfServiceActivated;
    SFSession *_sfSession;
    _Bool _suspendPending;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RPFileTransferSession *_fileTransferSessionTemplate;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _progressHandlerEx;
    CDUnknownBlockType _receivedObjectHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) RPFileTransferSession *fileTransferSessionTemplate;
@property (copy, nonatomic) CDUnknownBlockType showPINHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType showPINHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;
@property (copy, nonatomic) CDUnknownBlockType progressHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType receivedObjectHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)_invalidated;
- (void)activate;
- (void)_run;
- (void)_completed:(int)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (int)_runResumeIfNeeded;
- (void)_handleSessionSecured:(id)arg1;
- (void)_handleConfigRequestReceived:(id)arg1;
- (void)_handleAppEventReceived:(id)arg1;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)sendObject:(id)arg1;
- (void)_handleSetupActionSuspend;
- (void)_handleSetupActionResume;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
