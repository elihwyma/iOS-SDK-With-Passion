/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

#import <CoreSpeech/Swift-Protocol.h>

@class NSString;

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl;

@interface CSEndpointerProxy : NSObject <Swift>

{
    _Bool _recordingDidStop;
    id <CSEndpointAnalyzerDelegate> _endpointerDelegate;
    id <CSEndpointAnalyzerImpl> _hybridEndpointer;
    id <CSEndpointAnalyzerImpl> _nnvadEndpointer;
    id <CSEndpointAnalyzerImpl> _activeEndpointer;
}

@property (retain, nonatomic) id <CSEndpointAnalyzerImpl> hybridEndpointer;
@property (retain, nonatomic) id <CSEndpointAnalyzerImpl> nnvadEndpointer;
@property (weak, nonatomic) id <CSEndpointAnalyzerImpl> activeEndpointer;
@property (nonatomic) _Bool recordingDidStop;
@property (weak, nonatomic) id <CSEndpointAnalyzerDelegate> endpointerDelegate;
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

- (id)init;
- (void)reset;
- (void)preheat;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)arg1;
- (double)trailingSilenceDurationAtEndpoint;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (id)endpointerModelVersion;
- (double)elapsedTimeWithNoSpeech;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;
- (unsigned long long)endPointAnalyzerType;
- (void)_setupNNVADEndpointer;

@end
