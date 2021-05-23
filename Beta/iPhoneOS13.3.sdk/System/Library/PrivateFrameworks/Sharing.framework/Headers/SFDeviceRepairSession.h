/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, TROperationQueue, TRSession, UIViewController;

@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    int _pairVerifyState;
    int _getProblemsState;
    unsigned long long _problemFlags;
    _Bool _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    int _finishState;
    unsigned int _repairFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_idsIdentifier;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    unsigned long long _triggerMs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic, readonly) NSString *idsIdentifier;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_reportError:(id)arg1;
- (int)_runFinish;
- (int)_runSFSessionStart;
- (int)_runPreflightWiFiEarly;
- (int)_runPairVerify;
- (int)_runGetProblems;
- (int)_runPreflightWiFiFull;
- (int)_runWiFiSetup;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (int)_runCDPSetup;
- (int)_runHomeKitSetup;

@end
