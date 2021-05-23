/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableData, NSString;

@protocol AFAudioAnalyzerDelegate, OS_dispatch_queue;

@interface AFAudioAnalyzer : NSObject

{
    _Bool _detectedOneShotStartpoint;
    _Bool _detectedRecurrentStartpoint;
    _Bool _communicatedStartPointDetection;
    _Bool _detectedOneShotEndpoint;
    _Bool _detectedRecurrentEndpoint;
    _Bool _communicatedEndpointDetection;
    _Bool _haveSeenNonZeroSamples;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    double _totalSamples;
    double _lastOneShotStartpoint;
    double _lastOneShotEndpoint;
    double _lastRecurrentStartpoint;
    double _lastRecurrentEndpoint;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    struct OpaqueAudioComponentInstance *_audioUnitEPVAD2;
    _Bool _isConfigured;
    _Bool _saveSampleSeenInReset;
    double _previousSamplesSeen;
    NSObject<OS_dispatch_queue> *_queue;
    int _endpointMode;
    double _startWaitTime;
    double _interspeechWaitTime;
    double _endWaitTime;
    long long _style;
    double _delay;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    id <AFAudioAnalyzerDelegate> _delegate;
}

@property (nonatomic) long long style;
@property (nonatomic) double delay;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (weak, nonatomic) id <AFAudioAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)preheat;
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)_detectVoiceActivityInSamples:(float *)arg1 numSamples:(unsigned int)arg2;
- (void)saveSamplesSeenOnNextReset;

@end
