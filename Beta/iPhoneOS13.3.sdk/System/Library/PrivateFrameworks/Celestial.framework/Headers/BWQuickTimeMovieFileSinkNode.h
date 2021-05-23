/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFileSinkNode.h>

@class BWInferenceResultRingBuffers, BWIrisMovieGenerator, BWIrisMovieInfo, BWIrisStillImageMovieMetadataCache, BWLimitedGMErrorLogger, BWMovieFileOutputAnalyticsPayload, BWObjectRingBufferThreadSafe, BWVideoQualityMetrics, FigCaptureMovieFileRecordingSettings, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode

{
    unsigned long long _currFileSize;
    unsigned long long _maxFileSize;
    long long _estimatedMovieSizeOverhead;
    unsigned long long _minFreeDiskSpaceLimit;
    unsigned long long _fileSizeAtPreviousCheck;
    CDStruct_1b6d18a9 _currFileDuration;
    CDStruct_1b6d18a9 _checkDiskSpaceAtThisDuration;
    CDStruct_1b6d18a9 _maxFileDuration;
    CDStruct_1b6d18a9 _adjustedMaxFileDuration;
    CDStruct_1b6d18a9 _nextTimeToReturnFileSize;
    int _masterInputTimeScale;
    float _maxVideoFrameRate;
    NSArray *_stagingQueues;
    FigCaptureMovieFileRecordingSettings *_settings;
    char *_parentPath;
    CDStruct_1b6d18a9 _startingPTS;
    CDStruct_1b6d18a9 *_smallestWrittenPTSs;
    CDStruct_1b6d18a9 *_largestWrittenPTSs;
    CDStruct_1b6d18a9 *_largestWrittenVideoDTSs;
    CDStruct_1b6d18a9 *_secondLargestWrittenAudioVideoPTSs;
    CDStruct_1b6d18a9 *_lastWrittenAudioVideoDurations;
    NSArray *_movieLevelMetadata;
    NSArray *_trackReferenceListForMetadataInputs;
    NSArray *_structuralDependentTrackReferenceListForMetadataInputs;
    unsigned long long _numInputs;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationDispatchQueue;
    struct __IOSurface *_thumbnailSurface;
    int _recordingState;
    struct OpaqueFigFormatWriter *_formatWriter;
    struct OpaqueCMByteStream *_byteStream;
    int *_trackIDs;
    _Bool *_expectingToSeeSamplesForInput;
    _Bool *_haveSeenSamplesForTrack;
    _Bool *_finalDurationNeedsToBeWrittenForTrack;
    BWIrisMovieInfo *_firstIrisMovieInfo;
    NSMutableArray *_pendingIrisRefMovieRequests;
    BWIrisMovieGenerator *_irisMovieGenerator;
    NSMutableArray *_flushingIrisMovieGenerators;
    NSObject<OS_dispatch_queue> *_irisMovieGenerationQueue;
    int _irisStillImageTimeTrackID;
    int _irisStillImageTimeTrackTimeScale;
    unsigned int _irisTerminationStatus[2];
    _Bool _recordingIsForFrontCamera;
    unsigned long long _masterInputIndex;
    _Bool _didBeginSession;
    _Bool _didBeginWriting;
    _Bool _needToDeMoof;
    _Bool _atLeastOneFragmentIsWritten;
    _Bool _vitalInputStreamHasBeenForcedOff;
    int _streamForcedOffErrorCode;
    unsigned long long _numVideoTracks;
    _Bool _ignoreFileSizeLimit;
    _Bool _debugAudio;
    _Bool _haveDebugASBD;
    unsigned long long _numAudioTracks;
    struct AudioStreamBasicDescription _debugASBD;
    struct AudioBufferList *_debugABL;
    CDStruct_1b6d18a9 _debugDurationForFailOfDiskSpaceTest;
    struct OpaqueFigSimpleMutex *_propertyMutex;
    _Bool _irisSampleReferenceMoviesEnabled;
    BWInferenceResultRingBuffers *_irisMotionAnalysisRingBuffer;
    BWObjectRingBufferThreadSafe *_overCaptureQualityMetadataRingBuffer;
    BWVideoQualityMetrics *_overCaptureQualityMetrics;
    double _maxTotalZoomFactor;
    double _pointlessOverCaptureMaxZoomThreshold;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    CDStruct_79c71658 _videoDimensions;
    _Bool _irisMovieProcessingSuspended;
    NSDictionary *_temporalScalabilityProperties;
    unsigned long long _pipelineIndex;
    int _pipelineTraceID;
    NSString *_gmLoggingPreamble;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    NSString *_clientApplicationID;
    long long _numVideoFramesPortTypeFront;
    long long _numVideoFramesPortTypeBack;
    long long _numVideoFramesPortTypeTelephoto;
    long long _numVideoFramesPortTypeSuperWide;
    BWMovieFileOutputAnalyticsPayload *_analyticsPayload;
    struct BWCoreAnalyticsMovieRecordingSphereAFStatistics _sphereAFStatistics;
    NSMutableDictionary *_sphereModeByPortType;
    NSMutableDictionary *_APSModeByPortType;
}

@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (copy, nonatomic) NSArray *trackReferenceListForMetadataInputs;
@property (copy, nonatomic) NSArray *structuralDependentTrackReferenceListForMetadataInputs;
@property (nonatomic) float maxVideoFrameRate;
@property (nonatomic) _Bool irisMovieProcessingSuspended;

