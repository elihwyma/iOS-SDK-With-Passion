/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWFigCaptureSession : NSObject

{
    struct OpaqueFigCaptureSession *_captureSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3;
- (void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(struct __IOSurface *)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(_Bool)arg8;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)postNotification:(id)arg1 notificationPayload:(id)arg2;
- (void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;
- (void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSettings:(id)arg3 photoManifest:(id)arg4;
- (void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(_Bool)arg3 error:(int)arg4;
- (void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(CDStruct_1b6d18a9)arg2 forSettings:(id)arg3 resolvedCaptureSettings:(id)arg4 isPreBracketedEV0:(_Bool)arg5;
- (void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(CDStruct_1b6d18a9)arg2 transform:(id)arg3 forSettings:(id)arg4;
- (void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(_Bool)arg3;
- (void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(CDStruct_1b6d18a9)arg3;
- (void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(struct remoteQueueSenderOpaque *)arg2;
- (void)remoteQueueSinkNode:(id)arg1 localQueueBecameReady:(struct localQueueOpaque *)arg2;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 forInput:(id)arg3;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withSuccess:(_Bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidResolveRetainedBufferCounts:(id)arg1;
- (void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(CDStruct_1b6d18a9)arg2;
- (void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;
- (void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(CDStruct_1b6d18a9)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)previewStitcher:(id)arg1 overCaptureStatusDidChange:(int)arg2;
- (void)previewStitcher:(id)arg1 didApplyWiderShift:(struct CGPoint)arg2 widerScaleFactor:(float)arg3 forWiderPortType:(id)arg4 narrowerShift:(struct CGPoint)arg5 narrowerScaleFactor:(float)arg6 forNarrowerPortType:(id)arg7;

@end
