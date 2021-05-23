/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MiroAnalysisAudioHelpers : NSObject

{
    struct OpaqueAudioComponentInstance *_audioUnitEPVAD;
    struct CAStreamBasicDescription *_processFormat;
    struct AUOutputBL *_intAudioBufferList;
    struct AUOutputBL *_floatAudioBufferList;
    struct AUTimestampGenerator *_timeGenerator;
    CDStruct_1b6d18a9 _currentRangeStartTime;
    CDStruct_1b6d18a9 _recordingStartTime;
    CDStruct_1b6d18a9 _recordingEndTime;
    _Bool _initializedAudioUnit;
    unsigned int _numberOfSamplesPerBuffer;
    struct LkFsMeasure *_loudnessAnalyzer;
    struct vector<double, std::__1::allocator<double>> _momentaryEnergyValues;
    struct vector<float, std::__1::allocator<float>> _loudnessSampleBuffer;
    float _peakValue;
    long long projectNaturalFrameRate;
    NSArray *_timeRanges;
}

@property (nonatomic) long long projectNaturalFrameRate;
@property (nonatomic) NSArray *timeRanges;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_processSamplesForPeaksAndLoudness:(float *)arg1 numberOfFrames:(unsigned int)arg2 sampleRate:(float)arg3;
- (id)_outputVoiceRangeWithDetectionTime:(CDStruct_1b6d18a9)arg1;
- (int)_setPropertiesWithNumberOfSamplesPerBuffer:(unsigned int)arg1;
- (_Bool)_processFloatBufferWithNumberOfFrames:(long long)arg1 options:(unsigned long long)arg2 voiceRange:(id *)arg3;
- (id)_outputLoudnessRangeWithDetectionTime:(CDStruct_e83c9415)arg1;
- (_Bool)_setupAndStartReadingTrack:(id)arg1 usingTimeRange:(CDStruct_e83c9415)arg2 outputSettings:(id)arg3 assetReader:(id *)arg4 trackOutput:(id *)arg5 error:(id *)arg6;
- (_Bool)_startProcessingWithStartTime:(CDStruct_1b6d18a9)arg1 audioStreamDescription:(struct AudioStreamBasicDescription)arg2 numberOfSamplesPerBuffer:(unsigned int)arg3;
- (_Bool)_startVoiceDetection;
- (_Bool)_startLoudnessDetection;
- (_Bool)_processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(unsigned long long)arg2 voiceRange:(id *)arg3;
- (void)_stopDetectingVoiceWithEndTime:(CDStruct_1b6d18a9)arg1 lastVoiceRanges:(id *)arg2;
- (void)_stopDetectingLoudnessWithTimeRange:(CDStruct_e83c9415)arg1 loudnessRanges:(id *)arg2;
- (void)_stopProcessing;
- (void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
