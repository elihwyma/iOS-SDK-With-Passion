/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFMyriadCoordinator, AFPreferences, AFSiriTether, AFWatchdogTimer, NSMutableDictionary, NSMutableSet, NSString, NSTimer, SASBulletinManager, SASHeater, SASLockStateMonitor, SASMyriadController, SASRemoteRequestManager, SASSystemState, SASTestingInputController;

@protocol OS_dispatch_queue;

@interface SiriActivationService : NSObject

{
    CDUnknownBlockType _buttonTrigger;
    NSString *_preheatedPresentation;
    int _voiceTriggerNotifyToken;
    AFMyriadCoordinator *_myriad;
    NSObject<OS_dispatch_queue> *_voiceTriggerDispatchQueue;
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    NSTimer *_B188ActivationTimer;
    SASMyriadController *_myriadController;
    _Bool _xcTestingActive;
    _Bool _siriTetherIsAttached;
    _Bool _voiceTriggerNotifyTokenIsValid;
    _Bool _buttonDownHasOccurredSinceActivation;
    _Bool _canActivateFromDirectActionSource;
    _Bool _pocketStateFetchingInProgressForHeadsetActivation;
    SASSystemState *_systemState;
    AFPreferences *_afPreferences;
    SASLockStateMonitor *_lockStateMonitor;
    NSMutableDictionary *_presentations;
    NSMutableSet *_activePresentations;
    NSMutableDictionary *_preparingPresentations;
    long long _requestState;
    NSMutableDictionary *_sources;
    SASHeater *_heater;
    AFSiriTether *_siriTether;
    double _preparationTimestamp;
    double _activationTimestamp;
    SASBulletinManager *_bulletinManager;
    SASRemoteRequestManager *_remoteRequestManager;
    SASTestingInputController *_testingInputController;
    AFWatchdogTimer *_activationTimer;
    AFWatchdogTimer *_dismissalTimer;
    NSMutableDictionary *_avExternalButtonEvents;
}

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) AFPreferences *afPreferences;
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor;
@property (nonatomic) _Bool xcTestingActive;
@property (retain, nonatomic) NSMutableDictionary *presentations;
@property (retain, nonatomic) NSMutableSet *activePresentations;
@property (retain, nonatomic) NSMutableDictionary *preparingPresentations;
@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableDictionary *sources;
@property (retain, nonatomic) SASHeater *heater;
@property (retain, nonatomic) AFSiriTether *siriTether;
@property (nonatomic) _Bool siriTetherIsAttached;
@property (nonatomic) double preparationTimestamp;
@property (nonatomic) double activationTimestamp;
@property (nonatomic) _Bool voiceTriggerNotifyTokenIsValid;
@property (retain, nonatomic) SASBulletinManager *bulletinManager;
@property (retain, nonatomic) SASRemoteRequestManager *remoteRequestManager;
@property (retain, nonatomic) SASTestingInputController *testingInputController;
@property (retain, nonatomic) AFWatchdogTimer *activationTimer;
@property (retain, nonatomic) AFWatchdogTimer *dismissalTimer;
@property (retain, nonatomic) NSMutableDictionary *avExternalButtonEvents;
@property (nonatomic) _Bool buttonDownHasOccurredSinceActivation;
@property (nonatomic) _Bool canActivateFromDirectActionSource;
@property (nonatomic, getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:) _Bool pocketStateFetchingInProgressForHeadsetActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)service;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)shouldContinue:(id)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (id)bulletinForIdentifier:(id)arg1;
- (void)callStateChangedToIsActive:(_Bool)arg1 isOutgoing:(_Bool)arg2;
- (void)_dismissSiri:(id)arg1;
- (_Bool)_siriIsEnabled;
- (id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3;
- (_Bool)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3;
- (unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2;
- (void)heaterSuggestsDefrosting:(id)arg1;
- (void)heaterSuggestsPreheating:(id)arg1;
- (void)unregisterSiriPresentationIdentifier:(long long)arg1;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (void)siriPresentationWillDismissWithIdentifier:(long long)arg1;
- (void)siriPresentationDismissedWithIdentifier:(long long)arg1;
- (void)siriPresentationDisplayedWithIdentifier:(long long)arg1;
- (void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2;
- (void)speechRequestStateDidChange:(long long)arg1;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(_Bool)arg2;
- (void)_registerForVoiceTrigger;
- (_Bool)_shouldRejectNewActivations:(long long)arg1;
- (void)_notifySourcesOfActiveChange:(_Bool)arg1;
- (void)_updateCanActivateFromDirectActionSource;
- (void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(_Bool)arg1;
- (void)stopActivationWatchdogTimerIfNeeded;
- (void)stopDismissalWatchdogTimerIfNeeded;
- (_Bool)presentationsAreIdleAndQuiet;
- (_Bool)handleActivationRequest:(id)arg1;
- (void)dismissSiriWithOptions:(id)arg1;
- (_Bool)isConnectedTo188;
- (void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)_cancelTTS;
- (void)_performOrEnqueueButtonAction:(CDUnknownBlockType)arg1;
- (void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2;
- (void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2;
- (void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1;
- (void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (_Bool)_buttonIsAVExternalButton:(long long)arg1;
- (void)buttonTapFromButtonIdentifier:(long long)arg1;
- (void)_handleDesignModeRequest;
- (_Bool)handleActivationRequest:(id)arg1 systemState:(id)arg2;
- (void)_cancelActivationPreparationIfNecessary;
- (void)_cancelActivationPreparationForSetup;
- (void)_activatePresentation:(id)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3;
- (void)_handlePocketStateFetchForScreenWakeForPresentationServer:(id)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3;
- (void)startActivationWatchdogTimerForPresentationServer:(id)arg1;
- (void)startDismissalWatchdogTimer;
- (_Bool)_isInitialRequest;
- (void)_attachToTether;
- (void)_preheatPresentation;
- (void)activationRequestFromVoiceTrigger;
- (void)_watchdogQueue_startActivationWatchdogTimerForPresentationServer:(id)arg1;
- (void)_watchdogQueue_stopActivationWatchdogTimerIfNeeded;
- (void)_watchdogQueue_startDismissalWatchdogTimer;
- (void)_watchdogQueue_stopDismissalWatchdogTimerIfNeeded;
- (void)didChangeLockState:(unsigned long long)arg1;
- (void)bulletinManagerDidChangeBulletins:(id)arg1;
- (void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2;
- (void)unregisterActivationSourceIdentifier:(id)arg1;
- (void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2;
- (void)cancelPrewarmFromButtonIdentifier:(long long)arg1;
- (void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (void)buttonUpFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)activationRequestFromVoiceTriggerWithContext:(id)arg1;
- (void)activationRequestFromBreadcrumb;
- (void)activationRequestFromSimpleActivation:(long long)arg1;
- (void)activationRequestFromSpotlightWithContext:(id)arg1;
- (void)activationRequestFromTestingWithContext:(id)arg1;
- (oneway void)activationRequestFromTestRunnerWithContext:(id)arg1;
- (void)_unregisterForVoiceTrigger;

@end
