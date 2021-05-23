/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <ReplayKit/Swift-Protocol.h>

@protocol RPDaemonProtocol <Swift>

- (unsigned short)pauseRecording;
- (unsigned short)setMicrophoneEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)stopRecordingWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronousIsBroadcastingWithPreferredExtension:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setHasUserConsentForCamera: /* Error: Ran out of types for this method. */;
- (unsigned short)setHasUserConsentForMicrophone: /* Error: Ran out of types for this method. */;
- (unsigned short)setBroadcastURL: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCameraUsage: /* Error: Ran out of types for this method. */;
- (unsigned short)startRecordingWindowLayerContextIDs:windowSize:microphoneEnabled:cameraEnabled:broadcast:systemRecording:captureEnabled:listenerEndpoint:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveVideoToCameraRoll:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)stopRecordingWithStartClipDuration:endClipDuration:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)discardRecordingWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeRecordingWithWindowLayerContextID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateProcessIDForAudioCaptureWithPID: /* Error: Ran out of types for this method. */;
- (unsigned short)setupBroadcastWithHostBundleID:broadcastExtensionBundleID:broadcastConfigurationData:userInfo:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSystemBroadcastExtensionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)macApplicationDidResignActive;
- (unsigned short)macApplicationDidBecomeActiveWithContextID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronousGetCurrentState: /* Error: Ran out of types for this method. */;

@end
