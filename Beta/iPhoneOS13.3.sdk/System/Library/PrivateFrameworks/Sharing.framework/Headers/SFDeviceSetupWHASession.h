/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSet, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFSession, TROperationQueue, TRSession, UIViewController;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHASession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    _Bool _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned long long _peerFeatureFlags;
    unsigned long long _peerProblemsFlags;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    _Bool _trSetupConfigurationEnabled;
    int _trSetupConfigurationState;
    NSSet *_trUnauthServices;
    _Bool _trAuthenticationEnabled;
    int _trAuthenticationState;
    _Bool _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetup;
    int _homeKitState;
    _Bool _homeKitDoFullSetup;
    int _finishState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (int)_runFinish;
- (int)_runSFSessionStart;
- (int)_runPairVerify;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (int)_runCDPSetup;
- (int)_runHomeKitSetup;
- (int)_runPairSetup;
- (int)_runTRSetupConfiguration;
- (_Bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;

@end
