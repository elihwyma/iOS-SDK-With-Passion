/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBProcess.h>

@class BKSProcessAssertion, FBProcessWatchdog, FBProcessWatchdogEventContext, FBSProcessExecutionProvision, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSMutableArray, RBSAssertion;

@interface FBApplicationProcess : FBProcess

{
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_terminationWatchdogContext;
    long long _terminationReason;
    NSMutableArray *_queue_terminateRequestCompletionBlocks;
    long long _watchdogReportType;
    FBProcessWatchdog *_watchdog;
    FBSProcessWatchdogPolicy *_sceneCreateWatchdogPolicy;
    FBSProcessExecutionProvision *_latestViolatedProvision;
    unsigned long long _htAppIdentifier;
    unsigned long long _launchToken;
    RBSAssertion *_gracefulKillAssertion;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    _Bool _recordingAudio;
    _Bool _nowPlayingWithAudio;
    _Bool _connectedToExternalAccessory;
}

@property (nonatomic, getter=isRecordingAudio) _Bool recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) _Bool nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory;
@property (nonatomic, readonly) double elapsedCPUTime;

- (void)invalidate;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (id)_watchdogProvider;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3;
- (_Bool)isApplicationProcess;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_dropAssertions;
- (id)_queue_createBootstrapContext;
- (void)_queue_noteLaunchWillComplete;
- (void)_queue_noteLaunchDidComplete:(_Bool)arg1;
- (void)_queue_noteProcessDidExit:(id)arg1;
- (_Bool)_wantsStateUpdates;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_queue_activationInfoForEvent:(int)arg1 withToken:(unsigned long long)arg2;
- (void)_queue_killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_cancelWatchdogTimer;
- (void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(_Bool)arg1;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_startWatchdogTimerForContext:(id)arg1;
- (id)_queue_composeContextWithValue:(id)arg1 key:(id)arg2;
- (id)_queue_crashReportThermalsInfo;
- (void)_queue_executeKillForRequest:(id)arg1;
- (void)_queue_doGracefulKillWithDeliveryConfirmation:(CDUnknownBlockType)arg1;
- (long long)_exceptionCodeForKillReason:(int)arg1;
- (void)_queue_terminateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_queue_shouldWatchdogWithDeclineReason:(id *)arg1;
- (long long)_watchdogReportType;
- (void)killForReason:(long long)arg1 andReport:(_Bool)arg2 withDescription:(id)arg3;

@end
