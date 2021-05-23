/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPAudioClassifier, VCPLoudnessAnalyzer, VCPVoiceDetector;

__attribute__((visibility("hidden")))
@interface VCPAudioAnalyzer : NSObject

{
    void *_inputBuffer;
    struct AudioTimeStamp _audioTimestamp;
    struct AudioBufferList _audioBufferList;
    int _sampleBatchSize;
    VCPVoiceDetector *_voiceDetector;
    VCPAudioClassifier *_audioClassifier;
    VCPLoudnessAnalyzer *_loudnessAnalyzer;
    int _bufferedSamples;
    _Bool _initialized;
}

- (void)dealloc;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (id)audioFormatRequirements;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1;
- (id)voiceDetections;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(_Bool)arg2;
- (int)analyzeAsset:(id)arg1 cancel:(CDUnknownBlockType)arg2 results:(id *)arg3;
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
