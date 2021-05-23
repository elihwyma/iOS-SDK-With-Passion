/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSet, NSString, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFSession, TROperationQueue, TRSession, TVLAudioLatencyEstimator, UIViewController;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVSession : NSObject

{
    _Bool _activateCalled;
    int _finishState;
    _Bool _invalidateCalled;
    int _proxSetupActiveToken;
    _Bool _useSFSession;
    int _preflightWiFiState;
    int _preflightiTunesState;
    int _preflightHomeKitState;
    NSString *_iTunesUserID;
    SFSession *_sfSession;
    int _sfSessionState;
    int _preAuthState;
    int _basicConfigState;
    _Bool _iCloudAccountMatches;
    int _pairSetupState;
    double _pairSetupSecs;
    _Bool _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    _Bool _homeiCloudEnabled;
    _Bool _homeKitDoKeyExchange;
    _Bool _homeKitDoFullSetup;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    double _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    unsigned long long _trSetupConfigurationStartTicks;
    double _trSetupConfigurationSecs;
    _Bool _trNeedsNetwork;
    NSSet *_trUnauthServices;
    int _trNetworkState;
    unsigned long long _trNetworkStartTicks;
    double _wifiSetupSecs;
    int _trActivationState;
    unsigned long long _trActivationStartTicks;
    double _trActivationSecs;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    _Bool _tvLatencyEnabled;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    int _tvLatencySetupState;
    int _trCompletionState;
    unsigned long long _trCompletionStartTicks;
    double _trCompletionSecs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    unsigned long long _peerFeatureFlags;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForHomeiCloudHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeiCloudHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)pairSetupTryPIN:(id)arg1;
- (int)_runSFSessionStart;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (int)_runCDPSetup;
- (int)_runHomeKitSetup;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;
- (int)_runFinish:(_Bool)arg1;
- (int)_runPreflightWiFi;
- (int)_runPreflightiTunes;
- (int)_runPreflightHomeKit;
- (int)_runPreAuth;
- (int)_runPairSetup;
- (int)_runHomeKitUserInput;
- (int)_runBasicConfig;
- (int)_runTRSetupConfiguration;
- (int)_runTRNetwork;
- (int)_runTRActivation;
- (int)_runTVLatencySetup;
- (int)_runTRCompletion;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)_homeKitUpdateiCloudSwitchState:(_Bool)arg1;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigRequest;
- (void)_runBasicConfigResponse:(id)arg1 error:(id)arg2;
- (_Bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)_runTVLatencySetupRequest;
- (void)_runTVLatencySetupEstimate;
- (void)_runTVLatencySetupProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_runTVLatencySetupEnded:(int)arg1;
- (void)homeiCloudEnable;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;

@end
