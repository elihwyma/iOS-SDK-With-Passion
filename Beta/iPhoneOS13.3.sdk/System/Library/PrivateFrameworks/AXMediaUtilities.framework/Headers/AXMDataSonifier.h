/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMADSREnvelope, AXMAudioDataSource, AXMAudioDataSourceMixer, AXMLiveContinuousTone, NSPointerArray, NSTimer;

@interface AXMDataSonifier : NSObject

{
    struct OpaqueAudioComponentInstance *_audioUnit;
    CDStruct_79de6ffd _xData;
    CDStruct_79de6ffd _yData;
    _Bool _usesBinauralPanning;
    _Bool _playing;
    _Bool _paused;
    _Bool _scrubbing;
    _Bool _isEndingScrubbing;
    _Bool _isInLiveContinuousToneSession;
    int _dataMode;
    int _interpolationMode;
    double _minimumPlaybackFrequency;
    double _maximumPlaybackFrequency;
    double _playbackDuration;
    AXMADSREnvelope *_ampEnvelope;
    unsigned long long _toneWaveform;
    CDUnknownBlockType _function;
    AXMLiveContinuousTone *_continuousScrubbingTone;
    NSTimer *_playbackObserverUpdateTimer;
    AXMAudioDataSourceMixer *_playbackMixerDataSource;
    AXMAudioDataSource *_playbackChartDataAudioDataSource;
    AXMAudioDataSource *_playbackTrendlineAudioDataSource;
    AXMAudioDataSourceMixer *_scrubbingMixerDataSource;
    AXMAudioDataSource *_scrubbingDiscreteAudioDataSource;
    AXMAudioDataSource *_scrubbingContinuousAudioDataSource;
    AXMAudioDataSource *_scrubbingTrendlineAudioDataSource;
    AXMAudioDataSourceMixer *_liveContinuousMixerDataSource;
    AXMAudioDataSource *_liveContinuousAudioDataSource;
    NSPointerArray *_playbackObservers;
    AXMLiveContinuousTone *_trendlineScrubbingTone;
    AXMLiveContinuousTone *_liveContinuousDataTone;
    CDUnknownBlockType _trendlineFunction;
    vector_3203cf93 *_scrubbingDiscreteDataRenderingContext;
    vector_3203cf93 *_scrubbingPlaybackCallbackRenderingContext;
    vector_3203cf93 *_liveTonePlaybackCallbackRenderingContext;
    unsigned long long _playbackSampleCount;
}

@property (retain, nonatomic) NSTimer *playbackObserverUpdateTimer;
@property (retain, nonatomic) AXMAudioDataSourceMixer *playbackMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *playbackChartDataAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *playbackTrendlineAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSourceMixer *scrubbingMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingDiscreteAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingContinuousAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingTrendlineAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSourceMixer *liveContinuousMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *liveContinuousAudioDataSource;
@property (retain, nonatomic) NSPointerArray *playbackObservers;
@property (nonatomic, readonly) int interpolationMode;
@property (nonatomic, readonly) AXMLiveContinuousTone *continuousScrubbingTone;
@property (nonatomic, readonly) AXMLiveContinuousTone *trendlineScrubbingTone;
@property (nonatomic, readonly) AXMLiveContinuousTone *liveContinuousDataTone;
@property (copy, nonatomic) CDUnknownBlockType trendlineFunction;
@property (nonatomic, readonly) _Bool isEndingScrubbing;
@property (nonatomic, readonly) vector_3203cf93 *scrubbingDiscreteDataRenderingContext;
@property (nonatomic, readonly) vector_3203cf93 *scrubbingPlaybackCallbackRenderingContext;
@property (nonatomic, readonly) vector_3203cf93 *liveTonePlaybackCallbackRenderingContext;
@property (nonatomic, readonly) unsigned long long playbackSampleCount;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) _Bool isPaused;
@property (nonatomic, readonly) _Bool isScrubbing;
@property (nonatomic, readonly) _Bool isInLiveContinuousToneSession;
@property (nonatomic, readonly) double currentPlaybackPosition;
@property (nonatomic) double minimumPlaybackFrequency;
@property (nonatomic) double maximumPlaybackFrequency;
@property (nonatomic) double playbackDuration;
@property (retain, nonatomic) AXMADSREnvelope *ampEnvelope;
@property (nonatomic) unsigned long long toneWaveform;
@property (nonatomic) _Bool usesBinauralPanning;
@property (nonatomic, readonly) int dataMode;
@property (nonatomic, readonly) CDUnknownBlockType function;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)play;
- (_Bool)_initializeAudioUnit;
- (void)stopPlaying;
- (_Bool)_uninitializeAudioUnit;
- (void)scrubToPlaybackFrame:(unsigned long long)arg1;
- (id)_newContinuousToneEnvelope;
- (void)stopScrubbing;
- (double)frequencyForYAxisValue:(double)arg1;
- (void)_peakNormalizeBuffer:(vector_3203cf93 *)arg1 length:(unsigned long long)arg2 level:(double)arg3;
- (_Bool)hasContinuousDataForXPosition:(double)arg1;
- (double)interpolatedYAxisValueForNormalizedPosition:(double)arg1;
- (double)xAxisValueForPosition:(double)arg1;
- (void)_initializeAXMAudioDataSources;
- (void)_renderDiscreteAudio;
- (void)_renderContinuousAudio;
- (void)_renderUnivariateFunctionAudio;
- (unsigned long long)sampleIndexForXAxisValue:(double)arg1;
- (double)timeOffsetForXAxisValue:(double)arg1;
- (_Bool)_initializeAudioComponent;
- (_Bool)_setAudioFormat;
- (_Bool)_setOutputCallback;
- (double)normalizedXAxisValueForValue:(double)arg1;
- (double)normalizedYAxisValueForValue:(double)arg1;
- (void)_initializeLiveToneDataSource;
- (void)addPlaybackObserver:(id)arg1;
- (void)removePlaybackObserver:(id)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)beginScrubbing;
- (void)endScrubbing;
- (void)loadDataAndRenderAudioForXAxis:(double *)arg1 yAxis:(double *)arg2 numValues:(unsigned long long)arg3 axisMinimumX:(double)arg4 axisMaximumX:(double)arg5 axisMinimumY:(double)arg6 axisMaximumY:(double)arg7 interpolationMode:(int)arg8 trendline:(CDUnknownBlockType)arg9;
- (unsigned long long)sampleIndexForTimeOffset:(double)arg1;
- (void)beginLiveContinuousToneSession;
- (void)endLiveContinuousToneSession;
- (void)setLiveContinuousToneNormalizedFrequency:(double)arg1;

@end
