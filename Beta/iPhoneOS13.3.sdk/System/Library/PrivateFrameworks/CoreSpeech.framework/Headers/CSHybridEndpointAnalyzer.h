/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSServerEndpointFeatures, EARCaesuraSilencePosteriorGenerator, EARClientSilenceFeatures, NSDate, NSDictionary, NSMutableArray, NSString, _EAREndpointer;

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSHybridEndpointAnalyzer : NSObject

{
    _Bool _saveSamplesSeenInReset;
    _Bool _canProcessCurrentRequest;
    _Bool _didAddAudio;
    _Bool _didReceiveServerFeatures;
    _Bool _useDefaultServerFeaturesOnClientLag;
    _Bool _didCommunicateEndpoint;
    _Bool _didTimestampFirstAudioPacket;
    _Bool _recordingDidStop;
    _Bool _didDetectSpeech;
    id <CSEndpointAnalyzerDelegate> _delegate;
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;
    unsigned long long _activeChannel;
    long long _endpointStyle;
    long long _endpointMode;
    double _startWaitTime;
    double _endWaitTime;
    double _interspeechWaitTime;
    double _delay;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    CSAsset *_currentAsset;
    NSObject<OS_dispatch_queue> *_apQueue;
    unsigned long long _numSamplesProcessed;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    EARClientSilenceFeatures *_clientSilenceFeaturesAtEndpoint;
    _EAREndpointer *_hybridClassifier;
    NSString *_endpointerModelVersion;
    NSObject<OS_dispatch_queue> *_serverFeaturesQueue;
    CSServerEndpointFeatures *_lastKnownServerEPFeatures;
    NSMutableArray *_serverFeatureLatencies;
    double _serverFeaturesWarmupLatency;
    NSDate *_lastServerFeatureTimestamp;
    double _clientLagThresholdMs;
    double _clampedSFLatencyMsForClientLag;
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;
    double _lastReportedEndpointTimeMs;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    unsigned long long _currentRequestSampleRate;
    double _vtExtraAudioAtStartInMs;
    unsigned long long _vtEndInSampleCount;
    double _hepAudioOriginInMs;
    NSDictionary *_recordContext;
    NSDate *_firstAudioPacketTimestamp;
    NSObject<OS_dispatch_queue> *_silencePosteriorGeneratorQueue;
    double _elapsedTimeWithNoSpeech;
    double _trailingSilenceDurationAtEndpoint;
}

@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) _Bool didAddAudio;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (retain, nonatomic) EARClientSilenceFeatures *clientSilenceFeaturesAtEndpoint;
@property (nonatomic) _Bool canProcessCurrentRequest;
@property (retain, nonatomic) _EAREndpointer *hybridClassifier;
@property (retain, nonatomic) NSString *endpointerModelVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue;
@property (retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures;
@property (retain, nonatomic) NSMutableArray *serverFeatureLatencies;
@property (nonatomic) double serverFeaturesWarmupLatency;
@property (retain, nonatomic) NSDate *lastServerFeatureTimestamp;
@property (nonatomic) _Bool didReceiveServerFeatures;
@property (nonatomic) double clientLagThresholdMs;
@property (nonatomic) double clampedSFLatencyMsForClientLag;
@property (nonatomic) _Bool useDefaultServerFeaturesOnClientLag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue;
@property (nonatomic) double lastReportedEndpointTimeMs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (nonatomic) _Bool didCommunicateEndpoint;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double hepAudioOriginInMs;
@property (retain, nonatomic) NSDictionary *recordContext;
@property (retain, nonatomic) NSDate *firstAudioPacketTimestamp;
@property (nonatomic) _Bool didTimestampFirstAudioPacket;
@property (nonatomic) _Bool recordingDidStop;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *silencePosteriorGeneratorQueue;
@property (nonatomic) _Bool didDetectSpeech;
@property (nonatomic) double elapsedTimeWithNoSpeech;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) long long endpointMode;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) _Bool saveSamplesSeenInReset;
@property (weak, nonatomic) id <CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id <CSEndpointAnalyzerImplDelegate> implDelegate;
@property (nonatomic) unsigned long long activeChannel;

- (id)init;
- (void)reset;
- (void)preheat;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;
- (void)_readClientLagParametersFromHEPAsset:(id)arg1;
- (_Bool)_shouldUsePhaticWithRecordContext;
- (id)serverFeaturesLatencyDistributionDictionary;
- (void)terminateProcessing;
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;
- (void)_updateAssetWithLanguage:(id)arg1;
- (void)_updateAssetWithCurrentLanguage;

@end
