/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWIntermediateJPEGCompressor, BWIrisSequenceAdjuster, BWMotionDataPreserver, BWMotionDataTimeMachine, FigIrisAutoTrimmer, NSDictionary, NSMutableArray, NSObject, NSString, NSURL;

@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;

@interface BWIrisStagingNode : BWNode

{
    CDStruct_1b6d18a9 _bufferingTime;
    CDStruct_1b6d18a9 _targetFrameDuration;
    CDStruct_1b6d18a9 _beginIrisMovieCaptureTime;
    CDStruct_1b6d18a9 _endIrisMovieCaptureTime;
    _Bool _compressSynchronizedSlaveAttachedMedia;
    CDStruct_1b6d18a9 _frameGovernorNextFrameThreshold;
    CDStruct_1b6d18a9 _frameGovernorReferenceTime;
    CDStruct_1b6d18a9 _readyToEmitPTS;
    CDStruct_1b6d18a9 _lastProcessedVideoPTS;
    CDStruct_1b6d18a9 _masterMovieStartPTS;
    NSURL *_temporaryMovieDirectoryURL;
    NSURL *_masterMovieURL;
    NSURL *_spatialOverCaptureMasterMovieURL;
    NSMutableArray *_stagingQueues;
    NSMutableArray *_lastEmittedBuffers;
    _Bool _valveOpen;
    _Bool _finishingAllEnqueuedRequests;
    _Bool _valveDraining;
    _Bool _emittedFirstAudio;
    long long _valveOpenerSettingsID;
    NSMutableArray *_irisRequestsInFlight;
    NSMutableArray *_irisRequestsSoonToBeEmitted;
    int _emittedIrisRequestCount;
    struct OpaqueFigSimpleMutex *_stateMutex;
    CDStruct_1b6d18a9 *_firstEmittedPTSArray;
    struct OpaqueCMClock *_masterClock;
    int _trimMethod;
    _Bool _vitalityScoringEnabled;
    CDStruct_08002bce _vitalityScoringSmartCameraPipelineVersion;
    FigIrisAutoTrimmer *_trimmer;
    CDStruct_1b6d18a9 _firstTrimStartPTS;
    unsigned long long _inferencesInputIndex;
    BWMotionDataPreserver *_motionDataPreserver;
    BWIrisSequenceAdjuster *_sequenceAdjuster;
    BWMotionDataTimeMachine *_motionDataTimeMachine;
    int _visMotionMetadataPreloadingMode;
    int _numEODMessagesReceived;
    id <BWIrisStagingNodeIrisRequestDelegate> _delegate;
    float _intermediateJPEGCompressionQuality;
    float _intermediateJPEGCompressionRate;
    int _intermediateJPEGDownstreamRetainedBufferCount;
    int _intermediateJPEGSurfaceLocalRetainedBufferCount;
    BWIntermediateJPEGCompressor *_intermediateJPEGCompressor;
    BWIntermediateJPEGCompressor *_synchronizedSlaveJPEGCompressor;
    _Bool _doingJPEGCompression;
    NSDictionary *_cameraInfoByPortType;
    _Bool _haveSeenFirstAudioSampleBuffer;
    _Bool _haveSeenFirstVideoSampleBuffer;
    _Bool _readyToReceiveRequests;
    NSObject<OS_dispatch_group> *_readyToReceiveRequestsGroup;
    float _videoStabilizationOverscanOverride;
    float _spatialOverCapturePercentageToApply;
    NSString *_recommendedMasterPortType;
}

@property (readonly) NSURL *temporaryMovieDirectoryURL;
@property (readonly) BWMotionDataTimeMachine *motionDataTimeMachine;
@property CDStruct_1b6d18a9 beginIrisMovieCaptureTime;
@property CDStruct_1b6d18a9 endIrisMovieCaptureTime;

+ (void)initialize;

