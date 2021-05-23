/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioProvider, CSAudioStream, CSOSTransaction, CSPolicy, CSStateMachine, CSVoiceTriggerAlwaysOnProcessor, CSVoiceTriggerSecondPass, NSDictionary, NSMutableArray, NSString;

@protocol CSVoiceTriggerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CSBuiltInVoiceTrigger : NSObject

{
    _Bool _voiceTriggerEnabled;
    _Bool _hasTriggerPending;
    _Bool _isSecondPassRunning;
    _Bool _isSiriClientListening;
    _Bool _isListenPollingStarting;
    _Bool _isPhraseSpotterBypassed;
    _Bool _shouldDisableOnSpeakerVerificationInSplitterMode;
    float _firstPassThreshold;
    float _bestScore;
    float _masterChannelScoreBoost;
    id <CSVoiceTriggerDelegate> _delegate;
    CSPolicy *_voiceTriggerStartPolicy;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
    unsigned long long _bestChannel;
    NSDictionary *_onsetResult;
    unsigned long long _onsetChannel;
    unsigned long long _channelSelectionDelay;
    unsigned long long _delayInSamplesRequiredForChannelSelection;
    NSDictionary *_channelSelectionScores;
    unsigned long long _processingChunkSamples;
    unsigned long long _processingChannelsBitset;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    CSAudioProvider *_audioProvider;
    NSMutableArray *_audioStreamHoldings;
    CSOSTransaction *_secondPassTransaction;
    CSPolicy *_voiceTriggerAOPModeStartPolicy;
    CSStateMachine *_stateMachine;
    CSVoiceTriggerAlwaysOnProcessor *_alwaysOnProcessorController;
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;
    unsigned long long _secondChanceHotTillMachTime;
    unsigned long long _currentSplitterState;
    NSString *_name;
}

@property (retain, nonatomic) CSPolicy *voiceTriggerStartPolicy;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) _Bool voiceTriggerEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI;
@property (nonatomic) _Bool hasTriggerPending;
@property (nonatomic) float firstPassThreshold;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long bestChannel;
@property (retain, nonatomic) NSDictionary *onsetResult;
@property (nonatomic) unsigned long long onsetChannel;
@property (nonatomic) unsigned long long channelSelectionDelay;
@property (nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;
@property (nonatomic) float masterChannelScoreBoost;
@property (retain, nonatomic) NSDictionary *channelSelectionScores;
@property (nonatomic) unsigned long long processingChunkSamples;
@property (nonatomic) unsigned long long processingChannelsBitset;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) _Bool isSecondPassRunning;
@property (nonatomic) _Bool isSiriClientListening;
@property (nonatomic) _Bool isListenPollingStarting;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings;
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction;
@property (nonatomic) _Bool isPhraseSpotterBypassed;
@property (retain, nonatomic) CSPolicy *voiceTriggerAOPModeStartPolicy;
@property (retain, nonatomic) CSStateMachine *stateMachine;
@property (retain, nonatomic) CSVoiceTriggerAlwaysOnProcessor *alwaysOnProcessorController;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (nonatomic) unsigned long long currentSplitterState;
@property (nonatomic) _Bool shouldDisableOnSpeakerVerificationInSplitterMode;
@property (retain, nonatomic) NSString *name;
@property (weak, nonatomic) id <CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)reset;
- (void)_reset;
- (unsigned long long)_currentState;
- (void)setAsset:(id)arg1;
- (void)_stopListening;
- (void)_setAsset:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)_setupStateMachine;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(_Bool)arg2;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;
- (_Bool)_shouldSecondPassKeepAlive;
- (void)_transitVoiceTriggerStatus:(_Bool)arg1;
- (void)_stopAOPVoiceTrigger;
- (void)_transitAOPMode:(_Bool)arg1;
- (void)_updateCurrentSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg2;
- (_Bool)_shouldEnableAOPVoiceTrigger;
- (void)_startAOPVoiceTrigger;
- (id)_stateName:(unsigned long long)arg1;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)_stopAPVoiceTrigger;
- (void)_startVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_teardownSecondPassIfNeeded;
- (_Bool)_shouldEnableAPVoiceTrigger;
- (void)_startAPVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportVoiceTriggerFirstPassFireFromAP;
- (void)_addAudioStreamHold:(id)arg1;
- (void)_handleVoiceTriggerSecondPassWithSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4;
- (void)_createSecondPassIfNeededWithFirstPassSource:(unsigned long long)arg1;
- (void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(_Bool)arg4 error:(id)arg5;
- (void)_cancelLastAudioStreamHold;
- (void)_cancelAllAudioStreamHold;
- (_Bool)_isBuiltInAOPVoiceTriggerEvent:(id)arg1;
- (_Bool)_shouldHandleAOPVoiceTrigger;
- (_Bool)_isVoiceTriggerStateTransitionEvent:(id)arg1;
- (id)_eventName:(unsigned long long)arg1;

@end
