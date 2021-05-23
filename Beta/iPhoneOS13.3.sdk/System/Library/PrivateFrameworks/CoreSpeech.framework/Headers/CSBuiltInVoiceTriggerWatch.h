/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioProvider, CSAudioStream, CSKeywordAnalyzerNDAPI, CSOSTransaction, CSPolicy, NSDictionary, NSMutableArray, NSString;

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSBuiltInVoiceTriggerWatch : NSObject

{
    _Bool _listeningEnabled;
    _Bool _voiceTriggerEnabled;
    _Bool _isSecondChanceHot;
    _Bool _isSiriClientListening;
    _Bool _hasTriggerPending;
    _Bool _hasPendingNearMiss;
    _Bool _isListenPollingStarting;
    _Bool _earlyDetected;
    _Bool _isStartSampleCountMarked;
    _Bool _isPhraseSpotterBypassed;
    _Bool _isExternalPhraseSpotterRunning;
    float _keywordThreshold;
    float _keywordLoggingThreshold;
    float _lastScore;
    float _keywordThresholdSecondChance;
    float _effectiveKeywordThreshold;
    id <CSVoiceTriggerDelegate> _delegate;
    CSPolicy *_listeningStartPolicy;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
    unsigned long long _secondChanceHotTillMachTime;
    CSAudioProvider *_audioProvider;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzerNDAPI;
    unsigned long long _numProcessedSamples;
    unsigned long long _nearMissDelayTimeout;
    unsigned long long _nearMissCandidateDetectedSamples;
    NSDictionary *_lastAnalyzerResult;
    unsigned long long _earlyDetectFiredMachTime;
    unsigned long long _analyzerStartSampleCount;
    NSString *_audioProviderUUID;
    CSOSTransaction *_osTransaction;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
    unsigned long long _wakeGestureHostTime;
}

@property (retain, nonatomic) CSPolicy *listeningStartPolicy;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) _Bool listeningEnabled;
@property (nonatomic) _Bool voiceTriggerEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) float keywordLoggingThreshold;
@property (nonatomic) float lastScore;
@property (nonatomic) float keywordThresholdSecondChance;
@property (nonatomic) float effectiveKeywordThreshold;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (nonatomic) _Bool isSecondChanceHot;
@property (nonatomic) _Bool isSiriClientListening;
@property (nonatomic) _Bool hasTriggerPending;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) _Bool hasPendingNearMiss;
@property (nonatomic) _Bool isListenPollingStarting;
@property (retain, nonatomic) NSDictionary *lastAnalyzerResult;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic) _Bool earlyDetected;
@property (nonatomic) _Bool isStartSampleCountMarked;
@property (nonatomic) unsigned long long analyzerStartSampleCount;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (nonatomic) _Bool isPhraseSpotterBypassed;
@property (nonatomic) _Bool isExternalPhraseSpotterRunning;
@property (retain, nonatomic) CSOSTransaction *osTransaction;
@property (nonatomic) double lastAggTime;
@property (nonatomic) double cumulativeUptime;
@property (nonatomic) double cumulativeDowntime;
@property (nonatomic) unsigned long long wakeGestureHostTime;
@property (weak, nonatomic) id <CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_stopListening;
- (void)_setAsset:(id)arg1;
- (void)gestureMonitorDidReceiveWakeGesture:(id)arg1;
- (void)gestureMonitorDidReceiveSleepGesture:(id)arg1;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(_Bool)arg2;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;
- (void)_didStopAudioStream;
- (void)handleListenStartPolicyChange:(_Bool)arg1;
- (void)_transitListeningStatus:(_Bool)arg1;
- (void)_receivedHearstConnectionEvent:(_Bool)arg1;
- (void)_resetVoiceTrigger;
- (void)_adjustWakeGestureHostTimeIfNeeded;
- (void)_startRaiseToSpeakVAD;
- (void)_startListeningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startRaiseToSpeak;
- (void)_stopRaiseToSpeak;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetUpTime;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(_Bool)arg4;
- (void)_computeEffectiveThreshold;
- (id)_buildVoiceTriggerEventInfo:(id)arg1;
- (void)_analyzerReset:(id)arg1 withCause:(unsigned long long)arg2;
- (void)_logUptimeWithVTSwitchChanged:(_Bool)arg1 VTEnabled:(_Bool)arg2;
- (void)CSPhraseSpotterEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;

@end
