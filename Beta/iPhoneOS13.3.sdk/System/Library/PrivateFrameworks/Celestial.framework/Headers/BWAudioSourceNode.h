/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSourceNode.h>

@class BWNodeOutput, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BWAudioSourceNode : BWSourceNode

{
    BWNodeOutput *_outputsByMicSourcePosition[3];
    struct opaqueCMSession *_CMSession;
    struct __CFString *_CMSessionAudioMode;
    _Bool _configuresSession;
    _Bool _doEndInterruption;
    _Bool _useDecoupledIO;
    _Bool _isAppAudioSession;
    _Bool _didBeginInterruption;
    CDStruct_4c969caf _clientAuditToken;
    _Bool _clientAuditTokenIsValid;
    int _clientPID;
    struct OpaqueCMClock *_clock;
    struct opaqueCMFormatDescription *_auOutputFormatDescription;
    unsigned int _pullDuration;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _auSubType;
    struct opaqueCMSimpleQueue *_renderProcErrorQueue;
    struct opaqueCMSimpleQueue *_inactiveBuffersQueue;
    struct opaqueCMSimpleQueue *_activeBuffersQueue;
    unsigned long long _nextExpectedHostTime;
    CDStruct_1b6d18a9 _nextExpectedSampleTime;
    CDStruct_1b6d18a9 _ioprocTimeStampDeltaLimit;
    CDStruct_1b6d18a9 _prevPTS;
    unsigned int _prevNumFrames;
    NSObject<OS_dispatch_queue> *_generateSamplesDispatchQueue;
    _Bool _streamStarted;
    _Bool _streamInterrupted;
    _Bool _levelMeteringEnabled;
    int _audioLevelUnits;
    CDStruct_1b6d18a9 _latencyOffset;
    NSObject<OS_dispatch_source> *_silenceTimer;
    long long _auRenderCount;
    long long _silenceFramesGeneratedSinceLastAURenderProc;
    struct TimestampedAudioBufferList _currentSilenceBuffer;
    NSObject<OS_dispatch_queue> *_cmSessionOrientationLockQueue;
    NSObject<OS_dispatch_queue> *_preparedToRecordHandlerCallbackQueue;
    _Bool _livePhotoCaptureEnabled;
    _Bool _stereoAudioCaptureEnabled;
    _Bool _videoRecordingEnabled;
    _Bool _isMultiCamSession;
    float _stereoAudioCapturePairedCameraBaseFieldOfView;
    float _stereoAudioCapturePairedCameraZoomFactor;
}

@property (nonatomic, readonly) NSArray *audioLevels;
@property (nonatomic, readonly) _Bool didBeginInterruption;
@property (nonatomic) _Bool interrupted;
@property (nonatomic) float stereoAudioCapturePairedCameraZoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (double)_desiredSampleRate;
+ (id)audioSourceNodeWithAttributes:(id)arg1 clock:(struct OpaqueCMClock *)arg2 CMSession:(struct opaqueCMSession *)arg3 configureSession:(_Bool)arg4 doEndInterruption:(_Bool)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(_Bool)arg10;

- (void)dealloc;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (struct OpaqueCMClock *)clock;
- (_Bool)livePhotoCaptureEnabled;
- (void)setLivePhotoCaptureEnabled:(_Bool)arg1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)_setCMSessionAudioModeAndSelectMic:(_Bool *)arg1;
- (_Bool)_cmSessionBooleanPropertyIsTrue:(struct __CFString *)arg1;
- (int)_updatePullFormatDescription;
- (int)_setCMSessionPropertyWithKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)_generateSilenceIfNeeded;
- (void)makeOutputsLiveIfNeeded;
- (id)_initWithAttributes:(id)arg1 clock:(struct OpaqueCMClock *)arg2 CMSession:(struct opaqueCMSession *)arg3 configureSession:(_Bool)arg4 doEndInterruption:(_Bool)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(_Bool)arg10;
- (int)_setupAudioUnit;
- (int)_deactivateCMSessionIfNecessary:(_Bool *)arg1;
- (unsigned int)_virtualAudioDeviceCameraMics;
- (void)_updateCMSessionAudioMode;
- (int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(_Bool *)arg2;
- (int)_selectMicForAudioRoute:(id)arg1;
- (int)_getAudioDevicePullFrames:(unsigned int *)arg1;
- (int)_generatePullBuffers;
- (unsigned int)_audioCombinedLatency;
- (struct opaqueCMSampleBuffer *)_createSampleBufferForTimestampedAudioBufferList:(struct TimestampedAudioBufferList *)arg1 audioBufferIndex:(int)arg2;
- (void)_setupPrepareToRecordStateWithFlags:(unsigned int)arg1;
- (void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unprepareForRecording;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(_Bool)arg4 rampCommandID:(int)arg5;
- (void)makeCurrentConfigurationLive;
- (_Bool)hasNonLiveConfigurationChanges;
- (_Bool)levelMeteringEnabled;
- (void)setLevelMeteringEnabled:(_Bool)arg1;
- (_Bool)stereoAudioCaptureEnabled;
- (void)setStereoAudioCaptureEnabled:(_Bool)arg1;
- (_Bool)videoRecordingEnabled;
- (void)setVideoRecordingEnabled:(_Bool)arg1;
- (id)outputForMicSourcePosition:(int)arg1;
- (float)stereoAudioCapturePairedCameraBaseFieldOfView;
- (void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg1;
- (void)_generateSamples;

@end
