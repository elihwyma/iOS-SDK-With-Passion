/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTView.h>

@class AVAssetWriter, AVAssetWriterInput, AVCaptureMovieFileOutput, AVPlayer, AVTAvatar, CAAnimationGroup, CALayer, NSLock, NSMutableArray, NSMutableData, NSObject, NSString;

@protocol AVTRecordViewDelegate, OS_dispatch_queue;

@interface AVTRecordView : AVTView

{
    id <AVTRecordViewDelegate> _recordDelegate;
    _Bool _exportingMovie;
    _Bool _recording;
    int _isFading;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    _Bool _playBakedAnimation;
    _Bool _disableRendering;
    float _maxRecordingDuration;
    NSMutableData *_rawTimesData;
    NSMutableData *_rawBlendShapesData;
    NSMutableData *_rawTransformsData;
    NSMutableData *_rawParametersData;
    double _referenceAnimationBeginTime;
    double _recordingStartTime;
    int _recordedCount;
    int _recordingCapacity;
    CAAnimationGroup *_recordedAnimationGroup;
    AVTAvatar *_avatarForMovieExport;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVPlayer *_audioPlayer;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriter *_audioWriter;
    NSLock *_audioLock;
    CDStruct_1b6d18a9 _currentAudioTime;
    CDStruct_1b6d18a9 _startAudioTime;
    CDStruct_1b6d18a9 _stopAudioTime;
    long long _recordedSampleCount;
    _Bool _audioIsRecording;
    double _lastAudioPlayerTime;
    double _lastAudioSystemTime;
    _Bool _playing;
    _Bool _mute;
    _Bool _transitioningFromSnapshot;
    double _t0;
    int _benchFrameCounter;
    _Bool _doubleBuffer;
    _Bool _checkDrawableAvailable;
    NSMutableArray *_droppedDoubleBufferFrames;
    long long _preferredFramesPerSecond_user;
    long long _preferredFramesPerSecond_thermal;
    CALayer *_backingLayer;
}

@property (weak, nonatomic) id <AVTRecordViewDelegate> recordDelegate;
@property (nonatomic, readonly, getter=isRecording) _Bool recording;
@property (nonatomic, readonly, getter=isPreviewing) _Bool previewing;
@property (nonatomic) _Bool mute;
@property (nonatomic) float maxRecordingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)usesInternalTrackingPipeline;
+ (void)setUsesInternalTrackingPipeline:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setAvatar:(id)arg1;
- (long long)preferredFramesPerSecond;
- (void)stopRecording;
- (_Bool)recording;
- (void)startRecording;
- (void)cancelRecording;
- (void)stopPlayingAudio;
- (void)audioSessionInterruption:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)updateAtTime:(double)arg1;
- (double)_renderer:(id)arg1 inputTimeForCurrentFrameWithTime:(double)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_drawAtTime:(double)arg1;
- (void)setFaceTrackingPaused:(_Bool)arg1;
- (id)faceTrackingRecordingURL;
- (void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
- (void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
- (void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
- (void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
- (void)setFaceTrackingRecordingURL:(id)arg1;
- (id)puppetState;
- (void)setPuppetState:(id)arg1;
- (void)didLostTrackingForAWhile;
- (void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1;
- (_Bool)allowTrackSmoothing;
- (void)avatarDidChange;
- (void)updateForChangedFaceTrackingPaused;
- (double)currentAudioTime;
- (_Bool)isDoubleBuffered;
- (_Bool)faceIsFullyActive;
- (void)fadePuppetToWhite:(float)arg1;
- (void)_processInfoThermalStateDidChange:(id)arg1;
- (void)_updateFrameRateForThermalState:(long long)arg1;
- (void)_avt_commonInit;
- (void)_setEffectivePreferredFramesPerSecond;
- (void)_didUpdateAtTime:(double)arg1;
- (void)convertRecordedDataToAnimationGroup;
- (void)cancelRecordingAudio;
- (void)startRecordingAudio;
- (void)stopRecordingAudio;
- (void)trimRecordedData;
- (void)finalizeAudioFile;
- (void)_smoothRecordedData;
- (void)addRecordedAnimationToAvatar:(id)arg1;
- (void)_playLivePreviewAnimation;
- (void)updateAudioState;
- (void)_updateTrackingState;
- (void)startPlayingAudio;
- (void)startPreviewing;
- (void)removeRecordedAnimationFromAvatar:(id)arg1;
- (double)recordingDuration;
- (id)_tmpVideoURL;
- (id)_tmpAudioURL;
- (_Bool)mergeAudio:(id)arg1 andVideoTo:(id)arg2 error:(id *)arg3;
- (double)finalVideoDuration;
- (struct opaqueCMSampleBuffer *)createSilentAudioAtFrame:(long long)arg1 nFrames:(int)arg2 sampleRate:(double)arg3 numChannels:(int)arg4;
- (void)updateMuteState;
- (void)audioPlayerItemDidReachEnd:(id)arg1;
- (void)drawableNotAvailableForTime:(double)arg1;
- (void)playPreviewOnce;
- (void)stopPreviewing;
- (_Bool)playBakedAnimation;
- (void)setPlayBakedAnimation:(_Bool)arg1;
- (_Bool)disableRendering;
- (void)setDisableRendering:(_Bool)arg1;
- (id)_tmpMaskVideoURL;
- (_Bool)exportMovieToURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMovieExport;

@end
