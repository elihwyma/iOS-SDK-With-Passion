/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSXPCConnection;

@interface RPDaemonProxy : NSObject

{
    NSURL *_broadcastURL;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)daemonProxy;

- (id)init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (oneway void)pauseRecording;
- (oneway void)setMicrophoneEnabled:(_Bool)arg1;
- (oneway void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)setHasUserConsentForCamera:(_Bool)arg1;
- (oneway void)setHasUserConsentForMicrophone:(_Bool)arg1;
- (oneway void)reportCameraUsage:(long long)arg1;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 broadcast:(_Bool)arg5 systemRecording:(_Bool)arg6 captureEnabled:(_Bool)arg7 listenerEndpoint:(id)arg8 withHandler:(CDUnknownBlockType)arg9;
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)recordingTimerDidUpdate:(id)arg1;
- (oneway void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)recordingLockInterrupted:(id)arg1;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)recordingDidPause;
- (oneway void)recordingShouldResume;
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
- (oneway void)updateBroadcastURL:(id)arg1;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;
- (oneway void)macApplicationDidResignActive;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)synchronousGetCurrentState:(CDUnknownBlockType)arg1;
- (void)issueSandboxExtension;

@end
