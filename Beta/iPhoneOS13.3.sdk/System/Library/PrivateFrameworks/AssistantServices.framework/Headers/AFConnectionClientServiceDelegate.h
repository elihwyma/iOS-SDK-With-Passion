/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFConnection, NSString;

@protocol OS_dispatch_queue;

@interface AFConnectionClientServiceDelegate : NSObject

{
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1 targetQueue:(id)arg2;
- (id)_connectionDelegate;
- (oneway void)shouldSpeakChanged:(_Bool)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)requestHandleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)cacheImage:(id)arg1;
- (oneway void)extensionRequestWillStartForApplication:(id)arg1;
- (oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getBulletinContext:(CDUnknownBlockType)arg1;
- (oneway void)getClockContext:(CDUnknownBlockType)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(_Bool)arg2 isTwoShot:(_Bool)arg3 speechEndHostTime:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (oneway void)speechRecordingStartpointDetectedWithReply:(CDUnknownBlockType)arg1;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)speechRecordingDidEndWithReply:(CDUnknownBlockType)arg1;
- (oneway void)speechRecordingDidCancelWithReply:(CDUnknownBlockType)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)audioSessionDidEndInterruption:(_Bool)arg1;
- (oneway void)audioPlaybackRequestWillStart:(id)arg1;
- (oneway void)audioPlaybackRequestDidStart:(id)arg1;
- (oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (oneway void)willProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)audioSessionWillBecomeActive:(_Bool)arg1;
- (oneway void)audioSessionDidBecomeActive:(_Bool)arg1;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