- (void)dealloc;
- (struct OpaqueCMClock *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)closeValve;
- (CDStruct_1b6d18a9)movieStopPTSForIrisRequest:(id)arg1;
- (_Bool)openValveWithIrisRequest:(id)arg1;
- (int)enqueueIrisRequest:(id)arg1;
- (void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1;
- (void)setMomentCaptureMovieRecordingMasterEndTime:(CDStruct_1b6d18a9)arg1 forRequestWithSettingsID:(long long)arg2;
- (CDStruct_1b6d18a9)targetFrameDuration;
- (void)setVitalityScoringSmartCameraPipelineVersion:(CDStruct_08002bce)arg1;
- (void)_serviceIrisRequestsForCurrentTime:(CDStruct_1b6d18a9)arg1 emitBuffers:(_Bool)arg2 ensureStillImageTimesAreStaged:(_Bool)arg3;
- (void)_emitIrisRequest:(id)arg1 withEndTime:(CDStruct_1b6d18a9)arg2;
- (float)_appliedZoomFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_feedTrimmerWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_feedTrimmerWithInferencesSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (CDStruct_1b6d18a9)_earliestAllowedStillHostPTS;
- (void)_trimQueueForInputIndex:(unsigned long long)arg1;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2;
- (unsigned long long)_emittingInputsCount;
- (void)_enqueueIrisRequest:(id)arg1;
- (_Bool)_momentCaptureMovieRecordingInProgress;
- (_Bool)_spatialOverCaptureRecordingInProgress;
- (void)_updateRetainedBufferCount;
- (id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(_Bool)arg2;
- (CDStruct_1b6d18a9)_hostPTSForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_emitBuffersThroughPTS:(CDStruct_1b6d18a9)arg1;
- (int)_emitBuffersThroughPTS:(CDStruct_1b6d18a9)arg1 forInputIndex:(unsigned long long)arg2 inOutBufferIndex:(unsigned long long *)arg3 bufferCount:(unsigned long long)arg4;
- (int)_emissionStatusForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_emitIrisRequestsOlderThanTime:(CDStruct_1b6d18a9)arg1 withEndTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)_maxPTSForIrisRequest:(id)arg1;
- (unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(CDStruct_1b6d18a9)arg1 inputIndex:(unsigned long long)arg2;
- (CDStruct_1b6d18a9)_adjustedStartTimeForTrimmedStartTime:(CDStruct_1b6d18a9)arg1 ensuringAtLeast3FramesBeforeStillTime:(CDStruct_1b6d18a9)arg2 ensuringFrameIsAfterTrimmedStartTime:(_Bool)arg3 butNotEarlierThanOriginalStartTime:(CDStruct_1b6d18a9)arg4;
- (unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(CDStruct_1b6d18a9)arg1 inputIndex:(unsigned long long)arg2 tolerance:(CDStruct_1b6d18a9)arg3;
- (_Bool)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1;
- (void)_prepareToEmitFramesFromStartTime:(CDStruct_1b6d18a9)arg1 throughEndTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(CDStruct_1b6d18a9)arg1;
- (void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(CDStruct_1b6d18a9)arg1;
- (void)_tagStillImageVISKeyFrames;
- (void)_processQueuedVideoFrames;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 vitalityScoringEnabled:(_Bool)arg5 overCaptureEnabled:(_Bool)arg6 depthEnabled:(_Bool)arg7 videoStabilizationOverscanOverride:(float)arg8 sequenceAdjusterEnabled:(_Bool)arg9 visMotionMetadataPreloadingMode:(int)arg10 intermediateJPEGCompressionQuality:(float)arg11 intermediateJPEGCompressionRate:(float)arg12 temporaryMovieDirectoryURL:(id)arg13 cameraInfoByPortType:(id)arg14 irisRequestDelegate:(id)arg15;
- (void)setTargetFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)bufferingTime;
- (void)setBufferingTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_08002bce)vitalityScoringSmartCameraPipelineVersion;
- (int)intermediateJPEGDownstreamRetainedBufferCount;
- (void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1;

@end
