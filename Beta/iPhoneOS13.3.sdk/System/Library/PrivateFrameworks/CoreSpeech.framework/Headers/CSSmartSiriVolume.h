/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;

@protocol CSSmartSiriVolumeDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    NSUserDefaults *_defaults;
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;
    unsigned long long _startAnalyzeSampleCount;
    unsigned long long _samplesFed;
    unsigned long long _processedSampleCount;
    _Bool _isStartSampleCountMarked;
    _Bool _isListenPollingStarting;
    _Bool _shouldPauseSSVProcess;
    _Bool _shouldPauseLKFSProcess;
    _Bool _alarmSoundIsFiring;
    _Bool _timerSoundIsFiring;
    _Bool _mediaIsPlaying;
    CSAsset *_currentAsset;
    float _musicVolumeDB;
    float _alarmVolume;
    unsigned long long _noiseLevelChannelBitset;
    unsigned long long _LKFSChannelBitset;
    unsigned int _energyBufferSize;
    unsigned int _noiseLowerPercentile;
    unsigned int _noiseUpperPercentile;
    unsigned int _LKFSLowerPercentile;
    unsigned int _LKFSUpperPercentile;
    float _noiseTimeConstant;
    float _noiseMicSensitivityOffset;
    float _LKFSTimeConstant;
    float _LKFSMicSensitivityOffset;
    float _noiseTTSMappingInputRangeLow;
    float _noiseTTSMappingInputRangeHigh;
    float _noiseTTSMappingOutputRangeLow;
    float _noiseTTSMappingOutputRangeHigh;
    float _LKFSTTSMappingInputRangeLow;
    float _LKFSTTSMappingInputRangeHigh;
    float _LKFSTTSMappingOutputRangeLow;
    float _LKFSTTSMappingOutputRangeHigh;
    float _userOffsetInputRangeLow;
    float _userOffsetInputRangeHigh;
    float _userOffsetOutputRangeLow;
    float _userOffsetOutputRangeHigh;
    float _TTSVolumeLowerLimitDB;
    float _TTSVolumeUpperLimitDB;
    float _noiseWeight;
    id <CSSmartSiriVolumeDelegate> _delegate;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    long long _listenPollingTimerCount;
}

@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer;
@property (nonatomic) long long listenPollingTimerCount;
@property (weak, nonatomic) id <CSSmartSiriVolumeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)_reset;
- (id).cxx_construct;
- (void)setAsset:(id)arg1;
- (void)_stopListening;
- (void)_setAsset:(id)arg1;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)initializeMediaPlayingState;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)initializeTimerState;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)initializeAlarmState;
- (void)_setDefaultParameters;
- (float)_convertDB2Mag:(float)arg1;
- (void)fetchInitSystemVolumes;
- (void)_resumeSSVProcessing;
- (void)_pauseSSVProcessing;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (float)_getMusicVolumeDB:(float)arg1;
- (void)_resetStartAnalyzeTime;
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;
- (void)startSmartSiriVolume;
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;
- (float)estimateSoundLevelbySoundType:(long long)arg1;
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;

@end