+ (void)initialize;

- (void)dealloc;
- (id)initWithSinkID:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (CDStruct_1b6d18a9)lastFileDuration;
- (unsigned long long)lastFileSize;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setPipelineTraceID:(int)arg1;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (_Bool)irisSampleReferenceMoviesEnabled;
- (id)irisStillImageMovieMetadataCache;
- (void)setClientApplicationID:(id)arg1;
- (void)_setRecordingState:(int)arg1;
- (id)clientApplicationID;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 cameraInfoByPortType:(id)arg4 pipelineIndex:(unsigned long long)arg5 sinkID:(id)arg6;
- (void)setIrisMotionAnalysisRingBuffer:(id)arg1;
- (void)setupOverCaptureQualityMetricsForLivePhotoHistory:(int)arg1;
- (void)setIrisSampleReferenceMoviesEnabled:(_Bool)arg1;
- (void)setIrisStillImageMovieMetadataCache:(id)arg1;
- (void)_doEndRecordingAtTime:(CDStruct_1b6d18a9)arg1 earlyTerminationErrCode:(int)arg2;
- (void)_finishIrisMovieGeneration;
- (int)pipelineTraceID;
- (_Bool)_driveStateMachineWithBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (void)_writeBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2;
- (id)_handleIrisRequest:(id)arg1;
- (void)_forceEarlyTerminationWithErrorCode:(int)arg1;
- (void)_determineWhichInputsWeExpectToSeeSamplesFor;
- (id)_validTrackReferencesForReferenceInputIndexes:(id)arg1;
- (int)_startUpFormatWriterAtTime:(CDStruct_1b6d18a9)arg1 withSettings:(id)arg2;
- (void)_generateThumbnailSurfaceFromPixelBuffer:(struct __CVBuffer *)arg1 cropRect:(struct CGRect)arg2;
- (void)_buildIrisRefMovieGeneratorAndWriteFirstIrisAsRefMovie;
- (void)_writeIrisRefMovieWithInfo:(id)arg1;
- (int)_writeStillImageTimeMetadataSampleForCaptureTime:(CDStruct_1b6d18a9)arg1 stillImageTransformData:(id)arg2 referenceDimensions:(CDStruct_79c71658)arg3 toTrackWithID:(int)arg4 usingTrackTimeScale:(int)arg5;
- (CDStruct_1b6d18a9)_finalizeAudioVideoDurationsAndFindWrittenEndingPTSFromEndingPTS:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_validatedEndingPTSFromEndingPTS:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_endingPTSForTrack:(unsigned long long)arg1 endingPTS:(CDStruct_1b6d18a9)arg2 writtenEndingPTS:(CDStruct_1b6d18a9)arg3 validatedEndingPTS:(CDStruct_1b6d18a9)arg4 isIrisMasterMovie:(_Bool)arg5;
- (unsigned long long)_getCurrentFileSize:(_Bool)arg1;
- (CDStruct_1b6d18a9)_findWrittenStartingPTS;
- (void)_fixVitalityScoreWithMotionAnalysis:(id)arg1;
- (int)_verifyMovieTiming:(id)arg1;
- (void)_moveOrDeleteTemporaryIrisMovie:(id)arg1 recordingSucceeded:(_Bool)arg2;
- (long long)_adjustedMinFreeDiskSpaceLimitForEstimatedMovieSizeOverhead:(long long)arg1;
- (void)_preprocessingForFirstVideoBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2;
- (void)_preprocessingForFirstAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2;
- (void)_preprocessingForFirstMetadataBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2;
- (int)_adjustMaxFileDurationForMovieTimeScale:(int)arg1;
- (void)_printBufferEvent:(struct opaqueCMSampleBuffer *)arg1 forNodeInputIndex:(unsigned long long)arg2 eventName:(id)arg3;
- (void)_collectCoreAnalyticsData:(struct opaqueCMSampleBuffer *)arg1;
- (int)_checkFreeSpaceForEstimatedMovieSizeOverhead:(long long)arg1;
- (void)_debugAudioUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_driveStateMachineWithStartMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (_Bool)_driveStateMachineWithStopMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (_Bool)_driveStateMachineWithPauseMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (_Bool)_driveStateMachineWithResumeMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (void)_driveStateMachineWithMediaBuffer:(struct opaqueCMSampleBuffer *)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(_Bool)arg3;
- (CDStruct_1b6d18a9)_findStartMarkersWithMatchedStagedSetting:(id *)arg1 thumbnailSourcePixelBuffer:(struct __CVBuffer **)arg2 thumbnailSourceFinalCropRect:(struct CGRect *)arg3 sensorVideoPort:(const struct __CFString **)arg4;
- (int)_doStartRecordingAtTime:(CDStruct_1b6d18a9)arg1 withSettings:(id)arg2 thumbnailSourcePixelBuffer:(struct __CVBuffer *)arg3 thumbnailSourceFinalCropRect:(struct CGRect)arg4 sensorVideoPort:(struct __CFString *)arg5;
- (CDStruct_1b6d18a9)_findMarkers:(struct __CFString *)arg1;
- (_Bool)_irisIsExpected:(id)arg1;
- (id)irisMotionAnalysisRingBuffer;
- (void)_handleFormatWriterDidWriteFragmentNotification;

@end
