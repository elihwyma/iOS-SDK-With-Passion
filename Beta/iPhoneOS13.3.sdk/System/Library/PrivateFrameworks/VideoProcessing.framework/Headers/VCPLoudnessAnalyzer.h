/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class AVAudioPCMBuffer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPLoudnessAnalyzer : NSObject

{
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    struct LkFsMeasure *_loudnessAnalyzer;
    struct CAStreamBasicDescription *_processFormat;
    float _sampleRate;
    struct vector<double, std::__1::allocator<double>> _peakValues;
    struct vector<double, std::__1::allocator<double>> _momentaryEnergyValues;
    struct vector<float, std::__1::allocator<float>> _loudnessSampleBuffer;
    NSMutableArray *_loudnessResults;
    unsigned int _samplesFor100ms;
    struct AUOutputBL *_samplesForProcessingBufferList;
}

- (id)init;
- (void)dealloc;
- (id)results;
- (id).cxx_construct;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;

@end
