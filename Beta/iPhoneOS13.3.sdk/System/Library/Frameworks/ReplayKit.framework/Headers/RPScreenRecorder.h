/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, RPBroadcastController, RPPipViewController, UIView, UIWindow;

@protocol RPScreenRecorderDelegate, RPScreenRecorderPrivateDelegate;

@interface RPScreenRecorder : NSObject

{
    _Bool _available;
    _Bool _recording;
    _Bool _microphoneEnabled;
    _Bool _cameraEnabled;
    _Bool _broadcasting;
    _Bool _hasUserConsentForCamera;
    _Bool _hasUserConsentForMicrophone;
    _Bool _paused;
    _Bool _systemRecording;
    int _processIDForAudioCapture;
    id <RPScreenRecorderDelegate> _delegate;
    long long _cameraPosition;
    UIView *_cameraPreviewView;
    unsigned long long _previousAudioSessionOptions;
    NSString *_previousAudioCategory;
    UIWindow *_windowToRecord;
    RPPipViewController *_pipViewController;
    CDUnknownBlockType _saveVideoToCameraRollCompletionBlock;
    CDUnknownBlockType _captureHandler;
    RPBroadcastController *_activeBroadcastController;
    NSURL *_broadcastURL;
    id <RPScreenRecorderPrivateDelegate> _privateDelegate;
}

@property (nonatomic) unsigned long long previousAudioSessionOptions;
@property (retain, nonatomic) NSString *previousAudioCategory;
@property (nonatomic, getter=isRecording) _Bool recording;
@property (nonatomic) _Bool broadcasting;
@property (nonatomic, getter=isAvailable) _Bool available;
@property (retain, nonatomic) UIWindow *windowToRecord;
@property (retain, nonatomic) RPPipViewController *pipViewController;
@property (retain, nonatomic) UIView *cameraPreviewView;
@property (copy, nonatomic) CDUnknownBlockType saveVideoToCameraRollCompletionBlock;
@property (nonatomic) _Bool hasUserConsentForCamera;
@property (nonatomic) _Bool hasUserConsentForMicrophone;
@property (copy, nonatomic) CDUnknownBlockType captureHandler;
@property (retain, nonatomic) RPBroadcastController *activeBroadcastController;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, setter=updateProcessIDForAudioCapture:) int processIDForAudioCapture;
@property (nonatomic) _Bool systemRecording;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (retain, nonatomic) id <RPScreenRecorderPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id <RPScreenRecorderDelegate> delegate;
@property (nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled;
@property (nonatomic, getter=isCameraEnabled) _Bool cameraEnabled;
@property (nonatomic) long long cameraPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRecorder;

- (id)init;
- (void)dealloc;
- (void)pauseRecording;
- (void)resumeRecording;
- (id)videoQueue;
- (void)controlCenterWillPresent;
- (void)controlCenterDidDismiss;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingAndSaveToCameraRoll:(CDUnknownBlockType)arg1;
- (id)audioQueue;
- (void)updateRecordingAvailability:(id)arg1;
- (void)updateRecordingAvailabilityWithHandler:(CDUnknownBlockType)arg1;
- (id)applicationWindow;
- (_Bool)screenRecordingAllowed;
- (void)_startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 streamingEnabled:(_Bool)arg3 captureEnabled:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 streamingEnabled:(_Bool)arg3 captureEnabled:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)setWindowRotationLocked:(_Bool)arg1;
- (unsigned int)currentWindowLayerContextID;
- (struct CGSize)currentWindowSize;
- (void)didStopRecordingWithError:(id)arg1 previewViewController:(id)arg2;
- (void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)stopRecordingWithVideoURLHandler:(CDUnknownBlockType)arg1;
- (void)stopSystemRecording:(CDUnknownBlockType)arg1;
- (void)recordingTimerDidUpdate:(id)arg1;
- (void)notifyDelegateOfUpdatedState;
- (void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (id)processQueue;
- (_Bool)screenRecordingSupportedOnDevice;
- (void)notifyDelegateOfRecorderAvailability;
- (void)startSystemRecordingWithMicrophoneEnabled:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (void)startCaptureWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (void)recordingLockInterrupted:(id)arg1;
- (void)updateScreenRecordingStateWithCurrentState:(id)arg1;
- (void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (void)recordingDidPause;
- (void)recordingShouldResume;
- (void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;

@end
