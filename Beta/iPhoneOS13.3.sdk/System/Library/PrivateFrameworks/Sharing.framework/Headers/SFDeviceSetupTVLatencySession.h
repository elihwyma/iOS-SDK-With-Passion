/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFDevice, SFSession, TVLAudioLatencyEstimator;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVLatencySession : NSObject

{
    _Bool _activateCalled;
    int _finishState;
    _Bool _invalidateCalled;
    int _pairSetupState;
    int _pairVerifyState;
    _Bool _sessionSecured;
    unsigned long long _startTicks;
    SFSession *_sfSession;
    int _sfSessionState;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    int _tvLatencySetupState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForPINHandler;
    unsigned long long _triggerMs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (nonatomic) unsigned long long triggerMs;

- (id)init;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (int)_runFinish;
- (int)_runSFSessionStart;
- (int)_runPairSetup;
- (int)_runTVLatencySetup;
- (void)_runTVLatencySetupRequest;
- (void)_runTVLatencySetupEstimate;
- (void)_runTVLatencySetupProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_runSFSessionActivated;
- (int)_runPairVerify:(_Bool)arg1;
- (void)tryAgain;

@end
