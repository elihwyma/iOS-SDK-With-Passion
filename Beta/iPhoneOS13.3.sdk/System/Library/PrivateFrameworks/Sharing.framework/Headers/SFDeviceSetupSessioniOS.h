/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class BYDeviceSetupSourceSession, CDPContext, CDPStateController, CoreTelephonyClient, NSData, NSString, RPFileTransferSession, SFDevice, SFDeviceDiscovery, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupSessioniOS : NSObject

{
    _Bool _activateCalled;
    unsigned int _appNextID;
    _Bool _buddyComplete;
    BYDeviceSetupSourceSession *_buddySession;
    _Bool _buddyConfigured;
    _Bool _configRequestSent;
    _Bool _configResponseReceived;
    _Bool _invalidateCalled;
    _Bool _pairSetupDone;
    _Bool _pairSetupReset;
    _Bool _pairSetupRunning;
    int _preAuthPairSetupState;
    _Bool _preAuthRequestSent;
    _Bool _preAuthResponseReceived;
    NSData *_resumeAuthTag;
    SFDeviceDiscovery *_resumeDiscovery;
    NSString *_resumePassword;
    int _resumeState;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    CoreTelephonyClient *_eSIMClient;
    _Bool _eSIMSetupEnabled;
    int _eSIMSetupState;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    unsigned int _pairFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RPFileTransferSession *_fileTransferSessionTemplate;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _receivedObjectHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) unsigned int pairFlags;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedObjectHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)tryPIN:(id)arg1;
- (void)_completedWithError:(id)arg1;
- (void)_runSFSessionStart;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (int)_runPreAuthPairSetup;
- (void)_sendPreAuthInfo;
- (int)_runESIMSetup;
- (int)_runCoreCDPSetup;
- (void)_sendConfigInfo;
- (int)_runResume;
- (void)_startBuddySession;
- (void)_runSFSessionActivated;
- (void)_handleBuddyProgress:(id)arg1;
- (void)_handleSetupActionSoftwareUpdate;
- (void)_handleSetupPeerSuspended;
- (void)_handleSetupResumeFoundDevice:(id)arg1;
- (void)_receivedConfigResponse:(id)arg1;
- (void)sendAppEvent:(id)arg1;

@end
