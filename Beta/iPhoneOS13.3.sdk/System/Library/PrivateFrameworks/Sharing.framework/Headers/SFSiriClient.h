/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, SFSiriRequest, SVXClientServiceManager, SVXDeviceSetupContext, SVXDeviceSetupFlowScene, VSSpeechSynthesizer;

@protocol OS_dispatch_queue, OS_dispatch_source, SVXClientDeviceServicing;

@interface SFSiriClient : NSObject

{
    _Bool _invalidateCalled;
    unsigned int _invalidateFlags;
    SFSiriRequest *_currentRequest;
    NSObject<OS_dispatch_source> *_currentTimer;
    NSString *_languageCode;
    struct NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    SVXDeviceSetupContext *_siriDeviceSetupContext;
    SVXClientServiceManager *_siriDeviceSetupManager;
    id <SVXClientDeviceServicing> _siriDeviceSetupService;
    SVXDeviceSetupFlowScene *_deviceSetupSceneIntro;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogA;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogB;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogC;
    SVXDeviceSetupFlowScene *_deviceSetupSceneOutro;
    SVXClientServiceManager *_siriServiceManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _siriDialogHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType siriDialogHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)stopSpeaking;
- (void)_processQueuedRequests;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError2:(id)arg4;
- (void)deviceSetupEnd;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSetupBegin:(unsigned long long)arg1;
- (void)deviceSetupPrepareGreeting:(CDUnknownBlockType)arg1;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_deviceSetupEnd;
- (void)_speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_speakText:(id)arg1 languageCode:(id)arg2 flags:(unsigned int)arg3 rate:(double)arg4 delay:(double)arg5 startHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_deviceSetupPrepareGreetingFlow:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deviceSetupSaveIntroTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogATimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogBTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogCTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupPlayGreetingID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)startDelayedRequest:(id)arg1;
- (void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
- (void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3;

@end
