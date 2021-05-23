/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class EARCaesuraSilencePosteriorGenerator, NSString;

@protocol CSSPGEndpointAnalyzerDelegate, OS_dispatch_queue;

@interface CSSPGEndpointAnalyzer : NSObject

{
    _Bool _hasReported;
    _Bool _isAnalyzeMode;
    float _endpointThreshold;
    id <CSSPGEndpointAnalyzerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    double _lastSilencePosterior;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (nonatomic) float endpointThreshold;
@property (nonatomic) _Bool hasReported;
@property (nonatomic) _Bool isAnalyzeMode;
@property (nonatomic) double lastSilencePosterior;
@property (weak, nonatomic) id <CSSPGEndpointAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)reset;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)silenceDurationEstimateAvailable:(float *)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (long long)getFrameDurationMs;
- (id)initWithAnalyzeMode;
- (id)initWithEndpointThreshold:(float)arg1;

@end
