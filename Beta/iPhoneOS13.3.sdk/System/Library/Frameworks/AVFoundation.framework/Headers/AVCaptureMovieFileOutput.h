/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput

{
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;

+ (void)initialize;
+ (id)new;
+ (long long)uniqueID;
+ (_Bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id *)arg2;
+ (_Bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (void)removeConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (_Bool)_recordingInProgress;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)outputFileURL;
- (_Bool)isRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (_Bool)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (id)bravoCameraSelectionBehaviorForRecording;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1;
- (void)_startRecording:(id)arg1;
- (int)_stopRecording;
- (id)supportedOutputSettingsKeysForConnection:(id)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(_Bool)arg3 addMetadata:(_Bool)arg4;
- (void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg1 withPayload:(id)arg2 demoof:(_Bool)arg3 addMetadata:(_Bool)arg4;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3;
- (void)_removeRecordingDelegateWrapper:(id)arg1;
- (void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (_Bool)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1;
- (id)outputSettingsForConnection:(id)arg1;
- (void)setSendsLastVideoPreviewFrame:(_Bool)arg1;
- (_Bool)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)arg1;
- (void)setOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)setRecordsVideoOrientationAndMirroringChanges:(_Bool)arg1 asMetadataTrackForConnection:(id)arg2;
- (void)startRecordingMovieWithSettings:(id)arg1 delegate:(id)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;

@end
