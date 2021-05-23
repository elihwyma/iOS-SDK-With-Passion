/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVoiceDetector : NSObject

{
    NSDictionary *_model;
    struct AudioStreamBasicDescription _audioStream;
    int _sampleBatchSize;
    CDStruct_1b6d18a9 _trackStart;
    _Bool _voiceActivity;
    CDStruct_1b6d18a9 _voiceStart;
    NSMutableArray *_voiceDetections;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
}

@property (retain) NSMutableArray *voiceDetections;

+ (id)detector;

- (id)init;
- (id)results;
- (int)loadModel;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (id)audioFormatRequirements;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 result:(id)arg3;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;

@end
