/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFClientServiceDelegate <Swift>

- (unsigned short)shouldSpeakChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionIDChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)requestHandleCommand:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRequestedOpenApplicationWithBundleID:URL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRequestedOpenURL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRequestedDismissAssistant;
- (unsigned short)quickStopWasHandledWithActions: /* Error: Ran out of types for this method. */;
- (unsigned short)acousticIDRequestWillStart;
- (unsigned short)musicWasDetected;
- (unsigned short)acousticIDRequestDidFinishWithSuccess: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserActivityInfo:webpageURL: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateCurrentUserActivity;
- (unsigned short)cacheImage: /* Error: Ran out of types for this method. */;
- (unsigned short)extensionRequestWillStartForApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)extensionRequestFinishedForApplication:error: /* Error: Ran out of types for this method. */;
- (unsigned short)startUIRequestWithText:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getBulletinContext: /* Error: Ran out of types for this method. */;
- (unsigned short)getClockContext: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidBeginOnAVRecordRoute:audioSessionID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidChangeAVRecordRoute:isDucking:isTwoShot:speechEndHostTime:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingStartpointDetectedWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingPerformTwoShotPromptWithType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidEndWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidCancelWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidFail:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecognized: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecognizedAdditionalInterpretation:refId: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecognizedPartialResult: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecognitionDidFail: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidUpdateRecognitionPhrases:utterances:refId: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingWillBeginRecognitionUpdateForTask: /* Error: Ran out of types for this method. */;
- (unsigned short)aceConnectionWillRetryOnError: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionDidBeginInterruption;
- (unsigned short)audioSessionDidEndInterruption: /* Error: Ran out of types for this method. */;
- (unsigned short)audioPlaybackRequestWillStart: /* Error: Ran out of types for this method. */;
- (unsigned short)audioPlaybackRequestDidStart: /* Error: Ran out of types for this method. */;
- (unsigned short)audioPlaybackRequestDidStop:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willProcessStartPlayback:intent:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startPlaybackDidFail: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionWillBecomeActive: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionDidBecomeActive: /* Error: Ran out of types for this method. */;

@end
