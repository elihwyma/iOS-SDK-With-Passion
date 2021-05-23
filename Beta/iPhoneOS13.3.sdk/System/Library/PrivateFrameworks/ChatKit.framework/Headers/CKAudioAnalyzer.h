/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CKAudioAnalyzer : NSObject

{
    _Bool _detectedMusic;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    int _endpointMode;
    double _startWaitTime;
    double _interspeechWaitTime;
    double _endWaitTime;
    NSMutableData *_floatSampleBuffer;
    unsigned long long _framesSeen;
    struct {
        float rms;
        unsigned long long zc;
    } _frameAnalysisArray[25];
    struct OpaqueAudioComponentInstance *_audioUnitEPVAD;
    NSDictionary *_modelDict;
    unsigned int _inMaxSamplesPerBuffer;
    float _speechPaddingFactor;
    float _decoderLatency;
    float _heuristicWindowSec;
    float _heuristicTransitionRatio;
}

@property (nonatomic) unsigned int inMaxSamplesPerBuffer;
@property (nonatomic) float speechPaddingFactor;
@property (nonatomic) float decoderLatency;
@property (nonatomic) float heuristicWindowSec;
@property (nonatomic) float heuristicTransitionRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)reset;
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;

@end
