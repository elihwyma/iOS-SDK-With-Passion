/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class AVAudioPCMBuffer, NSMutableArray, SNAudioStreamAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPAudioClassifier : NSObject

{
    unsigned long long _analysisTypes;
    SNAudioStreamAnalyzer *_SNAnalyzer;
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    float _sampleRate;
    NSMutableArray *_detectors;
}

- (id)results;
- (id)initWithTypes:(unsigned long long)arg1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;

@end
