/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSArray, NSString, RCComposition, RCCompositionFragment, RCCompositionWaveformDataSource, RCMutableComposition, RCMutableCompositionFragment, RCWaveform;

@interface RCCaptureInputWaveformDataSource

{
    double captureDelta;
    _Bool _overdub;
    _Bool _canUpdateCaptureComposition;
    RCMutableComposition *_capturedComposition;
    RCMutableCompositionFragment *_capturedFragment;
    RCComposition *_destinationComposition;
    RCCompositionFragment *_destinationFragment;
    RCWaveform *_baseWaveform;
    RCCompositionWaveformDataSource *_baseWaveformDataSource;
    double _updatedCapturedFragmentDuration;
    double _finalCapturedFragmentDuration;
    double _captureInsertionTimeInComposition;
    double _captureInsertionDurationInComposition;
    NSArray *_captureInitialDecomposedFragments;
}

@property (nonatomic, readonly) RCWaveform *baseWaveform;
@property (nonatomic, readonly) RCCompositionWaveformDataSource *baseWaveformDataSource;
@property (nonatomic, readonly) double updatedCapturedFragmentDuration;
@property (nonatomic, readonly) double finalCapturedFragmentDuration;
@property (nonatomic, readonly) _Bool canUpdateCaptureComposition;
@property (nonatomic, readonly) double captureInsertionTimeInComposition;
@property (nonatomic, readonly) double captureInsertionDurationInComposition;
@property (nonatomic, readonly) NSArray *captureInitialDecomposedFragments;
@property (nonatomic, readonly) RCComposition *destinationComposition;
@property (nonatomic, readonly) RCCompositionFragment *destinationFragment;
@property (nonatomic, readonly, getter=isOverdub) _Bool overdub;
@property (nonatomic, readonly) RCMutableComposition *capturedComposition;
@property (nonatomic, readonly) RCMutableCompositionFragment *capturedFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)waitUntilFinished;
- (double)duration;
- (_Bool)setPaused:(_Bool)arg1;
- (void)startLoading;
- (void)cancelLoading;
- (double)_fragmentDuration;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)flushPendingCapturedSampleBuffers;
- (_Bool)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)waveformDataSourceRequiresUpdate:(id)arg1;
- (_Bool)shouldMergeLiveWaveform;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (CDStruct_73a5d3ca)timeRangeToHighlight;
- (id)waveformSegmentsInTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)waveformSegmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_initializeCaptureComposition;
- (void)_updateCapturedComposition:(_Bool)arg1;
- (void)_captureSesionCompletedWithFinalizedDuration:(double)arg1;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(CDStruct_73a5d3ca)arg2 componentWaveformSegmentOffset:(double)arg3;
- (void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1;
- (id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(_Bool)arg3;
- (_Bool)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1;
- (void)updateCapturedDelta:(double)arg1;
- (void)undoCapture;
- (_Bool)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1;

@end
