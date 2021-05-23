/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class AFAnalyticsTurnBasedInstrumentationContext, AFConnection, AFSettingsConnection, AFSpeechSynthesisRecord, AFUISiriSessionInfo, AFUISpeechSynthesis, AFUIStateMachine, NSArray, NSMutableSet, NSString, SCTAgentConnection;

@protocol AFUISiriSessionDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AFUISiriSession : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _currentRequestDidPresent;
    AFUIStateMachine *_stateMachine;
    AFUISpeechSynthesis *_speechSynthesis;
    AFSpeechSynthesisRecord *_lastSpeechSynthesisRecord;
    NSMutableSet *_speechRequestGroupGraveyard;
    AFConnection *_connection;
    CDUnknownBlockType _continuePendingRequest;
    _Bool _sendContextBeforeContinuingSpeechRequest;
    AFSettingsConnection *_settingsConnection;
    _Bool _isDeviceInStarkMode;
    SCTAgentConnection *_testingConnection;
    _Bool _eyesFree;
    _Bool _isProcessingAcousticIdRequest;
    id <AFUISiriSessionDelegate> _delegate;
    id <AFUISiriSessionLocalDataSource> _localDataSource;
    id <AFUISiriSessionLocalDelegate> _localDelegate;
    AFUISiriSessionInfo *_siriSessionInfo;
    NSArray *_sessionDelegateContext;
    NSArray *_directActionContext;
    NSObject<OS_dispatch_group> *_currentSpeechRequestGroup;
    AFAnalyticsTurnBasedInstrumentationContext *_instrumentationTurnContext;
}

@property (retain, nonatomic) NSArray *sessionDelegateContext;
@property (retain, nonatomic) NSArray *directActionContext;
@property (nonatomic, readonly, getter=_connection) AFConnection *connection;
@property (retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup;
@property (retain, nonatomic, getter=_instrumentationTurnContext, setter=_setInstrumentationTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext;
@property (retain, nonatomic) id <AFUISiriSessionDelegate> delegate;
@property (weak, nonatomic) id <AFUISiriSessionLocalDataSource> localDataSource;
@property (weak, nonatomic) id <AFUISiriSessionLocalDelegate> localDelegate;
@property (nonatomic, getter=isEyesFree) _Bool eyesFree;
@property (nonatomic, readonly) _Bool isProcessingAcousticIdRequest;
@property (retain, nonatomic) AFUISiriSessionInfo *siriSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)availabilityState;
+ (void)beginMonitoringSiriAvailability;
+ (id)effectiveCoreLocationBundle;

- (void)dealloc;
- (long long)_state;
- (void)end;
- (void)setLockState:(unsigned long long)arg1;
- (id)_stateMachine;
- (void)preheat;
- (void)_localAuthenticationUIPresented;
- (_Bool)isListening;
- (void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnection:(id)arg1 shouldSpeak:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
- (void)assistantConnectionDidDetectMusic:(id)arg1;
- (void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
- (void)assistantConnection:(id)arg1 extensionRequestWillStartForApplication:(id)arg2;
- (void)assistantConnection:(id)arg1 extensionRequestFinishedForApplication:(id)arg2 error:(id)arg3;
- (void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1;
- (void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2 intent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 audioSessionID:(unsigned int)arg3;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
- (void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)rollbackClearContext;
- (void)clearContext;
- (void)telephonyRequestCompleted;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionInactive;
- (void)setCarDNDActive:(_Bool)arg1;
- (void)recordUIMetrics:(id)arg1;
- (void)sendReplyCommand:(id)arg1;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (_Bool)_hasActiveRequest;
- (void)setAlertContext;
- (void)setApplicationContext;
- (void)setDeviceInStarkMode:(_Bool)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (id)underlyingConnection;
- (void)resetContextTypes:(long long)arg1;
- (void)_requestWillStart;
- (void)forceAudioSessionActiveForReason:(long long)arg1;
- (void)startRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateRequestOptions:(id)arg1;
- (void)endForReason:(long long)arg1;
- (void)stopRecordingSpeech;
- (void)cancelSpeechRequest;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)performAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)performAceCommand:(id)arg1;
- (void)siriUIDidPresentDynamicSnippetWithInfo:(id)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDidPresentViewForUICommand:(id)arg1;
- (void)requestDidPresentViewForErrorCommand:(id)arg1;
- (void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2;
- (void)recordMetricsContext:(id)arg1 forDisambiguatedAppWIthBundleIdentifier:(id)arg2;
- (void)audioRoutePickerWillShow;
- (void)audioRoutePickerWillDismiss;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)_siriNetworkAvailabilityDidChange:(id)arg1;
- (void)_performBlockWithDelegate:(CDUnknownBlockType)arg1;
- (int)_mapInvocationSource:(long long)arg1;
- (void)_updateActiveAccount:(id)arg1 withNumberOfActiveAccounts:(unsigned long long)arg2;
- (void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startSpeechRequestWithSpeechRequestOptions:(id)arg1 isInitialBringUp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startContinuityRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_discardCurrentSpeechGroup;
- (void)_startRequestWithFinalOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (CDUnknownBlockType)safeWrapResponseCompletion:(CDUnknownBlockType)arg1;
- (id)_setRefIdForAllViewsInAddViews:(id)arg1;
- (void)_handleUnlockDeviceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRequestUpdateViewsCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPunchoutCommand:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransitionForEvent:(long long)arg1;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)_updateAssistantVersion:(id)arg1;
- (id)speechSynthesis;
- (void)_continuePendingSpeechRequest;
- (void)_requestContextWithCompletion:(CDUnknownBlockType)arg1;
- (float)recordingPowerLevel;
- (void)setApplicationContextForDirectAction:(_Bool)arg1;
- (void)_startRequestWithBlock:(CDUnknownBlockType)arg1;
- (void)performAceCommands:(id)arg1;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_updateActiveAccount:(id)arg1;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
- (void)speechSynthesis:(id)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)speechSynthesisConnectionIsRecording:(id)arg1;
- (void)speechSynthesisDidFinish:(id)arg1;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;
- (void)assistantConnection:(id)arg1 didLoadAssistant:(id)arg2;
- (_Bool)isPreventingActivationGesture;
- (void)_applePaySheetPresented;
- (void)settingsConnectionDidChangeActiveAccount:(id)arg1;

@end
