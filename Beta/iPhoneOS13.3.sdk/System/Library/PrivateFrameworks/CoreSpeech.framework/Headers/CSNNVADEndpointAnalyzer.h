/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSString, SNAudioStreamAnalyzer;

@protocol CSAudioFileWriter, CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSNNVADEndpointAnalyzer : NSObject

{
    _Bool _saveSamplesSeenInReset;
    _Bool _shouldDetectTwoShot;
    _Bool _didEnterTwoshot;
    _Bool _finishedSkippingSamplesForVT;
    id <CSEndpointAnalyzerDelegate> _delegate;
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;
    unsigned long long _activeChannel;
    double _startWaitTime;
    double _endWaitTime;
    double _automaticEndpointingSuspensionEndTime;
    long long _endpointStyle;
    long long _endpointMode;
    double _interspeechWaitTime;
    double _delay;
    double _minimumDurationForEndpointer;
    double _lastEndOfVoiceActivityTime;
    double _lastStartOfVoiceActivityTime;
    SNAudioStreamAnalyzer *_snAudioStreamAnalyzer;
    unsigned long long _framePosition;
    unsigned long long _nnvadState;
    unsigned long long _numSamplesReceived;
    unsigned long long _currentRequestSampleRate;
    AVAudioFormat *_currentRequestAudioFormat;
    double _vtEndInSecs;
    unsigned long long _vtEndInSampleCount;
    double _vtExtraAudioAtStartInMs;
    double _nnvadAudioOriginInMs;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSAudioFileWriter> _audioFileWriter;
    long long _firstSampleId;
    unsigned long long _numSamplesSkippedForVT;
}

@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) unsigned long long framePosition;
@property (nonatomic) unsigned long long nnvadState;
@property (nonatomic) unsigned long long numSamplesReceived;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat;
@property (nonatomic) double vtEndInSecs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) double nnvadAudioOriginInMs;
@property (nonatomic) _Bool shouldDetectTwoShot;
@property (nonatomic) _Bool didEnterTwoshot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id <CSAudioFileWriter> audioFileWriter;
@property (nonatomic) long long firstSampleId;
@property (nonatomic) unsigned long long numSamplesSkippedForVT;
@property (nonatomic) _Bool finishedSkippingSamplesForVT;
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
@property (nonatomic, readonly) _Bool canProcessCurrentRequest;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, readonly) NSString *endpointerModelVersion;
@property (nonatomic, readonly) double elapsedTimeWithNoSpeech;

+ (id)timeStampString;

- (id)init;
- (void)reset;
- (void)preheat;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (id)_pcmBufferForAudioChunk:(id)arg1;
- (double)_effectiveAudioTimeInSecsForSNObservation:(id)arg1;
- (void)_reportStartpointAtTsInSecs:(double)arg1;
- (_Bool)_shouldEnterTwoShotAtAudioTimeInSecs:(double)arg1;
- (void)_reportTwoShotAtTsInSecs:(double)arg1;
- (void)_reportEndpointAtTsInSecs:(double)arg1;
- (void)_checkSNObservationForStartpoint:(id)arg1;
- (void)_checkSNObservationForEndpoint:(id)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)arg1;
- (double)trailingSilenceDurationAtEndpoint;
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;

@end
