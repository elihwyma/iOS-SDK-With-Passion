/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWMotionDataTimeMachine, BWNodeInput, BWPhotoDecompressor, FigCaptureRecordingSettings, NSArray, NSMutableArray;

@protocol BWAudioSourceRecordingReadinessDelegate;

@interface BWFileCoordinatorNode : BWNode

{
    NSArray *_stagingQueues;
    FigCaptureRecordingSettings *_settings;
    long long _currSettingsID;
    int _recordingState;
    BWNodeInput *_masterInput;
    CDStruct_1b6d18a9 _inputOffset;
    CDStruct_1b6d18a9 _lastMasterPTS;
    CDStruct_1b6d18a9 _lastMasterDuration;
    CDStruct_1b6d18a9 _lastMasterEndingPTS;
    CDStruct_1b6d18a9 _masterStartingPTS;
    CDStruct_1b6d18a9 _largestStagedSupportingAudioVideoStagedPTS;
    CDStruct_1b6d18a9 _largestAudioPTS;
    CDStruct_1b6d18a9 _largestMetadataPTS;
    CDStruct_1b6d18a9 _masterStoppingPTS;
    CDStruct_1b6d18a9 _stopRecordingPTS;
    CDStruct_1b6d18a9 _stopRecordingAudioOffset;
    CDStruct_1b6d18a9 _stopRecordingObservedEndingPTS;
    CDStruct_1b6d18a9 _focusWaitTimeStart;
    CDStruct_1b6d18a9 _torchWaitTimeStart;
    double _focusWaitTime;
    double _torchWaitTime;
    int _numberOfCoarseFocusWaitBuffersDropped;
    int _numberOfTorchWaitBuffersDropped;
    _Bool _sendFlushMarkerWhenStopping;
    _Bool _haveSeenAudioWhenStarting;
    _Bool _lowLatencyCanTransitionEarlyToRecording;
    _Bool _lowLatencyCanTossExtraVideoWhenStopping;
    _Bool _firstAudioHasBeenProcessed;
    int _terminationErrorCode;
    struct OpaqueCMBlockBuffer *_emptyMetadataSampleData;
    const struct opaqueCMFormatDescription **_formatDescriptionsForInputs;
    struct OpaqueFigSimpleMutex *_stateMutex;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    unsigned long long _numVideoInputs;
    unsigned long long _numAudioInputs;
    unsigned long long _numMetadataInputs;
    unsigned long long _numActionOnlyOutputs;
    unsigned long long _masterInputIndex;
    _Bool _lowLatencyModeEnabled;
    _Bool _flagsLastFrameForVideoCompressor;
    _Bool _overCaptureEnabled;
    _Bool _overCaptureIsRequested;
    _Bool _overCaptureActiveSlaveStreamForcedOff;
    _Bool _attachOverCaptureActiveSlaveStreamForcedOffMarkerBuffer;
    CDStruct_1b6d18a9 _firstAudioPTSReadyForRecording;
    id <BWAudioSourceRecordingReadinessDelegate> _audioSourceDelegate;
    BWPhotoDecompressor *_thumbnailDecompressor;
    BWMotionDataTimeMachine *_motionDataTimeMachine;
    NSMutableArray *_videoSampleBuffersWaitingForMetadata;
    unsigned long long _cinematicLookAheadFrameCount;
    unsigned long long _pendingMotionDataSerialNumber;
    unsigned long long _largestEmittedLookAheadMotionDataSerialNumber;
    _Bool _lookAheadMotionDataPreloadHasBeenAttached;
    _Bool _receivedFinalEnqueuedIrisReferenceRequest;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (void)recordingTerminated:(long long)arg1;
- (void)tryToEmitFramesWaitingForMotion;
- (_Bool)updateStopPTS:(CDStruct_1b6d18a9)arg1 audioOffset:(CDStruct_1b6d18a9)arg2 previousStopPTS:(CDStruct_1b6d18a9 *)arg3 previousAudioOffset:(CDStruct_1b6d18a9 *)arg4;
- (int)startRecordingWithSettings:(id)arg1 stopAtPTS:(CDStruct_1b6d18a9)arg2;
- (void)cancelStartRecordingWithSettings:(id)arg1;
- (void)stopRecordingWithErrorCode:(int)arg1;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 overCaptureEnabled:(_Bool)arg5 allowLowLatencyWhenPossible:(_Bool)arg6 motionDataTimeMachine:(id)arg7;
- (void)_finishStoppingOrPausing:(_Bool)arg1 withErrorCode:(int)arg2;
- (void)_stopRecordingWithErrorCode:(int)arg1;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer *)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(CDStruct_1b6d18a9)arg3;
- (void)_emitOrQueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2 toOutput:(id)arg3 stoppingOrPausing:(_Bool)arg4;
- (struct opaqueCMSampleBuffer *)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(CDStruct_1b6d18a9)arg3;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer *)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(CDStruct_1b6d18a9)arg3;
- (void)_setRecordingState:(int)arg1;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_completeTransitionToNotRecording;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString *)arg1 withPTS:(CDStruct_1b6d18a9)arg2 settings:(id)arg3 errorCode:(int)arg4;
- (void)_emitSampleBuffersWaitingForMotionData;
- (void)_addLookAheadMotionDataToMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 lookAheadMotionData:(id)arg2;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_addFlushingFutureCinematicMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)_cinematicFutureMetadataForFlushingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_prepareOverCaptureVideoBufferForEmission:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)_createEmptyMetadataSBufWithPTS:(CDStruct_1b6d18a9)arg1 forInputIndex:(unsigned long long)arg2;
- (void)_attachFileCompletionThumbnailSourcePixelBufferAttachmentsToSettingsBuffer:(struct opaqueCMSampleBuffer *)arg1 forSourceBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_emitStagedBufferForIndex:(unsigned long long)arg1 stoppingOrPausing:(_Bool)arg2;
- (void)_flushSampleBuffersWaitingForMotionData;
- (_Bool)_isPixelTransferSupportedForBuffer:(struct __CVBuffer *)arg1;
- (void)setFlagsLastFrameForVideoCompressor:(_Bool)arg1;
- (_Bool)flagsLastFrameForVideoCompressor;
- (void)setAudioSourceDelegate:(id)arg1;
- (id)audioSourceDelegate;
- (void)setCinematicLookAheadFrameCount:(int)arg1;
- (int)cinematicLookAheadFrameCount;

@end
