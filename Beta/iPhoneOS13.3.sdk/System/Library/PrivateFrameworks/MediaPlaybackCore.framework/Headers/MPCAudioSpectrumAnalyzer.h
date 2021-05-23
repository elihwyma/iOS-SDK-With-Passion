/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MPCAudioSpectrumAnalyzer : NSObject

{
    unsigned long long _frequencyBuffersSize;
    float *_frequencyData;
    float *_absoluteFrequencyData;
    struct DSPSplitComplex _fftBuffer;
    unsigned long long _frequencyDataSize;
    struct opaqueMTAudioProcessingTap *_audioProcessingTap;
    float _sampleRate;
    float _powerLevel;
    struct OpaqueFFTSetup *_fftSetup;
    NSMutableArray *_observers;
}

@property (nonatomic) float powerLevel;
@property (nonatomic) float sampleRate;
@property (nonatomic) struct OpaqueFFTSetup *fftSetup;
@property (retain, nonatomic) NSMutableArray *observers;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)_createAudioTap;
- (void)_freeBuffers;
- (void)_destroyAudioTap;
- (void)_attachAudioTapToPlayerItem:(id)arg1;
- (void)_analyzeFrequencies:(struct AudioBufferList *)arg1 numberFrames:(long long)arg2 timeRange:(CDStruct_3c1748cc)arg3;
- (void)_resizeOrResetBuffers:(unsigned long long)arg1;
- (void)configurePlayerItem:(id)arg1;
- (void)_analyzeSamples:(struct AudioBufferList *)arg1 numberFrames:(long long)arg2 timeRange:(CDStruct_3c1748cc)arg3;

@end
