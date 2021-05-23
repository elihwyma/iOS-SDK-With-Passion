/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVoiceDetector.h>

__attribute__((visibility("hidden")))
@interface VCPVoiceDetectorV2 : VCPVoiceDetector

{
    _Bool _voiceActivityNew;
    struct OpaqueAudioComponentInstance *_audioUnit;
}

- (id)init;
- (void)dealloc;
- (id)results;
- (int)loadModel;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;

@end
